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

#import <Foundation/Foundation.h>
#import <ApplicationServices/ApplicationServices.h>
#import <UIKit/UIKitExport.h>

UIKIT_EXPORT NSString* const UIScreenDidConnectNotification;
UIKIT_EXPORT NSString* const UIScreenDidDisconnectNotification;
UIKIT_EXPORT NSString* const UIScreenModeDidChangeNotification;
UIKIT_EXPORT NSString* const UIScreenBrightnessDidChangeNotification;

@class CALayer;
@class CADisplayLink;
@class UIImageView;
@class UIKitView;
@class UIScreenMode;
@class UIPopoverController;
@class UIView;

UIKIT_EXPORT_CLASS
@interface UIScreen : NSObject

+ (UIScreen*)mainScreen;
+ (NSArray*)screens;

@property (nonatomic, readonly) CGRect bounds;
@property (nonatomic, readonly) CGRect nativeBounds;
@property (nonatomic, readonly) CGRect applicationFrame;
@property (nonatomic, readonly, copy) NSArray* availableModes STUB_PROPERTY; // only ever returns the currentMode
@property (nonatomic, retain) UIScreenMode* currentMode STUB_PROPERTY; // ignores any attempt to set this
@property (nonatomic, readonly) CGFloat scale;
@property (nonatomic, readonly) CGFloat nativeScale;
@property (nonatomic, readonly) CGFloat brightness;
@property (nonatomic, readonly, retain) UIScreenMode* preferredMode STUB_PROPERTY;

- (CADisplayLink*)displayLinkWithTarget:(id)target selector:(SEL)sel;
- (UIView*)snapshotViewAfterScreenUpdates:(BOOL)afterUpdates STUB_METHOD;

@end
