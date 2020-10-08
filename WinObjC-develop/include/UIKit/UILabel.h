/*
 * Copyright (c) 2011, The Iconfactory. All rights reserved.
 * Copyright (c) Microsoft Corporation. All rights reserved.
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

@class UIFont, UIColor;

UIKIT_EXPORT_CLASS
@interface UILabel : UIView

- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines;
- (void)drawTextInRect:(CGRect)rect NOTINPLAN_METHOD;

@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL adjustsLetterSpacingToFitWidth STUB_PROPERTY;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation NOTINPLAN_PROPERTY;
@property (nonatomic) BOOL clipsToBounds STUB_PROPERTY;
@property (nonatomic) CGFloat minimumFontSize;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) CGFloat preferredMaxLayoutWidth STUB_PROPERTY;
@property (nonatomic) CGSize shadowOffset NOTINPLAN_PROPERTY;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) UIBaselineAdjustment baselineAdjustment NOTINPLAN_PROPERTY;
@property (nonatomic) UILineBreakMode lineBreakMode;
@property (nonatomic) UITextAlignment textAlignment;
@property (nonatomic, copy) NSAttributedString* attributedText NOTINPLAN_PROPERTY;
@property (nonatomic, copy) NSString* text;
@property (nonatomic, getter=isEnabled) BOOL enabled NOTINPLAN_PROPERTY;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, retain) UIColor* highlightedTextColor;
@property (nonatomic, retain) UIColor* shadowColor NOTINPLAN_PROPERTY;
@property (nonatomic, retain) UIColor* textColor;
@property (nonatomic, retain) UIFont* font;

@end
