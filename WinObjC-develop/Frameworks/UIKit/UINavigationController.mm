//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#import "Starboard.h"

#import <UIKit/UINavigationBar.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIToolbar.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIView.h>

#import "LoggingNative.h"
#import "UINavigationBarInternal.h"
#import "UINavigationControllerInternal.h"
#import "UIViewInternal.h"
#import "UIViewControllerInternal.h"
#import "UITabBarControllerInternal.h"
#import "StarboardXaml/DisplayProperties.h"

static const wchar_t* TAG = L"UINavigationController";

const CGFloat UINavigationControllerHideShowBarDuration = .25f;
const CGFloat UINavigationBarHeight = 45.0f;

bool isSupportedControllerOrientation(UIViewController* controller, UIInterfaceOrientation orientation);

class AnimationNotificationParams {
public:
    idretain _appearingController, _disappearingController;

    AnimationNotificationParams(id appearingController, id disappearingController) {
        _appearingController = appearingController;
        _disappearingController = disappearingController;
    }

    ~AnimationNotificationParams() {
        _appearingController = nil;
        _disappearingController = nil;
    }
};

@implementation UINavigationController {
    UINavigationPane* _mainView;
    StrongId<UINavigationBar> _navigationBar;
    StrongId<UIToolbar> _toolBar;
    StrongId<NSMutableArray> _viewControllers;
    id _delegate;

    idretain _curController;
    id _curControllerView;
    idretain _newController;
    BOOL _showAnimated;
    BOOL _destroyOld;
    BOOL _pushingView;
    BOOL _poppingView;
    idretaintype(UIView) _containerView;
    CGRect _containerRect, _navRect;

    BOOL _didLayout;

    BOOL _isToolHidden, _isNavHidden;
    BOOL _toolBarHidden, _navBarHidden;

    BOOL _didSetToolBarVisibility, _didSetNavBarVisibility;
    BOOL _setNavBarHiddenAnimated, _setToolBarHiddenAnimated;
    BOOL _didSlideNavBar, _didSlideToolBar;
}

static void createMainView(UINavigationController* self, CGRect frame) {
    if (self->_mainView != nil)
        return;
    if (self->priv->_preferredContentSize.width != 0.0f) {
        frame.size = self->priv->_preferredContentSize;
    }

    UINavigationPane* view = [[UINavigationPane alloc] initWithFrame:frame];
    view->_parentController = self;

    (self->_containerView).attach([[UIView alloc] initWithFrame:frame]);
    [view addSubview:self->_containerView];
    [self->_containerView setAutoresizingMask:UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth];
    [self->_containerView setClipsToBounds:TRUE];
    [view setAutoresizingMask:UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth];

    self->_mainView = view;
}

/**
 @Status Caveat
 @Notes May not be fully implemented
*/
- (instancetype)initWithCoder:(NSCoder*)coder {
    _navigationBar = [coder decodeObjectForKey:@"UINavigationBar"];
    [_navigationBar setDelegate:self];
    _viewControllers.attach([NSMutableArray new]);
    NSArray* viewControllers = [coder decodeObjectForKey:@"UIViewControllers"];
    if ([coder decodeObjectForKey:@"UINavigationBarHidden"]) {
        [_navigationBar setHidden:TRUE];
    }

    if ([coder containsValueForKey:@"UIToolbar"]) {
        _toolBar = [coder decodeObjectForKey:@"UIToolbar"];
    } else {
        _toolBar.attach([[UIToolbar alloc] init]);
    }
    if ([coder decodeIntForKey:@"UIToolbarShown"]) {
        [_toolBar setHidden:FALSE];
    } else {
        [_toolBar setHidden:TRUE];
    }

    [super initWithCoder:coder];
    [self setViewControllers:viewControllers animated:FALSE];
    priv->_wantsFullScreenLayout = TRUE;

    return self;
}

- (BOOL)_rotationLocked:(UIInterfaceOrientation)curOrientation {
    static const UIInterfaceOrientation orientations[] = { UIInterfaceOrientationPortrait,
                                                           UIInterfaceOrientationPortraitUpsideDown,
                                                           UIInterfaceOrientationLandscapeLeft,
                                                           UIInterfaceOrientationLandscapeRight };

    if ([self shouldAutorotateToInterfaceOrientation:curOrientation]) {
        return TRUE;
    }

    for (int i = 0; i < 4; i++) {
        if (isSupportedControllerOrientation(self, orientations[i])) {
            return TRUE;
        }
    }
    return [super _rotationLocked:curOrientation];
}

/**
 @Status Interoperable
*/
- (instancetype)initWithNavigationBarClass:(id)navBarClass toolbarClass:(id)toolBarClass {
    [super init];

    if (toolBarClass == nil) {
        toolBarClass = [UIToolbar class];
    }

    _toolBar.attach([[toolBarClass alloc] init]);
    [_toolBar setHidden:TRUE];

    if (navBarClass == nil) {
        navBarClass = [UINavigationBar class];
    }

    _navigationBar.attach(
        [[navBarClass alloc] initWithFrame:CGRectMake(0.0f, 0.0f, DisplayProperties::ScreenWidth(), UINavigationBarHeight)]);
    [_navigationBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin];
    [_navigationBar setDelegate:self];
    _viewControllers.attach([NSMutableArray new]);
    priv->_wantsFullScreenLayout = TRUE;

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithRootViewController:(UIViewController*)controller {
    [super init];

    if (_toolBar == nil) {
        _toolBar.attach([[UIToolbar alloc] init]);
        [_toolBar setHidden:TRUE];
    }

    if (_navigationBar == nil) {
        _navigationBar.attach(
            [[UINavigationBar alloc] initWithFrame:CGRectMake(0.0f, 0.0f, DisplayProperties::ScreenWidth(), UINavigationBarHeight)]);
        [_navigationBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin];
    }

    [_navigationBar setDelegate:self];
    _viewControllers.attach([NSMutableArray new]);

    id viewControllers = [NSMutableArray array];
    [viewControllers addObject:controller];

    [self setViewControllers:viewControllers animated:FALSE];
    priv->_wantsFullScreenLayout = TRUE;

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithNibName:(id)name bundle:(id)bundle {
    [super initWithNibName:name bundle:bundle];

    if (_toolBar == nil) {
        _toolBar.attach([[UIToolbar alloc] init]);
        [_toolBar setHidden:TRUE];
    }
    if (_navigationBar == nil) {
        _navigationBar.attach(
            [[UINavigationBar alloc] initWithFrame:CGRectMake(0.0f, 0.0f, DisplayProperties::ScreenWidth(), UINavigationBarHeight)]);
        [_navigationBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin];
    }

    [_navigationBar setDelegate:self];

    _viewControllers.attach([NSMutableArray new]);
    priv->_wantsFullScreenLayout = TRUE;

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)init {
    [super init];

    _navBarHidden = FALSE;
    _didSetNavBarVisibility = FALSE;

    return self;
}

/**
 @Status Interoperable
*/
- (void)pushViewController:(UIViewController*)controller animated:(BOOL)animated {
    if ([_viewControllers containsObject:controller]) {
        return;
    }

    [_viewControllers addObject:controller];
    controller->priv->_parentViewController = self;
    id navigationItem = [controller navigationItem];
    [_navigationBar _pushNavigationItem:navigationItem];

    if (priv->_visibility != controllerNotVisible) {
        if (animated) {
            [controller view];
            [_curController _notifyViewWillDisappear:animated];
            [controller _notifyViewWillAppear:animated];
        }
        _pushingView = true;
        [self _showController:[_viewControllers lastObject] animated:animated];
        _destroyOld = true;

        // if ( animated == 0 ) [_mainView layoutIfNeeded];
    } else {
        //  Set _newController to nil so that we will choose the last object
        //  in the _viewControllers array when viewWillAppear is called
        _newController = nil;
    }
}

/**
 @Status Interoperable
*/
- (UIViewController*)popViewControllerAnimated:(BOOL)animated {
    if (animated)
        animated = 1;

    if ([_viewControllers count] <= 1) {
        TraceVerbose(TAG, L"attempted to pop root view controller");
        return nil;
    }

    UIViewController* controller = [_viewControllers lastObject];
    [controller _notifyViewWillDisappear:animated];
    controller->priv->_parentViewController = nil;

    [_viewControllers removeLastObject];
    [_navigationBar popNavigationItemAnimated:animated];
    _pushingView = false;
    _poppingView = true;
    [self _showController:[_viewControllers lastObject] animated:animated];
    _destroyOld = true;

    return controller;
}

/**
 @Status Interoperable
*/
- (NSArray*)popToViewController:(UIViewController*)controller animated:(BOOL)animated {
    NSMutableArray* ret = [NSMutableArray array];
    UIViewController* cur = nil;

    while ([_viewControllers count] >= 1) {
        cur = [_viewControllers lastObject];
        if (cur == controller)
            break;

        if (cur->priv->_visibility == controllerVisible) {
            [cur _notifyViewWillDisappear:animated];
            cur->priv->_parentViewController = nil;
        }

        [ret addObject:cur];
        [_viewControllers removeLastObject];
        [_navigationBar popNavigationItemAnimated:animated];
    }

    assert(cur == controller);

    _pushingView = false;
    [self _showController:cur animated:animated];
    _destroyOld = true;

    return ret;
}

/**
 @Status Interoperable
*/
- (void)setNavigationBarHidden:(BOOL)hidden {
    [self setNavigationBarHidden:hidden animated:FALSE];
}

/**
 @Status Interoperable
*/
- (void)setDelegate:(id<UINavigationControllerDelegate>)delegate {
    _delegate = delegate;
}

/**
 @Status Interoperable
*/
- (id<UINavigationControllerDelegate>)delegate {
    return _delegate;
}

/**
 @Status Interoperable
*/
- (UIViewController*)topViewController {
    return [_viewControllers lastObject];
}

/**
 @Status Interoperable
*/
- (UINavigationBar*)navigationBar {
    return _navigationBar;
}

/**
 @Status Interoperable
*/
- (NSArray*)viewControllers {
    return _viewControllers;
}

/**
 @Status Interoperable
*/
- (NSArray*)popToRootViewControllerAnimated:(BOOL)animated {
    if ([_viewControllers count] == 0)
        return [NSArray array];
    UIViewController* controller = [_viewControllers objectAtIndex:0];
    return [self popToViewController:controller animated:animated];
}

/**
 @Status Interoperable
*/
- (UIViewController*)visibleViewController {
    return [_viewControllers lastObject];
}

- (void)_showController:(UIViewController*)controller animated:(BOOL)animated {
    if (_curController == controller)
        return;

    if ([controller hidesBottomBarWhenPushed]) {
        id tabBarController = [self tabBarController];
        [tabBarController _showTabBar:FALSE];
    } else {
        id tabBarController = [self tabBarController];
        [tabBarController _showTabBar:TRUE];
    }

    _newController = controller;
    _showAnimated = animated;
    _destroyOld = false;
    [_mainView setNeedsLayout];
    if (_newController != nil) {
        //  If we're going to show a new controller,
        //  disable input on the nav bar so that the user
        //  can't screw around
        [_navigationBar setUserInteractionEnabled:FALSE];
    } else {
        [_navigationBar setUserInteractionEnabled:TRUE];
    }

    if ([_delegate respondsToSelector:@selector(navigationController:willShowViewController:animated:)]) {
        [_delegate navigationController:self willShowViewController:controller animated:animated];
    }
}

/**
 @Status Interoperable
*/
- (void)setViewControllers:(NSArray*)controllers animated:(BOOL)animated {
    //  Go through all controllers
    int count = [controllers count];
    _viewControllers.attach([NSMutableArray new]);
    NSMutableArray* navigationItems = [NSMutableArray array];

    for (int i = 0; i < count; i++) {
        UIViewController* controller = [controllers objectAtIndex:i];

        controller->priv->_parentViewController = self;

        [_viewControllers addObject:controller];

        [navigationItems addObject:[controller navigationItem]];
    }
    [_navigationBar setItems:navigationItems animated:FALSE];
    [self _showController:[_viewControllers lastObject] animated:FALSE];
}

/**
 @Status Interoperable
*/
- (void)setViewControllers:(NSArray*)controllers {
    [self setViewControllers:controllers animated:NO];
}

/**
 @Status Interoperable
*/
- (void)presentModalViewController:(UIViewController*)controller animated:(BOOL)animated {
    [super presentModalViewController:controller animated:animated];
}

- (void)_notifyViewWillAppear:(BOOL)animated {
    if (_newController == nil)
        [self _showController:[_viewControllers lastObject] animated:FALSE];

    [super _notifyViewWillAppear:animated];
    [_curController _notifyViewWillAppear:animated];
}

- (void)_notifyViewDidAppear:(BOOL)isAnimated {
    [super _notifyViewDidAppear:isAnimated];

    [_curController _notifyViewDidAppear:isAnimated];
}

- (void)_notifyViewWillDisappear:(BOOL)isAnimated {
    [super _notifyViewWillDisappear:isAnimated];

    [_curController _notifyViewWillDisappear:isAnimated];
}

- (void)_notifyViewDidDisappear:(BOOL)isAnimated {
    [super _notifyViewDidDisappear:isAnimated];

    [_curController _notifyViewDidDisappear:isAnimated];
}

/**
 @Status Interoperable
*/
- (void)loadView {
    CGRect frame = { 0.0f, 0.0f, DisplayProperties::ScreenWidth(), DisplayProperties::ScreenHeight() };
    createMainView(self, frame);

    _navigationBar = _navigationBar;
    _toolBar = _toolBar;

    [self setView:_mainView];

    id topController = [_viewControllers lastObject];
    if (topController != nil) {
        id controllerView = [topController view];
        [_containerView addSubview:controllerView];
    }

    // if ( [_viewControllers count] > 0 ) [self _showController:[_viewControllers lastObject] animated:FALSE];
}

/**
 @Status Interoperable
*/
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)orientation {
    return [_newController ? _newController : _curController shouldAutorotateToInterfaceOrientation:orientation];
}

/**
 @Status Interoperable
*/
- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration {
    [[_curController view] setNeedsLayout];

    [_newController ? _newController : _curController willRotateToInterfaceOrientation:orientation duration:duration];
}

/**
 @Status Interoperable
*/
- (void)willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration {
    [_newController ? _newController : _curController willAnimateRotationToInterfaceOrientation:orientation duration:duration];
}

/**
 @Status Interoperable
*/
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)orientation {
    [_newController ? _newController : _curController didRotateFromInterfaceOrientation:orientation];
}

- (BOOL)navigationBar:(UINavigationBar*)bar shouldPopItem:(UINavigationItem*)item {
    return TRUE;
}

- (void)navigationBar:(UINavigationBar*)bar didPopItem:(UINavigationItem*)item {
}

- (void)_navigationBar:(UINavigationBar*)bar didPopItem:(UINavigationItem*)item {
    [_viewControllers removeLastObject];

    _pushingView = false;
    [self _showController:[_viewControllers lastObject] animated:TRUE];
    _destroyOld = true;
}

/**
 @Status Interoperable
*/
- (UITabBarItem*)tabBarItem {
    UIViewController* topViewController = [self topViewController];
    UITabBarItem* ret = topViewController.tabBarItem;

    if ([ret image] != nil) {
        return ret;
    }

    ret = priv->tabBarItem;

    if (ret == nil) {
        ret = [super tabBarItem];
    }

    [topViewController setTabBarItem:ret];
    return ret;
}

/**
 @Status Interoperable
*/
- (void)dismissModalViewControllerAnimated:(BOOL)animated {
    if ([_curController modalViewController] != nil) {
        [_curController dismissModalViewControllerAnimated:animated];
        return;
    }

    [super dismissModalViewControllerAnimated:animated];
}

/**
 @Status Interoperable
*/
- (UIToolbar*)toolbar {
    return _toolBar;
}

/**
 @Status Interoperable
*/
- (void)dealloc {
    //  Go through all controllers and remove the parent relationship
    int count = [_viewControllers count];

    for (int i = 0; i < count; i++) {
        id controller = [_viewControllers objectAtIndex:i];

        ((UIViewController*)controller)->priv->_parentViewController = nil;
    }

    _curController = nil;
    _newController = nil;
    _containerView = nil;

    _navigationBar = nil;
    _toolBar = nil;
    _viewControllers = nil;
    if (_mainView != nil) {
        [_mainView removeFromSuperview];
        _mainView->_parentController = nil;
        [_mainView release];
    }

    [super dealloc];
}

- (void)transitionStopped:(id)name didFinish:(id)didFinish context:(void*)context {
    AnimationNotificationParams* params = (AnimationNotificationParams*)context;
    if (params->_disappearingController) {
        [[params->_disappearingController view] setHidden:TRUE];
        [params->_disappearingController _notifyViewDidDisappear:_showAnimated];
    }
    if (params->_appearingController) {
        //  Make sure that the navigation controller is visible
        if (priv->_visibility != controllerNotVisible) {
            [params->_appearingController _notifyViewDidAppear:_showAnimated];

            if ([_delegate respondsToSelector:@selector(navigationController:didShowViewController:animated:)]) {
                [_delegate navigationController:self didShowViewController:params->_appearingController animated:_showAnimated];
            }
        }
    }

    //  Re-enable interaction on the navigation bar (was disabled in layoutContainer)
    [_navigationBar setUserInteractionEnabled:TRUE];

    delete params;
}

static void rotateViewController(UINavigationController* self) {
    UIViewController* parent = self;
    id nextParent = [parent parentViewController];
    while (nextParent != nil) {
        parent = nextParent;
        nextParent = [parent parentViewController];
    }

    if ([parent->priv->view superview] != nil && (UIView*)[parent->priv->view window] == [parent->priv->view superview]) {

        UIInterfaceOrientation curOrientation = (UIInterfaceOrientation)[self interfaceOrientation];
        if (!isSupportedControllerOrientation(self, curOrientation)) {
            //  Try to find any valid orientation
            static const UIInterfaceOrientation orientations[] = { UIInterfaceOrientationPortrait,
                                                                   UIInterfaceOrientationPortraitUpsideDown,
                                                                   UIInterfaceOrientationLandscapeLeft,
                                                                   UIInterfaceOrientationLandscapeRight };

            int i;

            for (i = 0; i < 4; i++) {
                curOrientation = orientations[i];

                if (isSupportedControllerOrientation(self, curOrientation)) {
                    break;
                }
            }

            if (i < 4) {
                [parent _setRotation:curOrientation animated:0];
            }
        } else {
            int subRotation = [self->_curController interfaceOrientation];

            if (subRotation != curOrientation) {
                UIViewController* subcontroller = self->_curController;
                [subcontroller willRotateToInterfaceOrientation:curOrientation duration:1.0f];

                UIInterfaceOrientation oldOrientation = subcontroller->priv->_curOrientation;
                subcontroller->priv->_curOrientation = curOrientation;

                [subcontroller didRotateFromInterfaceOrientation:oldOrientation];
            }
        }
    }
}

- (void)_navHideDone {
    [_navigationBar setHidden:TRUE];
}

- (void)_toolHideDone {
    [_toolBar setHidden:TRUE];
}

/**
 @Status Interoperable
*/
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated {
    _navBarHidden = hidden;
    _didSetNavBarVisibility = TRUE;
    _setNavBarHiddenAnimated = animated;
    [_mainView setNeedsLayout];
}

/**
 @Status Interoperable
*/
- (BOOL)isNavigationBarHidden {
    return _navBarHidden;
}

/**
 @Status Interoperable
*/
- (void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated {
    _toolBarHidden = hidden;
    _didSetToolBarVisibility = TRUE;
    _setToolBarHiddenAnimated = animated;

    [_mainView setNeedsLayout];
}

/**
 @Status Interoperable
*/
- (void)setToolbarHidden:(BOOL)hidden {
    [self setToolbarHidden:hidden animated:FALSE];
}

/**
 @Status Interoperable
*/
- (BOOL)isToolbarHidden {
    return _toolBarHidden;
}

- (void)_layoutContainer {
    if (!_didLayout) {
        _didLayout = TRUE;
        CGRect bounds, containerRect;
        bounds = [_mainView bounds];

        CGRect containerWindowFrame = bounds;
        containerWindowFrame = [_mainView convertRect:containerWindowFrame toView:nil];

        bounds.origin.y = 0;
        containerRect = bounds;

        if (_navigationBar != nil) {
            if (!_didSetNavBarVisibility) {
                _navBarHidden = [_navigationBar isHidden];
            }
            CGRect size;

            size.origin.x = 0;

            size.origin.y = bounds.origin.y;
            size.size.width = bounds.size.width;
            size.size.height = UINavigationBarHeight;

            _navRect = size;

            [_navigationBar setFrame:size];
            [_mainView addSubview:_navigationBar];
            [_navigationBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin];

            bool clipToNavBar = true;

            if (isOSTarget(@"7.0")) {
                if ([_newController ? _newController : _curController _edgesForExtendedLayout] ==
                    0) { //  [POTENTIAL BUG: Might be a bitmask for top & bottom]
                    // This code is incomplete as this can be overriden with some properties from xcode.
                    // We don't have have any apps yet that care about this though so, to save time,
                    // just default to not clipping to the navbar for now.
                    containerRect.origin.y = 0.0f;
                    clipToNavBar = false;
                }
            }

            if (!_navBarHidden && clipToNavBar) {
                containerRect.origin.y += UINavigationBarHeight;
                containerRect.size.height -= UINavigationBarHeight;
            }

            [_navigationBar setHidden:_navBarHidden];
        }
        _isNavHidden = _navBarHidden;

        if (_toolBar != nil) {
            if (!_didSetToolBarVisibility) {
                _toolBarHidden = [_toolBar isHidden];
            }
            CGRect size;

            size.origin.x = 0;
            size.origin.y = bounds.origin.y + bounds.size.height - UINavigationBarHeight;
            size.size.width = bounds.size.width;
            size.size.height = UINavigationBarHeight;

            if (!_toolBarHidden)
                containerRect.size.height -= UINavigationBarHeight;

            [_toolBar setFrame:size];
            [_mainView addSubview:_toolBar];
            [_toolBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin];
        }
        _isToolHidden = _toolBarHidden;

        [_containerView setFrame:containerRect];
    }

    UIViewController* oldController = [[_curController retain] autorelease];
    UIView* oldControllerView = [[[_curController view] retain] autorelease];

    bool isNotifying = false;

    if (_newController != nil) {
        _curController = _newController;
        _newController = nil;

        UIView* newView = [_curController view];

        isNotifying = true;

        _curControllerView = newView;

        rotateViewController(self);

        if (oldController != nil) {
            UIView* oldControllerView;

            //  Remove the current controller we're displaying
            [oldController _notifyViewWillDisappear:_showAnimated];

            oldControllerView = [oldController view];
            if (_destroyOld) {
                [oldControllerView removeFromSuperview];
            } else {
                [oldControllerView setHidden:TRUE];
            }
        }

        isNotifying = true;

        if (_toolBar != nil && ![_toolBar isHidden]) {
            [_toolBar setItems:[_curController toolbarItems]];
        }
    }

    CGRect bounds;

    bounds = [_containerView bounds];

    _curControllerView = [_curController view];
    [_curControllerView setFrame:bounds];

    if (isNotifying) {
        [_curController _notifyViewWillAppear:_showAnimated];

        if (_showAnimated) {
            // Check if the delagate is using custom animations.
            if ([_delegate respondsToSelector:@selector(navigationController:
                                                  animationControllerForOperation:
                                                               fromViewController:
                                                                 toViewController:)]) {
                // Grab the developers animator.
                UINavigationControllerOperation operation;
                if (_pushingView) {
                    operation = UINavigationControllerOperationPush;
                } else if (_poppingView) {
                    operation = UINavigationControllerOperationPop;
                } else {
                    operation = UINavigationControllerOperationNone;
                }
                id<UIViewControllerAnimatedTransitioning> animator = [_delegate navigationController:self
                                                                     animationControllerForOperation:operation
                                                                                  fromViewController:oldController
                                                                                    toViewController:_curController];
                // Create the context to be utilized by the developers animation.
                id<UIViewControllerContextTransitioning> transitionContext =
                    [[_UIViewControllerContextTransitioning alloc] initWithContainerView:_containerView
                                                                            withFromView:oldControllerView
                                                                              withToView:_curControllerView
                                                                  withFromViewController:oldController
                                                                    withToViewController:_curController
                                                                            withAnimator:animator];
                // Start animation.
                [animator animateTransition:transitionContext];
                [transitionContext release];

            } else {
                AnimationNotificationParams* params = new AnimationNotificationParams(_curController, oldController);
                [UIView beginAnimations:@"TransitionAnimation" context:params];
                [UIView setAnimationDelegate:self];
                [UIView setAnimationDidStopSelector:@selector(transitionStopped:didFinish:context:)];
                //[UIView setAnimationTransition:5 forView:self cache:TRUE];

                bool fromLeft = !_pushingView;
                [UIView _setPageTransitionForView:_mainView fromLeft:fromLeft];
            }
            //  Disable input on the navigation bar so that the user can't
            //  mess with the state until the animation is done
            [_navigationBar setUserInteractionEnabled:FALSE];

        } else {
            //  Enable input on the navigation bar - we're not presenting animated
            //  and the navigation bar may have been disabled in pushViewController/popViewContorller
            [_navigationBar setUserInteractionEnabled:TRUE];
        }

        if ([_curControllerView superview] != _containerView) {
            [_containerView addSubview:_curControllerView];
            //[self sendSubviewToBack:_curControllerView];
        }
        [_curControllerView setHidden:FALSE];

        if (_navigationBar != nil) {
            [_containerView bringSubviewToFront:_navigationBar];
        }

        if (_showAnimated) {
            [UIView commitAnimations];
        } else {
            if (oldController != nil) {
                [oldController _notifyViewDidDisappear:_showAnimated];
            }
            [_curController _notifyViewDidAppear:_showAnimated];
        }

        if ([_delegate respondsToSelector:@selector(navigationController:didShowViewController:animated:)]) {
            [_delegate navigationController:self didShowViewController:_curController animated:_showAnimated];
        }
    }

    CGRect newContainerFrame;
    BOOL setContainerRect = FALSE, setContainerRectAnimated = FALSE;
    newContainerFrame = [_containerView frame];

    if (_isNavHidden != _navBarHidden) {
        setContainerRect = TRUE;
        if (_setNavBarHiddenAnimated) {
            [UIView beginAnimations:nil context:nil];
            [UIView setAnimationDelegate:self];
            [UIView setAnimationDuration:UINavigationControllerHideShowBarDuration];
            setContainerRectAnimated = TRUE;
        }
        if (_navBarHidden) {
            CGRect navFrame;
            navFrame = [_navigationBar frame];
            navFrame.origin.y -= UINavigationBarHeight;
            [_navigationBar setFrame:navFrame];
            if (_setNavBarHiddenAnimated) {
                [UIView setAnimationDidStopSelector:@selector(_navHideDone)];
            } else {
                [_navigationBar setHidden:1];
            }

            newContainerFrame.origin.y -= UINavigationBarHeight;
            newContainerFrame.size.height += UINavigationBarHeight;
            _didSlideNavBar = TRUE;
        } else {
            CGRect navFrame;
            navFrame = [_navigationBar frame];

            if (_didSlideNavBar) {
                navFrame.origin.y += UINavigationBarHeight;
            }
            _didSlideNavBar = FALSE;
            [_navigationBar setFrame:navFrame];
            [_navigationBar setHidden:FALSE];

            newContainerFrame.origin.y += UINavigationBarHeight;
            newContainerFrame.size.height -= UINavigationBarHeight;
        }

        if (_setNavBarHiddenAnimated) {
            [UIView commitAnimations];
        }
        _isNavHidden = _navBarHidden;
    }

    if (_isToolHidden != _toolBarHidden) {
        setContainerRect = TRUE;
        if (_setToolBarHiddenAnimated) {
            [UIView beginAnimations:nil context:nil];
            [UIView setAnimationDelegate:self];
            [UIView setAnimationDuration:UINavigationControllerHideShowBarDuration];
            setContainerRectAnimated = TRUE;
        }
        if (_toolBarHidden) {
            CGRect toolFrame;
            toolFrame = [_toolBar frame];
            toolFrame.origin.y += UINavigationBarHeight;
            [_toolBar setFrame:toolFrame];
            if (_setToolBarHiddenAnimated) {
                [UIView setAnimationDidStopSelector:@selector(_toolHideDone)];
            } else {
                [_toolBar setHidden:TRUE];
            }

            newContainerFrame.size.height += UINavigationBarHeight;
            _didSlideToolBar = TRUE;
        } else {
            CGRect toolFrame;
            toolFrame = [_toolBar frame];

            if (_didSlideToolBar) {
                toolFrame.origin.y -= UINavigationBarHeight;
            }
            _didSlideToolBar = FALSE;
            [_toolBar setFrame:toolFrame];
            [_toolBar setHidden:FALSE];

            newContainerFrame.size.height -= UINavigationBarHeight;
        }

        if (_setToolBarHiddenAnimated) {
            [UIView commitAnimations];
        }
        _isToolHidden = _toolBarHidden;
    }

    if (setContainerRect) {
        if (setContainerRectAnimated) {
            [UIView beginAnimations:nil context:nil];
            [UIView setAnimationDuration:UINavigationControllerHideShowBarDuration];
        }
        [_containerView setFrame:newContainerFrame];
        CGRect containerBounds;
        containerBounds = [_containerView bounds];
        [_curControllerView setFrame:containerBounds];
        if (setContainerRectAnimated) {
            [UIView commitAnimations];
        }
    }
}

/**
 @Status Interoperable
*/
- (CGSize)contentSizeForViewInPopover {
    id controller = _newController ? _newController : _curController;

    if (controller != nil) {
        CGSize ret = { 0 };
        ret = [controller contentSizeForViewInPopover];
        if (!_navBarHidden) {
            ret.height += UINavigationBarHeight;
        }
        if (![_toolBar isHidden]) {
            ret.height += UINavigationBarHeight;
        }
        return ret;
    }

    return priv->_contentSizeForViewInPopover;
}

@end
