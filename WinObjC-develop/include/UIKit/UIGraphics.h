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

#import "UIKitExport.h"
#import "UIKitTypes.h"
#import "UIGeometry.h"
#import <ApplicationServices/ApplicationServices.h>

@class UIImage;

UIKIT_EXPORT void UIGraphicsPushContext(CGContextRef ctx);
UIKIT_EXPORT void UIGraphicsPopContext(void);
UIKIT_EXPORT CGContextRef UIGraphicsGetCurrentContext(void);

UIKIT_EXPORT CGFloat _UIGraphicsGetContextScaleFactor(CGContextRef ctx);

UIKIT_EXPORT void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
UIKIT_EXPORT void UIGraphicsBeginImageContext(CGSize size);
UIKIT_EXPORT UIImage* UIGraphicsGetImageFromCurrentImageContext(void);
UIKIT_EXPORT void UIGraphicsEndImageContext(void);

UIKIT_EXPORT void UIRectClip(CGRect rect);

UIKIT_EXPORT void UIRectFill(CGRect rect);
UIKIT_EXPORT void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);

UIKIT_EXPORT void UIRectFrame(CGRect rect);
UIKIT_EXPORT void UIRectFrameUsingBlendMode(CGRect rect, CGBlendMode blendMode);

UIKIT_EXPORT CTTextAlignment NSTextAlignmentToCTTextAlignment(NSTextAlignment nsTextAlignment);

UIKIT_EXPORT UIEdgeInsets UIEdgeInsetsFromString(NSString* string);
