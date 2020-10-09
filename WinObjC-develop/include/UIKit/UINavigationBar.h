/*
* Copyright (c) 2011, The Iconfactory. All rights reserved.
*
* Copyright (c) 2015 Microsoft Corporation. All rights reserved.
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

#import <UIKit/UIToolbar.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UIColor, UINavigationItem, UINavigationBar;

UIKIT_EXPORT_CLASS
@interface UINavigationBar : UIView

- (void)setItems:(NSArray*)items animated:(BOOL)animated;
- (void)pushNavigationItem:(UINavigationItem*)item animated:(BOOL)animated;
- (void)popNavigationItemAnimated:(BOOL)animated;
- (void)setBackgroundImage:(UIImage*)backgroundImage forBarMetrics:(UIBarMetrics)barMetrics;
- (void)setBackgroundImage:(UIImage*)backgroundImage forBarPosition:(NSInteger)position barMetrics:(UIBarMetrics)barMetrics;
- (void)setTitleVerticalPositionAdjustment:(CGFloat)adjustment forBarMetrics:(UIBarMetrics)barMetrics STUB_METHOD;
- (CGFloat)titleVerticalPositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics STUB_METHOD;

@property (nonatomic, retain) UIColor* barTintColor;
@property (nonatomic, assign) UIBarStyle barStyle;
@property (nonatomic, retain) UIColor* tintColor STUB_PROPERTY;
@property (nonatomic, readonly, retain) UINavigationItem* topItem;
@property (nonatomic, readonly, retain) UINavigationItem* backItem;
@property (nonatomic, copy) NSArray* items;
@property (nonatomic, assign) id<UINavigationBarDelegate> delegate;
@property (nonatomic, assign, getter=isTranslucent) BOOL translucent STUB_PROPERTY;
@property (nonatomic, retain) UIImage* shadowImage;
@property (nonatomic, copy) NSDictionary* titleTextAttributes STUB_PROPERTY;
@property (nonatomic, retain) UIImage* backIndicatorImage STUB_PROPERTY;
@property (nonatomic, retain) UIImage* backIndicatorTransitionMaskImage;

@end
