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

// WindowsNetworkingNetworkOperators.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
#define OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsNetworkingNetworkOperators.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WNNMobileBroadbandAccount, WNNMobileBroadbandNetwork, WNNMobileBroadbandDeviceInformation, WNNMobileBroadbandPinManager, WNNMobileBroadbandUiccApp, WNNMobileBroadbandCellsInfo, WNNNetworkOperatorTetheringAccessPointConfiguration, WNNNetworkOperatorTetheringOperationResult, WNNNetworkOperatorTetheringManager, WNNNetworkOperatorTetheringClient, WNNMobileBroadbandAccountEventArgs, WNNMobileBroadbandAccountUpdatedEventArgs, WNNMobileBroadbandAccountWatcher, WNNMobileBroadbandModem, WNNMobileBroadbandUicc, WNNMobileBroadbandSarManager, WNNMobileBroadbandModemConfiguration, WNNMobileBroadbandDeviceServiceInformation, WNNMobileBroadbandDeviceService, WNNMobileBroadbandPin, WNNMobileBroadbandPinOperationResult, WNNMobileBroadbandDeviceServiceDataSession, WNNMobileBroadbandDeviceServiceCommandSession, WNNMobileBroadbandDeviceServiceDataReceivedEventArgs, WNNMobileBroadbandDeviceServiceCommandResult, WNNMobileBroadbandUiccAppsResult, WNNMobileBroadbandUiccAppRecordDetailsResult, WNNMobileBroadbandUiccAppReadRecordResult, WNNMobileBroadbandNetworkRegistrationStateChange, WNNMobileBroadbandNetworkRegistrationStateChangeTriggerDetails, WNNMobileBroadbandRadioStateChange, WNNMobileBroadbandRadioStateChangeTriggerDetails, WNNMobileBroadbandPinLockStateChange, WNNMobileBroadbandPinLockStateChangeTriggerDetails, WNNMobileBroadbandDeviceServiceTriggerDetails, WNNKnownCSimFilePaths, WNNKnownRuimFilePaths, WNNKnownSimFilePaths, WNNKnownUSimFilePaths, WNNMobileBroadbandCellCdma, WNNMobileBroadbandCellGsm, WNNMobileBroadbandCellLte, WNNMobileBroadbandCellTdscdma, WNNMobileBroadbandCellUmts, WNNMobileBroadbandAntennaSar, WNNMobileBroadbandTransmissionStateChangedEventArgs, WNNHotspotAuthenticationEventDetails, WNNHotspotAuthenticationContext, WNNHotspotCredentialsAuthenticationResult, WNNProvisionFromXmlDocumentResults, WNNProvisionedProfile, WNNProvisioningAgent, WNNUssdMessage, WNNUssdReply, WNNUssdSession, WNNNetworkOperatorNotificationEventDetails, WNNFdnAccessManager;
@class WNNProfileUsage;
@protocol WNNIMobileBroadbandAccountStatics, WNNIMobileBroadbandAccount, WNNIMobileBroadbandAccount2, WNNIMobileBroadbandAccount3, WNNIMobileBroadbandDeviceInformation, WNNIMobileBroadbandDeviceInformation2, WNNIMobileBroadbandDeviceInformation3, WNNIMobileBroadbandNetwork, WNNIMobileBroadbandNetwork2, WNNIMobileBroadbandNetwork3, WNNINetworkOperatorTetheringAccessPointConfiguration, WNNINetworkOperatorTetheringOperationResult, WNNINetworkOperatorTetheringManagerStatics, WNNINetworkOperatorTetheringManagerStatics2, WNNINetworkOperatorTetheringManagerStatics3, WNNINetworkOperatorTetheringManager, WNNINetworkOperatorTetheringClient, WNNINetworkOperatorTetheringClientManager, WNNIMobileBroadbandAccountEventArgs, WNNIMobileBroadbandAccountUpdatedEventArgs, WNNIMobileBroadbandAccountWatcher, WNNIMobileBroadbandModemStatics, WNNIMobileBroadbandModemConfiguration, WNNIMobileBroadbandModemConfiguration2, WNNIMobileBroadbandModem, WNNIMobileBroadbandModem2, WNNIMobileBroadbandPinManager, WNNIMobileBroadbandPinOperationResult, WNNIMobileBroadbandPin, WNNIMobileBroadbandDeviceServiceInformation, WNNIMobileBroadbandDeviceService, WNNIMobileBroadbandDeviceServiceDataReceivedEventArgs, WNNIMobileBroadbandDeviceServiceDataSession, WNNIMobileBroadbandDeviceServiceCommandResult, WNNIMobileBroadbandDeviceServiceCommandSession, WNNIMobileBroadbandUiccAppsResult, WNNIMobileBroadbandUicc, WNNIMobileBroadbandUiccAppRecordDetailsResult, WNNIMobileBroadbandUiccAppReadRecordResult, WNNIMobileBroadbandUiccApp, WNNIMobileBroadbandNetworkRegistrationStateChange, WNNIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails, WNNIMobileBroadbandRadioStateChange, WNNIMobileBroadbandRadioStateChangeTriggerDetails, WNNIMobileBroadbandPinLockStateChange, WNNIMobileBroadbandPinLockStateChangeTriggerDetails, WNNIMobileBroadbandDeviceServiceTriggerDetails, WNNIKnownCSimFilePathsStatics, WNNIKnownRuimFilePathsStatics, WNNIKnownSimFilePathsStatics, WNNIKnownUSimFilePathsStatics, WNNIMobileBroadbandCellCdma, WNNIMobileBroadbandCellGsm, WNNIMobileBroadbandCellLte, WNNIMobileBroadbandCellTdscdma, WNNIMobileBroadbandCellUmts, WNNIMobileBroadbandCellsInfo, WNNIMobileBroadbandAntennaSar, WNNIMobileBroadbandSarManager, WNNIMobileBroadbandTransmissionStateChangedEventArgs, WNNIHotspotAuthenticationEventDetails, WNNIHotspotAuthenticationContextStatics, WNNIHotspotAuthenticationContext, WNNIHotspotCredentialsAuthenticationResult, WNNIHotspotAuthenticationContext2, WNNIProvisionFromXmlDocumentResults, WNNIProvisionedProfile, WNNIProvisioningAgent, WNNIProvisioningAgentStaticMethods, WNNIUssdMessage, WNNIUssdMessageFactory, WNNIUssdReply, WNNIUssdSession, WNNIUssdSessionStatics, WNNINetworkOperatorNotificationEventDetails, WNNINetworkOperatorTetheringEntitlementCheck, WNNIFdnAccessManagerStatics;

// Windows.Networking.NetworkOperators.DataClasses
enum _WNNDataClasses {
    WNNDataClassesNone = 0,
    WNNDataClassesGprs = 1,
    WNNDataClassesEdge = 2,
    WNNDataClassesUmts = 4,
    WNNDataClassesHsdpa = 8,
    WNNDataClassesHsupa = 16,
    WNNDataClassesLteAdvanced = 32,
    WNNDataClassesCdma1xRtt = 65536,
    WNNDataClassesCdma1xEvdo = 131072,
    WNNDataClassesCdma1xEvdoRevA = 262144,
    WNNDataClassesCdma1xEvdv = 524288,
    WNNDataClassesCdma3xRtt = 1048576,
    WNNDataClassesCdma1xEvdoRevB = 2097152,
    WNNDataClassesCdmaUmb = 4194304,
    WNNDataClassesCustom = -2147483648,
};
typedef unsigned WNNDataClasses;

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceType
enum _WNNMobileBroadbandDeviceType {
    WNNMobileBroadbandDeviceTypeUnknown = 0,
    WNNMobileBroadbandDeviceTypeEmbedded = 1,
    WNNMobileBroadbandDeviceTypeRemovable = 2,
    WNNMobileBroadbandDeviceTypeRemote = 3,
};
typedef unsigned WNNMobileBroadbandDeviceType;

// Windows.Networking.NetworkOperators.NetworkDeviceStatus
enum _WNNNetworkDeviceStatus {
    WNNNetworkDeviceStatusDeviceNotReady = 0,
    WNNNetworkDeviceStatusDeviceReady = 1,
    WNNNetworkDeviceStatusSimNotInserted = 2,
    WNNNetworkDeviceStatusBadSim = 3,
    WNNNetworkDeviceStatusDeviceHardwareFailure = 4,
    WNNNetworkDeviceStatusAccountNotActivated = 5,
    WNNNetworkDeviceStatusDeviceLocked = 6,
    WNNNetworkDeviceStatusDeviceBlocked = 7,
};
typedef unsigned WNNNetworkDeviceStatus;

// Windows.Networking.NetworkOperators.NetworkRegistrationState
enum _WNNNetworkRegistrationState {
    WNNNetworkRegistrationStateNone = 0,
    WNNNetworkRegistrationStateDeregistered = 1,
    WNNNetworkRegistrationStateSearching = 2,
    WNNNetworkRegistrationStateHome = 3,
    WNNNetworkRegistrationStateRoaming = 4,
    WNNNetworkRegistrationStatePartner = 5,
    WNNNetworkRegistrationStateDenied = 6,
};
typedef unsigned WNNNetworkRegistrationState;

// Windows.Networking.NetworkOperators.MobileBroadbandRadioState
enum _WNNMobileBroadbandRadioState {
    WNNMobileBroadbandRadioStateOff = 0,
    WNNMobileBroadbandRadioStateOn = 1,
};
typedef unsigned WNNMobileBroadbandRadioState;

// Windows.Networking.NetworkOperators.NetworkOperatorEventMessageType
enum _WNNNetworkOperatorEventMessageType {
    WNNNetworkOperatorEventMessageTypeGsm = 0,
    WNNNetworkOperatorEventMessageTypeCdma = 1,
    WNNNetworkOperatorEventMessageTypeUssd = 2,
    WNNNetworkOperatorEventMessageTypeDataPlanThresholdReached = 3,
    WNNNetworkOperatorEventMessageTypeDataPlanReset = 4,
    WNNNetworkOperatorEventMessageTypeDataPlanDeleted = 5,
    WNNNetworkOperatorEventMessageTypeProfileConnected = 6,
    WNNNetworkOperatorEventMessageTypeProfileDisconnected = 7,
    WNNNetworkOperatorEventMessageTypeRegisteredRoaming = 8,
    WNNNetworkOperatorEventMessageTypeRegisteredHome = 9,
    WNNNetworkOperatorEventMessageTypeTetheringEntitlementCheck = 10,
    WNNNetworkOperatorEventMessageTypeTetheringOperationalStateChanged = 11,
    WNNNetworkOperatorEventMessageTypeTetheringNumberOfClientsChanged = 12,
};
typedef unsigned WNNNetworkOperatorEventMessageType;

// Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcherStatus
enum _WNNMobileBroadbandAccountWatcherStatus {
    WNNMobileBroadbandAccountWatcherStatusCreated = 0,
    WNNMobileBroadbandAccountWatcherStatusStarted = 1,
    WNNMobileBroadbandAccountWatcherStatusEnumerationCompleted = 2,
    WNNMobileBroadbandAccountWatcherStatusStopped = 3,
    WNNMobileBroadbandAccountWatcherStatusAborted = 4,
};
typedef unsigned WNNMobileBroadbandAccountWatcherStatus;

// Windows.Networking.NetworkOperators.TetheringOperationalState
enum _WNNTetheringOperationalState {
    WNNTetheringOperationalStateUnknown = 0,
    WNNTetheringOperationalStateOn = 1,
    WNNTetheringOperationalStateOff = 2,
    WNNTetheringOperationalStateInTransition = 3,
};
typedef unsigned WNNTetheringOperationalState;

// Windows.Networking.NetworkOperators.TetheringCapability
enum _WNNTetheringCapability {
    WNNTetheringCapabilityEnabled = 0,
    WNNTetheringCapabilityDisabledByGroupPolicy = 1,
    WNNTetheringCapabilityDisabledByHardwareLimitation = 2,
    WNNTetheringCapabilityDisabledByOperator = 3,
    WNNTetheringCapabilityDisabledBySku = 4,
    WNNTetheringCapabilityDisabledByRequiredAppNotInstalled = 5,
    WNNTetheringCapabilityDisabledDueToUnknownCause = 6,
    WNNTetheringCapabilityDisabledBySystemCapability = 7,
};
typedef unsigned WNNTetheringCapability;

// Windows.Networking.NetworkOperators.TetheringOperationStatus
enum _WNNTetheringOperationStatus {
    WNNTetheringOperationStatusSuccess = 0,
    WNNTetheringOperationStatusUnknown = 1,
    WNNTetheringOperationStatusMobileBroadbandDeviceOff = 2,
    WNNTetheringOperationStatusWiFiDeviceOff = 3,
    WNNTetheringOperationStatusEntitlementCheckTimeout = 4,
    WNNTetheringOperationStatusEntitlementCheckFailure = 5,
    WNNTetheringOperationStatusOperationInProgress = 6,
    WNNTetheringOperationStatusBluetoothDeviceOff = 7,
    WNNTetheringOperationStatusNetworkLimitedConnectivity = 8,
};
typedef unsigned WNNTetheringOperationStatus;

// Windows.Networking.NetworkOperators.MobileBroadbandPinLockState
enum _WNNMobileBroadbandPinLockState {
    WNNMobileBroadbandPinLockStateUnknown = 0,
    WNNMobileBroadbandPinLockStateUnlocked = 1,
    WNNMobileBroadbandPinLockStatePinRequired = 2,
    WNNMobileBroadbandPinLockStatePinUnblockKeyRequired = 3,
};
typedef unsigned WNNMobileBroadbandPinLockState;

// Windows.Networking.NetworkOperators.MobileBroadbandPinType
enum _WNNMobileBroadbandPinType {
    WNNMobileBroadbandPinTypeNone = 0,
    WNNMobileBroadbandPinTypeCustom = 1,
    WNNMobileBroadbandPinTypePin1 = 2,
    WNNMobileBroadbandPinTypePin2 = 3,
    WNNMobileBroadbandPinTypeSimPin = 4,
    WNNMobileBroadbandPinTypeFirstSimPin = 5,
    WNNMobileBroadbandPinTypeNetworkPin = 6,
    WNNMobileBroadbandPinTypeNetworkSubsetPin = 7,
    WNNMobileBroadbandPinTypeServiceProviderPin = 8,
    WNNMobileBroadbandPinTypeCorporatePin = 9,
    WNNMobileBroadbandPinTypeSubsidyLock = 10,
};
typedef unsigned WNNMobileBroadbandPinType;

// Windows.Networking.NetworkOperators.MobileBroadbandPinFormat
enum _WNNMobileBroadbandPinFormat {
    WNNMobileBroadbandPinFormatUnknown = 0,
    WNNMobileBroadbandPinFormatNumeric = 1,
    WNNMobileBroadbandPinFormatAlphanumeric = 2,
};
typedef unsigned WNNMobileBroadbandPinFormat;

// Windows.Networking.NetworkOperators.MobileBroadbandUiccAppOperationStatus
enum _WNNMobileBroadbandUiccAppOperationStatus {
    WNNMobileBroadbandUiccAppOperationStatusSuccess = 0,
    WNNMobileBroadbandUiccAppOperationStatusInvalidUiccFilePath = 1,
    WNNMobileBroadbandUiccAppOperationStatusAccessConditionNotHeld = 2,
    WNNMobileBroadbandUiccAppOperationStatusUiccBusy = 3,
};
typedef unsigned WNNMobileBroadbandUiccAppOperationStatus;

// Windows.Networking.NetworkOperators.UiccAppKind
enum _WNNUiccAppKind {
    WNNUiccAppKindUnknown = 0,
    WNNUiccAppKindMF = 1,
    WNNUiccAppKindMFSim = 2,
    WNNUiccAppKindMFRuim = 3,
    WNNUiccAppKindUSim = 4,
    WNNUiccAppKindCSim = 5,
    WNNUiccAppKindISim = 6,
};
typedef unsigned WNNUiccAppKind;

// Windows.Networking.NetworkOperators.UiccAppRecordKind
enum _WNNUiccAppRecordKind {
    WNNUiccAppRecordKindUnknown = 0,
    WNNUiccAppRecordKindTransparent = 1,
    WNNUiccAppRecordKindRecordOriented = 2,
};
typedef unsigned WNNUiccAppRecordKind;

// Windows.Networking.NetworkOperators.UiccAccessCondition
enum _WNNUiccAccessCondition {
    WNNUiccAccessConditionAlwaysAllowed = 0,
    WNNUiccAccessConditionPin1 = 1,
    WNNUiccAccessConditionPin2 = 2,
    WNNUiccAccessConditionPin3 = 3,
    WNNUiccAccessConditionPin4 = 4,
    WNNUiccAccessConditionAdministrative5 = 5,
    WNNUiccAccessConditionAdministrative6 = 6,
    WNNUiccAccessConditionNeverAllowed = 7,
};
typedef unsigned WNNUiccAccessCondition;

// Windows.Networking.NetworkOperators.MobileBroadbandModemStatus
enum _WNNMobileBroadbandModemStatus {
    WNNMobileBroadbandModemStatusSuccess = 0,
    WNNMobileBroadbandModemStatusOtherFailure = 1,
    WNNMobileBroadbandModemStatusBusy = 2,
    WNNMobileBroadbandModemStatusNoDeviceSupport = 3,
};
typedef unsigned WNNMobileBroadbandModemStatus;

// Windows.Networking.NetworkOperators.HotspotAuthenticationResponseCode
enum _WNNHotspotAuthenticationResponseCode {
    WNNHotspotAuthenticationResponseCodeNoError = 0,
    WNNHotspotAuthenticationResponseCodeLoginSucceeded = 50,
    WNNHotspotAuthenticationResponseCodeLoginFailed = 100,
    WNNHotspotAuthenticationResponseCodeRadiusServerError = 102,
    WNNHotspotAuthenticationResponseCodeNetworkAdministratorError = 105,
    WNNHotspotAuthenticationResponseCodeLoginAborted = 151,
    WNNHotspotAuthenticationResponseCodeAccessGatewayInternalError = 255,
};
typedef unsigned WNNHotspotAuthenticationResponseCode;

// Windows.Networking.NetworkOperators.ProfileMediaType
enum _WNNProfileMediaType {
    WNNProfileMediaTypeWlan = 0,
    WNNProfileMediaTypeWwan = 1,
};
typedef unsigned WNNProfileMediaType;

// Windows.Networking.NetworkOperators.UssdResultCode
enum _WNNUssdResultCode {
    WNNUssdResultCodeNoActionRequired = 0,
    WNNUssdResultCodeActionRequired = 1,
    WNNUssdResultCodeTerminated = 2,
    WNNUssdResultCodeOtherLocalClient = 3,
    WNNUssdResultCodeOperationNotSupported = 4,
    WNNUssdResultCodeNetworkTimeout = 5,
};
typedef unsigned WNNUssdResultCode;

#include "WindowsNetworkingConnectivity.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsDevicesSms.h"
#include "WindowsNetworking.h"
#include "WindowsDataXmlDom.h"

#import <Foundation/Foundation.h>

// [struct] Windows.Networking.NetworkOperators.ProfileUsage
OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNProfileUsage : NSObject
+ (instancetype)new;
@property unsigned int usageInMegabytes;
@property (retain) WFDateTime* lastSyncTime;
@end

// Windows.Networking.NetworkOperators.MobileBroadbandAccount
#ifndef __WNNMobileBroadbandAccount_DEFINED__
#define __WNNMobileBroadbandAccount_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandAccount : RTObject
+ (WNNMobileBroadbandAccount*)createFromNetworkAccountId:(NSString *)networkAccountId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNMobileBroadbandDeviceInformation* currentDeviceInformation;
@property (readonly) WNNMobileBroadbandNetwork* currentNetwork;
@property (readonly) NSString * networkAccountId;
@property (readonly) WFGUID* serviceProviderGuid;
@property (readonly) NSString * serviceProviderName;
@property (readonly) WFUri* accountExperienceUrl;
+ (NSArray* /* NSString * */)availableNetworkAccountIds;
- (NSArray* /* WNCConnectionProfile* */)getConnectionProfiles;
@end

#endif // __WNNMobileBroadbandAccount_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandNetwork
#ifndef __WNNMobileBroadbandNetwork_DEFINED__
#define __WNNMobileBroadbandNetwork_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandNetwork : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * accessPointName;
@property (readonly) unsigned int activationNetworkError;
@property (readonly) WNCNetworkAdapter* networkAdapter;
@property (readonly) WNNNetworkRegistrationState networkRegistrationState;
@property (readonly) unsigned int packetAttachNetworkError;
@property (readonly) WNNDataClasses registeredDataClass;
@property (readonly) NSString * registeredProviderId;
@property (readonly) NSString * registeredProviderName;
@property (readonly) unsigned int registrationNetworkError;
@property (readonly) NSArray* /* WNNMobileBroadbandUiccApp* */ registrationUiccApps;
- (void)showConnectionUI;
- (void)getVoiceCallSupportAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)getCellsInfoAsyncWithSuccess:(void (^)(WNNMobileBroadbandCellsInfo*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNMobileBroadbandNetwork_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation
#ifndef __WNNMobileBroadbandDeviceInformation_DEFINED__
#define __WNNMobileBroadbandDeviceInformation_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDSCellularClass cellularClass;
@property (readonly) WNNMobileBroadbandRadioState currentRadioState;
@property (readonly) NSString * customDataClass;
@property (readonly) WNNDataClasses dataClasses;
@property (readonly) NSString * deviceId;
@property (readonly) WNNMobileBroadbandDeviceType deviceType;
@property (readonly) NSString * firmwareInformation;
@property (readonly) NSString * manufacturer;
@property (readonly) NSString * mobileEquipmentId;
@property (readonly) NSString * model;
@property (readonly) WNNNetworkDeviceStatus networkDeviceStatus;
@property (readonly) NSString * simIccId;
@property (readonly) NSString * subscriberId;
@property (readonly) NSArray* /* NSString * */ telephoneNumbers;
@property (readonly) WNNMobileBroadbandPinManager* pinManager;
@property (readonly) NSString * revision;
@property (readonly) NSString * serialNumber;
@property (readonly) NSString * simGid1;
@property (readonly) NSString * simPnn;
@property (readonly) NSString * simSpn;
@end

#endif // __WNNMobileBroadbandDeviceInformation_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandPinManager
#ifndef __WNNMobileBroadbandPinManager_DEFINED__
#define __WNNMobileBroadbandPinManager_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandPinManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandPinType */ supportedPins;
- (WNNMobileBroadbandPin*)getPin:(WNNMobileBroadbandPinType)pinType;
@end

#endif // __WNNMobileBroadbandPinManager_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandUiccApp
#ifndef __WNNMobileBroadbandUiccApp_DEFINED__
#define __WNNMobileBroadbandUiccApp_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandUiccApp : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* id;
@property (readonly) WNNUiccAppKind kind;
- (void)getRecordDetailsAsync:(id<NSFastEnumeration> /* unsigned int */)uiccFilePath success:(void (^)(WNNMobileBroadbandUiccAppRecordDetailsResult*))success failure:(void (^)(NSError*))failure;
- (void)readRecordAsync:(id<NSFastEnumeration> /* unsigned int */)uiccFilePath recordIndex:(int)recordIndex success:(void (^)(WNNMobileBroadbandUiccAppReadRecordResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNMobileBroadbandUiccApp_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellsInfo
#ifndef __WNNMobileBroadbandCellsInfo_DEFINED__
#define __WNNMobileBroadbandCellsInfo_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellsInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandCellCdma* */ neighboringCellsCdma;
@property (readonly) NSArray* /* WNNMobileBroadbandCellGsm* */ neighboringCellsGsm;
@property (readonly) NSArray* /* WNNMobileBroadbandCellLte* */ neighboringCellsLte;
@property (readonly) NSArray* /* WNNMobileBroadbandCellTdscdma* */ neighboringCellsTdscdma;
@property (readonly) NSArray* /* WNNMobileBroadbandCellUmts* */ neighboringCellsUmts;
@property (readonly) NSArray* /* WNNMobileBroadbandCellCdma* */ servingCellsCdma;
@property (readonly) NSArray* /* WNNMobileBroadbandCellGsm* */ servingCellsGsm;
@property (readonly) NSArray* /* WNNMobileBroadbandCellLte* */ servingCellsLte;
@property (readonly) NSArray* /* WNNMobileBroadbandCellTdscdma* */ servingCellsTdscdma;
@property (readonly) NSArray* /* WNNMobileBroadbandCellUmts* */ servingCellsUmts;
@end

#endif // __WNNMobileBroadbandCellsInfo_DEFINED__

// Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration
#ifndef __WNNNetworkOperatorTetheringAccessPointConfiguration_DEFINED__
#define __WNNNetworkOperatorTetheringAccessPointConfiguration_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNNetworkOperatorTetheringAccessPointConfiguration : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * ssid;
@property (retain) NSString * passphrase;
@end

#endif // __WNNNetworkOperatorTetheringAccessPointConfiguration_DEFINED__

// Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult
#ifndef __WNNNetworkOperatorTetheringOperationResult_DEFINED__
#define __WNNNetworkOperatorTetheringOperationResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNNetworkOperatorTetheringOperationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * additionalErrorMessage;
@property (readonly) WNNTetheringOperationStatus status;
@end

#endif // __WNNNetworkOperatorTetheringOperationResult_DEFINED__

// Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager
#ifndef __WNNNetworkOperatorTetheringManager_DEFINED__
#define __WNNNetworkOperatorTetheringManager_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNNetworkOperatorTetheringManager : RTObject
+ (WNNNetworkOperatorTetheringManager*)createFromConnectionProfileWithTargetAdapter:(WNCConnectionProfile*)profile adapter:(WNCNetworkAdapter*)adapter;
+ (WNNTetheringCapability)getTetheringCapabilityFromConnectionProfile:(WNCConnectionProfile*)profile;
+ (WNNNetworkOperatorTetheringManager*)createFromConnectionProfile:(WNCConnectionProfile*)profile;
+ (WNNTetheringCapability)getTetheringCapability:(NSString *)networkAccountId;
+ (WNNNetworkOperatorTetheringManager*)createFromNetworkAccountId:(NSString *)networkAccountId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int clientCount;
@property (readonly) unsigned int maxClientCount;
@property (readonly) WNNTetheringOperationalState tetheringOperationalState;
- (WNNNetworkOperatorTetheringAccessPointConfiguration*)getCurrentAccessPointConfiguration;
- (RTObject<WFIAsyncAction>*)configureAccessPointAsync:(WNNNetworkOperatorTetheringAccessPointConfiguration*)configuration;
- (void)startTetheringAsyncWithSuccess:(void (^)(WNNNetworkOperatorTetheringOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)stopTetheringAsyncWithSuccess:(void (^)(WNNNetworkOperatorTetheringOperationResult*))success failure:(void (^)(NSError*))failure;
- (NSArray* /* WNNNetworkOperatorTetheringClient* */)getTetheringClients;
@end

#endif // __WNNNetworkOperatorTetheringManager_DEFINED__

// Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient
#ifndef __WNNNetworkOperatorTetheringClient_DEFINED__
#define __WNNNetworkOperatorTetheringClient_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNNetworkOperatorTetheringClient : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNHostName* */ hostNames;
@property (readonly) NSString * macAddress;
@end

#endif // __WNNNetworkOperatorTetheringClient_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs
#ifndef __WNNMobileBroadbandAccountEventArgs_DEFINED__
#define __WNNMobileBroadbandAccountEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandAccountEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * networkAccountId;
@end

#endif // __WNNMobileBroadbandAccountEventArgs_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs
#ifndef __WNNMobileBroadbandAccountUpdatedEventArgs_DEFINED__
#define __WNNMobileBroadbandAccountUpdatedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandAccountUpdatedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL hasDeviceInformationChanged;
@property (readonly) BOOL hasNetworkChanged;
@property (readonly) NSString * networkAccountId;
@end

#endif // __WNNMobileBroadbandAccountUpdatedEventArgs_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher
#ifndef __WNNMobileBroadbandAccountWatcher_DEFINED__
#define __WNNMobileBroadbandAccountWatcher_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandAccountWatcher : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNMobileBroadbandAccountWatcherStatus status;
- (EventRegistrationToken)addAccountAddedEvent:(void(^)(WNNMobileBroadbandAccountWatcher*, WNNMobileBroadbandAccountEventArgs*))del;
- (void)removeAccountAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAccountRemovedEvent:(void(^)(WNNMobileBroadbandAccountWatcher*, WNNMobileBroadbandAccountEventArgs*))del;
- (void)removeAccountRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAccountUpdatedEvent:(void(^)(WNNMobileBroadbandAccountWatcher*, WNNMobileBroadbandAccountUpdatedEventArgs*))del;
- (void)removeAccountUpdatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WNNMobileBroadbandAccountWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WNNMobileBroadbandAccountWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WNNMobileBroadbandAccountWatcher_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandModem
#ifndef __WNNMobileBroadbandModem_DEFINED__
#define __WNNMobileBroadbandModem_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandModem : RTObject
+ (NSString *)getDeviceSelector;
+ (WNNMobileBroadbandModem*)fromId:(NSString *)deviceId;
+ (WNNMobileBroadbandModem*)getDefault;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNMobileBroadbandAccount* currentAccount;
@property (readonly) WNNMobileBroadbandNetwork* currentNetwork;
@property (readonly) WNNMobileBroadbandDeviceInformation* deviceInformation;
@property (readonly) NSArray* /* WNNMobileBroadbandDeviceServiceInformation* */ deviceServices;
@property (readonly) BOOL isResetSupported;
@property (readonly) unsigned int maxDeviceServiceCommandSizeInBytes;
@property (readonly) unsigned int maxDeviceServiceDataSizeInBytes;
- (WNNMobileBroadbandDeviceService*)getDeviceService:(WFGUID*)deviceServiceId;
- (RTObject<WFIAsyncAction>*)resetAsync;
- (void)getCurrentConfigurationAsyncWithSuccess:(void (^)(WNNMobileBroadbandModemConfiguration*))success failure:(void (^)(NSError*))failure;
- (void)getIsPassthroughEnabledAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)setIsPassthroughEnabledAsync:(BOOL)value success:(void (^)(WNNMobileBroadbandModemStatus))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNMobileBroadbandModem_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandUicc
#ifndef __WNNMobileBroadbandUicc_DEFINED__
#define __WNNMobileBroadbandUicc_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandUicc : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * simIccId;
- (void)getUiccAppsAsyncWithSuccess:(void (^)(WNNMobileBroadbandUiccAppsResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNMobileBroadbandUicc_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandSarManager
#ifndef __WNNMobileBroadbandSarManager_DEFINED__
#define __WNNMobileBroadbandSarManager_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandSarManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandAntennaSar* */ antennas;
@property (readonly) WFTimeSpan* hysteresisTimerPeriod;
@property (readonly) BOOL isBackoffEnabled;
@property (readonly) BOOL isSarControlledByHardware;
@property (readonly) BOOL isWiFiHardwareIntegrated;
- (EventRegistrationToken)addTransmissionStateChangedEvent:(void(^)(WNNMobileBroadbandSarManager*, WNNMobileBroadbandTransmissionStateChangedEventArgs*))del;
- (void)removeTransmissionStateChangedEvent:(EventRegistrationToken)tok;
- (RTObject<WFIAsyncAction>*)enableBackoffAsync;
- (RTObject<WFIAsyncAction>*)disableBackoffAsync;
- (RTObject<WFIAsyncAction>*)setConfigurationAsync:(id<NSFastEnumeration> /* WNNMobileBroadbandAntennaSar* */)antennas;
- (RTObject<WFIAsyncAction>*)revertSarToHardwareControlAsync;
- (RTObject<WFIAsyncAction>*)setTransmissionStateChangedHysteresisAsync:(WFTimeSpan*)timerPeriod;
- (void)getIsTransmittingAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)startTransmissionStateMonitoring;
- (void)stopTransmissionStateMonitoring;
@end

#endif // __WNNMobileBroadbandSarManager_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration
#ifndef __WNNMobileBroadbandModemConfiguration_DEFINED__
#define __WNNMobileBroadbandModemConfiguration_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandModemConfiguration : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * homeProviderId;
@property (readonly) NSString * homeProviderName;
@property (readonly) WNNMobileBroadbandUicc* uicc;
@property (readonly) WNNMobileBroadbandSarManager* sarManager;
@end

#endif // __WNNMobileBroadbandModemConfiguration_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation
#ifndef __WNNMobileBroadbandDeviceServiceInformation_DEFINED__
#define __WNNMobileBroadbandDeviceServiceInformation_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFGUID* deviceServiceId;
@property (readonly) BOOL isDataReadSupported;
@property (readonly) BOOL isDataWriteSupported;
@end

#endif // __WNNMobileBroadbandDeviceServiceInformation_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceService
#ifndef __WNNMobileBroadbandDeviceService_DEFINED__
#define __WNNMobileBroadbandDeviceService_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceService : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFGUID* deviceServiceId;
@property (readonly) NSArray* /* unsigned int */ supportedCommands;
- (WNNMobileBroadbandDeviceServiceDataSession*)openDataSession;
- (WNNMobileBroadbandDeviceServiceCommandSession*)openCommandSession;
@end

#endif // __WNNMobileBroadbandDeviceService_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandPin
#ifndef __WNNMobileBroadbandPin_DEFINED__
#define __WNNMobileBroadbandPin_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandPin : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int attemptsRemaining;
@property (readonly) BOOL enabled;
@property (readonly) WNNMobileBroadbandPinFormat format;
@property (readonly) WNNMobileBroadbandPinLockState lockState;
@property (readonly) unsigned int maxLength;
@property (readonly) unsigned int minLength;
@property (readonly) WNNMobileBroadbandPinType type;
- (void)enableAsync:(NSString *)currentPin success:(void (^)(WNNMobileBroadbandPinOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)disableAsync:(NSString *)currentPin success:(void (^)(WNNMobileBroadbandPinOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)enterAsync:(NSString *)currentPin success:(void (^)(WNNMobileBroadbandPinOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)changeAsync:(NSString *)currentPin newPin:(NSString *)newPin success:(void (^)(WNNMobileBroadbandPinOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)unblockAsync:(NSString *)pinUnblockKey newPin:(NSString *)newPin success:(void (^)(WNNMobileBroadbandPinOperationResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNMobileBroadbandPin_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult
#ifndef __WNNMobileBroadbandPinOperationResult_DEFINED__
#define __WNNMobileBroadbandPinOperationResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandPinOperationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int attemptsRemaining;
@property (readonly) BOOL isSuccessful;
@end

#endif // __WNNMobileBroadbandPinOperationResult_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession
#ifndef __WNNMobileBroadbandDeviceServiceDataSession_DEFINED__
#define __WNNMobileBroadbandDeviceServiceDataSession_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceDataSession : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addDataReceivedEvent:(void(^)(WNNMobileBroadbandDeviceServiceDataSession*, WNNMobileBroadbandDeviceServiceDataReceivedEventArgs*))del;
- (void)removeDataReceivedEvent:(EventRegistrationToken)tok;
- (RTObject<WFIAsyncAction>*)writeDataAsync:(RTObject<WSSIBuffer>*)value;
- (void)closeSession;
@end

#endif // __WNNMobileBroadbandDeviceServiceDataSession_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession
#ifndef __WNNMobileBroadbandDeviceServiceCommandSession_DEFINED__
#define __WNNMobileBroadbandDeviceServiceCommandSession_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceCommandSession : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)sendQueryCommandAsync:(unsigned int)commandId data:(RTObject<WSSIBuffer>*)data success:(void (^)(WNNMobileBroadbandDeviceServiceCommandResult*))success failure:(void (^)(NSError*))failure;
- (void)sendSetCommandAsync:(unsigned int)commandId data:(RTObject<WSSIBuffer>*)data success:(void (^)(WNNMobileBroadbandDeviceServiceCommandResult*))success failure:(void (^)(NSError*))failure;
- (void)closeSession;
@end

#endif // __WNNMobileBroadbandDeviceServiceCommandSession_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs
#ifndef __WNNMobileBroadbandDeviceServiceDataReceivedEventArgs_DEFINED__
#define __WNNMobileBroadbandDeviceServiceDataReceivedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceDataReceivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* receivedData;
@end

#endif // __WNNMobileBroadbandDeviceServiceDataReceivedEventArgs_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult
#ifndef __WNNMobileBroadbandDeviceServiceCommandResult_DEFINED__
#define __WNNMobileBroadbandDeviceServiceCommandResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceCommandResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* responseData;
@property (readonly) unsigned int statusCode;
@end

#endif // __WNNMobileBroadbandDeviceServiceCommandResult_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult
#ifndef __WNNMobileBroadbandUiccAppsResult_DEFINED__
#define __WNNMobileBroadbandUiccAppsResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandUiccAppsResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNMobileBroadbandUiccAppOperationStatus status;
@property (readonly) NSArray* /* WNNMobileBroadbandUiccApp* */ uiccApps;
@end

#endif // __WNNMobileBroadbandUiccAppsResult_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult
#ifndef __WNNMobileBroadbandUiccAppRecordDetailsResult_DEFINED__
#define __WNNMobileBroadbandUiccAppRecordDetailsResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandUiccAppRecordDetailsResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNUiccAppRecordKind kind;
@property (readonly) WNNUiccAccessCondition readAccessCondition;
@property (readonly) int recordCount;
@property (readonly) int recordSize;
@property (readonly) WNNMobileBroadbandUiccAppOperationStatus status;
@property (readonly) WNNUiccAccessCondition writeAccessCondition;
@end

#endif // __WNNMobileBroadbandUiccAppRecordDetailsResult_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult
#ifndef __WNNMobileBroadbandUiccAppReadRecordResult_DEFINED__
#define __WNNMobileBroadbandUiccAppReadRecordResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandUiccAppReadRecordResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* data;
@property (readonly) WNNMobileBroadbandUiccAppOperationStatus status;
@end

#endif // __WNNMobileBroadbandUiccAppReadRecordResult_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange
#ifndef __WNNMobileBroadbandNetworkRegistrationStateChange_DEFINED__
#define __WNNMobileBroadbandNetworkRegistrationStateChange_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandNetworkRegistrationStateChange : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@property (readonly) WNNMobileBroadbandNetwork* network;
@end

#endif // __WNNMobileBroadbandNetworkRegistrationStateChange_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails
#ifndef __WNNMobileBroadbandNetworkRegistrationStateChangeTriggerDetails_DEFINED__
#define __WNNMobileBroadbandNetworkRegistrationStateChangeTriggerDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandNetworkRegistrationStateChangeTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandNetworkRegistrationStateChange* */ networkRegistrationStateChanges;
@end

#endif // __WNNMobileBroadbandNetworkRegistrationStateChangeTriggerDetails_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange
#ifndef __WNNMobileBroadbandRadioStateChange_DEFINED__
#define __WNNMobileBroadbandRadioStateChange_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandRadioStateChange : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@property (readonly) WNNMobileBroadbandRadioState radioState;
@end

#endif // __WNNMobileBroadbandRadioStateChange_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails
#ifndef __WNNMobileBroadbandRadioStateChangeTriggerDetails_DEFINED__
#define __WNNMobileBroadbandRadioStateChangeTriggerDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandRadioStateChangeTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandRadioStateChange* */ radioStateChanges;
@end

#endif // __WNNMobileBroadbandRadioStateChangeTriggerDetails_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange
#ifndef __WNNMobileBroadbandPinLockStateChange_DEFINED__
#define __WNNMobileBroadbandPinLockStateChange_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandPinLockStateChange : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@property (readonly) WNNMobileBroadbandPinLockState pinLockState;
@property (readonly) WNNMobileBroadbandPinType pinType;
@end

#endif // __WNNMobileBroadbandPinLockStateChange_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails
#ifndef __WNNMobileBroadbandPinLockStateChangeTriggerDetails_DEFINED__
#define __WNNMobileBroadbandPinLockStateChangeTriggerDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandPinLockStateChangeTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNNMobileBroadbandPinLockStateChange* */ pinLockStateChanges;
@end

#endif // __WNNMobileBroadbandPinLockStateChangeTriggerDetails_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails
#ifndef __WNNMobileBroadbandDeviceServiceTriggerDetails_DEFINED__
#define __WNNMobileBroadbandDeviceServiceTriggerDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandDeviceServiceTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@property (readonly) WFGUID* deviceServiceId;
@property (readonly) RTObject<WSSIBuffer>* receivedData;
@end

#endif // __WNNMobileBroadbandDeviceServiceTriggerDetails_DEFINED__

// Windows.Networking.NetworkOperators.KnownCSimFilePaths
#ifndef __WNNKnownCSimFilePaths_DEFINED__
#define __WNNKnownCSimFilePaths_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNKnownCSimFilePaths : RTObject
+ (NSArray* /* unsigned int */)eFSpn;
+ (NSArray* /* unsigned int */)gid1;
+ (NSArray* /* unsigned int */)gid2;
@end

#endif // __WNNKnownCSimFilePaths_DEFINED__

// Windows.Networking.NetworkOperators.KnownRuimFilePaths
#ifndef __WNNKnownRuimFilePaths_DEFINED__
#define __WNNKnownRuimFilePaths_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNKnownRuimFilePaths : RTObject
+ (NSArray* /* unsigned int */)eFSpn;
+ (NSArray* /* unsigned int */)gid1;
+ (NSArray* /* unsigned int */)gid2;
@end

#endif // __WNNKnownRuimFilePaths_DEFINED__

// Windows.Networking.NetworkOperators.KnownSimFilePaths
#ifndef __WNNKnownSimFilePaths_DEFINED__
#define __WNNKnownSimFilePaths_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNKnownSimFilePaths : RTObject
+ (NSArray* /* unsigned int */)eFOns;
+ (NSArray* /* unsigned int */)eFSpn;
+ (NSArray* /* unsigned int */)gid1;
+ (NSArray* /* unsigned int */)gid2;
@end

#endif // __WNNKnownSimFilePaths_DEFINED__

// Windows.Networking.NetworkOperators.KnownUSimFilePaths
#ifndef __WNNKnownUSimFilePaths_DEFINED__
#define __WNNKnownUSimFilePaths_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNKnownUSimFilePaths : RTObject
+ (NSArray* /* unsigned int */)eFOpl;
+ (NSArray* /* unsigned int */)eFPnn;
+ (NSArray* /* unsigned int */)eFSpn;
+ (NSArray* /* unsigned int */)gid1;
+ (NSArray* /* unsigned int */)gid2;
@end

#endif // __WNNKnownUSimFilePaths_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellCdma
#ifndef __WNNMobileBroadbandCellCdma_DEFINED__
#define __WNNMobileBroadbandCellCdma_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellCdma : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* int */ baseStationId;
@property (readonly) id /* WFTimeSpan* */ baseStationLastBroadcastGpsTime;
@property (readonly) id /* double */ baseStationLatitude;
@property (readonly) id /* double */ baseStationLongitude;
@property (readonly) id /* int */ baseStationPNCode;
@property (readonly) id /* int */ networkId;
@property (readonly) id /* double */ pilotSignalStrengthInDB;
@property (readonly) id /* int */ systemId;
@end

#endif // __WNNMobileBroadbandCellCdma_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellGsm
#ifndef __WNNMobileBroadbandCellGsm_DEFINED__
#define __WNNMobileBroadbandCellGsm_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellGsm : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* int */ baseStationId;
@property (readonly) id /* int */ cellId;
@property (readonly) id /* int */ channelNumber;
@property (readonly) id /* int */ locationAreaCode;
@property (readonly) NSString * providerId;
@property (readonly) id /* double */ receivedSignalStrengthInDBm;
@property (readonly) id /* int */ timingAdvanceInBitPeriods;
@end

#endif // __WNNMobileBroadbandCellGsm_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellLte
#ifndef __WNNMobileBroadbandCellLte_DEFINED__
#define __WNNMobileBroadbandCellLte_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellLte : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* int */ cellId;
@property (readonly) id /* int */ channelNumber;
@property (readonly) id /* int */ physicalCellId;
@property (readonly) NSString * providerId;
@property (readonly) id /* double */ referenceSignalReceivedPowerInDBm;
@property (readonly) id /* double */ referenceSignalReceivedQualityInDBm;
@property (readonly) id /* int */ timingAdvanceInBitPeriods;
@property (readonly) id /* int */ trackingAreaCode;
@end

#endif // __WNNMobileBroadbandCellLte_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellTdscdma
#ifndef __WNNMobileBroadbandCellTdscdma_DEFINED__
#define __WNNMobileBroadbandCellTdscdma_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellTdscdma : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* int */ cellId;
@property (readonly) id /* int */ cellParameterId;
@property (readonly) id /* int */ channelNumber;
@property (readonly) id /* int */ locationAreaCode;
@property (readonly) id /* double */ pathLossInDB;
@property (readonly) NSString * providerId;
@property (readonly) id /* double */ receivedSignalCodePowerInDBm;
@property (readonly) id /* int */ timingAdvanceInBitPeriods;
@end

#endif // __WNNMobileBroadbandCellTdscdma_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandCellUmts
#ifndef __WNNMobileBroadbandCellUmts_DEFINED__
#define __WNNMobileBroadbandCellUmts_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandCellUmts : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* int */ cellId;
@property (readonly) id /* int */ channelNumber;
@property (readonly) id /* int */ locationAreaCode;
@property (readonly) id /* double */ pathLossInDB;
@property (readonly) id /* int */ primaryScramblingCode;
@property (readonly) NSString * providerId;
@property (readonly) id /* double */ receivedSignalCodePowerInDBm;
@property (readonly) id /* double */ signalToNoiseRatioInDB;
@end

#endif // __WNNMobileBroadbandCellUmts_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandAntennaSar
#ifndef __WNNMobileBroadbandAntennaSar_DEFINED__
#define __WNNMobileBroadbandAntennaSar_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandAntennaSar : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int antennaIndex;
@property (readonly) int sarBackoffIndex;
@end

#endif // __WNNMobileBroadbandAntennaSar_DEFINED__

// Windows.Networking.NetworkOperators.MobileBroadbandTransmissionStateChangedEventArgs
#ifndef __WNNMobileBroadbandTransmissionStateChangedEventArgs_DEFINED__
#define __WNNMobileBroadbandTransmissionStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNMobileBroadbandTransmissionStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isTransmitting;
@end

#endif // __WNNMobileBroadbandTransmissionStateChangedEventArgs_DEFINED__

// Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails
#ifndef __WNNHotspotAuthenticationEventDetails_DEFINED__
#define __WNNHotspotAuthenticationEventDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNHotspotAuthenticationEventDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * eventToken;
@end

#endif // __WNNHotspotAuthenticationEventDetails_DEFINED__

// Windows.Networking.NetworkOperators.HotspotAuthenticationContext
#ifndef __WNNHotspotAuthenticationContext_DEFINED__
#define __WNNHotspotAuthenticationContext_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNHotspotAuthenticationContext : RTObject
+ (BOOL)tryGetAuthenticationContext:(NSString *)evenToken context:(WNNHotspotAuthenticationContext**)context;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFUri* authenticationUrl;
@property (readonly) WNCNetworkAdapter* networkAdapter;
@property (readonly) WFUri* redirectMessageUrl;
@property (readonly) WDXDXmlDocument* redirectMessageXml;
@property (readonly) NSArray* /* uint8_t */ wirelessNetworkId;
- (void)issueCredentials:(NSString *)userName password:(NSString *)password extraParameters:(NSString *)extraParameters markAsManualConnectOnFailure:(BOOL)markAsManualConnectOnFailure;
- (void)abortAuthentication:(BOOL)markAsManual;
- (void)skipAuthentication;
- (void)triggerAttentionRequired:(NSString *)packageRelativeApplicationId applicationParameters:(NSString *)applicationParameters;
- (void)issueCredentialsAsync:(NSString *)userName password:(NSString *)password extraParameters:(NSString *)extraParameters markAsManualConnectOnFailure:(BOOL)markAsManualConnectOnFailure success:(void (^)(WNNHotspotCredentialsAuthenticationResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNHotspotAuthenticationContext_DEFINED__

// Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult
#ifndef __WNNHotspotCredentialsAuthenticationResult_DEFINED__
#define __WNNHotspotCredentialsAuthenticationResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNHotspotCredentialsAuthenticationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDXDXmlDocument* authenticationReplyXml;
@property (readonly) BOOL hasNetworkErrorOccurred;
@property (readonly) WFUri* logoffUrl;
@property (readonly) WNNHotspotAuthenticationResponseCode responseCode;
@end

#endif // __WNNHotspotCredentialsAuthenticationResult_DEFINED__

// Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults
#ifndef __WNNProvisionFromXmlDocumentResults_DEFINED__
#define __WNNProvisionFromXmlDocumentResults_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNProvisionFromXmlDocumentResults : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL allElementsProvisioned;
@property (readonly) NSString * provisionResultsXml;
@end

#endif // __WNNProvisionFromXmlDocumentResults_DEFINED__

// Windows.Networking.NetworkOperators.ProvisionedProfile
#ifndef __WNNProvisionedProfile_DEFINED__
#define __WNNProvisionedProfile_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNProvisionedProfile : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)updateCost:(WNCNetworkCostType)value;
- (void)updateUsage:(WNNProfileUsage*)value;
@end

#endif // __WNNProvisionedProfile_DEFINED__

// Windows.Networking.NetworkOperators.ProvisioningAgent
#ifndef __WNNProvisioningAgent_DEFINED__
#define __WNNProvisioningAgent_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNProvisioningAgent : RTObject
+ (WNNProvisioningAgent*)createFromNetworkAccountId:(NSString *)networkAccountId;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)provisionFromXmlDocumentAsync:(NSString *)provisioningXmlDocument success:(void (^)(WNNProvisionFromXmlDocumentResults*))success failure:(void (^)(NSError*))failure;
- (WNNProvisionedProfile*)getProvisionedProfile:(WNNProfileMediaType)mediaType profileName:(NSString *)profileName;
@end

#endif // __WNNProvisioningAgent_DEFINED__

// Windows.Networking.NetworkOperators.UssdMessage
#ifndef __WNNUssdMessage_DEFINED__
#define __WNNUssdMessage_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNUssdMessage : RTObject
+ (WNNUssdMessage*)makeMessage:(NSString *)messageText ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * payloadAsText;
@property uint8_t dataCodingScheme;
- (NSArray* /* uint8_t */)getPayload;
- (void)setPayload:(NSArray* /* uint8_t */)value;
@end

#endif // __WNNUssdMessage_DEFINED__

// Windows.Networking.NetworkOperators.UssdReply
#ifndef __WNNUssdReply_DEFINED__
#define __WNNUssdReply_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNUssdReply : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNNUssdMessage* message;
@property (readonly) WNNUssdResultCode resultCode;
@end

#endif // __WNNUssdReply_DEFINED__

// Windows.Networking.NetworkOperators.UssdSession
#ifndef __WNNUssdSession_DEFINED__
#define __WNNUssdSession_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNUssdSession : RTObject
+ (WNNUssdSession*)createFromNetworkAccountId:(NSString *)networkAccountId;
+ (WNNUssdSession*)createFromNetworkInterfaceId:(NSString *)networkInterfaceId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)sendMessageAndGetReplyAsync:(WNNUssdMessage*)message success:(void (^)(WNNUssdReply*))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WNNUssdSession_DEFINED__

// Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails
#ifndef __WNNNetworkOperatorNotificationEventDetails_DEFINED__
#define __WNNNetworkOperatorNotificationEventDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNNetworkOperatorNotificationEventDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) uint8_t encodingType;
@property (readonly) NSString * message;
@property (readonly) NSString * networkAccountId;
@property (readonly) WNNNetworkOperatorEventMessageType notificationType;
@property (readonly) NSString * ruleId;
@property (readonly) RTObject<WDSISmsMessage>* smsMessage;
- (void)authorizeTethering:(BOOL)allow entitlementFailureReason:(NSString *)entitlementFailureReason;
@end

#endif // __WNNNetworkOperatorNotificationEventDetails_DEFINED__

// Windows.Networking.NetworkOperators.FdnAccessManager
#ifndef __WNNFdnAccessManager_DEFINED__
#define __WNNFdnAccessManager_DEFINED__

OBJCUWPWINDOWSNETWORKINGNETWORKOPERATORSEXPORT
@interface WNNFdnAccessManager : RTObject
+ (void)requestUnlockAsync:(NSString *)contactListId success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNNFdnAccessManager_DEFINED__

