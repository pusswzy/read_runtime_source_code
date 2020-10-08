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

#include "Starboard.h"
#include <UIKit/UIKit.h>
#include <UIKit/UIView.h>
#include <UIKit/UITextField.h>
#include <UIKit/UIColor.h>
#include <UIKit/UILabel.h>
#include <UIKit/UIFont.h>
#include <UIKit/UIImage.h>
#include <UIKit/UISegmentedControl.h>
#import "NSLogging.h"
#include "StubReturn.h"

static const wchar_t* TAG = L"UISearchBar";
static const CGFloat c_marginBottom = 10;
static const CGFloat c_marginLeftAndRight = 10;
static const CGFloat c_defaultTextFieldHeight = 32;
static const CGFloat c_marginTopForPrompt = 10;
static const float c_defaultFontSize = 15;
static const CGFloat c_scopeButtonMarginTop = 20;
static NSString* cancelButtonText = @"Cancel";

@implementation UISearchBar {
    StrongId<UITextField> _textField;
    StrongId<UILabel> _promptLabel;
    StrongId<UIButton> _cancelButton;
    StrongId<UISegmentedControl> _scopeButtons;
    StrongId<NSString> _placeholder;
    StrongId<NSString> _prompt;
    BOOL _scopeButtonsHidden;
    id _delegate;
}

static void initInternal(UISearchBar* self) {
    CGRect frame = [self frame];
    self->_textField.attach([[UITextField alloc] initWithFrame:frame]);
    [self->_textField setDelegate:(id<UITextFieldDelegate>)self];
    [self->_textField setBorderStyle:UITextBorderStyleLine];
    [self->_textField addTarget:self action:@selector(onTextChanged:) forControlEvents:UIControlEventEditingChanged];
    [self->_textField setFont:[UIFont systemFontOfSize:c_defaultFontSize]];
    if (self->_placeholder != nil) {
        [self->_textField setPlaceholder:self->_placeholder];
    }
    [self addSubview:self->_textField];

    UIImage* navGradient = [[UIImage imageNamed:@"/img/navgradient-default.png"] stretchableImageWithLeftCapWidth:1 topCapHeight:0];
    UIImageSetLayerContents([self layer], navGradient);
}

/**
 @Status Interoperable
*/
- (BOOL)resignFirstResponder {
    return [_textField resignFirstResponder];
}

/**
 @Status Interoperable
*/
- (void)setPrompt:(NSString*)prompt {
    if ((([_prompt length] == 0) && ([prompt length] == 0)) || [_prompt isEqualToString:prompt]) {
        // if old prompt text is "equal" to the new prompt text (nil and emptyString are considered equal), quick return
        return;
    }

    // otherwise, old prompt text is different from new prompt text, need either add or remove prompt label
    _prompt.attach([prompt copy]);

    if ([_prompt length] == 0) {
        // remove prompt label since prompt text is either nil or empty
        [_promptLabel removeFromSuperview];
        _promptLabel = nil;
    } else {
        // need to add prompt label if it does not exist since new prompt text is not empty
        if (_promptLabel == nil) {
            CGRect promptFrame = CGRectMake(0, c_marginTopForPrompt, self.frame.size.width, c_defaultTextFieldHeight);

            _promptLabel.attach([[UILabel alloc] initWithFrame:promptFrame]);
            [_promptLabel setTextAlignment:UITextAlignmentCenter];
            [_promptLabel setBackgroundColor:nil];
            [_promptLabel setTextColor:[UIColor blackColor]];
            [self addSubview:self->_promptLabel];
        }
    }

    [self setNeedsLayout];
}

/**
 @Status Interoperable
*/
- (NSString*)prompt {
    return _prompt;
}

/**
 @Status Caveat
 @Notes May not be fully implemented
*/
- (instancetype)initWithCoder:(NSCoder*)coder {
    id ret = [super initWithCoder:coder];

    // If we have scope buttons, we need to read them here:
    id scopeBarTitles = nil;
    if ([coder containsValueForKey:@"UIScopeButtonTitles"]) {
        scopeBarTitles = [coder decodeObjectForKey:@"UIScopeButtonTitles"];
    }
    _scopeButtonsHidden = true;
    if ([coder containsValueForKey:@"UIShowsScopeBar"]) {
        if ([coder decodeIntForKey:@"UIShowsScopeBar"]) {
            _scopeButtonsHidden = false;
        }
    }
    _placeholder = [coder decodeObjectForKey:@"UIPlaceholder"];

    if (scopeBarTitles) {
        _scopeButtons.attach([[UISegmentedControl alloc] initWithItems:scopeBarTitles]);
        [self addSubview:(id)_scopeButtons];

        [_scopeButtons setSelectedSegmentIndex:0];
        [_scopeButtons addTarget:self action:@selector(scopeChanged) forControlEvents:UIControlEventValueChanged];
    }

    initInternal(self);

    return ret;
}

- (void)scopeChanged {
    if ([_delegate respondsToSelector:@selector(searchBar:selectedScopeButtonIndexDidChange:)]) {
        [_delegate searchBar:self selectedScopeButtonIndexDidChange:[_scopeButtons selectedSegmentIndex]];
    }
}

/**
 @Status Stub
*/
- (void)setAutocapitalizationType:(UITextAutocapitalizationType)type {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setAutocorrectionType:(UITextAutocorrectionType)type {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setKeyboardType:(UIKeyboardType)type {
    UNIMPLEMENTED();
}

/**
 @Status Interoperable
*/
- (instancetype)initWithFrame:(CGRect)frame {
    [super initWithFrame:frame];
    initInternal(self);

    return self;
}

/**
 @Status Interoperable
*/
- (void)setDelegate:(id)delegate {
    _delegate = delegate;
}

/**
 @Status Interoperable
*/
- (void)setText:(NSString*)text {
    [_textField setText:text];
}

/**
 @Status Interoperable
*/
- (NSString*)text {
    return [_textField text];
}

/**
 @Status Interoperable
*/
- (void)setShowsCancelButton:(BOOL)shows {
    _showsCancelButton = shows;

    if (_showsCancelButton == false) {
        if (_cancelButton != nil) {
            [_cancelButton removeFromSuperview];
            _cancelButton = nil;
        }
    } else {
        if (_cancelButton == nil) {
            self->_cancelButton.attach([[UIButton alloc] init]);
            [self->_cancelButton setTitle:cancelButtonText forState:UIControlStateNormal];
            [self->_cancelButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
            [self->_cancelButton addTarget:self action:@selector(_cancelButtonTouchUpInside:) forControlEvents:UIControlEventTouchUpInside];
            [self addSubview:self->_cancelButton];
        }
    }

    [self setNeedsLayout];
}

/**
 @Status Stub
*/
- (void)setShowsCancelButton:(BOOL)shows animated:(BOOL)animated {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setShowsBookmarkButton:(BOOL)shows {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setBarStyle:(UIBarStyle)style {
    UNIMPLEMENTED();
}

/**
 @Status Interoperable
*/
- (void)setPlaceholder:(NSString*)placeholder {
    [_textField setPlaceholder:placeholder];
}

/**
 @Status Interoperable
*/
- (NSString*)placeholder {
    return [_textField placeholder];
}

/**
 @Status Stub
*/
- (void)setTintColor:(UIColor*)color {
    UNIMPLEMENTED();
}

/**
 @Status Interoperable
*/
- (void)setTranslucent:(BOOL)translucent {
    _translucent = translucent;
    if (_translucent) {
        [self setAlpha:0.75f];
    } else {
        [self setAlpha:1.0f];
    }
}

/**
 @Status Stub
*/
- (void)setScopeButtonTitles:(NSArray*)titles {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setScopeBarButtonTitleTextAttributes:(NSDictionary*)attributes forState:(UIControlState)forState {
    UNIMPLEMENTED();
}

/**
 @Public No
*/
- (void)layoutSubviews {
    // display the prompt
    CGRect promptFrame = CGRectMake(0, c_marginTopForPrompt, self.frame.size.width, c_defaultTextFieldHeight);
    [_promptLabel setFrame:promptFrame];
    [self->_promptLabel setText:_prompt];

    // display the textField
    CGFloat textFieldHeight = c_defaultTextFieldHeight;

    // When prompt text is available, we display the textfield at the bottom of UISearchBar, else we display the textField at the center of
    // UISearchBar
    // This is consistent with ios behaviour
    CGFloat textFieldOriginY;
    if ([_prompt length] == 0) {
        if (self.frame.size.height < c_defaultTextFieldHeight) {
            textFieldHeight = self.frame.size.height;
        }

        textFieldOriginY = (self.frame.size.height - textFieldHeight) / 2;
    } else {
        textFieldOriginY = self.frame.size.height - c_defaultTextFieldHeight - c_marginBottom;
        if (textFieldOriginY < 0) {
            textFieldOriginY = 0;
            textFieldHeight = self.frame.size.height;
        }
    }

    CGRect textFrame = { { c_marginLeftAndRight, textFieldOriginY },
                         { self.frame.size.width - (2 * c_marginLeftAndRight), textFieldHeight } };

    // display the cancelButton on right side of textField
    if (_showsCancelButton) {
        CGSize cancelButtonSize = [cancelButtonText sizeWithFont:[UIFont systemFontOfSize:c_defaultFontSize]];
        textFrame.size.width = textFrame.size.width - cancelButtonSize.width - (2 * c_marginLeftAndRight) - 10;
        CGRect cancelButttonFrame = { { self.frame.size.width - (2 * c_marginLeftAndRight) - cancelButtonSize.width - 5,
                                        textFrame.origin.y + 3 },
                                      { cancelButtonSize.width + 5, cancelButtonSize.height } };
        [_cancelButton setFrame:cancelButttonFrame];
    }

    [_textField setFrame:textFrame];

    // display the scopebuttons below textField
    if (!_scopeButtonsHidden) {
        if (_scopeButtons) {
            CGRect scopeButtonsFrame = textFrame;
            scopeButtonsFrame.origin.y = scopeButtonsFrame.origin.y + textFrame.size.height + c_scopeButtonMarginTop;
            [_scopeButtons setFrame:scopeButtonsFrame];
        }
    } else {
        [_scopeButtons setHidden:TRUE];
    }
}

- (BOOL)textField:(id)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString*)newString {
    BOOL changed = TRUE;

    if ([_delegate respondsToSelector:@selector(searchBar:shouldChangeTextInRange:replacementText:)]) {
        changed = [_delegate searchBar:self shouldChangeTextInRange:range replacementText:newString];
    }

    return changed;
}

- (void)onTextChanged:(UITextField*)textfield {
    if ([_delegate respondsToSelector:@selector(searchBar:textDidChange:)]) {
        [_delegate searchBar:self textDidChange:[_textField text]];
    }
}

- (BOOL)textFieldShouldReturn:(id)textField {
    if ([_delegate respondsToSelector:@selector(searchBarSearchButtonClicked:)]) {
        [_delegate searchBarSearchButtonClicked:self];
    }
    return TRUE;
}

- (void)textFieldDidBeginEditing:(id)textField {
    if ([_delegate respondsToSelector:@selector(searchBarTextDidBeginEditing:)]) {
        [_delegate searchBarTextDidBeginEditing:self];
    }
}

- (void)textFieldDidEndEditing:(id)textField {
    // We can get double messages here so we need to make sure our text field is the
    // current first responder.

    // The messages can come from:
    //  - Pressing enter on the keyboard
    //  - The user resigning first respondership
    // We need to make sure this is a reasonable thing to do
    if ([_textField isFirstResponder]) {
        if ([_delegate respondsToSelector:@selector(searchBarTextDidEndEditing:)]) {
            [_delegate searchBarTextDidEndEditing:self];
        }
    }
}

- (void)_cancelButtonTouchUpInside:(UIButton*)button {
    if ([_delegate respondsToSelector:@selector(searchBarCancelButtonClicked:)]) {
        [_delegate searchBarCancelButtonClicked:self];
    }
}

/**
 @Status Stub
*/
- (void)setBackgroundImage:(id)image {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (UIImage*)backgroundImageForBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (void)setBackgroundImage:(UIImage*)backgroundImage forBarPosition:(UIBarPosition)barPosition barMetrics:(UIBarMetrics)barMetrics {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (UIImage*)imageForSearchBarIcon:(UISearchBarIcon)icon state:(UIControlState)state {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (UIOffset)positionAdjustmentForSearchBarIcon:(UISearchBarIcon)icon {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(UISearchBarIcon)icon {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (UIImage*)scopeBarButtonBackgroundImageForState:(UIControlState)state {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (void)setScopeBarButtonBackgroundImage:(UIImage*)backgroundImage forState:(UIControlState)state {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (UIImage*)scopeBarButtonDividerImageForLeftSegmentState:(UIControlState)leftState rightSegmentState:(UIControlState)rightState {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
*/
- (void)setScopeBarButtonDividerImage:(UIImage*)dividerImage
                  forLeftSegmentState:(UIControlState)leftState
                    rightSegmentState:(UIControlState)rightState {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (NSDictionary*)scopeBarButtonTitleTextAttributesForState:(UIControlState)state {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Interoperable
*/
- (void)dealloc {
    [_backgroundImage release];
    [super dealloc];
}

/**
 @Status Stub
*/
- (void)setSearchResultsButtonSelected:(BOOL)selected {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (NSInteger)selectedScopeButtonIndex {
    UNIMPLEMENTED();
    return 0;
}

/**
 @Status Stub
*/
- (void)setShowsScopeBar:(BOOL)show {
    UNIMPLEMENTED();
    if (!show) {
        _scopeButtonsHidden = true;
    } else {
        _scopeButtonsHidden = false;
    }

    [self setNeedsLayout];
}

/**
 @Status Caveat
*/
- (void)setSearchFieldBackgroundImage:(UIImage*)image forState:(UIControlState)state {
    if (image == nil) {
        return;
    }

    UIImage* newImage = [image copy];
    [_backgroundImage release];
    _backgroundImage = newImage;

    if (state == UIControlStateNormal) {
        [self->_textField setBorderStyle:UITextBorderStyleNone];
        [_textField setBackground:_backgroundImage];
        [self setNeedsDisplay];
    } else if (state == UIControlStateDisabled) {
        NSTraceWarning(TAG, @"UIControlStateDisabled is not supported");
    }
}

/**
 @Status Caveat
 @Notes  Search field background image is only respected for UIControlStateNormal and UIControlStateDisabled. Other states will be ignored.
*/
- (UIImage*)searchFieldBackgroundImageForState:(UIControlState)state {
    if (state == UIControlStateNormal) {
        return _backgroundImage;
    } else if (state == UIControlStateDisabled) {
        UNIMPLEMENTED();
    } else {
        NSTraceWarning(TAG, @"Search field background image is only respected for UIControlStateNormal and UIControlStateDisabled.");
    }
    return nil;
}

/**
 @Status Stub
*/
- (void)setImage:(UIImage*)image forSearchBarIcon:(UISearchBarIcon)icon state:(UIControlState)state {
    UNIMPLEMENTED();
}

/**
 @Status Stub
*/
- (void)setBarTintColor:(UIColor*)color {
    UNIMPLEMENTED();
    [self setTintColor:color];
}

- (UITextField*)_searchField {
    return _textField;
}
@end
