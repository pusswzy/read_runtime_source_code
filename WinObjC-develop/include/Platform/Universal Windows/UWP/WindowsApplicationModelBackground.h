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

// WindowsApplicationModelBackground.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WABAlarmApplicationManager, WABCommunicationBlockingAppSetAsActiveTrigger, WABSmartCardTrigger, WABApplicationTrigger, WABApplicationTriggerDetails, WABMediaProcessingTrigger, WABContentPrefetchTrigger, WABSecondaryAuthenticationFactorAuthenticationTrigger, WABSystemTrigger, WABSystemCondition, WABNetworkOperatorNotificationTrigger, WABDeviceManufacturerNotificationTrigger, WABCachedFileUpdaterTriggerDetails, WABCachedFileUpdaterTrigger, WABTimeTrigger, WABMaintenanceTrigger, WABAppointmentStoreNotificationTrigger, WABBackgroundExecutionManager, WABBackgroundTaskRegistration, WABBackgroundTaskDeferral, WABBackgroundTaskProgressEventArgs, WABBackgroundTaskCompletedEventArgs, WABBackgroundTaskRegistrationGroup, WABBackgroundTaskBuilder, WABBackgroundWorkCost, WABChatMessageNotificationTrigger, WABChatMessageReceivedNotificationTrigger, WABRcsEndUserMessageAvailableTrigger, WABContactStoreNotificationTrigger, WABEmailStoreNotificationTrigger, WABMobileBroadbandRegistrationStateChangeTrigger, WABMobileBroadbandRadioStateChangeTrigger, WABMobileBroadbandPinLockStateChangeTrigger, WABMobileBroadbandDeviceServiceNotificationTrigger, WABSmsMessageReceivedTrigger, WABStorageLibraryContentChangedTrigger, WABPaymentAppCanMakePaymentTrigger, WABDeviceUseTrigger, WABDeviceServicingTrigger, WABRfcommConnectionTrigger, WABDeviceConnectionChangeTrigger, WABGattCharacteristicNotificationTrigger, WABGattServiceProviderTrigger, WABGattServiceProviderTriggerResult, WABBluetoothLEAdvertisementWatcherTrigger, WABBluetoothLEAdvertisementPublisherTrigger, WABDeviceWatcherTrigger, WABLocationTrigger, WABGeovisitTrigger, WABActivitySensorTrigger, WABSensorDataThresholdTrigger, WABNetworkOperatorHotspotAuthenticationTrigger, WABSocketActivityTrigger, WABPushNotificationTrigger, WABToastNotificationHistoryChangedTrigger, WABToastNotificationActionTrigger, WABUserNotificationChangedTrigger, WABAppBroadcastTriggerProviderInfo, WABAppBroadcastTrigger;
@protocol WABIAlarmApplicationManagerStatics, WABISmartCardTriggerFactory, WABIApplicationTriggerDetails, WABIContentPrefetchTriggerFactory, WABISystemTriggerFactory, WABISystemConditionFactory, WABINetworkOperatorNotificationTriggerFactory, WABIDeviceManufacturerNotificationTriggerFactory, WABICachedFileUpdaterTriggerDetails, WABITimeTriggerFactory, WABIMaintenanceTriggerFactory, WABIBackgroundExecutionManagerStatics, WABIBackgroundTaskInstance, WABIBackgroundWorkCostStatics, WABIBackgroundTaskDeferral, WABIBackgroundTaskInstance2, WABIBackgroundTaskInstance4, WABIBackgroundTask, WABIBackgroundTaskRegistration, WABIBackgroundTaskRegistration2, WABIBackgroundTrigger, WABICommunicationBlockingAppSetAsActiveTrigger, WABISmartCardTrigger, WABIApplicationTrigger, WABIMediaProcessingTrigger, WABIContentPrefetchTrigger, WABISecondaryAuthenticationFactorAuthenticationTrigger, WABISystemTrigger, WABINetworkOperatorNotificationTrigger, WABIDeviceManufacturerNotificationTrigger, WABICachedFileUpdaterTrigger, WABITimeTrigger, WABIMaintenanceTrigger, WABIAppointmentStoreNotificationTrigger, WABIBackgroundTaskRegistration3, WABIBackgroundTaskRegistrationStatics, WABIBackgroundTaskRegistrationStatics2, WABIBackgroundTaskBuilder, WABIBackgroundCondition, WABISystemCondition, WABIBackgroundTaskBuilder2, WABIBackgroundTaskBuilder3, WABIBackgroundTaskBuilder4, WABIBackgroundTaskCompletedEventArgs, WABIBackgroundTaskProgressEventArgs, WABIBackgroundTaskRegistrationGroup, WABIBackgroundTaskRegistrationGroupFactory, WABIChatMessageNotificationTrigger, WABIChatMessageReceivedNotificationTrigger, WABIRcsEndUserMessageAvailableTrigger, WABIContactStoreNotificationTrigger, WABIEmailStoreNotificationTrigger, WABISmsMessageReceivedTriggerFactory, WABIStorageLibraryContentChangedTrigger, WABIStorageLibraryContentChangedTriggerStatics, WABIDeviceUseTrigger, WABIDeviceServicingTrigger, WABIRfcommConnectionTrigger, WABIDeviceConnectionChangeTrigger, WABIDeviceConnectionChangeTriggerStatics, WABIGattCharacteristicNotificationTriggerFactory, WABIGattCharacteristicNotificationTriggerFactory2, WABIGattCharacteristicNotificationTrigger, WABIGattCharacteristicNotificationTrigger2, WABIGattServiceProviderTriggerResult, WABIGattServiceProviderTriggerStatics, WABIGattServiceProviderTrigger, WABIBluetoothLEAdvertisementWatcherTrigger, WABIBluetoothLEAdvertisementPublisherTrigger, WABIDeviceWatcherTrigger, WABILocationTrigger, WABILocationTriggerFactory, WABIGeovisitTrigger, WABIActivitySensorTrigger, WABIActivitySensorTriggerFactory, WABISensorDataThresholdTrigger, WABISensorDataThresholdTriggerFactory, WABINetworkOperatorHotspotAuthenticationTrigger, WABISocketActivityTrigger, WABIPushNotificationTriggerFactory, WABIToastNotificationHistoryChangedTriggerFactory, WABIToastNotificationActionTriggerFactory, WABIUserNotificationChangedTriggerFactory, WABIAppBroadcastTriggerProviderInfo, WABIAppBroadcastTriggerFactory, WABIAppBroadcastTrigger;

// Windows.ApplicationModel.Background.AlarmAccessStatus
enum _WABAlarmAccessStatus {
    WABAlarmAccessStatusUnspecified = 0,
    WABAlarmAccessStatusAllowedWithWakeupCapability = 1,
    WABAlarmAccessStatusAllowedWithoutWakeupCapability = 2,
    WABAlarmAccessStatusDenied = 3,
};
typedef unsigned WABAlarmAccessStatus;

// Windows.ApplicationModel.Background.ApplicationTriggerResult
enum _WABApplicationTriggerResult {
    WABApplicationTriggerResultAllowed = 0,
    WABApplicationTriggerResultCurrentlyRunning = 1,
    WABApplicationTriggerResultDisabledByPolicy = 2,
    WABApplicationTriggerResultUnknownError = 3,
};
typedef unsigned WABApplicationTriggerResult;

// Windows.ApplicationModel.Background.MediaProcessingTriggerResult
enum _WABMediaProcessingTriggerResult {
    WABMediaProcessingTriggerResultAllowed = 0,
    WABMediaProcessingTriggerResultCurrentlyRunning = 1,
    WABMediaProcessingTriggerResultDisabledByPolicy = 2,
    WABMediaProcessingTriggerResultUnknownError = 3,
};
typedef unsigned WABMediaProcessingTriggerResult;

// Windows.ApplicationModel.Background.SystemTriggerType
enum _WABSystemTriggerType {
    WABSystemTriggerTypeInvalid = 0,
    WABSystemTriggerTypeSmsReceived = 1,
    WABSystemTriggerTypeUserPresent = 2,
    WABSystemTriggerTypeUserAway = 3,
    WABSystemTriggerTypeNetworkStateChange = 4,
    WABSystemTriggerTypeControlChannelReset = 5,
    WABSystemTriggerTypeInternetAvailable = 6,
    WABSystemTriggerTypeSessionConnected = 7,
    WABSystemTriggerTypeServicingComplete = 8,
    WABSystemTriggerTypeLockScreenApplicationAdded = 9,
    WABSystemTriggerTypeLockScreenApplicationRemoved = 10,
    WABSystemTriggerTypeTimeZoneChange = 11,
    WABSystemTriggerTypeOnlineIdConnectedStateChange = 12,
    WABSystemTriggerTypeBackgroundWorkCostChange = 13,
    WABSystemTriggerTypePowerStateChange = 14,
    WABSystemTriggerTypeDefaultSignInAccountChange = 15,
};
typedef unsigned WABSystemTriggerType;

// Windows.ApplicationModel.Background.SystemConditionType
enum _WABSystemConditionType {
    WABSystemConditionTypeInvalid = 0,
    WABSystemConditionTypeUserPresent = 1,
    WABSystemConditionTypeUserNotPresent = 2,
    WABSystemConditionTypeInternetAvailable = 3,
    WABSystemConditionTypeInternetNotAvailable = 4,
    WABSystemConditionTypeSessionConnected = 5,
    WABSystemConditionTypeSessionDisconnected = 6,
    WABSystemConditionTypeFreeNetworkAvailable = 7,
    WABSystemConditionTypeBackgroundWorkCostNotHigh = 8,
};
typedef unsigned WABSystemConditionType;

// Windows.ApplicationModel.Background.BackgroundAccessStatus
enum _WABBackgroundAccessStatus {
    WABBackgroundAccessStatusUnspecified = 0,
    WABBackgroundAccessStatusAllowedWithAlwaysOnRealTimeConnectivity = 1,
    WABBackgroundAccessStatusAllowedMayUseActiveRealTimeConnectivity = 2,
    WABBackgroundAccessStatusDenied = 3,
    WABBackgroundAccessStatusAlwaysAllowed = 4,
    WABBackgroundAccessStatusAllowedSubjectToSystemPolicy = 5,
    WABBackgroundAccessStatusDeniedBySystemPolicy = 6,
    WABBackgroundAccessStatusDeniedByUser = 7,
};
typedef unsigned WABBackgroundAccessStatus;

// Windows.ApplicationModel.Background.BackgroundTaskCancellationReason
enum _WABBackgroundTaskCancellationReason {
    WABBackgroundTaskCancellationReasonAbort = 0,
    WABBackgroundTaskCancellationReasonTerminating = 1,
    WABBackgroundTaskCancellationReasonLoggingOff = 2,
    WABBackgroundTaskCancellationReasonServicingUpdate = 3,
    WABBackgroundTaskCancellationReasonIdleTask = 4,
    WABBackgroundTaskCancellationReasonUninstall = 5,
    WABBackgroundTaskCancellationReasonConditionLoss = 6,
    WABBackgroundTaskCancellationReasonSystemPolicy = 7,
    WABBackgroundTaskCancellationReasonQuietHoursEntered = 8,
    WABBackgroundTaskCancellationReasonExecutionTimeExceeded = 9,
    WABBackgroundTaskCancellationReasonResourceRevocation = 10,
    WABBackgroundTaskCancellationReasonEnergySaver = 11,
};
typedef unsigned WABBackgroundTaskCancellationReason;

// Windows.ApplicationModel.Background.BackgroundWorkCostValue
enum _WABBackgroundWorkCostValue {
    WABBackgroundWorkCostValueLow = 0,
    WABBackgroundWorkCostValueMedium = 1,
    WABBackgroundWorkCostValueHigh = 2,
};
typedef unsigned WABBackgroundWorkCostValue;

// Windows.ApplicationModel.Background.BackgroundTaskThrottleCounter
enum _WABBackgroundTaskThrottleCounter {
    WABBackgroundTaskThrottleCounterAll = 0,
    WABBackgroundTaskThrottleCounterCpu = 1,
    WABBackgroundTaskThrottleCounterNetwork = 2,
};
typedef unsigned WABBackgroundTaskThrottleCounter;

// Windows.ApplicationModel.Background.DeviceTriggerResult
enum _WABDeviceTriggerResult {
    WABDeviceTriggerResultAllowed = 0,
    WABDeviceTriggerResultDeniedByUser = 1,
    WABDeviceTriggerResultDeniedBySystem = 2,
    WABDeviceTriggerResultLowBattery = 3,
};
typedef unsigned WABDeviceTriggerResult;

// Windows.ApplicationModel.Background.LocationTriggerType
enum _WABLocationTriggerType {
    WABLocationTriggerTypeGeofence = 0,
};
typedef unsigned WABLocationTriggerType;

#include "WindowsSystem.h"
#include "WindowsFoundation.h"
#include "WindowsDevicesSmartCards.h"
#include "WindowsDevicesSms.h"
#include "WindowsFoundationCollections.h"
#include "WindowsStorageProvider.h"
#include "WindowsApplicationModelActivation.h"
#include "WindowsStorage.h"
#include "WindowsDevicesBluetooth.h"
#include "WindowsDevicesBluetoothBackground.h"
#include "WindowsNetworkingSockets.h"
#include "WindowsNetworking.h"
#include "WindowsDevicesBluetoothGenericAttributeProfile.h"
#include "WindowsDevicesBluetoothAdvertisement.h"
#include "WindowsDevicesGeolocation.h"
#include "WindowsDevicesSensors.h"
#include "WindowsUINotifications.h"
// Windows.ApplicationModel.Background.BackgroundTaskCanceledEventHandler
#ifndef __WABBackgroundTaskCanceledEventHandler__DEFINED
#define __WABBackgroundTaskCanceledEventHandler__DEFINED
typedef void(^WABBackgroundTaskCanceledEventHandler)(RTObject<WABIBackgroundTaskInstance>* sender, WABBackgroundTaskCancellationReason reason);
#endif // __WABBackgroundTaskCanceledEventHandler__DEFINED

// Windows.ApplicationModel.Background.BackgroundTaskCompletedEventHandler
#ifndef __WABBackgroundTaskCompletedEventHandler__DEFINED
#define __WABBackgroundTaskCompletedEventHandler__DEFINED
typedef void(^WABBackgroundTaskCompletedEventHandler)(WABBackgroundTaskRegistration* sender, WABBackgroundTaskCompletedEventArgs* args);
#endif // __WABBackgroundTaskCompletedEventHandler__DEFINED

// Windows.ApplicationModel.Background.BackgroundTaskProgressEventHandler
#ifndef __WABBackgroundTaskProgressEventHandler__DEFINED
#define __WABBackgroundTaskProgressEventHandler__DEFINED
typedef void(^WABBackgroundTaskProgressEventHandler)(WABBackgroundTaskRegistration* sender, WABBackgroundTaskProgressEventArgs* args);
#endif // __WABBackgroundTaskProgressEventHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Background.BackgroundTaskCanceledEventHandler
#ifndef __WABBackgroundTaskCanceledEventHandler__DEFINED
#define __WABBackgroundTaskCanceledEventHandler__DEFINED
typedef void(^WABBackgroundTaskCanceledEventHandler)(RTObject<WABIBackgroundTaskInstance>* sender, WABBackgroundTaskCancellationReason reason);
#endif // __WABBackgroundTaskCanceledEventHandler__DEFINED

// Windows.ApplicationModel.Background.BackgroundTaskProgressEventHandler
#ifndef __WABBackgroundTaskProgressEventHandler__DEFINED
#define __WABBackgroundTaskProgressEventHandler__DEFINED
typedef void(^WABBackgroundTaskProgressEventHandler)(WABBackgroundTaskRegistration* sender, WABBackgroundTaskProgressEventArgs* args);
#endif // __WABBackgroundTaskProgressEventHandler__DEFINED

// Windows.ApplicationModel.Background.BackgroundTaskCompletedEventHandler
#ifndef __WABBackgroundTaskCompletedEventHandler__DEFINED
#define __WABBackgroundTaskCompletedEventHandler__DEFINED
typedef void(^WABBackgroundTaskCompletedEventHandler)(WABBackgroundTaskRegistration* sender, WABBackgroundTaskCompletedEventArgs* args);
#endif // __WABBackgroundTaskCompletedEventHandler__DEFINED

// Windows.ApplicationModel.Background.IBackgroundTaskInstance
#ifndef __WABIBackgroundTaskInstance_DEFINED__
#define __WABIBackgroundTaskInstance_DEFINED__

@protocol WABIBackgroundTaskInstance
@property (readonly) WFGUID* instanceId;
@property unsigned int progress;
@property (readonly) unsigned int suspendedCount;
@property (readonly) WABBackgroundTaskRegistration* task;
@property (readonly) RTObject* triggerDetails;
- (EventRegistrationToken)addCanceledEvent:(WABBackgroundTaskCanceledEventHandler)del;
- (void)removeCanceledEvent:(EventRegistrationToken)tok;
- (WABBackgroundTaskDeferral*)getDeferral;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskInstance : RTObject <WABIBackgroundTaskInstance>
@end

#endif // __WABIBackgroundTaskInstance_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTaskInstance2
#ifndef __WABIBackgroundTaskInstance2_DEFINED__
#define __WABIBackgroundTaskInstance2_DEFINED__

@protocol WABIBackgroundTaskInstance2 <WABIBackgroundTaskInstance>
- (unsigned int)getThrottleCount:(WABBackgroundTaskThrottleCounter)counter;
- (WABBackgroundTaskDeferral*)getDeferral;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskInstance2 : RTObject <WABIBackgroundTaskInstance2>
@end

#endif // __WABIBackgroundTaskInstance2_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTaskInstance4
#ifndef __WABIBackgroundTaskInstance4_DEFINED__
#define __WABIBackgroundTaskInstance4_DEFINED__

@protocol WABIBackgroundTaskInstance4 <WABIBackgroundTaskInstance>
@property (readonly) WSUser* user;
- (WABBackgroundTaskDeferral*)getDeferral;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskInstance4 : RTObject <WABIBackgroundTaskInstance4>
@end

#endif // __WABIBackgroundTaskInstance4_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTask
#ifndef __WABIBackgroundTask_DEFINED__
#define __WABIBackgroundTask_DEFINED__

@protocol WABIBackgroundTask
- (void)run:(RTObject<WABIBackgroundTaskInstance>*)taskInstance;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTask : RTObject <WABIBackgroundTask>
@end

#endif // __WABIBackgroundTask_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTaskRegistration
#ifndef __WABIBackgroundTaskRegistration_DEFINED__
#define __WABIBackgroundTaskRegistration_DEFINED__

@protocol WABIBackgroundTaskRegistration
@property (readonly) NSString * name;
@property (readonly) WFGUID* taskId;
- (EventRegistrationToken)addCompletedEvent:(WABBackgroundTaskCompletedEventHandler)del;
- (void)removeCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addProgressEvent:(WABBackgroundTaskProgressEventHandler)del;
- (void)removeProgressEvent:(EventRegistrationToken)tok;
- (void)unregister:(BOOL)cancelTask;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskRegistration : RTObject <WABIBackgroundTaskRegistration>
@end

#endif // __WABIBackgroundTaskRegistration_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTaskRegistration2
#ifndef __WABIBackgroundTaskRegistration2_DEFINED__
#define __WABIBackgroundTaskRegistration2_DEFINED__

@protocol WABIBackgroundTaskRegistration2 <WABIBackgroundTaskRegistration>
@property (readonly) RTObject<WABIBackgroundTrigger>* trigger;
- (void)unregister:(BOOL)cancelTask;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskRegistration2 : RTObject <WABIBackgroundTaskRegistration2>
@end

#endif // __WABIBackgroundTaskRegistration2_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTrigger
#ifndef __WABIBackgroundTrigger_DEFINED__
#define __WABIBackgroundTrigger_DEFINED__

@protocol WABIBackgroundTrigger
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTrigger : RTObject <WABIBackgroundTrigger>
@end

#endif // __WABIBackgroundTrigger_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundTaskRegistration3
#ifndef __WABIBackgroundTaskRegistration3_DEFINED__
#define __WABIBackgroundTaskRegistration3_DEFINED__

@protocol WABIBackgroundTaskRegistration3 <WABIBackgroundTaskRegistration>
@property (readonly) WABBackgroundTaskRegistrationGroup* taskGroup;
- (void)unregister:(BOOL)cancelTask;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundTaskRegistration3 : RTObject <WABIBackgroundTaskRegistration3>
@end

#endif // __WABIBackgroundTaskRegistration3_DEFINED__

// Windows.ApplicationModel.Background.IBackgroundCondition
#ifndef __WABIBackgroundCondition_DEFINED__
#define __WABIBackgroundCondition_DEFINED__

@protocol WABIBackgroundCondition
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABIBackgroundCondition : RTObject <WABIBackgroundCondition>
@end

#endif // __WABIBackgroundCondition_DEFINED__

// Windows.ApplicationModel.Background.AlarmApplicationManager
#ifndef __WABAlarmApplicationManager_DEFINED__
#define __WABAlarmApplicationManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABAlarmApplicationManager : RTObject
+ (void)requestAccessAsyncWithSuccess:(void (^)(WABAlarmAccessStatus))success failure:(void (^)(NSError*))failure;
+ (WABAlarmAccessStatus)getAccessStatus;
@end

#endif // __WABAlarmApplicationManager_DEFINED__

// Windows.ApplicationModel.Background.CommunicationBlockingAppSetAsActiveTrigger
#ifndef __WABCommunicationBlockingAppSetAsActiveTrigger_DEFINED__
#define __WABCommunicationBlockingAppSetAsActiveTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABCommunicationBlockingAppSetAsActiveTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABCommunicationBlockingAppSetAsActiveTrigger_DEFINED__

// Windows.ApplicationModel.Background.SmartCardTrigger
#ifndef __WABSmartCardTrigger_DEFINED__
#define __WABSmartCardTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSmartCardTrigger : RTObject <WABIBackgroundTrigger>
+ (WABSmartCardTrigger*)make:(WDSSmartCardTriggerType)triggerType ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDSSmartCardTriggerType triggerType;
@end

#endif // __WABSmartCardTrigger_DEFINED__

// Windows.ApplicationModel.Background.ApplicationTrigger
#ifndef __WABApplicationTrigger_DEFINED__
#define __WABApplicationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABApplicationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)requestAsyncWithSuccess:(void (^)(WABApplicationTriggerResult))success failure:(void (^)(NSError*))failure;
- (void)requestAsyncWithArguments:(WFCValueSet*)arguments success:(void (^)(WABApplicationTriggerResult))success failure:(void (^)(NSError*))failure;
@end

#endif // __WABApplicationTrigger_DEFINED__

// Windows.ApplicationModel.Background.ApplicationTriggerDetails
#ifndef __WABApplicationTriggerDetails_DEFINED__
#define __WABApplicationTriggerDetails_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABApplicationTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFCValueSet* arguments;
@end

#endif // __WABApplicationTriggerDetails_DEFINED__

// Windows.ApplicationModel.Background.MediaProcessingTrigger
#ifndef __WABMediaProcessingTrigger_DEFINED__
#define __WABMediaProcessingTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMediaProcessingTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)requestAsyncWithSuccess:(void (^)(WABMediaProcessingTriggerResult))success failure:(void (^)(NSError*))failure;
- (void)requestAsyncWithArguments:(WFCValueSet*)arguments success:(void (^)(WABMediaProcessingTriggerResult))success failure:(void (^)(NSError*))failure;
@end

#endif // __WABMediaProcessingTrigger_DEFINED__

// Windows.ApplicationModel.Background.ContentPrefetchTrigger
#ifndef __WABContentPrefetchTrigger_DEFINED__
#define __WABContentPrefetchTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABContentPrefetchTrigger : RTObject <WABIBackgroundTrigger>
+ (WABContentPrefetchTrigger*)make:(WFTimeSpan*)waitInterval ACTIVATOR;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* waitInterval;
@end

#endif // __WABContentPrefetchTrigger_DEFINED__

// Windows.ApplicationModel.Background.SecondaryAuthenticationFactorAuthenticationTrigger
#ifndef __WABSecondaryAuthenticationFactorAuthenticationTrigger_DEFINED__
#define __WABSecondaryAuthenticationFactorAuthenticationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSecondaryAuthenticationFactorAuthenticationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABSecondaryAuthenticationFactorAuthenticationTrigger_DEFINED__

// Windows.ApplicationModel.Background.SystemTrigger
#ifndef __WABSystemTrigger_DEFINED__
#define __WABSystemTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSystemTrigger : RTObject <WABIBackgroundTrigger>
+ (WABSystemTrigger*)make:(WABSystemTriggerType)triggerType oneShot:(BOOL)oneShot ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL oneShot;
@property (readonly) WABSystemTriggerType triggerType;
@end

#endif // __WABSystemTrigger_DEFINED__

// Windows.ApplicationModel.Background.SystemCondition
#ifndef __WABSystemCondition_DEFINED__
#define __WABSystemCondition_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSystemCondition : RTObject <WABIBackgroundCondition>
+ (WABSystemCondition*)make:(WABSystemConditionType)conditionType ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WABSystemConditionType conditionType;
@end

#endif // __WABSystemCondition_DEFINED__

// Windows.ApplicationModel.Background.NetworkOperatorNotificationTrigger
#ifndef __WABNetworkOperatorNotificationTrigger_DEFINED__
#define __WABNetworkOperatorNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABNetworkOperatorNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (WABNetworkOperatorNotificationTrigger*)make:(NSString *)networkAccountId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * networkAccountId;
@end

#endif // __WABNetworkOperatorNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.DeviceManufacturerNotificationTrigger
#ifndef __WABDeviceManufacturerNotificationTrigger_DEFINED__
#define __WABDeviceManufacturerNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABDeviceManufacturerNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (WABDeviceManufacturerNotificationTrigger*)make:(NSString *)triggerQualifier oneShot:(BOOL)oneShot ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL oneShot;
@property (readonly) NSString * triggerQualifier;
@end

#endif // __WABDeviceManufacturerNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.CachedFileUpdaterTriggerDetails
#ifndef __WABCachedFileUpdaterTriggerDetails_DEFINED__
#define __WABCachedFileUpdaterTriggerDetails_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABCachedFileUpdaterTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL canRequestUserInput;
@property (readonly) WSPFileUpdateRequest* updateRequest;
@property (readonly) WSPCachedFileTarget updateTarget;
@end

#endif // __WABCachedFileUpdaterTriggerDetails_DEFINED__

// Windows.ApplicationModel.Background.CachedFileUpdaterTrigger
#ifndef __WABCachedFileUpdaterTrigger_DEFINED__
#define __WABCachedFileUpdaterTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABCachedFileUpdaterTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABCachedFileUpdaterTrigger_DEFINED__

// Windows.ApplicationModel.Background.TimeTrigger
#ifndef __WABTimeTrigger_DEFINED__
#define __WABTimeTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABTimeTrigger : RTObject <WABIBackgroundTrigger>
+ (WABTimeTrigger*)make:(unsigned int)freshnessTime oneShot:(BOOL)oneShot ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int freshnessTime;
@property (readonly) BOOL oneShot;
@end

#endif // __WABTimeTrigger_DEFINED__

// Windows.ApplicationModel.Background.MaintenanceTrigger
#ifndef __WABMaintenanceTrigger_DEFINED__
#define __WABMaintenanceTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMaintenanceTrigger : RTObject <WABIBackgroundTrigger>
+ (WABMaintenanceTrigger*)make:(unsigned int)freshnessTime oneShot:(BOOL)oneShot ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int freshnessTime;
@property (readonly) BOOL oneShot;
@end

#endif // __WABMaintenanceTrigger_DEFINED__

// Windows.ApplicationModel.Background.AppointmentStoreNotificationTrigger
#ifndef __WABAppointmentStoreNotificationTrigger_DEFINED__
#define __WABAppointmentStoreNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABAppointmentStoreNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABAppointmentStoreNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.BackgroundExecutionManager
#ifndef __WABBackgroundExecutionManager_DEFINED__
#define __WABBackgroundExecutionManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundExecutionManager : RTObject
+ (void)requestAccessAsyncWithSuccess:(void (^)(WABBackgroundAccessStatus))success failure:(void (^)(NSError*))failure;
+ (void)requestAccessForApplicationAsync:(NSString *)applicationId success:(void (^)(WABBackgroundAccessStatus))success failure:(void (^)(NSError*))failure;
+ (void)removeAccess;
+ (void)removeAccessForApplication:(NSString *)applicationId;
+ (WABBackgroundAccessStatus)getAccessStatus;
+ (WABBackgroundAccessStatus)getAccessStatusForApplication:(NSString *)applicationId;
@end

#endif // __WABBackgroundExecutionManager_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskRegistration
#ifndef __WABBackgroundTaskRegistration_DEFINED__
#define __WABBackgroundTaskRegistration_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskRegistration : RTObject <WABIBackgroundTaskRegistration, WABIBackgroundTaskRegistration2, WABIBackgroundTaskRegistration3>
+ (WABBackgroundTaskRegistrationGroup*)getTaskGroup:(NSString *)groupId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * name;
@property (readonly) WFGUID* taskId;
@property (readonly) RTObject<WABIBackgroundTrigger>* trigger;
@property (readonly) WABBackgroundTaskRegistrationGroup* taskGroup;
+ (NSDictionary* /* WFGUID*, RTObject<WABIBackgroundTaskRegistration>* */)allTasks;
+ (NSDictionary* /* NSString *, WABBackgroundTaskRegistrationGroup* */)allTaskGroups;
- (EventRegistrationToken)addCompletedEvent:(WABBackgroundTaskCompletedEventHandler)del;
- (void)removeCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addProgressEvent:(WABBackgroundTaskProgressEventHandler)del;
- (void)removeProgressEvent:(EventRegistrationToken)tok;
- (void)unregister:(BOOL)cancelTask;
@end

#endif // __WABBackgroundTaskRegistration_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskDeferral
#ifndef __WABBackgroundTaskDeferral_DEFINED__
#define __WABBackgroundTaskDeferral_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WABBackgroundTaskDeferral_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskProgressEventArgs
#ifndef __WABBackgroundTaskProgressEventArgs_DEFINED__
#define __WABBackgroundTaskProgressEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskProgressEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFGUID* instanceId;
@property (readonly) unsigned int progress;
@end

#endif // __WABBackgroundTaskProgressEventArgs_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskCompletedEventArgs
#ifndef __WABBackgroundTaskCompletedEventArgs_DEFINED__
#define __WABBackgroundTaskCompletedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskCompletedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFGUID* instanceId;
- (void)checkResult;
@end

#endif // __WABBackgroundTaskCompletedEventArgs_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup
#ifndef __WABBackgroundTaskRegistrationGroup_DEFINED__
#define __WABBackgroundTaskRegistrationGroup_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskRegistrationGroup : RTObject
+ (WABBackgroundTaskRegistrationGroup*)make:(NSString *)id ACTIVATOR;
+ (WABBackgroundTaskRegistrationGroup*)makeWithName:(NSString *)id name:(NSString *)name ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSDictionary* /* WFGUID*, WABBackgroundTaskRegistration* */ allTasks;
@property (readonly) NSString * id;
@property (readonly) NSString * name;
- (EventRegistrationToken)addBackgroundActivatedEvent:(void(^)(WABBackgroundTaskRegistrationGroup*, WAABackgroundActivatedEventArgs*))del;
- (void)removeBackgroundActivatedEvent:(EventRegistrationToken)tok;
@end

#endif // __WABBackgroundTaskRegistrationGroup_DEFINED__

// Windows.ApplicationModel.Background.BackgroundTaskBuilder
#ifndef __WABBackgroundTaskBuilder_DEFINED__
#define __WABBackgroundTaskBuilder_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundTaskBuilder : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * taskEntryPoint;
@property (retain) NSString * name;
@property BOOL cancelOnConditionLoss;
@property BOOL isNetworkRequested;
@property (retain) WABBackgroundTaskRegistrationGroup* taskGroup;
- (void)setTrigger:(RTObject<WABIBackgroundTrigger>*)trigger;
- (void)addCondition:(RTObject<WABIBackgroundCondition>*)condition;
- (WABBackgroundTaskRegistration*)Register;
@end

#endif // __WABBackgroundTaskBuilder_DEFINED__

// Windows.ApplicationModel.Background.BackgroundWorkCost
#ifndef __WABBackgroundWorkCost_DEFINED__
#define __WABBackgroundWorkCost_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBackgroundWorkCost : RTObject
+ (WABBackgroundWorkCostValue)currentBackgroundWorkCost;
@end

#endif // __WABBackgroundWorkCost_DEFINED__

// Windows.ApplicationModel.Background.ChatMessageNotificationTrigger
#ifndef __WABChatMessageNotificationTrigger_DEFINED__
#define __WABChatMessageNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABChatMessageNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABChatMessageNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.ChatMessageReceivedNotificationTrigger
#ifndef __WABChatMessageReceivedNotificationTrigger_DEFINED__
#define __WABChatMessageReceivedNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABChatMessageReceivedNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABChatMessageReceivedNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.RcsEndUserMessageAvailableTrigger
#ifndef __WABRcsEndUserMessageAvailableTrigger_DEFINED__
#define __WABRcsEndUserMessageAvailableTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABRcsEndUserMessageAvailableTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABRcsEndUserMessageAvailableTrigger_DEFINED__

// Windows.ApplicationModel.Background.ContactStoreNotificationTrigger
#ifndef __WABContactStoreNotificationTrigger_DEFINED__
#define __WABContactStoreNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABContactStoreNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABContactStoreNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.EmailStoreNotificationTrigger
#ifndef __WABEmailStoreNotificationTrigger_DEFINED__
#define __WABEmailStoreNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABEmailStoreNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABEmailStoreNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.MobileBroadbandRegistrationStateChangeTrigger
#ifndef __WABMobileBroadbandRegistrationStateChangeTrigger_DEFINED__
#define __WABMobileBroadbandRegistrationStateChangeTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMobileBroadbandRegistrationStateChangeTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABMobileBroadbandRegistrationStateChangeTrigger_DEFINED__

// Windows.ApplicationModel.Background.MobileBroadbandRadioStateChangeTrigger
#ifndef __WABMobileBroadbandRadioStateChangeTrigger_DEFINED__
#define __WABMobileBroadbandRadioStateChangeTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMobileBroadbandRadioStateChangeTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABMobileBroadbandRadioStateChangeTrigger_DEFINED__

// Windows.ApplicationModel.Background.MobileBroadbandPinLockStateChangeTrigger
#ifndef __WABMobileBroadbandPinLockStateChangeTrigger_DEFINED__
#define __WABMobileBroadbandPinLockStateChangeTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMobileBroadbandPinLockStateChangeTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABMobileBroadbandPinLockStateChangeTrigger_DEFINED__

// Windows.ApplicationModel.Background.MobileBroadbandDeviceServiceNotificationTrigger
#ifndef __WABMobileBroadbandDeviceServiceNotificationTrigger_DEFINED__
#define __WABMobileBroadbandDeviceServiceNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABMobileBroadbandDeviceServiceNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABMobileBroadbandDeviceServiceNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.SmsMessageReceivedTrigger
#ifndef __WABSmsMessageReceivedTrigger_DEFINED__
#define __WABSmsMessageReceivedTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSmsMessageReceivedTrigger : RTObject <WABIBackgroundTrigger>
+ (WABSmsMessageReceivedTrigger*)make:(WDSSmsFilterRules*)filterRules ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABSmsMessageReceivedTrigger_DEFINED__

// Windows.ApplicationModel.Background.StorageLibraryContentChangedTrigger
#ifndef __WABStorageLibraryContentChangedTrigger_DEFINED__
#define __WABStorageLibraryContentChangedTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABStorageLibraryContentChangedTrigger : RTObject <WABIBackgroundTrigger>
+ (WABStorageLibraryContentChangedTrigger*)create:(WSStorageLibrary*)storageLibrary;
+ (WABStorageLibraryContentChangedTrigger*)createFromLibraries:(id<NSFastEnumeration> /* WSStorageLibrary* */)storageLibraries;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABStorageLibraryContentChangedTrigger_DEFINED__

// Windows.ApplicationModel.Background.PaymentAppCanMakePaymentTrigger
#ifndef __WABPaymentAppCanMakePaymentTrigger_DEFINED__
#define __WABPaymentAppCanMakePaymentTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABPaymentAppCanMakePaymentTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABPaymentAppCanMakePaymentTrigger_DEFINED__

// Windows.ApplicationModel.Background.DeviceUseTrigger
#ifndef __WABDeviceUseTrigger_DEFINED__
#define __WABDeviceUseTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABDeviceUseTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)requestAsyncSimple:(NSString *)deviceId success:(void (^)(WABDeviceTriggerResult))success failure:(void (^)(NSError*))failure;
- (void)requestAsyncWithArguments:(NSString *)deviceId arguments:(NSString *)arguments success:(void (^)(WABDeviceTriggerResult))success failure:(void (^)(NSError*))failure;
@end

#endif // __WABDeviceUseTrigger_DEFINED__

// Windows.ApplicationModel.Background.DeviceServicingTrigger
#ifndef __WABDeviceServicingTrigger_DEFINED__
#define __WABDeviceServicingTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABDeviceServicingTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)requestAsyncSimple:(NSString *)deviceId expectedDuration:(WFTimeSpan*)expectedDuration success:(void (^)(WABDeviceTriggerResult))success failure:(void (^)(NSError*))failure;
- (void)requestAsyncWithArguments:(NSString *)deviceId expectedDuration:(WFTimeSpan*)expectedDuration arguments:(NSString *)arguments success:(void (^)(WABDeviceTriggerResult))success failure:(void (^)(NSError*))failure;
@end

#endif // __WABDeviceServicingTrigger_DEFINED__

// Windows.ApplicationModel.Background.RfcommConnectionTrigger
#ifndef __WABRfcommConnectionTrigger_DEFINED__
#define __WABRfcommConnectionTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABRfcommConnectionTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WNHostName* remoteHostName;
@property WNSSocketProtectionLevel protectionLevel;
@property BOOL allowMultipleConnections;
@property (readonly) WDBBRfcommInboundConnectionInformation* inboundConnection;
@property (readonly) WDBBRfcommOutboundConnectionInformation* outboundConnection;
@end

#endif // __WABRfcommConnectionTrigger_DEFINED__

// Windows.ApplicationModel.Background.DeviceConnectionChangeTrigger
#ifndef __WABDeviceConnectionChangeTrigger_DEFINED__
#define __WABDeviceConnectionChangeTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABDeviceConnectionChangeTrigger : RTObject <WABIBackgroundTrigger>
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WABDeviceConnectionChangeTrigger*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL maintainConnection;
@property (readonly) BOOL canMaintainConnection;
@property (readonly) NSString * deviceId;
@end

#endif // __WABDeviceConnectionChangeTrigger_DEFINED__

// Windows.ApplicationModel.Background.GattCharacteristicNotificationTrigger
#ifndef __WABGattCharacteristicNotificationTrigger_DEFINED__
#define __WABGattCharacteristicNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABGattCharacteristicNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (WABGattCharacteristicNotificationTrigger*)makeWithEventTriggeringMode:(WDBGGattCharacteristic*)characteristic eventTriggeringMode:(WDBBBluetoothEventTriggeringMode)eventTriggeringMode ACTIVATOR;
+ (WABGattCharacteristicNotificationTrigger*)make:(WDBGGattCharacteristic*)characteristic ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDBGGattCharacteristic* characteristic;
@property (readonly) WDBBBluetoothEventTriggeringMode eventTriggeringMode;
@end

#endif // __WABGattCharacteristicNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.GattServiceProviderTrigger
#ifndef __WABGattServiceProviderTrigger_DEFINED__
#define __WABGattServiceProviderTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABGattServiceProviderTrigger : RTObject <WABIBackgroundTrigger>
+ (void)createAsync:(NSString *)triggerId serviceUuid:(WFGUID*)serviceUuid success:(void (^)(WABGattServiceProviderTriggerResult*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WDBGGattServiceProviderAdvertisingParameters* advertisingParameters;
@property (readonly) WDBGGattLocalService* service;
@property (readonly) NSString * triggerId;
@end

#endif // __WABGattServiceProviderTrigger_DEFINED__

// Windows.ApplicationModel.Background.GattServiceProviderTriggerResult
#ifndef __WABGattServiceProviderTriggerResult_DEFINED__
#define __WABGattServiceProviderTriggerResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABGattServiceProviderTriggerResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDBBluetoothError error;
@property (readonly) WABGattServiceProviderTrigger* trigger;
@end

#endif // __WABGattServiceProviderTriggerResult_DEFINED__

// Windows.ApplicationModel.Background.BluetoothLEAdvertisementWatcherTrigger
#ifndef __WABBluetoothLEAdvertisementWatcherTrigger_DEFINED__
#define __WABBluetoothLEAdvertisementWatcherTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBluetoothLEAdvertisementWatcherTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WDBBluetoothSignalStrengthFilter* signalStrengthFilter;
@property (retain) WDBABluetoothLEAdvertisementFilter* advertisementFilter;
@property (readonly) WFTimeSpan* maxOutOfRangeTimeout;
@property (readonly) WFTimeSpan* maxSamplingInterval;
@property (readonly) WFTimeSpan* minOutOfRangeTimeout;
@property (readonly) WFTimeSpan* minSamplingInterval;
@end

#endif // __WABBluetoothLEAdvertisementWatcherTrigger_DEFINED__

// Windows.ApplicationModel.Background.BluetoothLEAdvertisementPublisherTrigger
#ifndef __WABBluetoothLEAdvertisementPublisherTrigger_DEFINED__
#define __WABBluetoothLEAdvertisementPublisherTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABBluetoothLEAdvertisementPublisherTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDBABluetoothLEAdvertisement* advertisement;
@end

#endif // __WABBluetoothLEAdvertisementPublisherTrigger_DEFINED__

// Windows.ApplicationModel.Background.DeviceWatcherTrigger
#ifndef __WABDeviceWatcherTrigger_DEFINED__
#define __WABDeviceWatcherTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABDeviceWatcherTrigger : RTObject <WABIBackgroundTrigger>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABDeviceWatcherTrigger_DEFINED__

// Windows.ApplicationModel.Background.LocationTrigger
#ifndef __WABLocationTrigger_DEFINED__
#define __WABLocationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABLocationTrigger : RTObject <WABIBackgroundTrigger>
+ (WABLocationTrigger*)make:(WABLocationTriggerType)triggerType ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WABLocationTriggerType triggerType;
@end

#endif // __WABLocationTrigger_DEFINED__

// Windows.ApplicationModel.Background.GeovisitTrigger
#ifndef __WABGeovisitTrigger_DEFINED__
#define __WABGeovisitTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABGeovisitTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WDGVisitMonitoringScope monitoringScope;
@end

#endif // __WABGeovisitTrigger_DEFINED__

// Windows.ApplicationModel.Background.ActivitySensorTrigger
#ifndef __WABActivitySensorTrigger_DEFINED__
#define __WABActivitySensorTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABActivitySensorTrigger : RTObject <WABIBackgroundTrigger>
+ (WABActivitySensorTrigger*)make:(unsigned int)reportIntervalInMilliseconds ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int minimumReportInterval;
@property (readonly) unsigned int reportInterval;
@property (readonly) NSMutableArray* /* WDSActivityType */ subscribedActivities;
@property (readonly) NSArray* /* WDSActivityType */ supportedActivities;
@end

#endif // __WABActivitySensorTrigger_DEFINED__

// Windows.ApplicationModel.Background.SensorDataThresholdTrigger
#ifndef __WABSensorDataThresholdTrigger_DEFINED__
#define __WABSensorDataThresholdTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSensorDataThresholdTrigger : RTObject <WABIBackgroundTrigger>
+ (WABSensorDataThresholdTrigger*)make:(RTObject<WDSISensorDataThreshold>*)threshold ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABSensorDataThresholdTrigger_DEFINED__

// Windows.ApplicationModel.Background.NetworkOperatorHotspotAuthenticationTrigger
#ifndef __WABNetworkOperatorHotspotAuthenticationTrigger_DEFINED__
#define __WABNetworkOperatorHotspotAuthenticationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABNetworkOperatorHotspotAuthenticationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABNetworkOperatorHotspotAuthenticationTrigger_DEFINED__

// Windows.ApplicationModel.Background.SocketActivityTrigger
#ifndef __WABSocketActivityTrigger_DEFINED__
#define __WABSocketActivityTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABSocketActivityTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isWakeFromLowPowerSupported;
@end

#endif // __WABSocketActivityTrigger_DEFINED__

// Windows.ApplicationModel.Background.PushNotificationTrigger
#ifndef __WABPushNotificationTrigger_DEFINED__
#define __WABPushNotificationTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABPushNotificationTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WABPushNotificationTrigger*)make:(NSString *)applicationId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABPushNotificationTrigger_DEFINED__

// Windows.ApplicationModel.Background.ToastNotificationHistoryChangedTrigger
#ifndef __WABToastNotificationHistoryChangedTrigger_DEFINED__
#define __WABToastNotificationHistoryChangedTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABToastNotificationHistoryChangedTrigger : RTObject <WABIBackgroundTrigger>
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WABToastNotificationHistoryChangedTrigger*)make:(NSString *)applicationId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABToastNotificationHistoryChangedTrigger_DEFINED__

// Windows.ApplicationModel.Background.ToastNotificationActionTrigger
#ifndef __WABToastNotificationActionTrigger_DEFINED__
#define __WABToastNotificationActionTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABToastNotificationActionTrigger : RTObject <WABIBackgroundTrigger>
+ (WABToastNotificationActionTrigger*)make:(NSString *)applicationId ACTIVATOR;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABToastNotificationActionTrigger_DEFINED__

// Windows.ApplicationModel.Background.UserNotificationChangedTrigger
#ifndef __WABUserNotificationChangedTrigger_DEFINED__
#define __WABUserNotificationChangedTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABUserNotificationChangedTrigger : RTObject <WABIBackgroundTrigger>
+ (WABUserNotificationChangedTrigger*)make:(WUNNotificationKinds)notificationKinds ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WABUserNotificationChangedTrigger_DEFINED__

// Windows.ApplicationModel.Background.AppBroadcastTriggerProviderInfo
#ifndef __WABAppBroadcastTriggerProviderInfo_DEFINED__
#define __WABAppBroadcastTriggerProviderInfo_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABAppBroadcastTriggerProviderInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFTimeSpan* videoKeyFrameInterval;
@property unsigned int maxVideoWidth;
@property unsigned int maxVideoHeight;
@property unsigned int maxVideoBitrate;
@property (retain) NSString * logoResource;
@property (retain) NSString * displayNameResource;
@end

#endif // __WABAppBroadcastTriggerProviderInfo_DEFINED__

// Windows.ApplicationModel.Background.AppBroadcastTrigger
#ifndef __WABAppBroadcastTrigger_DEFINED__
#define __WABAppBroadcastTrigger_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WABAppBroadcastTrigger : RTObject <WABIBackgroundTrigger>
+ (WABAppBroadcastTrigger*)makeAppBroadcastTrigger:(NSString *)providerKey ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WABAppBroadcastTriggerProviderInfo* providerInfo;
@end

#endif // __WABAppBroadcastTrigger_DEFINED__

