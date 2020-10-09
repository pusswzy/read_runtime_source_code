//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
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
#import "NSLogging.h"
#import "NSRaise.h"
#import <SafariServices/SFSafariViewController.h>
#import "SFSafariWebViewController.h"
#import "SFSafariViewControllerInternal.h"
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UIToolbar.h>
#import <UIKit/UIWebView.h>
#import <UIKit/UIWebViewDelegate.h>
#import "UIBarButtonItem+Internals.h"

static const wchar_t* TAG = L"SFSafariWebViewController";

static const char* SAFARI_USER_AGENT =
    "Mozilla/5.0 (iPad; CPU OS 6_0 like Mac OS X) AppleWebKit/536.26 (KHTML, like Gecko) Version/6.0 Mobile/10A5355d Safari/8536.25";

static bool appCanOpenURL(NSURL* url) {
    // Check the app's main bundle to see whether this URL conforms to a scheme
    // that this app can open
    NSDictionary* info = [[NSBundle mainBundle] infoDictionary];
    NSArray<NSDictionary*>* urlTypes = info[@"CFBundleURLTypes"];

    NSString* targetScheme = url.scheme;

    for (NSDictionary* urlType in urlTypes) {
        NSArray<NSString*>* urlSchemes = urlType[@"CFBundleURLSchemes"];

        for (NSString* scheme in urlSchemes) {
            if ([scheme isEqualToString:targetScheme]) {
                return true;
            }
        }
    }

    return false;
}

@interface SFSafariWebViewController ()
- (void)_updateUIToolbarButtons;
@end

// Delegate for the UIWebView that underlies a SFSafariWebViewController
@interface _SFWebViewDelegate : NSObject <UIWebViewDelegate>
@property (weak, nonatomic) SFSafariWebViewController* viewController;
@end

@implementation _SFWebViewDelegate {
    NSURL* _redirectUrl;
}

- (instancetype)initWithRedirectUrl:(NSString*)redirectUrl {
    if (self = [super init]) {
        _redirectUrl = [NSURL URLWithString:redirectUrl];
    }

    return self;
}

- (BOOL)webView:(UIWebView*)webView
    shouldStartLoadWithRequest:(NSURLRequest*)request
                navigationType:(UIWebViewNavigationType)navigationType {
    NSURL* url = request.URL;
    BOOL openWithAppDelegate = NO;

    // Check whether this request is for the redirect URL that we're watching out for
    // (modulo the query string and fragment, which are allowed to vary)
    if ([url.scheme isEqualToString:_redirectUrl.scheme] && [url.host isEqualToString:_redirectUrl.host] &&
        [url.path isEqualToString:_redirectUrl.path]) {
        openWithAppDelegate = YES;
    }

    // Check whether the URL can be opened directly by this application, in which case we'll send it
    // straight to the application delegate.
    // Asking the WebView to open such a URL would work, since it would send an activation request
    // to this app, but that would cause an extraneous confirmation dialog from Windows.
    if (appCanOpenURL(url)) {
        openWithAppDelegate = YES;
    }

    if (openWithAppDelegate) {
        id delegate = [[UIApplication sharedApplication] delegate];
        if ([delegate respondsToSelector:@selector(application:openURL:sourceApplication:annotation:)]) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [delegate application:[UIApplication sharedApplication]
                              openURL:url
                    sourceApplication:[self.viewController _sourceApplication]
                           annotation:nil];
            });
        }
    }

    return !openWithAppDelegate;
}

- (void)webViewDidFinishLoad:(UIWebView*)webView {
    // WebView has just finished loading, so the back and/or forward buttons can now be enabled/disabled.
    [self.viewController _updateUIToolbarButtons];
}
@end

@implementation SFSafariWebViewController {
    NSString* _redirectUrl;
    UIWebView* _webView;
    _SFWebViewDelegate* _webViewDelegate;
    UIToolbar* _toolbar;
    UIBarButtonItem* _backButton;
    UIBarButtonItem* _forwardButton;
    UIBarButtonItem* _doneButton;
    UIBarButtonItem* _spaceButton;
}

/**
 @Status Interoperable
 @Notes
*/
- (instancetype)initWithURL:(NSURL*)URL entersReaderIfAvailable:(BOOL)entersReaderIfAvailable {
    if (self = [super initWithURL:URL entersReaderIfAvailable:entersReaderIfAvailable]) {
        _url = [URL copy];

        // Find the redirect URL embedded in the query string, if one is present
        NSURLComponents* components = [NSURLComponents componentsWithURL:_url resolvingAgainstBaseURL:NO];
        NSUInteger redirectIdx = [components.queryItems indexOfObjectPassingTest:^BOOL(NSURLQueryItem* item, NSUInteger idx, BOOL* stop) {
            return [item.name isEqualToString:@"redirect_uri"];
        }];

        if (redirectIdx != NSNotFound) {
            _redirectUrl = [components.queryItems[redirectIdx].value copy];
        }
    }

    return self;
}

/*
 This initializer should be unreachable, as this class is only initialized via its
 abstract superclass, SFSafariViewController
*/
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
- (instancetype)initWithOAuthURL:(NSURL*)URL substituteRedirectURL:(NSURL*)redirectURL {
    return NSInvalidAbstractInvocationReturn();
}

/**
 @Status Interoperable
*/
- (void)loadView {
    // Create a view that covers the whole app
    CGRect frame = [[UIScreen mainScreen] applicationFrame];
    UIView* topView = [[UIView alloc] initWithFrame:frame];

    topView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;

    UIImage* backArrow = [UIImage imageNamed:@"/img/backbutton@2x.png"];
    CGFloat toolbarHeight = backArrow.size.height;

    // Create a toolbar at the top of the view
    CGRect toolbarFrame = CGRectMake(0, 0, frame.size.width, toolbarHeight);
    _toolbar = [[UIToolbar alloc] initWithFrame:toolbarFrame];
    _toolbar.autoresizingMask = UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleWidth;

    // Create a web view that fills most of the view
    CGRect webFrame = topView.bounds;
    webFrame.origin.y += _toolbar.frame.size.height;
    webFrame.size.height -= _toolbar.frame.size.height;

    _webView = [[UIWebView alloc] initWithFrame:webFrame];
    _webView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;

    _webViewDelegate = [[_SFWebViewDelegate alloc] initWithRedirectUrl:_redirectUrl];
    _webView.delegate = _webViewDelegate;
    _webViewDelegate.viewController = self;

    // The client asked for Safari, so act like Safari (insofar as it is possible)
    NSMutableURLRequest* request = [NSMutableURLRequest requestWithURL:_url];
    [request setValue:[NSString stringWithUTF8String:SAFARI_USER_AGENT] forHTTPHeaderField:@"User-Agent"];

    [_webView loadRequest:request];
    [topView addSubview:_webView];

    // <-
    _backButton =
        [[UIBarButtonItem alloc] initWithImage:backArrow style:UIBarButtonItemStylePlain target:_webView action:@selector(goBack)];

    // ->
    _forwardButton =
        [[UIBarButtonItem alloc] initWithImage:backArrow style:UIBarButtonItemStylePlain target:_webView action:@selector(goForward)];

    [[_forwardButton _view] setTransform:CGAffineTransformMakeRotation(M_PI)];

    // Done
    _doneButton =
        [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(_cancel)];

    _spaceButton =
        [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nullptr];

    [self _updateUIToolbarButtons];

    [_toolbar setTintColor:[UIColor lightGrayColor]];

    [topView addSubview:_toolbar];

    self.view = topView;
}

- (void)_cancel {
    // User clicked Done button
    [self dismissViewControllerAnimated:NO completion:nil];
}

- (void)dealloc {
    _webView.delegate = nil;
}

- (void)_updateUIToolbarButtons {
    StrongId<NSMutableArray<UIBarButtonItem*>> toolbarItemsArray = [[NSMutableArray alloc] init];

    if ([_webView canGoBack] == YES) {
        [toolbarItemsArray addObject:_backButton];
    } else {
        // This is to ensure that the other buttons are rendered at the correct position.
        [toolbarItemsArray addObject:_spaceButton];
    }

    // This is to ensure that the other buttons are rendered at the correct position.
    [toolbarItemsArray addObject:_spaceButton];

    if ([_webView canGoForward] == YES) {
        [toolbarItemsArray addObject:_forwardButton];
    } else {
        // This is to ensure that the other buttons are rendered at the correct position.
        [toolbarItemsArray addObject:_spaceButton];
    }

    // This is to ensure that the other buttons are rendered at the correct position.
    [toolbarItemsArray addObject:_spaceButton];

    [toolbarItemsArray addObject:_doneButton];

    StrongId<NSArray<UIBarButtonItem*>> toolbarItems = [toolbarItemsArray copy];

    [_toolbar setItems:toolbarItems animated:NO];
}

@end
