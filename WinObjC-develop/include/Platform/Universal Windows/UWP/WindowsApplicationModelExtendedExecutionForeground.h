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

// WindowsApplicationModelExtendedExecutionForeground.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELEXTENDEDEXECUTIONFOREGROUNDEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELEXTENDEDEXECUTIONFOREGROUNDEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelExtendedExecutionForeground.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WAEFExtendedExecutionForegroundRevokedEventArgs, WAEFExtendedExecutionForegroundSession;
@protocol WAEFIExtendedExecutionForegroundRevokedEventArgs, WAEFIExtendedExecutionForegroundSession;

// Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundResult
enum _WAEFExtendedExecutionForegroundResult {
    WAEFExtendedExecutionForegroundResultAllowed = 0,
    WAEFExtendedExecutionForegroundResultDenied = 1,
};
typedef unsigned WAEFExtendedExecutionForegroundResult;

// Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedReason
enum _WAEFExtendedExecutionForegroundRevokedReason {
    WAEFExtendedExecutionForegroundRevokedReasonResumed = 0,
    WAEFExtendedExecutionForegroundRevokedReasonSystemPolicy = 1,
};
typedef unsigned WAEFExtendedExecutionForegroundRevokedReason;

// Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundReason
enum _WAEFExtendedExecutionForegroundReason {
    WAEFExtendedExecutionForegroundReasonUnspecified = 0,
    WAEFExtendedExecutionForegroundReasonSavingData = 1,
    WAEFExtendedExecutionForegroundReasonBackgroundAudio = 2,
    WAEFExtendedExecutionForegroundReasonUnconstrained = 3,
};
typedef unsigned WAEFExtendedExecutionForegroundReason;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedEventArgs
#ifndef __WAEFExtendedExecutionForegroundRevokedEventArgs_DEFINED__
#define __WAEFExtendedExecutionForegroundRevokedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELEXTENDEDEXECUTIONFOREGROUNDEXPORT
@interface WAEFExtendedExecutionForegroundRevokedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WAEFExtendedExecutionForegroundRevokedReason reason;
@end

#endif // __WAEFExtendedExecutionForegroundRevokedEventArgs_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSAPPLICATIONMODELEXTENDEDEXECUTIONFOREGROUNDEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundSession
#ifndef __WAEFExtendedExecutionForegroundSession_DEFINED__
#define __WAEFExtendedExecutionForegroundSession_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELEXTENDEDEXECUTIONFOREGROUNDEXPORT
@interface WAEFExtendedExecutionForegroundSession : RTObject <WFIClosable>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WAEFExtendedExecutionForegroundReason reason;
@property (retain) NSString * Description;
- (EventRegistrationToken)addRevokedEvent:(void(^)(RTObject*, WAEFExtendedExecutionForegroundRevokedEventArgs*))del;
- (void)removeRevokedEvent:(EventRegistrationToken)tok;
- (void)requestExtensionAsyncWithSuccess:(void (^)(WAEFExtendedExecutionForegroundResult))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WAEFExtendedExecutionForegroundSession_DEFINED__

