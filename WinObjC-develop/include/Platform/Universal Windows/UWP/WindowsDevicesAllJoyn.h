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

// WindowsDevicesAllJoyn.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
#define OBJCUWPWINDOWSDEVICESALLJOYNEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesAllJoyn.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDAAllJoynStatus, WDAAllJoynAboutData, WDAAllJoynBusAttachment, WDAAllJoynBusAttachmentStateChangedEventArgs, WDAAllJoynCredentialsRequestedEventArgs, WDAAllJoynCredentialsVerificationRequestedEventArgs, WDAAllJoynAuthenticationCompleteEventArgs, WDAAllJoynServiceInfo, WDAAllJoynAboutDataView, WDAAllJoynAcceptSessionJoinerEventArgs, WDAAllJoynSessionJoinedEventArgs, WDAAllJoynCredentials, WDAAllJoynSession, WDAAllJoynSessionMemberAddedEventArgs, WDAAllJoynSessionMemberRemovedEventArgs, WDAAllJoynSessionLostEventArgs, WDAAllJoynBusObject, WDAAllJoynBusObjectStoppedEventArgs, WDAAllJoynProducerStoppedEventArgs, WDAAllJoynWatcherStoppedEventArgs, WDAAllJoynServiceInfoRemovedEventArgs, WDAAllJoynMessageInfo;
@protocol WDAIAllJoynStatusStatics, WDAIAllJoynBusAttachment, WDAIAllJoynBusAttachment2, WDAIAllJoynBusAttachmentStatics, WDAIAllJoynBusAttachmentStateChangedEventArgs, WDAIAllJoynCredentials, WDAIAllJoynCredentialsRequestedEventArgs, WDAIAllJoynCredentialsVerificationRequestedEventArgs, WDAIAllJoynAuthenticationCompleteEventArgs, WDAIAllJoynBusAttachmentFactory, WDAIAllJoynSession, WDAIAllJoynSessionStatics, WDAIAllJoynProducer, WDAIAllJoynBusObject, WDAIAllJoynBusObjectFactory, WDAIAllJoynServiceInfo, WDAIAllJoynServiceInfoStatics, WDAIAllJoynServiceInfoFactory, WDAIAllJoynAboutDataViewStatics, WDAIAllJoynAboutDataView, WDAIAllJoynAboutData, WDAIAllJoynAcceptSessionJoinerEventArgs, WDAIAllJoynAcceptSessionJoiner, WDAIAllJoynAcceptSessionJoinerEventArgsFactory, WDAIAllJoynSessionMemberAddedEventArgs, WDAIAllJoynSessionMemberAddedEventArgsFactory, WDAIAllJoynSessionMemberRemovedEventArgs, WDAIAllJoynSessionMemberRemovedEventArgsFactory, WDAIAllJoynSessionJoinedEventArgs, WDAIAllJoynSessionJoinedEventArgsFactory, WDAIAllJoynSessionLostEventArgs, WDAIAllJoynSessionLostEventArgsFactory, WDAIAllJoynProducerStoppedEventArgs, WDAIAllJoynProducerStoppedEventArgsFactory, WDAIAllJoynBusObjectStoppedEventArgs, WDAIAllJoynBusObjectStoppedEventArgsFactory, WDAIAllJoynWatcherStoppedEventArgs, WDAIAllJoynWatcherStoppedEventArgsFactory, WDAIAllJoynServiceInfoRemovedEventArgs, WDAIAllJoynServiceInfoRemovedEventArgsFactory, WDAIAllJoynMessageInfo, WDAIAllJoynMessageInfoFactory;

// Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism
enum _WDAAllJoynAuthenticationMechanism {
    WDAAllJoynAuthenticationMechanismNone = 0,
    WDAAllJoynAuthenticationMechanismSrpAnonymous = 1,
    WDAAllJoynAuthenticationMechanismSrpLogon = 2,
    WDAAllJoynAuthenticationMechanismEcdheNull = 3,
    WDAAllJoynAuthenticationMechanismEcdhePsk = 4,
    WDAAllJoynAuthenticationMechanismEcdheEcdsa = 5,
    WDAAllJoynAuthenticationMechanismEcdheSpeke = 6,
};
typedef unsigned WDAAllJoynAuthenticationMechanism;

// Windows.Devices.AllJoyn.AllJoynBusAttachmentState
enum _WDAAllJoynBusAttachmentState {
    WDAAllJoynBusAttachmentStateDisconnected = 0,
    WDAAllJoynBusAttachmentStateConnecting = 1,
    WDAAllJoynBusAttachmentStateConnected = 2,
    WDAAllJoynBusAttachmentStateDisconnecting = 3,
};
typedef unsigned WDAAllJoynBusAttachmentState;

// Windows.Devices.AllJoyn.AllJoynTrafficType
enum _WDAAllJoynTrafficType {
    WDAAllJoynTrafficTypeUnknown = 0,
    WDAAllJoynTrafficTypeMessages = 1,
    WDAAllJoynTrafficTypeRawUnreliable = 2,
    WDAAllJoynTrafficTypeRawReliable = 4,
};
typedef unsigned WDAAllJoynTrafficType;

// Windows.Devices.AllJoyn.AllJoynSessionLostReason
enum _WDAAllJoynSessionLostReason {
    WDAAllJoynSessionLostReasonNone = 0,
    WDAAllJoynSessionLostReasonProducerLeftSession = 1,
    WDAAllJoynSessionLostReasonProducerClosedAbruptly = 2,
    WDAAllJoynSessionLostReasonRemovedByProducer = 3,
    WDAAllJoynSessionLostReasonLinkTimeout = 4,
    WDAAllJoynSessionLostReasonOther = 5,
};
typedef unsigned WDAAllJoynSessionLostReason;

#include "WindowsNetworkingSockets.h"
#include "WindowsSecurityCryptographyCertificates.h"
#include "WindowsFoundation.h"
#include "WindowsGlobalization.h"
#include "WindowsDevicesEnumeration.h"
#include "WindowsSecurityCredentials.h"

#import <Foundation/Foundation.h>

// Windows.Devices.AllJoyn.IAllJoynProducer
#ifndef __WDAIAllJoynProducer_DEFINED__
#define __WDAIAllJoynProducer_DEFINED__

@protocol WDAIAllJoynProducer
- (void)setBusObject:(WDAAllJoynBusObject*)busObject;
@end

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAIAllJoynProducer : RTObject <WDAIAllJoynProducer>
@end

#endif // __WDAIAllJoynProducer_DEFINED__

// Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner
#ifndef __WDAIAllJoynAcceptSessionJoiner_DEFINED__
#define __WDAIAllJoynAcceptSessionJoiner_DEFINED__

@protocol WDAIAllJoynAcceptSessionJoiner
- (void)accept;
@end

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAIAllJoynAcceptSessionJoiner : RTObject <WDAIAllJoynAcceptSessionJoiner>
@end

#endif // __WDAIAllJoynAcceptSessionJoiner_DEFINED__

// Windows.Devices.AllJoyn.AllJoynStatus
#ifndef __WDAAllJoynStatus_DEFINED__
#define __WDAAllJoynStatus_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynStatus : RTObject
+ (int)authenticationFailed;
+ (int)authenticationRejectedByUser;
+ (int)connectionRefused;
+ (int)fail;
+ (int)insufficientSecurity;
+ (int)invalidArgument1;
+ (int)invalidArgument2;
+ (int)invalidArgument3;
+ (int)invalidArgument4;
+ (int)invalidArgument5;
+ (int)invalidArgument6;
+ (int)invalidArgument7;
+ (int)invalidArgument8;
+ (int)ok;
+ (int)operationTimedOut;
+ (int)otherEndClosed;
+ (int)sslConnectFailed;
+ (int)sslIdentityVerificationFailed;
@end

#endif // __WDAAllJoynStatus_DEFINED__

// Windows.Devices.AllJoyn.AllJoynAboutData
#ifndef __WDAAllJoynAboutData_DEFINED__
#define __WDAAllJoynAboutData_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynAboutData : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * defaultDescription;
@property (retain) NSString * defaultAppName;
@property (retain) id /* WFDateTime* */ dateOfManufacture;
@property (retain) NSString * defaultManufacturer;
@property WFGUID* appId;
@property (retain) WFUri* supportUrl;
@property (retain) NSString * softwareVersion;
@property (retain) NSString * modelNumber;
@property BOOL isEnabled;
@property (readonly) NSMutableDictionary* /* NSString *, NSString * */ appNames;
@property (readonly) NSMutableDictionary* /* NSString *, NSString * */ manufacturers;
@property (readonly) NSMutableDictionary* /* NSString *, NSString * */ descriptions;
@end

#endif // __WDAAllJoynAboutData_DEFINED__

// Windows.Devices.AllJoyn.AllJoynBusAttachment
#ifndef __WDAAllJoynBusAttachment_DEFINED__
#define __WDAAllJoynBusAttachment_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynBusAttachment : RTObject
+ (WDAAllJoynBusAttachment*)getDefault;
+ (WDEDeviceWatcher*)getWatcher:(id<NSFastEnumeration> /* NSString * */)requiredInterfaces;
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WDAAllJoynBusAttachment*)make:(NSString *)connectionSpecification ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynAboutData* aboutData;
@property (readonly) NSMutableArray* /* WDAAllJoynAuthenticationMechanism */ authenticationMechanisms;
@property (readonly) NSString * connectionSpecification;
@property (readonly) WDAAllJoynBusAttachmentState state;
@property (readonly) NSString * uniqueName;
- (EventRegistrationToken)addAuthenticationCompleteEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynAuthenticationCompleteEventArgs*))del;
- (void)removeAuthenticationCompleteEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCredentialsRequestedEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynCredentialsRequestedEventArgs*))del;
- (void)removeCredentialsRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCredentialsVerificationRequestedEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynCredentialsVerificationRequestedEventArgs*))del;
- (void)removeCredentialsVerificationRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStateChangedEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynBusAttachmentStateChangedEventArgs*))del;
- (void)removeStateChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAcceptSessionJoinerRequestedEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynAcceptSessionJoinerEventArgs*))del;
- (void)removeAcceptSessionJoinerRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSessionJoinedEvent:(void(^)(WDAAllJoynBusAttachment*, WDAAllJoynSessionJoinedEventArgs*))del;
- (void)removeSessionJoinedEvent:(EventRegistrationToken)tok;
- (void)pingAsync:(NSString *)uniqueName success:(void (^)(int))success failure:(void (^)(NSError*))failure;
- (void)connect;
- (void)disconnect;
- (void)getAboutDataAsync:(WDAAllJoynServiceInfo*)serviceInfo success:(void (^)(WDAAllJoynAboutDataView*))success failure:(void (^)(NSError*))failure;
- (void)getAboutDataWithLanguageAsync:(WDAAllJoynServiceInfo*)serviceInfo language:(WGLanguage*)language success:(void (^)(WDAAllJoynAboutDataView*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDAAllJoynBusAttachment_DEFINED__

// Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs
#ifndef __WDAAllJoynBusAttachmentStateChangedEventArgs_DEFINED__
#define __WDAAllJoynBusAttachmentStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynBusAttachmentStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynBusAttachmentState state;
@property (readonly) int status;
@end

#endif // __WDAAllJoynBusAttachmentStateChangedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs
#ifndef __WDAAllJoynCredentialsRequestedEventArgs_DEFINED__
#define __WDAAllJoynCredentialsRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynCredentialsRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned short attemptCount;
@property (readonly) WDAAllJoynCredentials* credentials;
@property (readonly) NSString * peerUniqueName;
@property (readonly) NSString * requestedUserName;
- (WFDeferral*)getDeferral;
@end

#endif // __WDAAllJoynCredentialsRequestedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs
#ifndef __WDAAllJoynCredentialsVerificationRequestedEventArgs_DEFINED__
#define __WDAAllJoynCredentialsVerificationRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynCredentialsVerificationRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynAuthenticationMechanism authenticationMechanism;
@property (readonly) WSCCCertificate* peerCertificate;
@property (readonly) WNSSocketSslErrorSeverity peerCertificateErrorSeverity;
@property (readonly) NSArray* /* WSCCChainValidationResult */ peerCertificateErrors;
@property (readonly) NSArray* /* WSCCCertificate* */ peerIntermediateCertificates;
@property (readonly) NSString * peerUniqueName;
- (void)accept;
- (WFDeferral*)getDeferral;
@end

#endif // __WDAAllJoynCredentialsVerificationRequestedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs
#ifndef __WDAAllJoynAuthenticationCompleteEventArgs_DEFINED__
#define __WDAAllJoynAuthenticationCompleteEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynAuthenticationCompleteEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynAuthenticationMechanism authenticationMechanism;
@property (readonly) NSString * peerUniqueName;
@property (readonly) BOOL succeeded;
@end

#endif // __WDAAllJoynAuthenticationCompleteEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynServiceInfo
#ifndef __WDAAllJoynServiceInfo_DEFINED__
#define __WDAAllJoynServiceInfo_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynServiceInfo : RTObject
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDAAllJoynServiceInfo*))success failure:(void (^)(NSError*))failure;
+ (WDAAllJoynServiceInfo*)make:(NSString *)uniqueName objectPath:(NSString *)objectPath sessionPort:(unsigned short)sessionPort ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * objectPath;
@property (readonly) unsigned short sessionPort;
@property (readonly) NSString * uniqueName;
@end

#endif // __WDAAllJoynServiceInfo_DEFINED__

// Windows.Devices.AllJoyn.AllJoynAboutDataView
#ifndef __WDAAllJoynAboutDataView_DEFINED__
#define __WDAAllJoynAboutDataView_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynAboutDataView : RTObject
+ (void)getDataBySessionPortAsync:(NSString *)uniqueName busAttachment:(WDAAllJoynBusAttachment*)busAttachment sessionPort:(unsigned short)sessionPort success:(void (^)(WDAAllJoynAboutDataView*))success failure:(void (^)(NSError*))failure;
+ (void)getDataBySessionPortWithLanguageAsync:(NSString *)uniqueName busAttachment:(WDAAllJoynBusAttachment*)busAttachment sessionPort:(unsigned short)sessionPort language:(WGLanguage*)language success:(void (^)(WDAAllJoynAboutDataView*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * aJSoftwareVersion;
@property (readonly) WFGUID* appId;
@property (readonly) NSString * appName;
@property (readonly) id /* WFDateTime* */ dateOfManufacture;
@property (readonly) WGLanguage* defaultLanguage;
@property (readonly) NSString * Description;
@property (readonly) NSString * deviceId;
@property (readonly) NSString * deviceName;
@property (readonly) NSString * hardwareVersion;
@property (readonly) NSString * manufacturer;
@property (readonly) NSString * modelNumber;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) NSString * softwareVersion;
@property (readonly) int status;
@property (readonly) WFUri* supportUrl;
@property (readonly) NSArray* /* WGLanguage* */ supportedLanguages;
@end

#endif // __WDAAllJoynAboutDataView_DEFINED__

// Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
#ifndef __WDAAllJoynAcceptSessionJoinerEventArgs_DEFINED__
#define __WDAAllJoynAcceptSessionJoinerEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynAcceptSessionJoinerEventArgs : RTObject
+ (WDAAllJoynAcceptSessionJoinerEventArgs*)make:(NSString *)uniqueName sessionPort:(unsigned short)sessionPort trafficType:(WDAAllJoynTrafficType)trafficType proximity:(uint8_t)proximity acceptSessionJoiner:(RTObject<WDAIAllJoynAcceptSessionJoiner>*)acceptSessionJoiner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL sameNetwork;
@property (readonly) BOOL samePhysicalNode;
@property (readonly) unsigned short sessionPort;
@property (readonly) WDAAllJoynTrafficType trafficType;
@property (readonly) NSString * uniqueName;
- (void)accept;
@end

#endif // __WDAAllJoynAcceptSessionJoinerEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
#ifndef __WDAAllJoynSessionJoinedEventArgs_DEFINED__
#define __WDAAllJoynSessionJoinedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynSessionJoinedEventArgs : RTObject
+ (WDAAllJoynSessionJoinedEventArgs*)make:(WDAAllJoynSession*)session ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynSession* session;
@end

#endif // __WDAAllJoynSessionJoinedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynCredentials
#ifndef __WDAAllJoynCredentials_DEFINED__
#define __WDAAllJoynCredentials_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynCredentials : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFTimeSpan* timeout;
@property (retain) WSCPasswordCredential* passwordCredential;
@property (retain) WSCCCertificate* certificate;
@property (readonly) WDAAllJoynAuthenticationMechanism authenticationMechanism;
@end

#endif // __WDAAllJoynCredentials_DEFINED__

// Windows.Devices.AllJoyn.AllJoynSession
#ifndef __WDAAllJoynSession_DEFINED__
#define __WDAAllJoynSession_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynSession : RTObject
+ (void)getFromServiceInfoAsync:(WDAAllJoynServiceInfo*)serviceInfo success:(void (^)(WDAAllJoynSession*))success failure:(void (^)(NSError*))failure;
+ (void)getFromServiceInfoAndBusAttachmentAsync:(WDAAllJoynServiceInfo*)serviceInfo busAttachment:(WDAAllJoynBusAttachment*)busAttachment success:(void (^)(WDAAllJoynSession*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int id;
@property (readonly) int status;
- (EventRegistrationToken)addLostEvent:(void(^)(WDAAllJoynSession*, WDAAllJoynSessionLostEventArgs*))del;
- (void)removeLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addMemberAddedEvent:(void(^)(WDAAllJoynSession*, WDAAllJoynSessionMemberAddedEventArgs*))del;
- (void)removeMemberAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addMemberRemovedEvent:(void(^)(WDAAllJoynSession*, WDAAllJoynSessionMemberRemovedEventArgs*))del;
- (void)removeMemberRemovedEvent:(EventRegistrationToken)tok;
- (void)removeMemberAsync:(NSString *)uniqueName success:(void (^)(int))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDAAllJoynSession_DEFINED__

// Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
#ifndef __WDAAllJoynSessionMemberAddedEventArgs_DEFINED__
#define __WDAAllJoynSessionMemberAddedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynSessionMemberAddedEventArgs : RTObject
+ (WDAAllJoynSessionMemberAddedEventArgs*)make:(NSString *)uniqueName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * uniqueName;
@end

#endif // __WDAAllJoynSessionMemberAddedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
#ifndef __WDAAllJoynSessionMemberRemovedEventArgs_DEFINED__
#define __WDAAllJoynSessionMemberRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynSessionMemberRemovedEventArgs : RTObject
+ (WDAAllJoynSessionMemberRemovedEventArgs*)make:(NSString *)uniqueName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * uniqueName;
@end

#endif // __WDAAllJoynSessionMemberRemovedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
#ifndef __WDAAllJoynSessionLostEventArgs_DEFINED__
#define __WDAAllJoynSessionLostEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynSessionLostEventArgs : RTObject
+ (WDAAllJoynSessionLostEventArgs*)make:(WDAAllJoynSessionLostReason)reason ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynSessionLostReason reason;
@end

#endif // __WDAAllJoynSessionLostEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynBusObject
#ifndef __WDAAllJoynBusObject_DEFINED__
#define __WDAAllJoynBusObject_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynBusObject : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WDAAllJoynBusObject*)make:(NSString *)objectPath ACTIVATOR;
+ (WDAAllJoynBusObject*)makeWithBusAttachment:(NSString *)objectPath busAttachment:(WDAAllJoynBusAttachment*)busAttachment ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDAAllJoynBusAttachment* busAttachment;
@property (readonly) WDAAllJoynSession* session;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WDAAllJoynBusObject*, WDAAllJoynBusObjectStoppedEventArgs*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
- (void)addProducer:(RTObject<WDAIAllJoynProducer>*)producer;
@end

#endif // __WDAAllJoynBusObject_DEFINED__

// Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
#ifndef __WDAAllJoynBusObjectStoppedEventArgs_DEFINED__
#define __WDAAllJoynBusObjectStoppedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynBusObjectStoppedEventArgs : RTObject
+ (WDAAllJoynBusObjectStoppedEventArgs*)make:(int)status ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int status;
@end

#endif // __WDAAllJoynBusObjectStoppedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
#ifndef __WDAAllJoynProducerStoppedEventArgs_DEFINED__
#define __WDAAllJoynProducerStoppedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynProducerStoppedEventArgs : RTObject
+ (WDAAllJoynProducerStoppedEventArgs*)make:(int)status ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int status;
@end

#endif // __WDAAllJoynProducerStoppedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
#ifndef __WDAAllJoynWatcherStoppedEventArgs_DEFINED__
#define __WDAAllJoynWatcherStoppedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynWatcherStoppedEventArgs : RTObject
+ (WDAAllJoynWatcherStoppedEventArgs*)make:(int)status ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int status;
@end

#endif // __WDAAllJoynWatcherStoppedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
#ifndef __WDAAllJoynServiceInfoRemovedEventArgs_DEFINED__
#define __WDAAllJoynServiceInfoRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynServiceInfoRemovedEventArgs : RTObject
+ (WDAAllJoynServiceInfoRemovedEventArgs*)make:(NSString *)uniqueName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * uniqueName;
@end

#endif // __WDAAllJoynServiceInfoRemovedEventArgs_DEFINED__

// Windows.Devices.AllJoyn.AllJoynMessageInfo
#ifndef __WDAAllJoynMessageInfo_DEFINED__
#define __WDAAllJoynMessageInfo_DEFINED__

OBJCUWPWINDOWSDEVICESALLJOYNEXPORT
@interface WDAAllJoynMessageInfo : RTObject
+ (WDAAllJoynMessageInfo*)make:(NSString *)senderUniqueName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * senderUniqueName;
@end

#endif // __WDAAllJoynMessageInfo_DEFINED__

