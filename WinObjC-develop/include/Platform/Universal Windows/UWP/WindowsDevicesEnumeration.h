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

// WindowsDevicesEnumeration.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDEDeviceConnectionChangeTriggerDetails, WDEDevicePickerAppearance, WDEDeviceSelectedEventArgs, WDEDeviceDisconnectButtonClickedEventArgs, WDEDevicePickerFilter, WDEDevicePicker, WDEDeviceThumbnail, WDEEnclosureLocation, WDEDeviceInformationUpdate, WDEDeviceInformationCollection, WDEDeviceWatcher, WDEDeviceInformation, WDEDevicePairingResult, WDEDeviceUnpairingResult, WDEDevicePairingRequestedEventArgs, WDEDeviceInformationCustomPairing, WDEDeviceInformationPairing, WDEDeviceAccessChangedEventArgs, WDEDeviceAccessInformation, WDEDeviceWatcherEvent, WDEDeviceWatcherTriggerDetails;
@protocol WDEIDeviceConnectionChangeTriggerDetails, WDEIDevicePickerAppearance, WDEIDeviceSelectedEventArgs, WDEIDeviceDisconnectButtonClickedEventArgs, WDEIDevicePickerFilter, WDEIDevicePicker, WDEIEnclosureLocation, WDEIEnclosureLocation2, WDEIDeviceInformationUpdate, WDEIDeviceInformationUpdate2, WDEIDeviceWatcher, WDEIDeviceWatcher2, WDEIDeviceInformationStatics, WDEIDeviceInformationStatics2, WDEIDeviceInformation, WDEIDevicePairingResult, WDEIDeviceUnpairingResult, WDEIDevicePairingSettings, WDEIDevicePairingRequestedEventArgs, WDEIDeviceInformationCustomPairing, WDEIDeviceInformationPairing, WDEIDeviceInformationPairing2, WDEIDeviceInformationPairingStatics, WDEIDeviceInformation2, WDEIDeviceAccessChangedEventArgs, WDEIDeviceAccessChangedEventArgs2, WDEIDeviceAccessInformation, WDEIDeviceAccessInformationStatics, WDEIDeviceWatcherEvent, WDEIDeviceWatcherTriggerDetails;

// Windows.Devices.Enumeration.DevicePickerDisplayStatusOptions
enum _WDEDevicePickerDisplayStatusOptions {
    WDEDevicePickerDisplayStatusOptionsNone = 0,
    WDEDevicePickerDisplayStatusOptionsShowProgress = 1,
    WDEDevicePickerDisplayStatusOptionsShowDisconnectButton = 2,
    WDEDevicePickerDisplayStatusOptionsShowRetryButton = 4,
};
typedef unsigned WDEDevicePickerDisplayStatusOptions;

// Windows.Devices.Enumeration.DeviceClass
enum _WDEDeviceClass {
    WDEDeviceClassAll = 0,
    WDEDeviceClassAudioCapture = 1,
    WDEDeviceClassAudioRender = 2,
    WDEDeviceClassPortableStorageDevice = 3,
    WDEDeviceClassVideoCapture = 4,
    WDEDeviceClassImageScanner = 5,
    WDEDeviceClassLocation = 6,
};
typedef unsigned WDEDeviceClass;

// Windows.Devices.Enumeration.DeviceWatcherStatus
enum _WDEDeviceWatcherStatus {
    WDEDeviceWatcherStatusCreated = 0,
    WDEDeviceWatcherStatusStarted = 1,
    WDEDeviceWatcherStatusEnumerationCompleted = 2,
    WDEDeviceWatcherStatusStopping = 3,
    WDEDeviceWatcherStatusStopped = 4,
    WDEDeviceWatcherStatusAborted = 5,
};
typedef unsigned WDEDeviceWatcherStatus;

// Windows.Devices.Enumeration.Panel
enum _WDEPanel {
    WDEPanelUnknown = 0,
    WDEPanelFront = 1,
    WDEPanelBack = 2,
    WDEPanelTop = 3,
    WDEPanelBottom = 4,
    WDEPanelLeft = 5,
    WDEPanelRight = 6,
};
typedef unsigned WDEPanel;

// Windows.Devices.Enumeration.DeviceInformationKind
enum _WDEDeviceInformationKind {
    WDEDeviceInformationKindUnknown = 0,
    WDEDeviceInformationKindDeviceInterface = 1,
    WDEDeviceInformationKindDeviceContainer = 2,
    WDEDeviceInformationKindDevice = 3,
    WDEDeviceInformationKindDeviceInterfaceClass = 4,
    WDEDeviceInformationKindAssociationEndpoint = 5,
    WDEDeviceInformationKindAssociationEndpointContainer = 6,
    WDEDeviceInformationKindAssociationEndpointService = 7,
};
typedef unsigned WDEDeviceInformationKind;

// Windows.Devices.Enumeration.DeviceWatcherEventKind
enum _WDEDeviceWatcherEventKind {
    WDEDeviceWatcherEventKindAdd = 0,
    WDEDeviceWatcherEventKindUpdate = 1,
    WDEDeviceWatcherEventKindRemove = 2,
};
typedef unsigned WDEDeviceWatcherEventKind;

// Windows.Devices.Enumeration.DevicePairingKinds
enum _WDEDevicePairingKinds {
    WDEDevicePairingKindsNone = 0,
    WDEDevicePairingKindsConfirmOnly = 1,
    WDEDevicePairingKindsDisplayPin = 2,
    WDEDevicePairingKindsProvidePin = 4,
    WDEDevicePairingKindsConfirmPinMatch = 8,
};
typedef unsigned WDEDevicePairingKinds;

// Windows.Devices.Enumeration.DevicePairingResultStatus
enum _WDEDevicePairingResultStatus {
    WDEDevicePairingResultStatusPaired = 0,
    WDEDevicePairingResultStatusNotReadyToPair = 1,
    WDEDevicePairingResultStatusNotPaired = 2,
    WDEDevicePairingResultStatusAlreadyPaired = 3,
    WDEDevicePairingResultStatusConnectionRejected = 4,
    WDEDevicePairingResultStatusTooManyConnections = 5,
    WDEDevicePairingResultStatusHardwareFailure = 6,
    WDEDevicePairingResultStatusAuthenticationTimeout = 7,
    WDEDevicePairingResultStatusAuthenticationNotAllowed = 8,
    WDEDevicePairingResultStatusAuthenticationFailure = 9,
    WDEDevicePairingResultStatusNoSupportedProfiles = 10,
    WDEDevicePairingResultStatusProtectionLevelCouldNotBeMet = 11,
    WDEDevicePairingResultStatusAccessDenied = 12,
    WDEDevicePairingResultStatusInvalidCeremonyData = 13,
    WDEDevicePairingResultStatusPairingCanceled = 14,
    WDEDevicePairingResultStatusOperationAlreadyInProgress = 15,
    WDEDevicePairingResultStatusRequiredHandlerNotRegistered = 16,
    WDEDevicePairingResultStatusRejectedByHandler = 17,
    WDEDevicePairingResultStatusRemoteDeviceHasAssociation = 18,
    WDEDevicePairingResultStatusFailed = 19,
};
typedef unsigned WDEDevicePairingResultStatus;

// Windows.Devices.Enumeration.DeviceUnpairingResultStatus
enum _WDEDeviceUnpairingResultStatus {
    WDEDeviceUnpairingResultStatusUnpaired = 0,
    WDEDeviceUnpairingResultStatusAlreadyUnpaired = 1,
    WDEDeviceUnpairingResultStatusOperationAlreadyInProgress = 2,
    WDEDeviceUnpairingResultStatusAccessDenied = 3,
    WDEDeviceUnpairingResultStatusFailed = 4,
};
typedef unsigned WDEDeviceUnpairingResultStatus;

// Windows.Devices.Enumeration.DevicePairingProtectionLevel
enum _WDEDevicePairingProtectionLevel {
    WDEDevicePairingProtectionLevelDefault = 0,
    WDEDevicePairingProtectionLevelNone = 1,
    WDEDevicePairingProtectionLevelEncryption = 2,
    WDEDevicePairingProtectionLevelEncryptionAndAuthentication = 3,
};
typedef unsigned WDEDevicePairingProtectionLevel;

// Windows.Devices.Enumeration.DeviceAccessStatus
enum _WDEDeviceAccessStatus {
    WDEDeviceAccessStatusUnspecified = 0,
    WDEDeviceAccessStatusAllowed = 1,
    WDEDeviceAccessStatusDeniedByUser = 2,
    WDEDeviceAccessStatusDeniedBySystem = 3,
};
typedef unsigned WDEDeviceAccessStatus;

#include "WindowsUI.h"
#include "WindowsUIPopups.h"
#include "WindowsFoundation.h"
#include "WindowsApplicationModelBackground.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Enumeration.IDevicePairingSettings
#ifndef __WDEIDevicePairingSettings_DEFINED__
#define __WDEIDevicePairingSettings_DEFINED__

@protocol WDEIDevicePairingSettings
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEIDevicePairingSettings : RTObject <WDEIDevicePairingSettings>
@end

#endif // __WDEIDevicePairingSettings_DEFINED__

// Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails
#ifndef __WDEDeviceConnectionChangeTriggerDetails_DEFINED__
#define __WDEDeviceConnectionChangeTriggerDetails_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceConnectionChangeTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@end

#endif // __WDEDeviceConnectionChangeTriggerDetails_DEFINED__

// Windows.Devices.Enumeration.DevicePickerAppearance
#ifndef __WDEDevicePickerAppearance_DEFINED__
#define __WDEDevicePickerAppearance_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDevicePickerAppearance : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * title;
@property (retain) WUColor* selectedForegroundColor;
@property (retain) WUColor* selectedBackgroundColor;
@property (retain) WUColor* selectedAccentColor;
@property (retain) WUColor* foregroundColor;
@property (retain) WUColor* backgroundColor;
@property (retain) WUColor* accentColor;
@end

#endif // __WDEDevicePickerAppearance_DEFINED__

// Windows.Devices.Enumeration.DeviceSelectedEventArgs
#ifndef __WDEDeviceSelectedEventArgs_DEFINED__
#define __WDEDeviceSelectedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceSelectedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceInformation* selectedDevice;
@end

#endif // __WDEDeviceSelectedEventArgs_DEFINED__

// Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs
#ifndef __WDEDeviceDisconnectButtonClickedEventArgs_DEFINED__
#define __WDEDeviceDisconnectButtonClickedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceDisconnectButtonClickedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceInformation* device;
@end

#endif // __WDEDeviceDisconnectButtonClickedEventArgs_DEFINED__

// Windows.Devices.Enumeration.DevicePickerFilter
#ifndef __WDEDevicePickerFilter_DEFINED__
#define __WDEDevicePickerFilter_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDevicePickerFilter : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WDEDeviceClass */ supportedDeviceClasses;
@property (readonly) NSMutableArray* /* NSString * */ supportedDeviceSelectors;
@end

#endif // __WDEDevicePickerFilter_DEFINED__

// Windows.Devices.Enumeration.DevicePicker
#ifndef __WDEDevicePicker_DEFINED__
#define __WDEDevicePicker_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDevicePicker : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDevicePickerAppearance* appearance;
@property (readonly) WDEDevicePickerFilter* filter;
@property (readonly) NSMutableArray* /* NSString * */ requestedProperties;
- (EventRegistrationToken)addDevicePickerDismissedEvent:(void(^)(WDEDevicePicker*, RTObject*))del;
- (void)removeDevicePickerDismissedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDeviceSelectedEvent:(void(^)(WDEDevicePicker*, WDEDeviceSelectedEventArgs*))del;
- (void)removeDeviceSelectedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDisconnectButtonClickedEvent:(void(^)(WDEDevicePicker*, WDEDeviceDisconnectButtonClickedEventArgs*))del;
- (void)removeDisconnectButtonClickedEvent:(EventRegistrationToken)tok;
- (void)show:(WFRect*)selection;
- (void)showWithPlacement:(WFRect*)selection placement:(WUPPlacement)placement;
- (void)pickSingleDeviceAsync:(WFRect*)selection success:(void (^)(WDEDeviceInformation*))success failure:(void (^)(NSError*))failure;
- (void)pickSingleDeviceAsyncWithPlacement:(WFRect*)selection placement:(WUPPlacement)placement success:(void (^)(WDEDeviceInformation*))success failure:(void (^)(NSError*))failure;
- (void)hide;
- (void)setDisplayStatus:(WDEDeviceInformation*)device status:(NSString *)status options:(WDEDevicePickerDisplayStatusOptions)options;
@end

#endif // __WDEDevicePicker_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Storage.Streams.IInputStream
#ifndef __WSSIInputStream_DEFINED__
#define __WSSIInputStream_DEFINED__

@protocol WSSIInputStream <WFIClosable>
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)close;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSSIInputStream : RTObject <WSSIInputStream>
@end

#endif // __WSSIInputStream_DEFINED__

// Windows.Storage.Streams.IOutputStream
#ifndef __WSSIOutputStream_DEFINED__
#define __WSSIOutputStream_DEFINED__

@protocol WSSIOutputStream <WFIClosable>
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSSIOutputStream : RTObject <WSSIOutputStream>
@end

#endif // __WSSIOutputStream_DEFINED__

// Windows.Storage.Streams.IRandomAccessStream
#ifndef __WSSIRandomAccessStream_DEFINED__
#define __WSSIRandomAccessStream_DEFINED__

@protocol WSSIRandomAccessStream <WFIClosable, WSSIInputStream, WSSIOutputStream>
@property (readonly) BOOL canRead;
@property (readonly) BOOL canWrite;
@property (readonly) uint64_t position;
@property uint64_t size;
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSSIRandomAccessStream : RTObject <WSSIRandomAccessStream>
@end

#endif // __WSSIRandomAccessStream_DEFINED__

// Windows.Storage.Streams.IContentTypeProvider
#ifndef __WSSIContentTypeProvider_DEFINED__
#define __WSSIContentTypeProvider_DEFINED__

@protocol WSSIContentTypeProvider
@property (readonly) NSString * contentType;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSSIContentTypeProvider : RTObject <WSSIContentTypeProvider>
@end

#endif // __WSSIContentTypeProvider_DEFINED__

// Windows.Storage.Streams.IRandomAccessStreamWithContentType
#ifndef __WSSIRandomAccessStreamWithContentType_DEFINED__
#define __WSSIRandomAccessStreamWithContentType_DEFINED__

@protocol WSSIRandomAccessStreamWithContentType <WSSIRandomAccessStream, WFIClosable, WSSIInputStream, WSSIOutputStream, WSSIContentTypeProvider>
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSSIRandomAccessStreamWithContentType : RTObject <WSSIRandomAccessStreamWithContentType>
@end

#endif // __WSSIRandomAccessStreamWithContentType_DEFINED__

// Windows.Devices.Enumeration.DeviceThumbnail
#ifndef __WDEDeviceThumbnail_DEFINED__
#define __WDEDeviceThumbnail_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceThumbnail : RTObject <WSSIRandomAccessStreamWithContentType, WSSIContentTypeProvider, WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * contentType;
@property uint64_t size;
@property (readonly) BOOL canRead;
@property (readonly) BOOL canWrite;
@property (readonly) uint64_t position;
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDEDeviceThumbnail_DEFINED__

// Windows.Devices.Enumeration.EnclosureLocation
#ifndef __WDEEnclosureLocation_DEFINED__
#define __WDEEnclosureLocation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEEnclosureLocation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL inDock;
@property (readonly) BOOL inLid;
@property (readonly) WDEPanel panel;
@property (readonly) unsigned int rotationAngleInDegreesClockwise;
@end

#endif // __WDEEnclosureLocation_DEFINED__

// Windows.Devices.Enumeration.DeviceInformationUpdate
#ifndef __WDEDeviceInformationUpdate_DEFINED__
#define __WDEDeviceInformationUpdate_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceInformationUpdate : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * id;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) WDEDeviceInformationKind kind;
@end

#endif // __WDEDeviceInformationUpdate_DEFINED__

// Windows.Devices.Enumeration.DeviceInformationCollection
#ifndef __WDEDeviceInformationCollection_DEFINED__
#define __WDEDeviceInformationCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceInformationCollection : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

@end

#endif // __WDEDeviceInformationCollection_DEFINED__

// Windows.Devices.Enumeration.DeviceWatcher
#ifndef __WDEDeviceWatcher_DEFINED__
#define __WDEDeviceWatcher_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceWatcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceWatcherStatus status;
- (EventRegistrationToken)addAddedEvent:(void(^)(WDEDeviceWatcher*, WDEDeviceInformation*))del;
- (void)removeAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WDEDeviceWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addRemovedEvent:(void(^)(WDEDeviceWatcher*, WDEDeviceInformationUpdate*))del;
- (void)removeRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WDEDeviceWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addUpdatedEvent:(void(^)(WDEDeviceWatcher*, WDEDeviceInformationUpdate*))del;
- (void)removeUpdatedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
- (WABDeviceWatcherTrigger*)getBackgroundTrigger:(id<NSFastEnumeration> /* WDEDeviceWatcherEventKind */)requestedEventKinds;
@end

#endif // __WDEDeviceWatcher_DEFINED__

// Windows.Devices.Enumeration.DeviceInformation
#ifndef __WDEDeviceInformation_DEFINED__
#define __WDEDeviceInformation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceInformation : RTObject
+ (NSString *)getAqsFilterFromDeviceClass:(WDEDeviceClass)deviceClass;
+ (void)createFromIdAsyncWithKindAndAdditionalProperties:(NSString *)deviceId additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties kind:(WDEDeviceInformationKind)kind success:(void (^)(WDEDeviceInformation*))success failure:(void (^)(NSError*))failure;
+ (void)findAllAsyncWithKindAqsFilterAndAdditionalProperties:(NSString *)aqsFilter additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties kind:(WDEDeviceInformationKind)kind success:(void (^)(WDEDeviceInformationCollection*))success failure:(void (^)(NSError*))failure;
+ (WDEDeviceWatcher*)createWatcherWithKindAqsFilterAndAdditionalProperties:(NSString *)aqsFilter additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties kind:(WDEDeviceInformationKind)kind;
+ (void)createFromIdAsync:(NSString *)deviceId success:(void (^)(WDEDeviceInformation*))success failure:(void (^)(NSError*))failure;
+ (void)createFromIdAsyncAdditionalProperties:(NSString *)deviceId additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties success:(void (^)(WDEDeviceInformation*))success failure:(void (^)(NSError*))failure;
+ (void)findAllAsyncWithSuccess:(void (^)(WDEDeviceInformationCollection*))success failure:(void (^)(NSError*))failure;
+ (void)findAllAsyncDeviceClass:(WDEDeviceClass)deviceClass success:(void (^)(WDEDeviceInformationCollection*))success failure:(void (^)(NSError*))failure;
+ (void)findAllAsyncAqsFilter:(NSString *)aqsFilter success:(void (^)(WDEDeviceInformationCollection*))success failure:(void (^)(NSError*))failure;
+ (void)findAllAsyncAqsFilterAndAdditionalProperties:(NSString *)aqsFilter additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties success:(void (^)(WDEDeviceInformationCollection*))success failure:(void (^)(NSError*))failure;
+ (WDEDeviceWatcher*)createWatcher;
+ (WDEDeviceWatcher*)createWatcherDeviceClass:(WDEDeviceClass)deviceClass;
+ (WDEDeviceWatcher*)createWatcherAqsFilter:(NSString *)aqsFilter;
+ (WDEDeviceWatcher*)createWatcherAqsFilterAndAdditionalProperties:(NSString *)aqsFilter additionalProperties:(id<NSFastEnumeration> /* NSString * */)additionalProperties;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEEnclosureLocation* enclosureLocation;
@property (readonly) NSString * id;
@property (readonly) BOOL isDefault;
@property (readonly) BOOL isEnabled;
@property (readonly) NSString * name;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) WDEDeviceInformationKind kind;
@property (readonly) WDEDeviceInformationPairing* pairing;
- (void)update:(WDEDeviceInformationUpdate*)updateInfo;
- (void)getThumbnailAsyncWithSuccess:(void (^)(WDEDeviceThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getGlyphThumbnailAsyncWithSuccess:(void (^)(WDEDeviceThumbnail*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDEDeviceInformation_DEFINED__

// Windows.Devices.Enumeration.DevicePairingResult
#ifndef __WDEDevicePairingResult_DEFINED__
#define __WDEDevicePairingResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDevicePairingResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDevicePairingProtectionLevel protectionLevelUsed;
@property (readonly) WDEDevicePairingResultStatus status;
@end

#endif // __WDEDevicePairingResult_DEFINED__

// Windows.Devices.Enumeration.DeviceUnpairingResult
#ifndef __WDEDeviceUnpairingResult_DEFINED__
#define __WDEDeviceUnpairingResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceUnpairingResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceUnpairingResultStatus status;
@end

#endif // __WDEDeviceUnpairingResult_DEFINED__

// Windows.Devices.Enumeration.DevicePairingRequestedEventArgs
#ifndef __WDEDevicePairingRequestedEventArgs_DEFINED__
#define __WDEDevicePairingRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDevicePairingRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceInformation* deviceInformation;
@property (readonly) WDEDevicePairingKinds pairingKind;
@property (readonly) NSString * pin;
- (void)accept;
- (void)acceptWithPin:(NSString *)pin;
- (WFDeferral*)getDeferral;
@end

#endif // __WDEDevicePairingRequestedEventArgs_DEFINED__

// Windows.Devices.Enumeration.DeviceInformationCustomPairing
#ifndef __WDEDeviceInformationCustomPairing_DEFINED__
#define __WDEDeviceInformationCustomPairing_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceInformationCustomPairing : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addPairingRequestedEvent:(void(^)(WDEDeviceInformationCustomPairing*, WDEDevicePairingRequestedEventArgs*))del;
- (void)removePairingRequestedEvent:(EventRegistrationToken)tok;
- (void)pairAsync:(WDEDevicePairingKinds)pairingKindsSupported success:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
- (void)pairWithProtectionLevelAsync:(WDEDevicePairingKinds)pairingKindsSupported minProtectionLevel:(WDEDevicePairingProtectionLevel)minProtectionLevel success:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
- (void)pairWithProtectionLevelAndSettingsAsync:(WDEDevicePairingKinds)pairingKindsSupported minProtectionLevel:(WDEDevicePairingProtectionLevel)minProtectionLevel devicePairingSettings:(RTObject<WDEIDevicePairingSettings>*)devicePairingSettings success:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDEDeviceInformationCustomPairing_DEFINED__

// Windows.Devices.Enumeration.DeviceInformationPairing
#ifndef __WDEDeviceInformationPairing_DEFINED__
#define __WDEDeviceInformationPairing_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceInformationPairing : RTObject
+ (BOOL)tryRegisterForAllInboundPairingRequests:(WDEDevicePairingKinds)pairingKindsSupported;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL canPair;
@property (readonly) BOOL isPaired;
@property (readonly) WDEDeviceInformationCustomPairing* custom;
@property (readonly) WDEDevicePairingProtectionLevel protectionLevel;
- (void)pairAsyncWithSuccess:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
- (void)pairWithProtectionLevelAsync:(WDEDevicePairingProtectionLevel)minProtectionLevel success:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
- (void)pairWithProtectionLevelAndSettingsAsync:(WDEDevicePairingProtectionLevel)minProtectionLevel devicePairingSettings:(RTObject<WDEIDevicePairingSettings>*)devicePairingSettings success:(void (^)(WDEDevicePairingResult*))success failure:(void (^)(NSError*))failure;
- (void)unpairAsyncWithSuccess:(void (^)(WDEDeviceUnpairingResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDEDeviceInformationPairing_DEFINED__

// Windows.Devices.Enumeration.DeviceAccessChangedEventArgs
#ifndef __WDEDeviceAccessChangedEventArgs_DEFINED__
#define __WDEDeviceAccessChangedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceAccessChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceAccessStatus status;
@property (readonly) NSString * id;
@end

#endif // __WDEDeviceAccessChangedEventArgs_DEFINED__

// Windows.Devices.Enumeration.DeviceAccessInformation
#ifndef __WDEDeviceAccessInformation_DEFINED__
#define __WDEDeviceAccessInformation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceAccessInformation : RTObject
+ (WDEDeviceAccessInformation*)createFromId:(NSString *)deviceId;
+ (WDEDeviceAccessInformation*)createFromDeviceClassId:(WFGUID*)deviceClassId;
+ (WDEDeviceAccessInformation*)createFromDeviceClass:(WDEDeviceClass)deviceClass;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceAccessStatus currentStatus;
- (EventRegistrationToken)addAccessChangedEvent:(void(^)(WDEDeviceAccessInformation*, WDEDeviceAccessChangedEventArgs*))del;
- (void)removeAccessChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WDEDeviceAccessInformation_DEFINED__

// Windows.Devices.Enumeration.DeviceWatcherEvent
#ifndef __WDEDeviceWatcherEvent_DEFINED__
#define __WDEDeviceWatcherEvent_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceWatcherEvent : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDEDeviceInformation* deviceInformation;
@property (readonly) WDEDeviceInformationUpdate* deviceInformationUpdate;
@property (readonly) WDEDeviceWatcherEventKind kind;
@end

#endif // __WDEDeviceWatcherEvent_DEFINED__

// Windows.Devices.Enumeration.DeviceWatcherTriggerDetails
#ifndef __WDEDeviceWatcherTriggerDetails_DEFINED__
#define __WDEDeviceWatcherTriggerDetails_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WDEDeviceWatcherTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WDEDeviceWatcherEvent* */ deviceWatcherEvents;
@end

#endif // __WDEDeviceWatcherTriggerDetails_DEFINED__

