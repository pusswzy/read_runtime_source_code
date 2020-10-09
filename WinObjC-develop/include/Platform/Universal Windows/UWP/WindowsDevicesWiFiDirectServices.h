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

// WindowsDevicesWiFiDirectServices.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
#define OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesWiFiDirectServices.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDWSWiFiDirectServiceProvisioningInfo, WDWSWiFiDirectServiceSession, WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs, WDWSWiFiDirectServiceRemotePortAddedEventArgs, WDWSWiFiDirectServiceSessionDeferredEventArgs, WDWSWiFiDirectServiceSessionRequest, WDWSWiFiDirectServiceSessionRequestedEventArgs, WDWSWiFiDirectServiceAdvertiser, WDWSWiFiDirectService;
@protocol WDWSIWiFiDirectServiceProvisioningInfo, WDWSIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs, WDWSIWiFiDirectServiceRemotePortAddedEventArgs, WDWSIWiFiDirectServiceSessionDeferredEventArgs, WDWSIWiFiDirectServiceSessionRequestedEventArgs, WDWSIWiFiDirectServiceSessionRequest, WDWSIWiFiDirectServiceAdvertiserFactory, WDWSIWiFiDirectServiceAdvertiser, WDWSIWiFiDirectServiceStatics, WDWSIWiFiDirectService, WDWSIWiFiDirectServiceSession;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceConfigurationMethod
enum _WDWSWiFiDirectServiceConfigurationMethod {
    WDWSWiFiDirectServiceConfigurationMethodDefault = 0,
    WDWSWiFiDirectServiceConfigurationMethodPinDisplay = 1,
    WDWSWiFiDirectServiceConfigurationMethodPinEntry = 2,
};
typedef unsigned WDWSWiFiDirectServiceConfigurationMethod;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceStatus
enum _WDWSWiFiDirectServiceStatus {
    WDWSWiFiDirectServiceStatusAvailable = 0,
    WDWSWiFiDirectServiceStatusBusy = 1,
    WDWSWiFiDirectServiceStatusCustom = 2,
};
typedef unsigned WDWSWiFiDirectServiceStatus;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionStatus
enum _WDWSWiFiDirectServiceSessionStatus {
    WDWSWiFiDirectServiceSessionStatusClosed = 0,
    WDWSWiFiDirectServiceSessionStatusInitiated = 1,
    WDWSWiFiDirectServiceSessionStatusRequested = 2,
    WDWSWiFiDirectServiceSessionStatusOpen = 3,
};
typedef unsigned WDWSWiFiDirectServiceSessionStatus;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionErrorStatus
enum _WDWSWiFiDirectServiceSessionErrorStatus {
    WDWSWiFiDirectServiceSessionErrorStatusOk = 0,
    WDWSWiFiDirectServiceSessionErrorStatusDisassociated = 1,
    WDWSWiFiDirectServiceSessionErrorStatusLocalClose = 2,
    WDWSWiFiDirectServiceSessionErrorStatusRemoteClose = 3,
    WDWSWiFiDirectServiceSessionErrorStatusSystemFailure = 4,
    WDWSWiFiDirectServiceSessionErrorStatusNoResponseFromRemote = 5,
};
typedef unsigned WDWSWiFiDirectServiceSessionErrorStatus;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertisementStatus
enum _WDWSWiFiDirectServiceAdvertisementStatus {
    WDWSWiFiDirectServiceAdvertisementStatusCreated = 0,
    WDWSWiFiDirectServiceAdvertisementStatusStarted = 1,
    WDWSWiFiDirectServiceAdvertisementStatusStopped = 2,
    WDWSWiFiDirectServiceAdvertisementStatusAborted = 3,
};
typedef unsigned WDWSWiFiDirectServiceAdvertisementStatus;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceError
enum _WDWSWiFiDirectServiceError {
    WDWSWiFiDirectServiceErrorSuccess = 0,
    WDWSWiFiDirectServiceErrorRadioNotAvailable = 1,
    WDWSWiFiDirectServiceErrorResourceInUse = 2,
    WDWSWiFiDirectServiceErrorUnsupportedHardware = 3,
    WDWSWiFiDirectServiceErrorNoHardware = 4,
};
typedef unsigned WDWSWiFiDirectServiceError;

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceIPProtocol
enum _WDWSWiFiDirectServiceIPProtocol {
    WDWSWiFiDirectServiceIPProtocolTcp = 6,
    WDWSWiFiDirectServiceIPProtocolUdp = 17,
};
typedef unsigned WDWSWiFiDirectServiceIPProtocol;

#include "WindowsStorageStreams.h"
#include "WindowsNetworkingSockets.h"
#include "WindowsNetworking.h"
#include "WindowsFoundation.h"
#include "WindowsDevicesEnumeration.h"

#import <Foundation/Foundation.h>

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceProvisioningInfo
#ifndef __WDWSWiFiDirectServiceProvisioningInfo_DEFINED__
#define __WDWSWiFiDirectServiceProvisioningInfo_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceProvisioningInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isGroupFormationNeeded;
@property (readonly) WDWSWiFiDirectServiceConfigurationMethod selectedConfigurationMethod;
@end

#endif // __WDWSWiFiDirectServiceProvisioningInfo_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSession
#ifndef __WDWSWiFiDirectServiceSession_DEFINED__
#define __WDWSWiFiDirectServiceSession_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceSession : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int advertisementId;
@property (readonly) WDWSWiFiDirectServiceSessionErrorStatus errorStatus;
@property (readonly) NSString * serviceAddress;
@property (readonly) NSString * serviceName;
@property (readonly) NSString * sessionAddress;
@property (readonly) unsigned int sessionId;
@property (readonly) WDWSWiFiDirectServiceSessionStatus status;
- (EventRegistrationToken)addRemotePortAddedEvent:(void(^)(WDWSWiFiDirectServiceSession*, WDWSWiFiDirectServiceRemotePortAddedEventArgs*))del;
- (void)removeRemotePortAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSessionStatusChangedEvent:(void(^)(WDWSWiFiDirectServiceSession*, RTObject*))del;
- (void)removeSessionStatusChangedEvent:(EventRegistrationToken)tok;
- (NSArray* /* WNEndpointPair* */)getConnectionEndpointPairs;
- (RTObject<WFIAsyncAction>*)addStreamSocketListenerAsync:(WNSStreamSocketListener*)value;
- (RTObject<WFIAsyncAction>*)addDatagramSocketAsync:(WNSDatagramSocket*)value;
- (void)close;
@end

#endif // __WDWSWiFiDirectServiceSession_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAutoAcceptSessionConnectedEventArgs
#ifndef __WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs_DEFINED__
#define __WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDWSWiFiDirectServiceSession* session;
@property (readonly) RTObject<WSSIBuffer>* sessionInfo;
@end

#endif // __WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceRemotePortAddedEventArgs
#ifndef __WDWSWiFiDirectServiceRemotePortAddedEventArgs_DEFINED__
#define __WDWSWiFiDirectServiceRemotePortAddedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceRemotePortAddedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNEndpointPair* */ endpointPairs;
@property (readonly) WDWSWiFiDirectServiceIPProtocol protocol;
@end

#endif // __WDWSWiFiDirectServiceRemotePortAddedEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionDeferredEventArgs
#ifndef __WDWSWiFiDirectServiceSessionDeferredEventArgs_DEFINED__
#define __WDWSWiFiDirectServiceSessionDeferredEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceSessionDeferredEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* deferredSessionInfo;
@end

#endif // __WDWSWiFiDirectServiceSessionDeferredEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequest
#ifndef __WDWSWiFiDirectServiceSessionRequest_DEFINED__
#define __WDWSWiFiDirectServiceSessionRequest_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceSessionRequest : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceInformation* deviceInformation;
@property (readonly) WDWSWiFiDirectServiceProvisioningInfo* provisioningInfo;
@property (readonly) RTObject<WSSIBuffer>* sessionInfo;
- (void)close;
@end

#endif // __WDWSWiFiDirectServiceSessionRequest_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequestedEventArgs
#ifndef __WDWSWiFiDirectServiceSessionRequestedEventArgs_DEFINED__
#define __WDWSWiFiDirectServiceSessionRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceSessionRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (WDWSWiFiDirectServiceSessionRequest*)getSessionRequest;
@end

#endif // __WDWSWiFiDirectServiceSessionRequestedEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertiser
#ifndef __WDWSWiFiDirectServiceAdvertiser_DEFINED__
#define __WDWSWiFiDirectServiceAdvertiser_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectServiceAdvertiser : RTObject
+ (WDWSWiFiDirectServiceAdvertiser*)makeWiFiDirectServiceAdvertiser:(NSString *)serviceName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WDWSWiFiDirectServiceStatus serviceStatus;
@property (retain) RTObject<WSSIBuffer>* serviceInfo;
@property BOOL preferGroupOwnerMode;
@property (retain) RTObject<WSSIBuffer>* deferredSessionInfo;
@property unsigned int customServiceStatusCode;
@property BOOL autoAcceptSession;
@property (readonly) WDWSWiFiDirectServiceError serviceError;
@property (readonly) NSMutableArray* /* WDWSWiFiDirectServiceConfigurationMethod */ preferredConfigurationMethods;
@property (readonly) NSString * serviceName;
@property (readonly) NSMutableArray* /* NSString * */ serviceNamePrefixes;
@property (readonly) WDWSWiFiDirectServiceAdvertisementStatus advertisementStatus;
- (EventRegistrationToken)addAdvertisementStatusChangedEvent:(void(^)(WDWSWiFiDirectServiceAdvertiser*, RTObject*))del;
- (void)removeAdvertisementStatusChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAutoAcceptSessionConnectedEvent:(void(^)(WDWSWiFiDirectServiceAdvertiser*, WDWSWiFiDirectServiceAutoAcceptSessionConnectedEventArgs*))del;
- (void)removeAutoAcceptSessionConnectedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSessionRequestedEvent:(void(^)(WDWSWiFiDirectServiceAdvertiser*, WDWSWiFiDirectServiceSessionRequestedEventArgs*))del;
- (void)removeSessionRequestedEvent:(EventRegistrationToken)tok;
- (void)connectAsync:(WDEDeviceInformation*)deviceInfo success:(void (^)(WDWSWiFiDirectServiceSession*))success failure:(void (^)(NSError*))failure;
- (void)connectAsyncWithPin:(WDEDeviceInformation*)deviceInfo pin:(NSString *)pin success:(void (^)(WDWSWiFiDirectServiceSession*))success failure:(void (^)(NSError*))failure;
- (void)start;
- (void)stop;
@end

#endif // __WDWSWiFiDirectServiceAdvertiser_DEFINED__

// Windows.Devices.WiFiDirect.Services.WiFiDirectService
#ifndef __WDWSWiFiDirectService_DEFINED__
#define __WDWSWiFiDirectService_DEFINED__

OBJCUWPWINDOWSDEVICESWIFIDIRECTSERVICESEXPORT
@interface WDWSWiFiDirectService : RTObject
+ (NSString *)getSelector:(NSString *)serviceName;
+ (NSString *)getSelectorWithFilter:(NSString *)serviceName serviceInfoFilter:(RTObject<WSSIBuffer>*)serviceInfoFilter;
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDWSWiFiDirectService*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject<WSSIBuffer>* sessionInfo;
@property BOOL preferGroupOwnerMode;
@property (readonly) RTObject<WSSIBuffer>* remoteServiceInfo;
@property (readonly) WDWSWiFiDirectServiceError serviceError;
@property (readonly) NSArray* /* WDWSWiFiDirectServiceConfigurationMethod */ supportedConfigurationMethods;
- (EventRegistrationToken)addSessionDeferredEvent:(void(^)(WDWSWiFiDirectService*, WDWSWiFiDirectServiceSessionDeferredEventArgs*))del;
- (void)removeSessionDeferredEvent:(EventRegistrationToken)tok;
- (void)getProvisioningInfoAsync:(WDWSWiFiDirectServiceConfigurationMethod)selectedConfigurationMethod success:(void (^)(WDWSWiFiDirectServiceProvisioningInfo*))success failure:(void (^)(NSError*))failure;
- (void)connectAsyncWithSuccess:(void (^)(WDWSWiFiDirectServiceSession*))success failure:(void (^)(NSError*))failure;
- (void)connectAsyncWithPin:(NSString *)pin success:(void (^)(WDWSWiFiDirectServiceSession*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDWSWiFiDirectService_DEFINED__

