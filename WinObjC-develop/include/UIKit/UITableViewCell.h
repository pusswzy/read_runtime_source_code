/*
 * Copyright (c) 2011, The Iconfactory. All rights reserved.
 * Copyright (c) 2016 Microsoft Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of The Iconfactory nor the names of its contributors may
 *    be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE ICONFACTORY BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#import <UIKit/UIKitTypes.h>
#import <UIKit/UIView.h>

#define UITableViewCellSeparatorStyleDoubleLineEtched UITableViewCellSeparatorStyleSingleLineEtched
#define UITableViewCellStateEditingMask UITableViewCellStateShowingEditControlMask

typedef enum {
    UITableViewCellAccessoryNone,
    UITableViewCellAccessoryDisclosureIndicator,
    UITableViewCellAccessoryDetailDisclosureButton,
    UITableViewCellAccessoryCheckmark,
    UITableViewCellAccessoryDetailButton
} UITableViewCellAccessoryType;

typedef enum {
    UITableViewCellSeparatorStyleNone,
    UITableViewCellSeparatorStyleSingleLine,
    UITableViewCellSeparatorStyleSingleLineEtched
} UITableViewCellSeparatorStyle;

typedef enum {
    UITableViewCellStyleDefault,
    UITableViewCellStyleValue1,
    UITableViewCellStyleValue2,
    UITableViewCellStyleSubtitle
} UITableViewCellStyle;

typedef enum {
    UITableViewCellSelectionStyleNone,
    UITableViewCellSelectionStyleBlue,
    UITableViewCellSelectionStyleGray
} UITableViewCellSelectionStyle;

typedef enum {
    UITableViewCellEditingStyleNone,
    UITableViewCellEditingStyleDelete,
    UITableViewCellEditingStyleInsert
} UITableViewCellEditingStyle;

typedef enum : NSUInteger {
    UITableViewCellStateDefaultMask = 0,
    UITableViewCellStateShowingEditControlMask = 1 << 0,
    UITableViewCellStateShowingDeleteConfirmationMask = 1 << 1
} UITableViewCellStateMask;

@class UITableViewCellSeparator;
@class UILabel;
@class UIImageView;
@class UIStoryboardSegueTemplate;
@class UIImage;
@class UIFont;

UIKIT_EXPORT_CLASS
@interface UITableViewCell
    : UIView <UIAppearance, UIAppearanceContainer, UICoordinateSpace, UIDynamicItem, UIFocusEnvironment, UITraitEnvironment>

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString*)reuseIdentifier;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(NSString*)reuseIdentifier;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;

- (void)willTransitionToState:(UITableViewCellStateMask)state;
- (void)didTransitionToState:(UITableViewCellStateMask)state;

@property (nonatomic, readonly, retain) UIView* contentView;
@property (nonatomic, readonly, retain) UILabel* textLabel;
@property (nonatomic, readonly, retain) UILabel* detailTextLabel;
@property (nonatomic, readonly, retain) UIImageView* imageView;
@property (nonatomic, retain) UIView* backgroundView;
@property (nonatomic, retain) UIView* selectedBackgroundView;
@property (nonatomic, strong) UIView* multipleSelectionBackgroundView STUB_PROPERTY;
@property (nonatomic) UITableViewCellSelectionStyle selectionStyle;
@property (nonatomic) NSInteger indentationLevel;
@property (nonatomic) UITableViewCellAccessoryType accessoryType;
@property (nonatomic, retain) UIView* accessoryView;
@property (nonatomic) UITableViewCellAccessoryType editingAccessoryType;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) UITableViewCellEditingStyle editingStyle STUB_PROPERTY;
@property (nonatomic, readonly) BOOL showingDeleteConfirmation STUB_PROPERTY;
@property (nonatomic, readonly, copy) NSString* reuseIdentifier;
@property (nonatomic) BOOL shouldIndentWhileEditing STUB_PROPERTY;
@property (nonatomic, assign) CGFloat indentationWidth; // 10 per default
@property (nonatomic, retain) UIView* editingAccessoryView;
@property (nonatomic) BOOL showsReorderControl;
@property (nonatomic, retain) UIImage* image; // depr
@property (nonatomic, strong) UIImage* selectedImage STUB_PROPERTY;
@property (nonatomic, copy) NSString* text; // depr
@property (nonatomic) UIEdgeInsets separatorInset STUB_PROPERTY;
@property (nonatomic, retain) UIFont* font; // depr
@property (nonatomic) UITextAlignment textAlignment; // depr
@property (nonatomic, retain) UIColor* textColor; // depr
@property (nonatomic, strong) UIColor* selectedTextColor STUB_PROPERTY;
@property (nonatomic) NSLineBreakMode lineBreakMode STUB_PROPERTY;
@property (assign, nonatomic) id target STUB_PROPERTY;
@property (nonatomic) SEL editAction STUB_PROPERTY;
@property (nonatomic) SEL accessoryAction STUB_PROPERTY;

@end
