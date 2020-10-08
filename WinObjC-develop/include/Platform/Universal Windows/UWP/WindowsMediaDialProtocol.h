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

// WindowsMediaDialProtocol.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
#define OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaDialProtocol.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMDDialAppStateDetails, WMDDialApp, WMDDialDevice, WMDDialDeviceSelectedEventArgs, WMDDialDisconnectButtonClickedEventArgs, WMDDialDevicePickerFilter, WMDDialDevicePicker, WMDDialReceiverApp;
@protocol WMDIDialAppStateDetails, WMDIDialApp, WMDIDialDevice, WMDIDialDevice2, WMDIDialDeviceStatics, WMDIDialDeviceSelectedEventArgs, WMDIDialDisconnectButtonClickedEventArgs, WMDIDialDevicePickerFilter, WMDIDialDevicePicker, WMDIDialReceiverAppStatics, WMDIDialReceiverApp;

// Windows.Media.DialProtocol.DialAppState
enum _WMDDialAppState {
    WMDDialAppStateUnknown = 0,
    WMDDialAppStateStopped = 1,
    WMDDialAppStateRunning = 2,
    WMDDialAppStateNetworkFailure = 3,
};
typedef unsigned WMDDialAppState;

// Windows.Media.DialProtocol.DialAppLaunchResult
enum _WMDDialAppLaunchResult {
    WMDDialAppLaunchResultLaunched = 0,
    WMDDialAppLaunchResultFailedToLaunch = 1,
    WMDDialAppLaunchResultNotFound = 2,
    WMDDialAppLaunchResultNetworkFailure = 3,
};
typedef unsigned WMDDialAppLaunchResult;

// Windows.Media.DialProtocol.DialAppStopResult
enum _WMDDialAppStopResult {
    WMDDialAppStopResultStopped = 0,
    WMDDialAppStopResultStopFailed = 1,
    WMDDialAppStopResultOperationNotSupported = 2,
    WMDDialAppStopResultNetworkFailure = 3,
};
typedef unsigned WMDDialAppStopResult;

// Windows.Media.DialProtocol.DialDeviceDisplayStatus
enum _WMDDialDeviceDisplayStatus {
    WMDDialDeviceDisplayStatusNone = 0,
    WMDDialDeviceDisplayStatusConnecting = 1,
    WMDDialDeviceDisplayStatusConnected = 2,
    WMDDialDeviceDisplayStatusDisconnecting = 3,
    WMDDialDeviceDisplayStatusDisconnected = 4,
    WMDDialDeviceDisplayStatusError = 5,
};
typedef unsigned WMDDialDeviceDisplayStatus;

#include "WindowsDevicesEnumeration.h"
#include "WindowsStorageStreams.h"
#include "WindowsUIPopups.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Media.DialProtocol.DialAppStateDetails
#ifndef __WMDDialAppStateDetails_DEFINED__
#define __WMDDialAppStateDetails_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialAppStateDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * fullXml;
@property (readonly) WMDDialAppState state;
@end

#endif // __WMDDialAppStateDetails_DEFINED__

// Windows.Media.DialProtocol.DialApp
#ifndef __WMDDialApp_DEFINED__
#define __WMDDialApp_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialApp : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * appName;
- (void)requestLaunchAsync:(NSString *)appArgument success:(void (^)(WMDDialAppLaunchResult))success failure:(void (^)(NSError*))failure;
- (void)stopAsyncWithSuccess:(void (^)(WMDDialAppStopResult))success failure:(void (^)(NSError*))failure;
- (void)getAppStateAsyncWithSuccess:(void (^)(WMDDialAppStateDetails*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WMDDialApp_DEFINED__

// Windows.Media.DialProtocol.DialDevice
#ifndef __WMDDialDevice_DEFINED__
#define __WMDDialDevice_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialDevice : RTObject
+ (NSString *)getDeviceSelector:(NSString *)appName;
+ (void)fromIdAsync:(NSString *)value success:(void (^)(WMDDialDevice*))success failure:(void (^)(NSError*))failure;
+ (void)deviceInfoSupportsDialAsync:(WDEDeviceInformation*)device success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * id;
@property (readonly) NSString * friendlyName;
@property (readonly) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
- (WMDDialApp*)getDialApp:(NSString *)appName;
@end

#endif // __WMDDialDevice_DEFINED__

// Windows.Media.DialProtocol.DialDeviceSelectedEventArgs
#ifndef __WMDDialDeviceSelectedEventArgs_DEFINED__
#define __WMDDialDeviceSelectedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialDeviceSelectedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMDDialDevice* selectedDialDevice;
@end

#endif // __WMDDialDeviceSelectedEventArgs_DEFINED__

// Windows.Media.DialProtocol.DialDisconnectButtonClickedEventArgs
#ifndef __WMDDialDisconnectButtonClickedEventArgs_DEFINED__
#define __WMDDialDisconnectButtonClickedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialDisconnectButtonClickedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMDDialDevice* device;
@end

#endif // __WMDDialDisconnectButtonClickedEventArgs_DEFINED__

// Windows.Media.DialProtocol.DialDevicePickerFilter
#ifndef __WMDDialDevicePickerFilter_DEFINED__
#define __WMDDialDevicePickerFilter_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialDevicePickerFilter : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* NSString * */ supportedAppNames;
@end

#endif // __WMDDialDevicePickerFilter_DEFINED__

// Windows.Media.DialProtocol.DialDevicePicker
#ifndef __WMDDialDevicePicker_DEFINED__
#define __WMDDialDevicePicker_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialDevicePicker : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDevicePickerAppearance* appearance;
@property (readonly) WMDDialDevicePickerFilter* filter;
- (EventRegistrationToken)addDialDevicePickerDismissedEvent:(void(^)(WMDDialDevicePicker*, RTObject*))del;
- (void)removeDialDevicePickerDismissedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDialDeviceSelectedEvent:(void(^)(WMDDialDevicePicker*, WMDDialDeviceSelectedEventArgs*))del;
- (void)removeDialDeviceSelectedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDisconnectButtonClickedEvent:(void(^)(WMDDialDevicePicker*, WMDDialDisconnectButtonClickedEventArgs*))del;
- (void)removeDisconnectButtonClickedEvent:(EventRegistrationToken)tok;
- (void)show:(WFRect*)selection;
- (void)showWithPlacement:(WFRect*)selection preferredPlacement:(WUPPlacement)preferredPlacement;
- (void)pickSingleDialDeviceAsync:(WFRect*)selection success:(void (^)(WMDDialDevice*))success failure:(void (^)(NSError*))failure;
- (void)pickSingleDialDeviceAsyncWithPlacement:(WFRect*)selection preferredPlacement:(WUPPlacement)preferredPlacement success:(void (^)(WMDDialDevice*))success failure:(void (^)(NSError*))failure;
- (void)hide;
- (void)setDisplayStatus:(WMDDialDevice*)device status:(WMDDialDeviceDisplayStatus)status;
@end

#endif // __WMDDialDevicePicker_DEFINED__

// Windows.Media.DialProtocol.DialReceiverApp
#ifndef __WMDDialReceiverApp_DEFINED__
#define __WMDDialReceiverApp_DEFINED__

OBJCUWPWINDOWSMEDIADIALPROTOCOLEXPORT
@interface WMDDialReceiverApp : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WMDDialReceiverApp*)current;
- (void)getAdditionalDataAsyncWithSuccess:(void (^)(NSMutableDictionary* /* NSString *, NSString * */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)setAdditionalDataAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, NSString * > */)additionalData;
@end

#endif // __WMDDialReceiverApp_DEFINED__

