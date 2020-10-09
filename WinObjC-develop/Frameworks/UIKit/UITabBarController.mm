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

#import <UIKit/UIApplication.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UIViewController.h>

#import <Foundation/NSString.h>
#import <Foundation/NSMutableArray.h>

#import "UIViewControllerInternal.h"
#import "UITabPane.h"
#import "LoggingNative.h"
#import "UITabBarControllerInternal.h"
#import "UITabBarInternal.h"
#import "StarboardXaml/DisplayProperties.h"

static const wchar_t* TAG = L"UITabBarController";

@implementation UITabMoreTableView

/**
 @Status Interoperable
*/
- (NSInteger)numberOfSectionsInTableView:(UITableView*)tableview {
    return 0;
}

@end

@implementation UITabMoreController

/**
 @Status Interoperable
*/
- (instancetype)init {
    if (self = [super init]) {
        StrongId<UITabMoreTableView> table;
        table.attach([[UITabMoreTableView alloc] init]);
        [self pushViewController:table animated:FALSE];
    }

    return self;
}

@end

@implementation UITabBarController {
@public
    idretain _tabBar;
    idretain _viewControllers;
    idretaintype(UITabPane) _tabPane;
    id _mainView;
    idretain _customizableControllers;
    idretaintype(UIViewController) _moreNavigationController;
    id _delegate;
}

/**
 @Status Caveat
 @Notes May not be fully implemented
*/
- (instancetype)initWithCoder:(NSCoder*)coder {
    [super initWithCoder:coder];

    _selectedIndex = -1;
    id viewControllers = [coder decodeObjectForKey:@"UIViewControllers"];
    _tabBar = [coder decodeObjectForKey:@"UITabBar"];
    [_tabBar setDelegate:self];
    if (_tabBar == nil) {
        TraceVerbose(TAG, L"No tab!");
    }
    _moreNavigationController.attach([UITabMoreController new]);
    [self setViewControllers:viewControllers];
    priv->_wantsFullScreenLayout = TRUE;
    _tabBarChanged = true;

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithNibName:(NSString*)name bundle:(NSBundle*)bundle {
    _selectedIndex = -1;

    CGRect frame = { 0.0f, 0.0f, DisplayProperties::ScreenWidth(), 50.0f };
    _tabBar.attach([[UITabBar alloc] initWithFrame:frame]);
    [_tabBar setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin];
    [_tabBar setDelegate:self];
    priv->_wantsFullScreenLayout = TRUE;
    _moreNavigationController.attach([UITabMoreController new]);
    _tabBarChanged = true;

    return [super initWithNibName:name bundle:bundle];
}

/**
 @Status Interoperable
*/
- (void)setViewControllers:(NSArray*)controllers {
    _viewControllers.attach([controllers copy]);

    //  Setup tabs
    NSMutableArray* tabItems = [NSMutableArray array];
    unsigned controllerCount = [_viewControllers count];

    unsigned i, controllerMax;

    if (controllerCount > 5) {
        controllerMax = 4;
    } else {
        controllerMax = 5;
    }

    for (i = 0; i < controllerCount; i++) {
        id curController = [_viewControllers objectAtIndex:i];
        ((UIViewController*)curController)->priv->_parentViewController = self;
    }

    for (i = 0; i < controllerCount && i < controllerMax; i++) {
        id curController = [_viewControllers objectAtIndex:i];

        id tabItem = [curController tabBarItem];
        [tabItems addObject:tabItem];
    }

    if (_moreNavigationController != nil) {
        _moreNavigationController->priv->_parentViewController = self;
    }

    if (i != controllerCount) {
        NSMutableArray* moreControllers = [NSMutableArray array];
        for (; i < controllerCount; i++) {
            id curController = [_viewControllers objectAtIndex:i];
            [moreControllers addObject:curController];
        }

        [static_cast<UINavigationController*>(_moreNavigationController) setViewControllers:moreControllers animated:FALSE];
        UITabBarItem* moreTab = [_moreNavigationController tabBarItem];
        [tabItems addObject:moreTab];
    }

    [_tabBar setItems:tabItems];
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
- (void)setDelegate:(id<UITabBarControllerDelegate>)delegate {
    _delegate = delegate;
}

/**
 @Status Interoperable
*/
- (id<UITabBarControllerDelegate>)delegate {
    return _delegate;
}

/**
 @Status Interoperable
*/
- (void)setSelectedIndex:(unsigned)index {
    if (_tabPane != nil) {
        NSArray* items = [_tabBar items];

        if (index >= [items count]) {
            TraceVerbose(TAG, L"setSelectedIndex: bad index");
            return;
        }

        UITabBarItem* item = [items objectAtIndex:index];
        [_tabBar setSelectedItem:item];
        [self _tabBar:_tabBar didSelectItem:item];
    }
}

/**
 @Status Interoperable
*/
- (unsigned)selectedIndex {
    if (_selectedIndex == -1) {
        return 0;
    }
    return _selectedIndex;
}

/**
 @Status Interoperable
*/
- (UIViewController*)selectedViewController {
    if (_selectedIndex == -1) {
        return nil;
    }

    return [_viewControllers objectAtIndex:_selectedIndex];
}

/**
 @Status Interoperable
*/
- (void)setSelectedViewController:(UIViewController*)controller {
    unsigned index = [_viewControllers indexOfObject:controller];
    assert(index != 0x7fffffff);
    [self setSelectedIndex:index];
}

/**
 @Status Interoperable
*/
- (void)loadView {
    if (_moreNavigationController == nil) {
        _moreNavigationController.attach([UITabMoreController new]);
    }
    if ([self nibName] != nil) {
        [super loadView];
    }

    if (_tabPane == nil) {
        CGRect frame = { 0.0f, 0.0f, DisplayProperties::ScreenWidth(), DisplayProperties::ScreenHeight() };
        _tabPane.attach([[UITabPane alloc] initWithFrame:frame]);
        ((UITabPane*)_tabPane)->_parent = self;

        _mainView = _tabPane;
        [_tabPane setAutoresizingMask:UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth];
        ((UITabPane*)_tabPane)->_tabBar = _tabBar;
        [_tabPane addSubview:(id)_tabBar];
        [_tabPane setClipsToBounds:TRUE];
        _tabBarChanged = true;
    }

    [self setView:_tabPane];
    [_tabBar setDelegate:self];
    [_tabBar setBackButtonDelegate:self action:@selector(_backButtonPressed) withParam:nil];
    [_tabBar setBackButtonReturnsSuccess:TRUE];
    [_tabBar setBackButtonPriority:-200];
}

- (UIViewController*)moreNavigationController {
    return _moreNavigationController;
}

/**
 @Status Interoperable
*/
- (NSArray*)customizableViewControllers {
    TraceWarning(TAG, L"Warning: No customizableViewControllers");
    return _customizableControllers;
}

- (BOOL)_backButtonPressed {
    if ([((UITabPane*)_tabPane)->_curController isKindOfClass:[UINavigationController class]]) {
        id popped = [((UITabPane*)_tabPane)->_curController popToRootViewControllerAnimated:TRUE];
        if ([popped count] > 0) {
            return TRUE;
        }
    }
    return FALSE;
}

/**
 @Status Interoperable
*/
- (void)setCustomizableViewControllers:(NSArray*)controllers {
    _customizableControllers = controllers;
}

- (void)_showTabBar:(BOOL)show {
    if (show) {
        if (_hideTabBar) {
            _hideTabBar = false;
            _tabBarChanged = true;
        }
    } else {
        if (!_hideTabBar) {
            _hideTabBar = true;
            _tabBarChanged = true;
        }
    }
    [_tabPane setNeedsLayout];
}

/**
 @Status Interoperable
*/
- (UITabBar*)tabBar {
    [self view];

    return _tabBar;
}

- (void)_tabBar:(UITabBar*)tabBar didSelectItem:(UITabBarItem*)item {
    unsigned controllerMax;
    if ([_viewControllers count] > 5) {
        controllerMax = 4;
    } else {
        controllerMax = 5;
    }

    UIViewController* controller;
    unsigned index = [[tabBar items] indexOfObject:item];
    if (index < controllerMax) {
        controller = [_viewControllers objectAtIndex:index];
    } else {
        controller = _moreNavigationController;
    }

    if (![_delegate respondsToSelector:@selector(tabBarController:shouldSelectViewController:)] ||
        [_delegate tabBarController:self shouldSelectViewController:controller]) {
        _selectedIndex = index;
        _tabPane->_newController = controller;
        [controller view];
        [_tabPane setNeedsLayout];

        //  If the view is a navigation controller and is already selected, pop to the root
        if (_tabPane->_curController == controller) {
            if ([controller isKindOfClass:[UINavigationController class]]) {
                [static_cast<UINavigationController*>(controller) popToRootViewControllerAnimated:TRUE];
            }
        }

        if ([_delegate respondsToSelector:@selector(tabBarController:didSelectViewController:)]) {
            [_delegate tabBarController:self didSelectViewController:controller];
        }
    } else {
        if (_selectedIndex < [[_tabBar items] count]) {
            [tabBar setSelectedItem:[[tabBar items] objectAtIndex:_selectedIndex]];
        }
    }
}

- (void)_notifyViewWillAppear:(BOOL)animated {
    if (_mainView != nil) {
        [((UITabPane*)_tabPane)->_curController _notifyViewWillAppear:animated];
    }

    [super _notifyViewWillAppear:animated];
}

- (void)_notifyViewDidAppear:(BOOL)isAnimated {
    if (_mainView != nil) {
        [((UITabPane*)_tabPane)->_curController _notifyViewDidAppear:isAnimated];
    }

    [super _notifyViewDidAppear:isAnimated];
}

- (void)_notifyViewWillDisappear:(BOOL)isAnimated {
    if (_mainView != nil) {
        [((UITabPane*)_tabPane)->_curController _notifyViewWillDisappear:isAnimated];
    }

    [super _notifyViewWillDisappear:isAnimated];
}

- (void)_notifyViewDidDisappear:(BOOL)isAnimated {
    if (_mainView != nil) {
        [((UITabPane*)_tabPane)->_curController _notifyViewDidDisappear:isAnimated];
    }

    [super _notifyViewDidDisappear:isAnimated];
}

/**
 @Status Interoperable
*/
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)orientation {
    if ([_viewControllers count] > 0 && _selectedIndex != -1) {
        UIViewController* curController = [_viewControllers objectAtIndex:_selectedIndex];

        //  Go through our view controllers
        return [curController shouldAutorotateToInterfaceOrientation:orientation];
    }

    return [super shouldAutorotateToInterfaceOrientation:orientation];
}

/**
 @Status Interoperable
*/
- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration {
    _layoutForRotation = true;
    if ([_viewControllers count] > 0 && _selectedIndex != -1) {
        UIViewController* curController = [_viewControllers objectAtIndex:_selectedIndex];

        [[curController view] setNeedsLayout];

        //  Go through our view controllers
        [curController willRotateToInterfaceOrientation:orientation duration:duration];
    } else {
        [super willRotateToInterfaceOrientation:orientation duration:duration];
    }
}

/**
 @Status Interoperable
*/
- (void)willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)orientation duration:(double)duration {
    if ([_viewControllers count] > 0 && _selectedIndex != -1) {
        UIViewController* curController = [_viewControllers objectAtIndex:_selectedIndex];
        [curController willAnimateRotationToInterfaceOrientation:orientation duration:duration];
    } else {
        [super willAnimateRotationToInterfaceOrientation:orientation duration:duration];
    }
}

/**
 @Status Interoperable
*/
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)orientation {
    // We need to tell the tab bar to layout itself again:
    [_tabBar _setLayoutDirty];

    if ([_viewControllers count] > 0 && _selectedIndex != -1) {
        UIViewController* curController = [_viewControllers objectAtIndex:_selectedIndex];

        //  Go through our view controllers
        [curController didRotateFromInterfaceOrientation:orientation];
    } else {
        [super didRotateFromInterfaceOrientation:orientation];
    }
}

/**
 @Status Stub
*/
- (void)setViewControllers:(NSArray*)viewControllers animated:(BOOL)animated {
    UNIMPLEMENTED();
}

@end
