//******************************************************************************
//
// Copyright (c) Microsoft. All rights reserved.
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

// WindowsApplicationModelLockScreen.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelLockScreen.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WALLockScreenInfo, WALLockScreenBadge, WALLockScreenUnlockingDeferral, WALLockApplicationHost, WALLockScreenUnlockingEventArgs;
@protocol WALILockScreenBadge, WALILockScreenInfo, WALILockScreenUnlockingDeferral, WALILockScreenUnlockingEventArgs, WALILockApplicationHost, WALILockApplicationHostStatics;

#include "WindowsStorageStreams.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.LockScreen.LockScreenInfo
#ifndef __WALLockScreenInfo_DEFINED__
#define __WALLockScreenInfo_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
@interface WALLockScreenInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIRandomAccessStream>* alarmIcon;
@property (readonly) NSArray* /* WALLockScreenBadge* */ badges;
@property (readonly) NSArray* /* NSString * */ detailText;
@property (readonly) RTObject<WSSIRandomAccessStream>* lockScreenImage;
- (EventRegistrationToken)addAlarmIconChangedEvent:(void(^)(WALLockScreenInfo*, RTObject*))del;
- (void)removeAlarmIconChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addBadgesChangedEvent:(void(^)(WALLockScreenInfo*, RTObject*))del;
- (void)removeBadgesChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDetailTextChangedEvent:(void(^)(WALLockScreenInfo*, RTObject*))del;
- (void)removeDetailTextChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLockScreenImageChangedEvent:(void(^)(WALLockScreenInfo*, RTObject*))del;
- (void)removeLockScreenImageChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WALLockScreenInfo_DEFINED__

// Windows.ApplicationModel.LockScreen.LockScreenBadge
#ifndef __WALLockScreenBadge_DEFINED__
#define __WALLockScreenBadge_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
@interface WALLockScreenBadge : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * automationName;
@property (readonly) RTObject<WSSIRandomAccessStream>* glyph;
@property (readonly) RTObject<WSSIRandomAccessStream>* logo;
@property (readonly) id /* unsigned int */ number;
- (void)launchApp;
@end

#endif // __WALLockScreenBadge_DEFINED__

// Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral
#ifndef __WALLockScreenUnlockingDeferral_DEFINED__
#define __WALLockScreenUnlockingDeferral_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
@interface WALLockScreenUnlockingDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WALLockScreenUnlockingDeferral_DEFINED__

// Windows.ApplicationModel.LockScreen.LockApplicationHost
#ifndef __WALLockApplicationHost_DEFINED__
#define __WALLockApplicationHost_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
@interface WALLockApplicationHost : RTObject
+ (WALLockApplicationHost*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addUnlockingEvent:(void(^)(WALLockApplicationHost*, WALLockScreenUnlockingEventArgs*))del;
- (void)removeUnlockingEvent:(EventRegistrationToken)tok;
- (void)requestUnlock;
@end

#endif // __WALLockApplicationHost_DEFINED__

// Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs
#ifndef __WALLockScreenUnlockingEventArgs_DEFINED__
#define __WALLockScreenUnlockingEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELLOCKSCREENEXPORT
@interface WALLockScreenUnlockingEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* deadline;
- (WALLockScreenUnlockingDeferral*)getDeferral;
@end

#endif // __WALLockScreenUnlockingEventArgs_DEFINED__

