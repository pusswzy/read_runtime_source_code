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

#import <UIKit/NSString+UIKitAdditions.h>
#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIKitTypes.h>
#import <UIKit/UILabel.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWindow.h>

#import <Foundation/NSString.h>
#import <Foundation/NSMutableArray.h>

#import <CoreGraphics/CGAffineTransform.h>

#import "UIFontInternal.h"
#import "UIApplicationInternal.h"
#import <objc/objc-arc.h>

#import "StarboardXaml/DisplayProperties.h"

typedef struct {
    idretain _buttonText;
    idretain _buttonView;
} ActionButton;

struct UIAlertViewPriv {
    UIAlertViewPriv() {
        memset(this, 0, sizeof(UIAlertViewPriv));
    }

    id _delegate;
    idretaintype(NSString) _title;
    idretaintype(UILabel) _titleLabel;
    idretaintype(NSString) _message;
    idretaintype(UILabel) _messageLabel;
    idretain _cancelText;
    idretaintype(UIButton) _cancelView;
    id _darkView;

    int _hideIndex;

    ActionButton _buttons[16];
    int _numButtons;

    int _numberOfRows;

    float _totalHeight;
    int _otherButtonIndex, _cancelButtonIndex;
    bool _isVisible;

    UIAlertViewStyle _style;

    BOOL _delegateSupportsDidDismiss;
};

@implementation UIAlertView {
    struct UIAlertViewPriv* alertPriv;
}

/**
 @Status Interoperable
*/
+ (instancetype)allocWithZone:(NSZone*)zone {
    UIAlertView* ret = [super allocWithZone:zone];
    ret->alertPriv = new UIAlertViewPriv();

    return ret;
}

static int addButton(UIAlertViewPriv* alertPriv, id text) {
    alertPriv->_buttons[alertPriv->_numButtons]._buttonText.attach([text copy]);

    return alertPriv->_numButtons++;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithTitle:(NSString*)title
                      message:(NSString*)message
                     delegate:(id)delegate
            cancelButtonTitle:(NSString*)cancelButtonTitle
            otherButtonTitles:(NSString*)otherButtonTitles, ... {
    va_list pReader;
    va_start(pReader, otherButtonTitles);
    [self setDelegate:delegate];
    if (title != nil) {
        alertPriv->_title.attach([title copy]);
    }
    if (message != nil) {
        alertPriv->_message.attach([message copy]);
    }

    alertPriv->_cancelButtonIndex = -1;
    if (cancelButtonTitle != nil) {
        alertPriv->_cancelText.attach([cancelButtonTitle copy]);
        alertPriv->_cancelButtonIndex = 0;
    }

    alertPriv->_otherButtonIndex = -1;

    id otherButtonTitle = otherButtonTitles; // va_arg(pReader, id);
    while (otherButtonTitle != nil) {
        int idx = addButton(alertPriv, otherButtonTitle);
        if (alertPriv->_otherButtonIndex == -1) {
            if (cancelButtonTitle != nil) {
                alertPriv->_otherButtonIndex = 1;
            } else {
                alertPriv->_otherButtonIndex = 0;
            }
        }

        otherButtonTitle = va_arg(pReader, id);
    }
    va_end(pReader);

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithTitle:(id)title
                      message:(id)message
                     delegate:(id)delegate
                defaultButton:(id)defaultButton
                 cancelButton:(id)cancelButton
                 otherButtons:(id)otherButtons {
    [self setDelegate:delegate];
    if (title != nil) {
        alertPriv->_title.attach([title copy]);
    }
    if (message != nil) {
        alertPriv->_message.attach([message copy]);
    }

    alertPriv->_cancelButtonIndex = -1;
    if (cancelButton != nil) {
        alertPriv->_cancelText.attach([cancelButton copy]);
        alertPriv->_cancelButtonIndex = 0;
    }

    alertPriv->_otherButtonIndex = -1;

    if (defaultButton != nil) {
        int idx = addButton(alertPriv, defaultButton);
        if (alertPriv->_otherButtonIndex == -1) {
            alertPriv->_otherButtonIndex = idx;
        }
    }

    otherButtons = [otherButtons componentsSeparatedByString:@";"];
    int count = [otherButtons count];

    for (int i = 0; i < count; i++) {
        id otherButton = [otherButtons objectAtIndex:i];
        int idx = addButton(alertPriv, otherButton);
        if (alertPriv->_otherButtonIndex == -1) {
            alertPriv->_otherButtonIndex = idx;
        }
    }

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)init {
    if (self = [super init]) {
        alertPriv->_otherButtonIndex = -1;
        alertPriv->_cancelButtonIndex = -1;
    }

    return self;
}

/**
 @Status Interoperable
*/
- (void)setDelegate:(id)delegate {
    objc_storeWeak(&alertPriv->_delegate, delegate);
    alertPriv->_delegateSupportsDidDismiss = [alertPriv->_delegate respondsToSelector:@selector(alertView:didDismissWithButtonIndex:)];
}

/**
 @Status Interoperable
*/
- (id)delegate {
    id ret;

    ret = objc_loadWeak(&alertPriv->_delegate);
    return ret;
}

/**
 @Status Interoperable
*/
- (void)setTitle:(id)title {
    alertPriv->_title.attach([title copy]);
}

/**
 @Status Interoperable
*/
- (id) /* use typed version */ title {
    return alertPriv->_title;
}

/**
 @Status Stub
*/
- (void)setAlertViewStyle:(UIAlertViewStyle)style {
    UNIMPLEMENTED();
    alertPriv->_style = style;
}

/**
 @Status Stub
*/
- (UIAlertViewStyle)alertViewStyle {
    UNIMPLEMENTED();
    return alertPriv->_style;
}

/**
 @Status Interoperable
*/
- (void)setMessage:(id)message {
    alertPriv->_message.attach([message copy]);
}

/**
 @Status Interoperable
*/
- (int)addButtonWithTitle:(id)title {
    if (alertPriv->_otherButtonIndex == -1) {
        if (alertPriv->_cancelText != nil) {
            alertPriv->_otherButtonIndex = 1;
        } else {
            alertPriv->_otherButtonIndex = 0;
        }
    }
    int idx = addButton(alertPriv, title);

    return alertPriv->_otherButtonIndex + idx;
}

- (id)setNumberOfRows:(DWORD)numRows {
    alertPriv->_numberOfRows = numRows;

    return self;
}

/**
 @Status Interoperable
*/
- (int)cancelButtonIndex {
    return alertPriv->_cancelButtonIndex;
}

/**
 @Status Interoperable
*/
- (int)firstOtherButtonIndex {
    return alertPriv->_otherButtonIndex;
}

/**
 @Status Interoperable
*/
- (void)setCancelButtonIndex:(int)index {
    alertPriv->_cancelButtonIndex = index;
}

static id createButton(UIAlertView* self, int index, id text, float x, float y, float width) {
    CGRect frame;

    frame.origin.x = x;
    frame.origin.y = y;
    frame.size.width = width;
    frame.size.height = 30.0f;

    id buttonBackground = [[UIImage imageNamed:@"/img/blackbutton-pressed@2x.png"] stretchableImageWithLeftCapWidth:9 topCapHeight:0];
    id buttonPressed = [[UIImage imageNamed:@"/img/blackbutton-normal@2x.png"] stretchableImageWithLeftCapWidth:9 topCapHeight:0];

    UIButton* ret = [[UIButton alloc] initWithFrame:frame];
    [ret setTitle:text forState:0];
    [ret setTitleColor:[UIColor blackColor] forState:0];
    [ret setBackgroundImage:buttonBackground forState:0];
    [ret setBackgroundImage:buttonPressed forState:1];
    [ret setTag:index];
    [ret addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
    [ret setAlpha:0.9f];

    return ret;
}

- (id)_didHideAlert {
    [alertPriv->_darkView removeFromSuperview];
    alertPriv->_darkView = nil;
    [self removeFromSuperview];
    alertPriv->_isVisible = false;

    id weakDelegate = objc_loadWeak(&alertPriv->_delegate);
    if (alertPriv->_delegateSupportsDidDismiss) {
        [weakDelegate alertView:self didDismissWithButtonIndex:alertPriv->_hideIndex];
    }
    return self;
}

static void hideAlert(UIAlertView* self, int index, BOOL animated) {
    if (animated) {
        self->alertPriv->_hideIndex = index;
        [UIView beginAnimations:@"HideAlert" context:nil];
        [UIView setAnimationDuration:0.25f];
        [UIView setAnimationDelegate:self];
        [UIView setAnimationDidStopSelector:@selector(_didHideAlert)];
        [self->alertPriv->_darkView setAlpha:0.0f];
        [self setAlpha:0.0f];
        [UIView commitAnimations];
    } else {
        [self->alertPriv->_darkView removeFromSuperview];
        self->alertPriv->_darkView = nil;
        [self removeFromSuperview];
        self->alertPriv->_isVisible = false;

        id weakDelegate = objc_loadWeak(&self->alertPriv->_delegate);
        if ([weakDelegate respondsToSelector:@selector(alertView:didDismissWithButtonIndex:)]) {
            [weakDelegate alertView:self didDismissWithButtonIndex:index];
        }
    }
}

/**
 @Status Interoperable
*/
- (void)dismissWithClickedButtonIndex:(int)index animated:(BOOL)animated {
    [self retain];
    [self autorelease];

    id weakDelegate = objc_loadWeak(&alertPriv->_delegate);

    if ([weakDelegate respondsToSelector:@selector(alertView:willDismissWithButtonIndex:)]) {
        [weakDelegate alertView:self willDismissWithButtonIndex:index];
    }

    hideAlert(self, index, animated);
}

- (void)buttonClicked:(id)button {
    int index = [(UIButton*)button tag];

    [self retain];
    [self autorelease];

    id weakDelegate = objc_loadWeak(&alertPriv->_delegate);

    if ([weakDelegate respondsToSelector:@selector(alertView:clickedButtonAtIndex:)]) {
        [weakDelegate alertView:self clickedButtonAtIndex:index];
    }

    if ([weakDelegate respondsToSelector:@selector(alertView:willDismissWithButtonIndex:)]) {
        [weakDelegate alertView:self willDismissWithButtonIndex:index];
    }

    hideAlert(self, index, TRUE);
}

/**
 @Status Interoperable
*/
- (BOOL)isVisible {
    return alertPriv->_isVisible;
}

- (void)_handleRotation {
    // We need to offset the 'presentationTransform' used in WOCDispalyMode, because we always want to render alerts vertically.
    // TODO: We'll remove this when we switch UIAlertView over to a Xaml ContentDialog, since rotation will be handled for us.
    const float c_angleToRadian = kPi / 180.0;
    switch ([[UIApplication displayMode] presentationTransform]) {
        case UIInterfaceOrientationLandscapeRight:
            [self setTransform:CGAffineTransformMakeRotation(-static_cast<float>(DisplayProperties::ScreenRotation90Clockwise) *
                                                             c_angleToRadian)];
            break;

        case UIInterfaceOrientationPortrait:
            [self setTransform:CGAffineTransformMakeTranslation(0.0f, 0.0f)];
            break;

        case UIInterfaceOrientationLandscapeLeft:
            [self setTransform:CGAffineTransformMakeRotation(-static_cast<float>(DisplayProperties::ScreenRotation90CounterClockwise) *
                                                             c_angleToRadian)];
            break;

        case UIInterfaceOrientationPortraitUpsideDown:
            [self setTransform:CGAffineTransformMakeRotation(-static_cast<float>(DisplayProperties::ScreenRotation180) * c_angleToRadian)];
            break;

        default:
            break;
    }
}

/**
 @Status Interoperable
*/
- (void)/* use typed version */ show {
    float boxWidth = 320.0f;
    id titleFont = [UIFont titleFont];
    id messageFont = [UIFont messageFont];
    id blackColor = [UIColor blackColor];

    if (DisplayProperties::IsTablet()) {
        CGRect screenRect;
        screenRect = [[UIScreen mainScreen] bounds];
        boxWidth = screenRect.size.width * 0.9f;
    }

    // TODO: we should get rid of all magic numbers in this file, at least define them with meaningful const

    // itemOriginX specifies where the origin.x is for title label or message label
    const float itemOriginX = 24.0f;

    // itemHorizontalPadding specifies the padding between title or message label and its parent container
    const float itemHorizontalPadding = 20.0f;

    // itemWidth is uesd to limit how wide the mesasge or title label can be
    const float itemWidth = boxWidth - 20.0f / 2 - itemOriginX;

    float curHeight = 18.0f;

    //  Measure the title and message sizes
    CGSize titleSize = { 0.0f, 0.0f }, messageSize = { 0.0f, 0.0f };
    if (alertPriv->_title != nil) {
        titleSize = [alertPriv->_title sizeWithFont:titleFont
                                  constrainedToSize:CGSizeMake(itemWidth, 480.0f)
                                      lineBreakMode:UILineBreakModeWordWrap];

        CGRect frame;

        frame.origin.x = itemOriginX;
        frame.origin.y = curHeight;
        frame.size.width = itemWidth;
        frame.size.height = titleSize.height;

        alertPriv->_titleLabel.attach([[UILabel alloc] initWithFrame:frame]);
        [alertPriv->_titleLabel setText:(id)alertPriv->_title];
        [alertPriv->_titleLabel setFont:titleFont];
        [alertPriv->_titleLabel setTextAlignment:UITextAlignmentLeft];
        [alertPriv->_titleLabel setTextColor:blackColor];
        [alertPriv->_titleLabel setBackgroundColor:nil];
        [alertPriv->_titleLabel setNumberOfLines:0];

        curHeight += titleSize.height;
        curHeight += 10.0f;
    }

    // Grab the _popupWindow
    // TODO: Switch this over to a Xaml ContentDialog so we don't need the extra _popupWindow
    UIView* popupWindow = (UIView*)[[UIApplication sharedApplication] _popupWindow];

    CGRect fullScreen;
    fullScreen = [popupWindow bounds];

    if (alertPriv->_message != nil) {
        float maxHeight = fullScreen.size.height - curHeight - 30.0f;
        if (alertPriv->_cancelText != nil && alertPriv->_numButtons == 1 && alertPriv->_numberOfRows < 2) {
            maxHeight -= 40.0f;
        } else {
            maxHeight -= alertPriv->_numButtons * 40.0f;

            if (alertPriv->_cancelText != nil) {
                maxHeight -= 10.0f;
                maxHeight -= 40.0f;
            }
        }

        for (;;) {
            messageSize = [alertPriv->_message sizeWithFont:messageFont
                                          constrainedToSize:CGSizeMake(itemWidth, 480.0f)
                                              lineBreakMode:UILineBreakModeWordWrap];
            if (messageSize.height < maxHeight) {
                break;
            }

            float curSize = [messageFont pointSize];
            curSize -= 0.5f;
            messageFont = [messageFont fontWithSize:curSize];
            if (curSize <= 1.0f) {
                break;
            }
        }

        if (messageSize.height > maxHeight) {
            messageSize.height = maxHeight;
        }

        CGRect frame;

        frame.origin.x = itemOriginX;
        frame.origin.y = curHeight;
        frame.size.width = itemWidth;
        frame.size.height = messageSize.height;

        alertPriv->_messageLabel.attach([[UILabel alloc] initWithFrame:frame]);
        [alertPriv->_messageLabel setText:(id)alertPriv->_message];
        [alertPriv->_messageLabel setFont:messageFont];
        [alertPriv->_messageLabel setTextAlignment:UITextAlignmentLeft];
        [alertPriv->_messageLabel setLineBreakMode:UILineBreakModeWordWrap];
        [alertPriv->_messageLabel setNumberOfLines:0];
        [alertPriv->_messageLabel setTextColor:blackColor];
        [alertPriv->_messageLabel setBackgroundColor:nil];

        curHeight += messageSize.height;
        curHeight += 48.0f;
    }

    if (alertPriv->_cancelText != nil && alertPriv->_numButtons == 1 && alertPriv->_numberOfRows < 2) {
        float buttonsWidth = 270.0f;
        //  Make side by side buttons
        alertPriv->_cancelView.attach(createButton(
            self, alertPriv->_cancelButtonIndex, alertPriv->_cancelText, boxWidth / 2.0f - buttonsWidth / 2.0f, curHeight, 130.0f));
        [alertPriv->_cancelView sendControlEventsOnBack:UIControlEventTouchUpInside];

        for (int i = 0; i < alertPriv->_numButtons; i++) {
            alertPriv->_buttons[i]._buttonView.attach(createButton(self,
                                                                   i + alertPriv->_otherButtonIndex,
                                                                   alertPriv->_buttons[i]._buttonText,
                                                                   boxWidth / 2.0f - buttonsWidth / 2.0f + 140.0f,
                                                                   curHeight,
                                                                   130.0f));
        }

        curHeight += 36.0f;
    } else {
        //  Make top-down buttons
        for (int i = 0; i < alertPriv->_numButtons; i++) {
            alertPriv->_buttons[i]._buttonView.attach(createButton(self,
                                                                   i + alertPriv->_otherButtonIndex,
                                                                   alertPriv->_buttons[i]._buttonText,
                                                                   boxWidth / 2.0f - 280.0f / 2.0f,
                                                                   curHeight,
                                                                   280.0f));
            curHeight += 36.0f;
        }

        if (alertPriv->_cancelText != nil) {
            curHeight += 10.0f;
            alertPriv->_cancelView.attach(createButton(
                self, alertPriv->_cancelButtonIndex, alertPriv->_cancelText, boxWidth / 2.0f - 280.0f / 2.0f, curHeight, 280.0f));
            [alertPriv->_cancelView sendControlEventsOnBack:UIControlEventTouchUpInside];

            curHeight += 36.0f;
        } else if (alertPriv->_numButtons == 1) {
            [alertPriv->_buttons[0]._buttonView sendControlEventsOnBack:UIControlEventTouchUpInside];
        }
    }

    curHeight += 24.0f;

    CGRect frame;
    frame.origin.x = fullScreen.size.width / 2.0f - boxWidth / 2.0f;
    frame.origin.y = fullScreen.size.height / 2.0f - curHeight / 2.0f + fullScreen.origin.x;
    frame.size.width = boxWidth;
    frame.size.height = curHeight;
    [self initWithFrame:frame];

    // Make sure we're not rotated even if WOCDisplayMode rotates the presentation surface
    [self _handleRotation];

    id image;
    image = [[UIImage imageNamed:@"/img/alert-background@2x.png"] stretchableImageWithLeftCapWidth:25 topCapHeight:30];
    UIImageSetLayerContents([self layer], image);

    if (alertPriv->_messageLabel) {
        [self addSubview:(id)alertPriv->_messageLabel];
    }
    if (alertPriv->_titleLabel) {
        [self addSubview:(id)alertPriv->_titleLabel];
    }

    if (alertPriv->_cancelView) {
        [self addSubview:(id)alertPriv->_cancelView];
    }
    for (int i = 0; i < alertPriv->_numButtons; i++) {
        [self addSubview:(id)alertPriv->_buttons[i]._buttonView];
    }

    if ([alertPriv->_delegate respondsToSelector:@selector(willPresentAlertView:)]) {
        [alertPriv->_delegate willPresentAlertView:self];
    }

    alertPriv->_darkView = [[UIView alloc] initWithFrame:fullScreen];
    [self setAutoresizingMask:UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight];
    [alertPriv->_darkView setBackgroundColor:[UIColor colorWithRed:1.0f green:1.0f blue:1.0f alpha:0.6f]];
    [alertPriv->_darkView setAlpha:0.6f];
    [alertPriv->_darkView setAutoresizingMask:UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth];
    [self setAutoresizingMask:UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin |
                              UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleTopMargin];
    [self setAlpha:0.0f];
    [popupWindow addSubview:alertPriv->_darkView];
    [popupWindow addSubview:self];

    [UIView beginAnimations:@"ShowAlert" context:nil];
    [UIView setAnimationDuration:0.25f];
    [alertPriv->_darkView setAlpha:1.0f];
    [self setAlpha:1.0f];
    [UIView commitAnimations];
    alertPriv->_isVisible = true;

    if ([alertPriv->_delegate respondsToSelector:@selector(didPresentAlertView:)]) {
        [alertPriv->_delegate didPresentAlertView:self];
    }
}

/**
 @Status Interoperable
*/
- (void)dealloc {
    for (int i = 0; i < alertPriv->_numButtons; i++) {
        alertPriv->_buttons[i]._buttonView = nil;
        alertPriv->_buttons[i]._buttonText = nil;
    }
    alertPriv->_title = nil;
    alertPriv->_titleLabel = nil;
    alertPriv->_message = nil;
    alertPriv->_messageLabel = nil;
    alertPriv->_cancelText = nil;
    alertPriv->_cancelView = nil;

    delete alertPriv;

    [super dealloc];
}

/**
 @Status Interoperable
*/
- (id)buttonTitleAtIndex:(int)index {
    if (index == alertPriv->_cancelButtonIndex) {
        return alertPriv->_cancelText;
    }

    int idx = index - alertPriv->_otherButtonIndex;
    assert(idx >= 0 && idx < alertPriv->_numButtons);

    return [alertPriv->_buttons[idx]._buttonView currentTitle];
}

/**
 @Status Stub
*/
- (id)textFieldAtIndex:(int)index {
    UNIMPLEMENTED();
    // TODO: should return a UITextField.
    return nil;
}

@end
