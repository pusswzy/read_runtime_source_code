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

// WindowsDevicesPerception.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
#define OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesPerception.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDPPerceptionColorFrameSourceWatcher, WDPPerceptionColorFrameSourceAddedEventArgs, WDPPerceptionColorFrameSourceRemovedEventArgs, WDPPerceptionDepthFrameSourceWatcher, WDPPerceptionDepthFrameSourceAddedEventArgs, WDPPerceptionDepthFrameSourceRemovedEventArgs, WDPPerceptionInfraredFrameSourceWatcher, WDPPerceptionInfraredFrameSourceAddedEventArgs, WDPPerceptionInfraredFrameSourceRemovedEventArgs, WDPPerceptionColorFrameSource, WDPPerceptionDepthFrameSource, WDPPerceptionInfraredFrameSource, WDPPerceptionControlSession, WDPPerceptionFrameSourcePropertyChangeResult, WDPPerceptionFrameSourcePropertiesChangedEventArgs, WDPPerceptionVideoProfile, WDPPerceptionDepthCorrelatedCameraIntrinsics, WDPPerceptionDepthCorrelatedCoordinateMapper, WDPPerceptionColorFrameReader, WDPPerceptionDepthFrameReader, WDPPerceptionInfraredFrameReader, WDPPerceptionColorFrameArrivedEventArgs, WDPPerceptionColorFrame, WDPPerceptionDepthFrameArrivedEventArgs, WDPPerceptionDepthFrame, WDPPerceptionInfraredFrameArrivedEventArgs, WDPPerceptionInfraredFrame, WDPKnownPerceptionFrameSourceProperties, WDPKnownPerceptionVideoFrameSourceProperties, WDPKnownPerceptionInfraredFrameSourceProperties, WDPKnownPerceptionDepthFrameSourceProperties, WDPKnownPerceptionColorFrameSourceProperties, WDPKnownPerceptionVideoProfileProperties, WDPKnownCameraIntrinsicsProperties;
@protocol WDPIPerceptionColorFrameSourceWatcher, WDPIPerceptionDepthFrameSourceWatcher, WDPIPerceptionInfraredFrameSourceWatcher, WDPIPerceptionColorFrameSourceAddedEventArgs, WDPIPerceptionColorFrameSourceRemovedEventArgs, WDPIPerceptionDepthFrameSourceAddedEventArgs, WDPIPerceptionDepthFrameSourceRemovedEventArgs, WDPIPerceptionInfraredFrameSourceAddedEventArgs, WDPIPerceptionInfraredFrameSourceRemovedEventArgs, WDPIKnownPerceptionFrameSourcePropertiesStatics, WDPIKnownPerceptionFrameSourcePropertiesStatics2, WDPIKnownPerceptionVideoFrameSourcePropertiesStatics, WDPIKnownPerceptionInfraredFrameSourcePropertiesStatics, WDPIKnownPerceptionDepthFrameSourcePropertiesStatics, WDPIKnownPerceptionColorFrameSourcePropertiesStatics, WDPIKnownPerceptionVideoProfilePropertiesStatics, WDPIKnownCameraIntrinsicsPropertiesStatics, WDPIPerceptionFrameSourcePropertyChangeResult, WDPIPerceptionControlSession, WDPIPerceptionFrameSourcePropertiesChangedEventArgs, WDPIPerceptionInfraredFrameSourceStatics, WDPIPerceptionDepthFrameSourceStatics, WDPIPerceptionColorFrameSourceStatics, WDPIPerceptionColorFrameSource, WDPIPerceptionColorFrameSource2, WDPIPerceptionDepthFrameSource, WDPIPerceptionDepthFrameSource2, WDPIPerceptionInfraredFrameSource, WDPIPerceptionInfraredFrameSource2, WDPIPerceptionVideoProfile, WDPIPerceptionColorFrameReader, WDPIPerceptionDepthFrameReader, WDPIPerceptionInfraredFrameReader, WDPIPerceptionColorFrame, WDPIPerceptionDepthFrame, WDPIPerceptionInfraredFrame, WDPIPerceptionColorFrameArrivedEventArgs, WDPIPerceptionDepthFrameArrivedEventArgs, WDPIPerceptionInfraredFrameArrivedEventArgs, WDPIPerceptionDepthCorrelatedCameraIntrinsics, WDPIPerceptionDepthCorrelatedCoordinateMapper;

// Windows.Devices.Perception.PerceptionFrameSourceAccessStatus
enum _WDPPerceptionFrameSourceAccessStatus {
    WDPPerceptionFrameSourceAccessStatusUnspecified = 0,
    WDPPerceptionFrameSourceAccessStatusAllowed = 1,
    WDPPerceptionFrameSourceAccessStatusDeniedByUser = 2,
    WDPPerceptionFrameSourceAccessStatusDeniedBySystem = 3,
};
typedef unsigned WDPPerceptionFrameSourceAccessStatus;

// Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeStatus
enum _WDPPerceptionFrameSourcePropertyChangeStatus {
    WDPPerceptionFrameSourcePropertyChangeStatusUnknown = 0,
    WDPPerceptionFrameSourcePropertyChangeStatusAccepted = 1,
    WDPPerceptionFrameSourcePropertyChangeStatusLostControl = 2,
    WDPPerceptionFrameSourcePropertyChangeStatusPropertyNotSupported = 3,
    WDPPerceptionFrameSourcePropertyChangeStatusPropertyReadOnly = 4,
    WDPPerceptionFrameSourcePropertyChangeStatusValueOutOfRange = 5,
};
typedef unsigned WDPPerceptionFrameSourcePropertyChangeStatus;

#include "WindowsFoundationCollections.h"
#include "WindowsFoundation.h"
#include "WindowsMedia.h"
#include "WindowsMediaDevicesCore.h"
#include "WindowsDevicesEnumeration.h"
#include "WindowsFoundationNumerics.h"
#include "WindowsGraphicsImaging.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Perception.PerceptionColorFrameSourceWatcher
#ifndef __WDPPerceptionColorFrameSourceWatcher_DEFINED__
#define __WDPPerceptionColorFrameSourceWatcher_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameSourceWatcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceWatcherStatus status;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WDPPerceptionColorFrameSourceWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceAddedEvent:(void(^)(WDPPerceptionColorFrameSourceWatcher*, WDPPerceptionColorFrameSourceAddedEventArgs*))del;
- (void)removeSourceAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceRemovedEvent:(void(^)(WDPPerceptionColorFrameSourceWatcher*, WDPPerceptionColorFrameSourceRemovedEventArgs*))del;
- (void)removeSourceRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WDPPerceptionColorFrameSourceWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WDPPerceptionColorFrameSourceWatcher_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrameSourceAddedEventArgs
#ifndef __WDPPerceptionColorFrameSourceAddedEventArgs_DEFINED__
#define __WDPPerceptionColorFrameSourceAddedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameSourceAddedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionColorFrameSource* frameSource;
@end

#endif // __WDPPerceptionColorFrameSourceAddedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrameSourceRemovedEventArgs
#ifndef __WDPPerceptionColorFrameSourceRemovedEventArgs_DEFINED__
#define __WDPPerceptionColorFrameSourceRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameSourceRemovedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionColorFrameSource* frameSource;
@end

#endif // __WDPPerceptionColorFrameSourceRemovedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameSourceWatcher
#ifndef __WDPPerceptionDepthFrameSourceWatcher_DEFINED__
#define __WDPPerceptionDepthFrameSourceWatcher_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameSourceWatcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceWatcherStatus status;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WDPPerceptionDepthFrameSourceWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceAddedEvent:(void(^)(WDPPerceptionDepthFrameSourceWatcher*, WDPPerceptionDepthFrameSourceAddedEventArgs*))del;
- (void)removeSourceAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceRemovedEvent:(void(^)(WDPPerceptionDepthFrameSourceWatcher*, WDPPerceptionDepthFrameSourceRemovedEventArgs*))del;
- (void)removeSourceRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WDPPerceptionDepthFrameSourceWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WDPPerceptionDepthFrameSourceWatcher_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameSourceAddedEventArgs
#ifndef __WDPPerceptionDepthFrameSourceAddedEventArgs_DEFINED__
#define __WDPPerceptionDepthFrameSourceAddedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameSourceAddedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionDepthFrameSource* frameSource;
@end

#endif // __WDPPerceptionDepthFrameSourceAddedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameSourceRemovedEventArgs
#ifndef __WDPPerceptionDepthFrameSourceRemovedEventArgs_DEFINED__
#define __WDPPerceptionDepthFrameSourceRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameSourceRemovedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionDepthFrameSource* frameSource;
@end

#endif // __WDPPerceptionDepthFrameSourceRemovedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameSourceWatcher
#ifndef __WDPPerceptionInfraredFrameSourceWatcher_DEFINED__
#define __WDPPerceptionInfraredFrameSourceWatcher_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameSourceWatcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceWatcherStatus status;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WDPPerceptionInfraredFrameSourceWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceAddedEvent:(void(^)(WDPPerceptionInfraredFrameSourceWatcher*, WDPPerceptionInfraredFrameSourceAddedEventArgs*))del;
- (void)removeSourceAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceRemovedEvent:(void(^)(WDPPerceptionInfraredFrameSourceWatcher*, WDPPerceptionInfraredFrameSourceRemovedEventArgs*))del;
- (void)removeSourceRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WDPPerceptionInfraredFrameSourceWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WDPPerceptionInfraredFrameSourceWatcher_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameSourceAddedEventArgs
#ifndef __WDPPerceptionInfraredFrameSourceAddedEventArgs_DEFINED__
#define __WDPPerceptionInfraredFrameSourceAddedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameSourceAddedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionInfraredFrameSource* frameSource;
@end

#endif // __WDPPerceptionInfraredFrameSourceAddedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameSourceRemovedEventArgs
#ifndef __WDPPerceptionInfraredFrameSourceRemovedEventArgs_DEFINED__
#define __WDPPerceptionInfraredFrameSourceRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameSourceRemovedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDPPerceptionInfraredFrameSource* frameSource;
@end

#endif // __WDPPerceptionInfraredFrameSourceRemovedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrameSource
#ifndef __WDPPerceptionColorFrameSource_DEFINED__
#define __WDPPerceptionColorFrameSource_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameSource : RTObject
+ (WDPPerceptionColorFrameSourceWatcher*)createWatcher;
+ (void)findAllAsyncWithSuccess:(void (^)(NSArray* /* WDPPerceptionColorFrameSource* */))success failure:(void (^)(NSError*))failure;
+ (void)fromIdAsync:(NSString *)id success:(void (^)(WDPPerceptionColorFrameSource*))success failure:(void (^)(NSError*))failure;
+ (void)requestAccessAsyncWithSuccess:(void (^)(WDPPerceptionFrameSourceAccessStatus))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL active;
@property (readonly) BOOL available;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ availableVideoProfiles;
@property (readonly) WMDCCameraIntrinsics* cameraIntrinsics;
@property (readonly) NSString * deviceKind;
@property (readonly) NSString * displayName;
@property (readonly) NSString * id;
@property (readonly) BOOL isControlled;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ supportedVideoProfiles;
@property (readonly) WDPPerceptionVideoProfile* videoProfile;
@property (readonly) NSString * deviceId;
- (EventRegistrationToken)addActiveChangedEvent:(void(^)(WDPPerceptionColorFrameSource*, RTObject*))del;
- (void)removeActiveChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAvailableChangedEvent:(void(^)(WDPPerceptionColorFrameSource*, RTObject*))del;
- (void)removeAvailableChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCameraIntrinsicsChangedEvent:(void(^)(WDPPerceptionColorFrameSource*, RTObject*))del;
- (void)removeCameraIntrinsicsChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPropertiesChangedEvent:(void(^)(WDPPerceptionColorFrameSource*, WDPPerceptionFrameSourcePropertiesChangedEventArgs*))del;
- (void)removePropertiesChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVideoProfileChangedEvent:(void(^)(WDPPerceptionColorFrameSource*, RTObject*))del;
- (void)removeVideoProfileChangedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionControlSession*)acquireControlSession;
- (BOOL)canControlIndependentlyFrom:(NSString *)targetId;
- (BOOL)isCorrelatedWith:(NSString *)targetId;
- (BOOL)tryGetTransformTo:(NSString *)targetId result:(WFNMatrix4x4**)result;
- (void)tryGetDepthCorrelatedCameraIntrinsicsAsync:(WDPPerceptionDepthFrameSource*)correlatedDepthFrameSource success:(void (^)(WDPPerceptionDepthCorrelatedCameraIntrinsics*))success failure:(void (^)(NSError*))failure;
- (void)tryGetDepthCorrelatedCoordinateMapperAsync:(NSString *)targetSourceId correlatedDepthFrameSource:(WDPPerceptionDepthFrameSource*)correlatedDepthFrameSource success:(void (^)(WDPPerceptionDepthCorrelatedCoordinateMapper*))success failure:(void (^)(NSError*))failure;
- (void)trySetVideoProfileAsync:(WDPPerceptionControlSession*)controlSession profile:(WDPPerceptionVideoProfile*)profile success:(void (^)(WDPPerceptionFrameSourcePropertyChangeResult*))success failure:(void (^)(NSError*))failure;
- (WDPPerceptionColorFrameReader*)openReader;
@end

#endif // __WDPPerceptionColorFrameSource_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameSource
#ifndef __WDPPerceptionDepthFrameSource_DEFINED__
#define __WDPPerceptionDepthFrameSource_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameSource : RTObject
+ (WDPPerceptionDepthFrameSourceWatcher*)createWatcher;
+ (void)findAllAsyncWithSuccess:(void (^)(NSArray* /* WDPPerceptionDepthFrameSource* */))success failure:(void (^)(NSError*))failure;
+ (void)fromIdAsync:(NSString *)id success:(void (^)(WDPPerceptionDepthFrameSource*))success failure:(void (^)(NSError*))failure;
+ (void)requestAccessAsyncWithSuccess:(void (^)(WDPPerceptionFrameSourceAccessStatus))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL active;
@property (readonly) BOOL available;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ availableVideoProfiles;
@property (readonly) WMDCCameraIntrinsics* cameraIntrinsics;
@property (readonly) NSString * deviceKind;
@property (readonly) NSString * displayName;
@property (readonly) NSString * id;
@property (readonly) BOOL isControlled;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ supportedVideoProfiles;
@property (readonly) WDPPerceptionVideoProfile* videoProfile;
@property (readonly) NSString * deviceId;
- (EventRegistrationToken)addActiveChangedEvent:(void(^)(WDPPerceptionDepthFrameSource*, RTObject*))del;
- (void)removeActiveChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAvailableChangedEvent:(void(^)(WDPPerceptionDepthFrameSource*, RTObject*))del;
- (void)removeAvailableChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCameraIntrinsicsChangedEvent:(void(^)(WDPPerceptionDepthFrameSource*, RTObject*))del;
- (void)removeCameraIntrinsicsChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPropertiesChangedEvent:(void(^)(WDPPerceptionDepthFrameSource*, WDPPerceptionFrameSourcePropertiesChangedEventArgs*))del;
- (void)removePropertiesChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVideoProfileChangedEvent:(void(^)(WDPPerceptionDepthFrameSource*, RTObject*))del;
- (void)removeVideoProfileChangedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionControlSession*)acquireControlSession;
- (BOOL)canControlIndependentlyFrom:(NSString *)targetId;
- (BOOL)isCorrelatedWith:(NSString *)targetId;
- (BOOL)tryGetTransformTo:(NSString *)targetId result:(WFNMatrix4x4**)result;
- (void)tryGetDepthCorrelatedCameraIntrinsicsAsync:(WDPPerceptionDepthFrameSource*)target success:(void (^)(WDPPerceptionDepthCorrelatedCameraIntrinsics*))success failure:(void (^)(NSError*))failure;
- (void)tryGetDepthCorrelatedCoordinateMapperAsync:(NSString *)targetId depthFrameSourceToMapWith:(WDPPerceptionDepthFrameSource*)depthFrameSourceToMapWith success:(void (^)(WDPPerceptionDepthCorrelatedCoordinateMapper*))success failure:(void (^)(NSError*))failure;
- (void)trySetVideoProfileAsync:(WDPPerceptionControlSession*)controlSession profile:(WDPPerceptionVideoProfile*)profile success:(void (^)(WDPPerceptionFrameSourcePropertyChangeResult*))success failure:(void (^)(NSError*))failure;
- (WDPPerceptionDepthFrameReader*)openReader;
@end

#endif // __WDPPerceptionDepthFrameSource_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameSource
#ifndef __WDPPerceptionInfraredFrameSource_DEFINED__
#define __WDPPerceptionInfraredFrameSource_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameSource : RTObject
+ (WDPPerceptionInfraredFrameSourceWatcher*)createWatcher;
+ (void)findAllAsyncWithSuccess:(void (^)(NSArray* /* WDPPerceptionInfraredFrameSource* */))success failure:(void (^)(NSError*))failure;
+ (void)fromIdAsync:(NSString *)id success:(void (^)(WDPPerceptionInfraredFrameSource*))success failure:(void (^)(NSError*))failure;
+ (void)requestAccessAsyncWithSuccess:(void (^)(WDPPerceptionFrameSourceAccessStatus))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL active;
@property (readonly) BOOL available;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ availableVideoProfiles;
@property (readonly) WMDCCameraIntrinsics* cameraIntrinsics;
@property (readonly) NSString * deviceKind;
@property (readonly) NSString * displayName;
@property (readonly) NSString * id;
@property (readonly) BOOL isControlled;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) NSArray* /* WDPPerceptionVideoProfile* */ supportedVideoProfiles;
@property (readonly) WDPPerceptionVideoProfile* videoProfile;
@property (readonly) NSString * deviceId;
- (EventRegistrationToken)addActiveChangedEvent:(void(^)(WDPPerceptionInfraredFrameSource*, RTObject*))del;
- (void)removeActiveChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAvailableChangedEvent:(void(^)(WDPPerceptionInfraredFrameSource*, RTObject*))del;
- (void)removeAvailableChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCameraIntrinsicsChangedEvent:(void(^)(WDPPerceptionInfraredFrameSource*, RTObject*))del;
- (void)removeCameraIntrinsicsChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPropertiesChangedEvent:(void(^)(WDPPerceptionInfraredFrameSource*, WDPPerceptionFrameSourcePropertiesChangedEventArgs*))del;
- (void)removePropertiesChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVideoProfileChangedEvent:(void(^)(WDPPerceptionInfraredFrameSource*, RTObject*))del;
- (void)removeVideoProfileChangedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionControlSession*)acquireControlSession;
- (BOOL)canControlIndependentlyFrom:(NSString *)targetId;
- (BOOL)isCorrelatedWith:(NSString *)targetId;
- (BOOL)tryGetTransformTo:(NSString *)targetId result:(WFNMatrix4x4**)result;
- (void)tryGetDepthCorrelatedCameraIntrinsicsAsync:(WDPPerceptionDepthFrameSource*)target success:(void (^)(WDPPerceptionDepthCorrelatedCameraIntrinsics*))success failure:(void (^)(NSError*))failure;
- (void)tryGetDepthCorrelatedCoordinateMapperAsync:(NSString *)targetId depthFrameSourceToMapWith:(WDPPerceptionDepthFrameSource*)depthFrameSourceToMapWith success:(void (^)(WDPPerceptionDepthCorrelatedCoordinateMapper*))success failure:(void (^)(NSError*))failure;
- (void)trySetVideoProfileAsync:(WDPPerceptionControlSession*)controlSession profile:(WDPPerceptionVideoProfile*)profile success:(void (^)(WDPPerceptionFrameSourcePropertyChangeResult*))success failure:(void (^)(NSError*))failure;
- (WDPPerceptionInfraredFrameReader*)openReader;
@end

#endif // __WDPPerceptionInfraredFrameSource_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.Perception.PerceptionControlSession
#ifndef __WDPPerceptionControlSession_DEFINED__
#define __WDPPerceptionControlSession_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionControlSession : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addControlLostEvent:(void(^)(WDPPerceptionControlSession*, RTObject*))del;
- (void)removeControlLostEvent:(EventRegistrationToken)tok;
- (void)trySetPropertyAsync:(NSString *)name value:(RTObject*)value success:(void (^)(WDPPerceptionFrameSourcePropertyChangeResult*))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WDPPerceptionControlSession_DEFINED__

// Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeResult
#ifndef __WDPPerceptionFrameSourcePropertyChangeResult_DEFINED__
#define __WDPPerceptionFrameSourcePropertyChangeResult_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionFrameSourcePropertyChangeResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject* newValue __attribute__ ((ns_returns_not_retained));
@property (readonly) WDPPerceptionFrameSourcePropertyChangeStatus status;
@end

#endif // __WDPPerceptionFrameSourcePropertyChangeResult_DEFINED__

// Windows.Devices.Perception.PerceptionFrameSourcePropertiesChangedEventArgs
#ifndef __WDPPerceptionFrameSourcePropertiesChangedEventArgs_DEFINED__
#define __WDPPerceptionFrameSourcePropertiesChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionFrameSourcePropertiesChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFCCollectionChange collectionChange;
@property (readonly) NSString * key;
@end

#endif // __WDPPerceptionFrameSourcePropertiesChangedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionVideoProfile
#ifndef __WDPPerceptionVideoProfile_DEFINED__
#define __WDPPerceptionVideoProfile_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionVideoProfile : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WGIBitmapAlphaMode bitmapAlphaMode;
@property (readonly) WGIBitmapPixelFormat bitmapPixelFormat;
@property (readonly) WFTimeSpan* frameDuration;
@property (readonly) int height;
@property (readonly) int width;
- (BOOL)IsEqual:(WDPPerceptionVideoProfile*)other;
@end

#endif // __WDPPerceptionVideoProfile_DEFINED__

// Windows.Devices.Perception.PerceptionDepthCorrelatedCameraIntrinsics
#ifndef __WDPPerceptionDepthCorrelatedCameraIntrinsics_DEFINED__
#define __WDPPerceptionDepthCorrelatedCameraIntrinsics_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthCorrelatedCameraIntrinsics : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (WFNVector3*)unprojectPixelAtCorrelatedDepth:(WFPoint*)pixelCoordinate depthFrame:(WDPPerceptionDepthFrame*)depthFrame;
- (void)unprojectPixelsAtCorrelatedDepth:(NSArray* /* WFPoint* */)sourceCoordinates depthFrame:(WDPPerceptionDepthFrame*)depthFrame results:(NSArray* /* WFNVector3* */*)results;
- (RTObject<WFIAsyncAction>*)unprojectRegionPixelsAtCorrelatedDepthAsync:(WFRect*)region depthFrame:(WDPPerceptionDepthFrame*)depthFrame results:(NSArray* /* WFNVector3* */*)results;
- (RTObject<WFIAsyncAction>*)unprojectAllPixelsAtCorrelatedDepthAsync:(WDPPerceptionDepthFrame*)depthFrame results:(NSArray* /* WFNVector3* */*)results;
@end

#endif // __WDPPerceptionDepthCorrelatedCameraIntrinsics_DEFINED__

// Windows.Devices.Perception.PerceptionDepthCorrelatedCoordinateMapper
#ifndef __WDPPerceptionDepthCorrelatedCoordinateMapper_DEFINED__
#define __WDPPerceptionDepthCorrelatedCoordinateMapper_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthCorrelatedCoordinateMapper : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (WFPoint*)mapPixelToTarget:(WFPoint*)sourcePixelCoordinate depthFrame:(WDPPerceptionDepthFrame*)depthFrame;
- (void)mapPixelsToTarget:(NSArray* /* WFPoint* */)sourceCoordinates depthFrame:(WDPPerceptionDepthFrame*)depthFrame results:(NSArray* /* WFPoint* */*)results;
- (RTObject<WFIAsyncAction>*)mapRegionOfPixelsToTargetAsync:(WFRect*)region depthFrame:(WDPPerceptionDepthFrame*)depthFrame targetCoordinates:(NSArray* /* WFPoint* */*)targetCoordinates;
- (RTObject<WFIAsyncAction>*)mapAllPixelsToTargetAsync:(WDPPerceptionDepthFrame*)depthFrame targetCoordinates:(NSArray* /* WFPoint* */*)targetCoordinates;
@end

#endif // __WDPPerceptionDepthCorrelatedCoordinateMapper_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrameReader
#ifndef __WDPPerceptionColorFrameReader_DEFINED__
#define __WDPPerceptionColorFrameReader_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameReader : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isPaused;
@property (readonly) WDPPerceptionColorFrameSource* source;
- (EventRegistrationToken)addFrameArrivedEvent:(void(^)(WDPPerceptionColorFrameReader*, WDPPerceptionColorFrameArrivedEventArgs*))del;
- (void)removeFrameArrivedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionColorFrame*)tryReadLatestFrame;
- (void)close;
@end

#endif // __WDPPerceptionColorFrameReader_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameReader
#ifndef __WDPPerceptionDepthFrameReader_DEFINED__
#define __WDPPerceptionDepthFrameReader_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameReader : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isPaused;
@property (readonly) WDPPerceptionDepthFrameSource* source;
- (EventRegistrationToken)addFrameArrivedEvent:(void(^)(WDPPerceptionDepthFrameReader*, WDPPerceptionDepthFrameArrivedEventArgs*))del;
- (void)removeFrameArrivedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionDepthFrame*)tryReadLatestFrame;
- (void)close;
@end

#endif // __WDPPerceptionDepthFrameReader_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameReader
#ifndef __WDPPerceptionInfraredFrameReader_DEFINED__
#define __WDPPerceptionInfraredFrameReader_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameReader : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isPaused;
@property (readonly) WDPPerceptionInfraredFrameSource* source;
- (EventRegistrationToken)addFrameArrivedEvent:(void(^)(WDPPerceptionInfraredFrameReader*, WDPPerceptionInfraredFrameArrivedEventArgs*))del;
- (void)removeFrameArrivedEvent:(EventRegistrationToken)tok;
- (WDPPerceptionInfraredFrame*)tryReadLatestFrame;
- (void)close;
@end

#endif // __WDPPerceptionInfraredFrameReader_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrameArrivedEventArgs
#ifndef __WDPPerceptionColorFrameArrivedEventArgs_DEFINED__
#define __WDPPerceptionColorFrameArrivedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrameArrivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* relativeTime;
- (WDPPerceptionColorFrame*)tryOpenFrame;
@end

#endif // __WDPPerceptionColorFrameArrivedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionColorFrame
#ifndef __WDPPerceptionColorFrame_DEFINED__
#define __WDPPerceptionColorFrame_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionColorFrame : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMVideoFrame* videoFrame;
- (void)close;
@end

#endif // __WDPPerceptionColorFrame_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrameArrivedEventArgs
#ifndef __WDPPerceptionDepthFrameArrivedEventArgs_DEFINED__
#define __WDPPerceptionDepthFrameArrivedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrameArrivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* relativeTime;
- (WDPPerceptionDepthFrame*)tryOpenFrame;
@end

#endif // __WDPPerceptionDepthFrameArrivedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionDepthFrame
#ifndef __WDPPerceptionDepthFrame_DEFINED__
#define __WDPPerceptionDepthFrame_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionDepthFrame : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMVideoFrame* videoFrame;
- (void)close;
@end

#endif // __WDPPerceptionDepthFrame_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrameArrivedEventArgs
#ifndef __WDPPerceptionInfraredFrameArrivedEventArgs_DEFINED__
#define __WDPPerceptionInfraredFrameArrivedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrameArrivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* relativeTime;
- (WDPPerceptionInfraredFrame*)tryOpenFrame;
@end

#endif // __WDPPerceptionInfraredFrameArrivedEventArgs_DEFINED__

// Windows.Devices.Perception.PerceptionInfraredFrame
#ifndef __WDPPerceptionInfraredFrame_DEFINED__
#define __WDPPerceptionInfraredFrame_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPPerceptionInfraredFrame : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMVideoFrame* videoFrame;
- (void)close;
@end

#endif // __WDPPerceptionInfraredFrame_DEFINED__

// Windows.Devices.Perception.KnownPerceptionFrameSourceProperties
#ifndef __WDPKnownPerceptionFrameSourceProperties_DEFINED__
#define __WDPKnownPerceptionFrameSourceProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionFrameSourceProperties : RTObject
+ (NSString *)deviceModelVersion;
+ (NSString *)enclosureLocation;
+ (NSString *)frameKind;
+ (NSString *)id;
+ (NSString *)physicalDeviceIds;
+ (NSString *)deviceId;
@end

#endif // __WDPKnownPerceptionFrameSourceProperties_DEFINED__

// Windows.Devices.Perception.KnownPerceptionVideoFrameSourceProperties
#ifndef __WDPKnownPerceptionVideoFrameSourceProperties_DEFINED__
#define __WDPKnownPerceptionVideoFrameSourceProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionVideoFrameSourceProperties : RTObject
+ (NSString *)availableVideoProfiles;
+ (NSString *)cameraIntrinsics;
+ (NSString *)isMirrored;
+ (NSString *)supportedVideoProfiles;
+ (NSString *)videoProfile;
@end

#endif // __WDPKnownPerceptionVideoFrameSourceProperties_DEFINED__

// Windows.Devices.Perception.KnownPerceptionInfraredFrameSourceProperties
#ifndef __WDPKnownPerceptionInfraredFrameSourceProperties_DEFINED__
#define __WDPKnownPerceptionInfraredFrameSourceProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionInfraredFrameSourceProperties : RTObject
+ (NSString *)activeIlluminationEnabled;
+ (NSString *)ambientSubtractionEnabled;
+ (NSString *)autoExposureEnabled;
+ (NSString *)exposure;
+ (NSString *)exposureCompensation;
+ (NSString *)interleavedIlluminationEnabled;
+ (NSString *)structureLightPatternEnabled;
@end

#endif // __WDPKnownPerceptionInfraredFrameSourceProperties_DEFINED__

// Windows.Devices.Perception.KnownPerceptionDepthFrameSourceProperties
#ifndef __WDPKnownPerceptionDepthFrameSourceProperties_DEFINED__
#define __WDPKnownPerceptionDepthFrameSourceProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionDepthFrameSourceProperties : RTObject
+ (NSString *)maxDepth;
+ (NSString *)minDepth;
@end

#endif // __WDPKnownPerceptionDepthFrameSourceProperties_DEFINED__

// Windows.Devices.Perception.KnownPerceptionColorFrameSourceProperties
#ifndef __WDPKnownPerceptionColorFrameSourceProperties_DEFINED__
#define __WDPKnownPerceptionColorFrameSourceProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionColorFrameSourceProperties : RTObject
+ (NSString *)autoExposureEnabled;
+ (NSString *)exposure;
+ (NSString *)exposureCompensation;
@end

#endif // __WDPKnownPerceptionColorFrameSourceProperties_DEFINED__

// Windows.Devices.Perception.KnownPerceptionVideoProfileProperties
#ifndef __WDPKnownPerceptionVideoProfileProperties_DEFINED__
#define __WDPKnownPerceptionVideoProfileProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownPerceptionVideoProfileProperties : RTObject
+ (NSString *)bitmapAlphaMode;
+ (NSString *)bitmapPixelFormat;
+ (NSString *)frameDuration;
+ (NSString *)height;
+ (NSString *)width;
@end

#endif // __WDPKnownPerceptionVideoProfileProperties_DEFINED__

// Windows.Devices.Perception.KnownCameraIntrinsicsProperties
#ifndef __WDPKnownCameraIntrinsicsProperties_DEFINED__
#define __WDPKnownCameraIntrinsicsProperties_DEFINED__

OBJCUWPWINDOWSDEVICESPERCEPTIONEXPORT
@interface WDPKnownCameraIntrinsicsProperties : RTObject
+ (NSString *)focalLength;
+ (NSString *)principalPoint;
+ (NSString *)radialDistortion;
+ (NSString *)tangentialDistortion;
@end

#endif // __WDPKnownCameraIntrinsicsProperties_DEFINED__

