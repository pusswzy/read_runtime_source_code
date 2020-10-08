/*
 * Copyright (c) 2011, The Iconfactory. All rights reserved.
 * Copyright (c) Microsoft. All rights reserved.
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

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGColor.h>
#import <UIKit/UIKitExport.h>
#import <UIKit/UIImage.h>

@class CIColor;

UIKIT_EXPORT_CLASS
@interface UIColor : NSObject <NSCopying, NSObject, NSSecureCoding>

@property (nonatomic, readonly) CGColorRef CGColor NS_RETURNS_INNER_POINTER;
@property (readonly, nonatomic) CIColor* CIColor STUB_PROPERTY;

+ (UIColor*)blackColor;
+ (UIColor*)blueColor;
+ (UIColor*)brownColor;
+ (UIColor*)clearColor;
+ (UIColor*)colorWithCGColor:(CGColorRef)ref;
+ (UIColor*)colorWithCIColor:(CIColor*)ciColor STUB_METHOD;
+ (UIColor*)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
+ (UIColor*)colorWithPatternImage:(UIImage*)patternImage;
+ (UIColor*)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+ (UIColor*)colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
+ (UIColor*)cornflowerBlueColor;
+ (UIColor*)cyanColor;
+ (UIColor*)darkGrayColor;
+ (UIColor*)darkTextColor;
+ (UIColor*)grayColor;
+ (UIColor*)greenColor;
+ (UIColor*)groupTableViewBackgroundColor;
+ (UIColor*)lightGrayColor;
+ (UIColor*)lightTextColor;
+ (UIColor*)magentaColor;
+ (UIColor*)orangeColor;
+ (UIColor*)purpleColor;
+ (UIColor*)redColor;
+ (UIColor*)scrollViewTexturedBackgroundColor STUB_METHOD;
+ (UIColor*)underPageBackgroundColor STUB_METHOD;
+ (UIColor*)viewFlipsideBackgroundColor STUB_METHOD;
+ (UIColor*)whiteColor;
+ (UIColor*)yellowColor;
- (BOOL)getHue:(CGFloat*)hue saturation:(CGFloat*)saturation brightness:(CGFloat*)brightness alpha:(CGFloat*)alpha;
- (BOOL)getRed:(CGFloat*)red green:(CGFloat*)green blue:(CGFloat*)blue alpha:(CGFloat*)alpha;
- (BOOL)getWhite:(CGFloat*)white alpha:(CGFloat*)alpha;
- (UIColor*)colorWithAlphaComponent:(CGFloat)alpha;
- (UIColor*)initWithCGColor:(CGColorRef)cgColor;
- (UIColor*)initWithCIColor:(CIColor*)ciColor STUB_METHOD;
- (UIColor*)initWithHue:(CGFloat)hue saturation:(CGFloat)saturation brightness:(CGFloat)brightness alpha:(CGFloat)alpha;
- (UIColor*)initWithPatternImage:(UIImage*)image;
- (UIColor*)initWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (UIColor*)initWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
