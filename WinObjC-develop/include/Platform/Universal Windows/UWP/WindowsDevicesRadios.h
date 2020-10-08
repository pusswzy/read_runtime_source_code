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

// WindowsDevicesRadios.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESRADIOSEXPORT
#define OBJCUWPWINDOWSDEVICESRADIOSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesRadios.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDRRadio;
@protocol WDRIRadioStatics, WDRIRadio;

// Windows.Devices.Radios.RadioState
enum _WDRRadioState {
    WDRRadioStateUnknown = 0,
    WDRRadioStateOn = 1,
    WDRRadioStateOff = 2,
    WDRRadioStateDisabled = 3,
};
typedef unsigned WDRRadioState;

// Windows.Devices.Radios.RadioKind
enum _WDRRadioKind {
    WDRRadioKindOther = 0,
    WDRRadioKindWiFi = 1,
    WDRRadioKindMobileBroadband = 2,
    WDRRadioKindBluetooth = 3,
    WDRRadioKindFM = 4,
};
typedef unsigned WDRRadioKind;

// Windows.Devices.Radios.RadioAccessStatus
enum _WDRRadioAccessStatus {
    WDRRadioAccessStatusUnspecified = 0,
    WDRRadioAccessStatusAllowed = 1,
    WDRRadioAccessStatusDeniedByUser = 2,
    WDRRadioAccessStatusDeniedBySystem = 3,
};
typedef unsigned WDRRadioAccessStatus;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Radios.Radio
#ifndef __WDRRadio_DEFINED__
#define __WDRRadio_DEFINED__

OBJCUWPWINDOWSDEVICESRADIOSEXPORT
@interface WDRRadio : RTObject
+ (void)getRadiosAsyncWithSuccess:(void (^)(NSArray* /* WDRRadio* */))success failure:(void (^)(NSError*))failure;
+ (NSString *)getDeviceSelector;
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDRRadio*))success failure:(void (^)(NSError*))failure;
+ (void)requestAccessAsyncWithSuccess:(void (^)(WDRRadioAccessStatus))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDRRadioKind kind;
@property (readonly) NSString * name;
@property (readonly) WDRRadioState state;
- (EventRegistrationToken)addStateChangedEvent:(void(^)(WDRRadio*, RTObject*))del;
- (void)removeStateChangedEvent:(EventRegistrationToken)tok;
- (void)setStateAsync:(WDRRadioState)value success:(void (^)(WDRRadioAccessStatus))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDRRadio_DEFINED__

