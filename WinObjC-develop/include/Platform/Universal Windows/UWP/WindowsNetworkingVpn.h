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

// WindowsNetworkingVpn.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSNETWORKINGVPNEXPORT
#define OBJCUWPWINDOWSNETWORKINGVPNEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsNetworkingVpn.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WNVVpnRoute, WNVVpnNamespaceInfo, WNVVpnInterfaceId, WNVVpnRouteAssignment, WNVVpnNamespaceAssignment, WNVVpnPickedCredential, WNVVpnPacketBuffer, WNVVpnChannelConfiguration, WNVVpnChannel, WNVVpnChannelActivityEventArgs, WNVVpnSystemHealth, WNVVpnDomainNameAssignment, WNVVpnChannelActivityStateChangedArgs, WNVVpnCredential, WNVVpnTrafficFilterAssignment, WNVVpnAppId, WNVVpnDomainNameInfo, WNVVpnTrafficFilter, WNVVpnPacketBufferList, WNVVpnCustomEditBox, WNVVpnCustomPromptTextInput, WNVVpnCustomComboBox, WNVVpnCustomPromptOptionSelector, WNVVpnCustomTextBox, WNVVpnCustomPromptText, WNVVpnCustomCheckBox, WNVVpnCustomPromptBooleanInput, WNVVpnCustomErrorBox, WNVVpnPlugInProfile, WNVVpnNativeProfile, WNVVpnManagementAgent;
@protocol WNVIVpnPlugIn, WNVIVpnCustomPrompt, WNVIVpnCustomEditBox, WNVIVpnCustomComboBox, WNVIVpnCustomTextBox, WNVIVpnCustomCheckBox, WNVIVpnCustomErrorBox, WNVIVpnRouteFactory, WNVIVpnRoute, WNVIVpnRouteAssignment, WNVIVpnNamespaceInfoFactory, WNVIVpnNamespaceInfo, WNVIVpnNamespaceAssignment, WNVIVpnInterfaceIdFactory, WNVIVpnInterfaceId, WNVIVpnPickedCredential, WNVIVpnCredential, WNVIVpnSystemHealth, WNVIVpnChannelConfiguration, WNVIVpnChannelConfiguration2, WNVIVpnChannelActivityEventArgs, WNVIVpnChannel, WNVIVpnChannel2, WNVIVpnCustomPromptElement, WNVIVpnChannelStatics, WNVIVpnPacketBufferFactory, WNVIVpnPacketBuffer, WNVIVpnPacketBuffer2, WNVIVpnPacketBufferList, WNVIVpnPacketBufferList2, WNVIVpnCustomPromptTextInput, WNVIVpnCustomPromptOptionSelector, WNVIVpnCustomPromptBooleanInput, WNVIVpnCustomPromptText, WNVIVpnChannelActivityStateChangedArgs, WNVIVpnDomainNameInfoFactory, WNVIVpnDomainNameInfo, WNVIVpnDomainNameInfo2, WNVIVpnDomainNameAssignment, WNVIVpnAppIdFactory, WNVIVpnAppId, WNVIVpnTrafficFilterFactory, WNVIVpnTrafficFilter, WNVIVpnTrafficFilterAssignment, WNVIVpnProfile, WNVIVpnPlugInProfile, WNVIVpnPlugInProfile2, WNVIVpnNativeProfile, WNVIVpnNativeProfile2, WNVIVpnManagementAgent;

// Windows.Networking.Vpn.VpnDataPathType
enum _WNVVpnDataPathType {
    WNVVpnDataPathTypeSend = 0,
    WNVVpnDataPathTypeReceive = 1,
};
typedef unsigned WNVVpnDataPathType;

// Windows.Networking.Vpn.VpnChannelActivityEventType
enum _WNVVpnChannelActivityEventType {
    WNVVpnChannelActivityEventTypeIdle = 0,
    WNVVpnChannelActivityEventTypeActive = 1,
};
typedef unsigned WNVVpnChannelActivityEventType;

// Windows.Networking.Vpn.VpnCredentialType
enum _WNVVpnCredentialType {
    WNVVpnCredentialTypeUsernamePassword = 0,
    WNVVpnCredentialTypeUsernameOtpPin = 1,
    WNVVpnCredentialTypeUsernamePasswordAndPin = 2,
    WNVVpnCredentialTypeUsernamePasswordChange = 3,
    WNVVpnCredentialTypeSmartCard = 4,
    WNVVpnCredentialTypeProtectedCertificate = 5,
    WNVVpnCredentialTypeUnProtectedCertificate = 6,
};
typedef unsigned WNVVpnCredentialType;

// Windows.Networking.Vpn.VpnPacketBufferStatus
enum _WNVVpnPacketBufferStatus {
    WNVVpnPacketBufferStatusOk = 0,
    WNVVpnPacketBufferStatusInvalidBufferSize = 1,
};
typedef unsigned WNVVpnPacketBufferStatus;

// Windows.Networking.Vpn.VpnChannelRequestCredentialsOptions
enum _WNVVpnChannelRequestCredentialsOptions {
    WNVVpnChannelRequestCredentialsOptionsNone = 0,
    WNVVpnChannelRequestCredentialsOptionsRetrying = 1,
    WNVVpnChannelRequestCredentialsOptionsUseForSingleSignIn = 2,
};
typedef unsigned WNVVpnChannelRequestCredentialsOptions;

// Windows.Networking.Vpn.VpnDomainNameType
enum _WNVVpnDomainNameType {
    WNVVpnDomainNameTypeSuffix = 0,
    WNVVpnDomainNameTypeFullyQualified = 1,
    WNVVpnDomainNameTypeReserved = 65535,
};
typedef unsigned WNVVpnDomainNameType;

// Windows.Networking.Vpn.VpnAppIdType
enum _WNVVpnAppIdType {
    WNVVpnAppIdTypePackageFamilyName = 0,
    WNVVpnAppIdTypeFullyQualifiedBinaryName = 1,
    WNVVpnAppIdTypeFilePath = 2,
};
typedef unsigned WNVVpnAppIdType;

// Windows.Networking.Vpn.VpnIPProtocol
enum _WNVVpnIPProtocol {
    WNVVpnIPProtocolNone = 0,
    WNVVpnIPProtocolTcp = 6,
    WNVVpnIPProtocolUdp = 17,
    WNVVpnIPProtocolIcmp = 1,
    WNVVpnIPProtocolIpv6Icmp = 58,
    WNVVpnIPProtocolIgmp = 2,
    WNVVpnIPProtocolPgm = 113,
};
typedef unsigned WNVVpnIPProtocol;

// Windows.Networking.Vpn.VpnRoutingPolicyType
enum _WNVVpnRoutingPolicyType {
    WNVVpnRoutingPolicyTypeSplitRouting = 0,
    WNVVpnRoutingPolicyTypeForceAllTrafficOverVpn = 1,
};
typedef unsigned WNVVpnRoutingPolicyType;

// Windows.Networking.Vpn.VpnManagementConnectionStatus
enum _WNVVpnManagementConnectionStatus {
    WNVVpnManagementConnectionStatusDisconnected = 0,
    WNVVpnManagementConnectionStatusDisconnecting = 1,
    WNVVpnManagementConnectionStatusConnected = 2,
    WNVVpnManagementConnectionStatusConnecting = 3,
};
typedef unsigned WNVVpnManagementConnectionStatus;

// Windows.Networking.Vpn.VpnNativeProtocolType
enum _WNVVpnNativeProtocolType {
    WNVVpnNativeProtocolTypePptp = 0,
    WNVVpnNativeProtocolTypeL2tp = 1,
    WNVVpnNativeProtocolTypeIpsecIkev2 = 2,
};
typedef unsigned WNVVpnNativeProtocolType;

// Windows.Networking.Vpn.VpnAuthenticationMethod
enum _WNVVpnAuthenticationMethod {
    WNVVpnAuthenticationMethodMschapv2 = 0,
    WNVVpnAuthenticationMethodEap = 1,
    WNVVpnAuthenticationMethodCertificate = 2,
    WNVVpnAuthenticationMethodPresharedKey = 3,
};
typedef unsigned WNVVpnAuthenticationMethod;

// Windows.Networking.Vpn.VpnManagementErrorStatus
enum _WNVVpnManagementErrorStatus {
    WNVVpnManagementErrorStatusOk = 0,
    WNVVpnManagementErrorStatusOther = 1,
    WNVVpnManagementErrorStatusInvalidXmlSyntax = 2,
    WNVVpnManagementErrorStatusProfileNameTooLong = 3,
    WNVVpnManagementErrorStatusProfileInvalidAppId = 4,
    WNVVpnManagementErrorStatusAccessDenied = 5,
    WNVVpnManagementErrorStatusCannotFindProfile = 6,
    WNVVpnManagementErrorStatusAlreadyDisconnecting = 7,
    WNVVpnManagementErrorStatusAlreadyConnected = 8,
    WNVVpnManagementErrorStatusGeneralAuthenticationFailure = 9,
    WNVVpnManagementErrorStatusEapFailure = 10,
    WNVVpnManagementErrorStatusSmartCardFailure = 11,
    WNVVpnManagementErrorStatusCertificateFailure = 12,
    WNVVpnManagementErrorStatusServerConfiguration = 13,
    WNVVpnManagementErrorStatusNoConnection = 14,
    WNVVpnManagementErrorStatusServerConnection = 15,
    WNVVpnManagementErrorStatusUserNamePassword = 16,
    WNVVpnManagementErrorStatusDnsNotResolvable = 17,
    WNVVpnManagementErrorStatusInvalidIP = 18,
};
typedef unsigned WNVVpnManagementErrorStatus;

#include "WindowsStorageStreams.h"
#include "WindowsSecurityCredentials.h"
#include "WindowsSecurityCryptographyCertificates.h"
#include "WindowsNetworking.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Networking.Vpn.IVpnPlugIn
#ifndef __WNVIVpnPlugIn_DEFINED__
#define __WNVIVpnPlugIn_DEFINED__

@protocol WNVIVpnPlugIn
- (void)connect:(WNVVpnChannel*)channel;
- (void)disconnect:(WNVVpnChannel*)channel;
- (void)getKeepAlivePayload:(WNVVpnChannel*)channel keepAlivePacket:(WNVVpnPacketBuffer**)keepAlivePacket;
- (void)encapsulate:(WNVVpnChannel*)channel packets:(WNVVpnPacketBufferList*)packets encapulatedPackets:(WNVVpnPacketBufferList*)encapulatedPackets;
- (void)decapsulate:(WNVVpnChannel*)channel encapBuffer:(WNVVpnPacketBuffer*)encapBuffer decapsulatedPackets:(WNVVpnPacketBufferList*)decapsulatedPackets controlPacketsToSend:(WNVVpnPacketBufferList*)controlPacketsToSend;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnPlugIn : RTObject <WNVIVpnPlugIn>
@end

#endif // __WNVIVpnPlugIn_DEFINED__

// Windows.Networking.Vpn.IVpnCustomPrompt
#ifndef __WNVIVpnCustomPrompt_DEFINED__
#define __WNVIVpnCustomPrompt_DEFINED__

@protocol WNVIVpnCustomPrompt
@property BOOL bordered;
@property BOOL compulsory;
@property (retain) NSString * label;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnCustomPrompt : RTObject <WNVIVpnCustomPrompt>
@end

#endif // __WNVIVpnCustomPrompt_DEFINED__

// Windows.Networking.Vpn.IVpnRouteFactory
#ifndef __WNVIVpnRouteFactory_DEFINED__
#define __WNVIVpnRouteFactory_DEFINED__

@protocol WNVIVpnRouteFactory
- (WNVVpnRoute*)createVpnRoute:(WNHostName*)address prefixSize:(uint8_t)prefixSize;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnRouteFactory : RTObject <WNVIVpnRouteFactory>
@end

#endif // __WNVIVpnRouteFactory_DEFINED__

// Windows.Networking.Vpn.IVpnNamespaceInfoFactory
#ifndef __WNVIVpnNamespaceInfoFactory_DEFINED__
#define __WNVIVpnNamespaceInfoFactory_DEFINED__

@protocol WNVIVpnNamespaceInfoFactory
- (WNVVpnNamespaceInfo*)createVpnNamespaceInfo:(NSString *)name dnsServerList:(NSMutableArray* /* WNHostName* */)dnsServerList proxyServerList:(NSMutableArray* /* WNHostName* */)proxyServerList;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnNamespaceInfoFactory : RTObject <WNVIVpnNamespaceInfoFactory>
@end

#endif // __WNVIVpnNamespaceInfoFactory_DEFINED__

// Windows.Networking.Vpn.IVpnInterfaceIdFactory
#ifndef __WNVIVpnInterfaceIdFactory_DEFINED__
#define __WNVIVpnInterfaceIdFactory_DEFINED__

@protocol WNVIVpnInterfaceIdFactory
- (WNVVpnInterfaceId*)createVpnInterfaceId:(NSArray* /* uint8_t */)address;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnInterfaceIdFactory : RTObject <WNVIVpnInterfaceIdFactory>
@end

#endif // __WNVIVpnInterfaceIdFactory_DEFINED__

// Windows.Networking.Vpn.IVpnCredential
#ifndef __WNVIVpnCredential_DEFINED__
#define __WNVIVpnCredential_DEFINED__

@protocol WNVIVpnCredential
@property (readonly) NSString * additionalPin;
@property (readonly) WSCCCertificate* certificateCredential;
@property (readonly) WSCPasswordCredential* oldPasswordCredential;
@property (readonly) WSCPasswordCredential* passkeyCredential;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnCredential : RTObject <WNVIVpnCredential>
@end

#endif // __WNVIVpnCredential_DEFINED__

// Windows.Networking.Vpn.IVpnCustomPromptElement
#ifndef __WNVIVpnCustomPromptElement_DEFINED__
#define __WNVIVpnCustomPromptElement_DEFINED__

@protocol WNVIVpnCustomPromptElement
@property BOOL compulsory;
@property (retain) NSString * displayName;
@property BOOL emphasized;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnCustomPromptElement : RTObject <WNVIVpnCustomPromptElement>
@end

#endif // __WNVIVpnCustomPromptElement_DEFINED__

// Windows.Networking.Vpn.IVpnChannelStatics
#ifndef __WNVIVpnChannelStatics_DEFINED__
#define __WNVIVpnChannelStatics_DEFINED__

@protocol WNVIVpnChannelStatics
- (void)processEventAsync:(RTObject*)thirdPartyPlugIn event:(RTObject*)event;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnChannelStatics : RTObject <WNVIVpnChannelStatics>
@end

#endif // __WNVIVpnChannelStatics_DEFINED__

// Windows.Networking.Vpn.IVpnPacketBufferFactory
#ifndef __WNVIVpnPacketBufferFactory_DEFINED__
#define __WNVIVpnPacketBufferFactory_DEFINED__

@protocol WNVIVpnPacketBufferFactory
- (WNVVpnPacketBuffer*)createVpnPacketBuffer:(WNVVpnPacketBuffer*)parentBuffer offset:(unsigned int)offset length:(unsigned int)length;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnPacketBufferFactory : RTObject <WNVIVpnPacketBufferFactory>
@end

#endif // __WNVIVpnPacketBufferFactory_DEFINED__

// Windows.Networking.Vpn.IVpnDomainNameInfoFactory
#ifndef __WNVIVpnDomainNameInfoFactory_DEFINED__
#define __WNVIVpnDomainNameInfoFactory_DEFINED__

@protocol WNVIVpnDomainNameInfoFactory
- (WNVVpnDomainNameInfo*)createVpnDomainNameInfo:(NSString *)name nameType:(WNVVpnDomainNameType)nameType dnsServerList:(id<NSFastEnumeration> /* WNHostName* */)dnsServerList proxyServerList:(id<NSFastEnumeration> /* WNHostName* */)proxyServerList;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnDomainNameInfoFactory : RTObject <WNVIVpnDomainNameInfoFactory>
@end

#endif // __WNVIVpnDomainNameInfoFactory_DEFINED__

// Windows.Networking.Vpn.IVpnProfile
#ifndef __WNVIVpnProfile_DEFINED__
#define __WNVIVpnProfile_DEFINED__

@protocol WNVIVpnProfile
@property BOOL alwaysOn;
@property (readonly) NSMutableArray* /* WNVVpnAppId* */ appTriggers;
@property (readonly) NSMutableArray* /* WNVVpnDomainNameInfo* */ domainNameInfoList;
@property (retain) NSString * profileName;
@property BOOL rememberCredentials;
@property (readonly) NSMutableArray* /* WNVVpnRoute* */ routes;
@property (readonly) NSMutableArray* /* WNVVpnTrafficFilter* */ trafficFilters;
@end

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVIVpnProfile : RTObject <WNVIVpnProfile>
@end

#endif // __WNVIVpnProfile_DEFINED__

// Windows.Networking.Vpn.VpnRoute
#ifndef __WNVVpnRoute_DEFINED__
#define __WNVVpnRoute_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnRoute : RTObject
+ (WNVVpnRoute*)makeVpnRoute:(WNHostName*)address prefixSize:(uint8_t)prefixSize ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property uint8_t prefixSize;
@property (retain) WNHostName* address;
@end

#endif // __WNVVpnRoute_DEFINED__

// Windows.Networking.Vpn.VpnNamespaceInfo
#ifndef __WNVVpnNamespaceInfo_DEFINED__
#define __WNVVpnNamespaceInfo_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnNamespaceInfo : RTObject
+ (WNVVpnNamespaceInfo*)makeVpnNamespaceInfo:(NSString *)name dnsServerList:(NSMutableArray* /* WNHostName* */)dnsServerList proxyServerList:(NSMutableArray* /* WNHostName* */)proxyServerList ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSMutableArray* /* WNHostName* */ webProxyServers;
@property (retain) NSString * Namespace;
@property (retain) NSMutableArray* /* WNHostName* */ dnsServers;
@end

#endif // __WNVVpnNamespaceInfo_DEFINED__

// Windows.Networking.Vpn.VpnInterfaceId
#ifndef __WNVVpnInterfaceId_DEFINED__
#define __WNVVpnInterfaceId_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnInterfaceId : RTObject
+ (WNVVpnInterfaceId*)makeVpnInterfaceId:(NSArray* /* uint8_t */)address ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)getAddressInfo:(NSArray* /* uint8_t */*)id;
@end

#endif // __WNVVpnInterfaceId_DEFINED__

// Windows.Networking.Vpn.VpnRouteAssignment
#ifndef __WNVVpnRouteAssignment_DEFINED__
#define __WNVVpnRouteAssignment_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnRouteAssignment : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSMutableArray* /* WNVVpnRoute* */ ipv6InclusionRoutes;
@property (retain) NSMutableArray* /* WNVVpnRoute* */ ipv6ExclusionRoutes;
@property (retain) NSMutableArray* /* WNVVpnRoute* */ ipv4InclusionRoutes;
@property (retain) NSMutableArray* /* WNVVpnRoute* */ ipv4ExclusionRoutes;
@property BOOL excludeLocalSubnets;
@end

#endif // __WNVVpnRouteAssignment_DEFINED__

// Windows.Networking.Vpn.VpnNamespaceAssignment
#ifndef __WNVVpnNamespaceAssignment_DEFINED__
#define __WNVVpnNamespaceAssignment_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnNamespaceAssignment : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFUri* proxyAutoConfigUri;
@property (retain) NSMutableArray* /* WNVVpnNamespaceInfo* */ namespaceList;
@end

#endif // __WNVVpnNamespaceAssignment_DEFINED__

// Windows.Networking.Vpn.VpnPickedCredential
#ifndef __WNVVpnPickedCredential_DEFINED__
#define __WNVVpnPickedCredential_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnPickedCredential : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * additionalPin;
@property (readonly) WSCPasswordCredential* oldPasswordCredential;
@property (readonly) WSCPasswordCredential* passkeyCredential;
@end

#endif // __WNVVpnPickedCredential_DEFINED__

// Windows.Networking.Vpn.VpnPacketBuffer
#ifndef __WNVVpnPacketBuffer_DEFINED__
#define __WNVVpnPacketBuffer_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnPacketBuffer : RTObject
+ (WNVVpnPacketBuffer*)makeVpnPacketBuffer:(WNVVpnPacketBuffer*)parentBuffer offset:(unsigned int)offset length:(unsigned int)length ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int transportAffinity;
@property WNVVpnPacketBufferStatus status;
@property (readonly) WSSBuffer* buffer;
@property (readonly) WNVVpnAppId* appId;
@end

#endif // __WNVVpnPacketBuffer_DEFINED__

// Windows.Networking.Vpn.VpnChannelConfiguration
#ifndef __WNVVpnChannelConfiguration_DEFINED__
#define __WNVVpnChannelConfiguration_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnChannelConfiguration : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * customField;
@property (readonly) NSArray* /* WNHostName* */ serverHostNameList;
@property (readonly) NSString * serverServiceName;
@property (readonly) NSArray* /* WFUri* */ serverUris;
@end

#endif // __WNVVpnChannelConfiguration_DEFINED__

// Windows.Networking.Vpn.VpnChannel
#ifndef __WNVVpnChannel_DEFINED__
#define __WNVVpnChannel_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnChannel : RTObject
+ (void)processEventAsync:(RTObject*)thirdPartyPlugIn event:(RTObject*)event;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject* plugInContext;
@property (readonly) WNVVpnChannelConfiguration* configuration;
@property (readonly) unsigned int id;
@property (readonly) WNVVpnSystemHealth* systemHealth;
- (EventRegistrationToken)addActivityChangeEvent:(void(^)(WNVVpnChannel*, WNVVpnChannelActivityEventArgs*))del;
- (void)removeActivityChangeEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addActivityStateChangeEvent:(void(^)(WNVVpnChannel*, WNVVpnChannelActivityStateChangedArgs*))del;
- (void)removeActivityStateChangeEvent:(EventRegistrationToken)tok;
- (void)associateTransport:(RTObject*)mainOuterTunnelTransport optionalOuterTunnelTransport:(RTObject*)optionalOuterTunnelTransport;
- (void)start:(NSArray* /* WNHostName* */)assignedClientIPv4list assignedClientIPv6list:(NSArray* /* WNHostName* */)assignedClientIPv6list vpnInterfaceId:(WNVVpnInterfaceId*)vpnInterfaceId routeScope:(WNVVpnRouteAssignment*)routeScope namespaceScope:(WNVVpnNamespaceAssignment*)namespaceScope mtuSize:(unsigned int)mtuSize maxFrameSize:(unsigned int)maxFrameSize optimizeForLowCostNetwork:(BOOL)optimizeForLowCostNetwork mainOuterTunnelTransport:(RTObject*)mainOuterTunnelTransport optionalOuterTunnelTransport:(RTObject*)optionalOuterTunnelTransport;
- (void)stop;
- (WNVVpnPickedCredential*)requestCredentials:(WNVVpnCredentialType)credType isRetry:(BOOL)isRetry isSingleSignOnCredential:(BOOL)isSingleSignOnCredential certificate:(WSCCCertificate*)certificate;
- (void)requestVpnPacketBuffer:(WNVVpnDataPathType)type vpnPacketBuffer:(WNVVpnPacketBuffer**)vpnPacketBuffer;
- (void)logDiagnosticMessage:(NSString *)message;
- (void)requestCustomPrompt:(NSArray* /* RTObject<WNVIVpnCustomPrompt>* */)customPrompt;
- (void)setErrorMessage:(NSString *)message;
- (void)setAllowedSslTlsVersions:(RTObject*)tunnelTransport useTls12:(BOOL)useTls12;
- (void)startWithMainTransport:(NSArray* /* WNHostName* */)assignedClientIPv4list assignedClientIPv6list:(NSArray* /* WNHostName* */)assignedClientIPv6list vpnInterfaceId:(WNVVpnInterfaceId*)vpnInterfaceId assignedRoutes:(WNVVpnRouteAssignment*)assignedRoutes assignedDomainName:(WNVVpnDomainNameAssignment*)assignedDomainName mtuSize:(unsigned int)mtuSize maxFrameSize:(unsigned int)maxFrameSize Reserved:(BOOL)Reserved mainOuterTunnelTransport:(RTObject*)mainOuterTunnelTransport;
- (void)startExistingTransports:(NSArray* /* WNHostName* */)assignedClientIPv4list assignedClientIPv6list:(NSArray* /* WNHostName* */)assignedClientIPv6list vpnInterfaceId:(WNVVpnInterfaceId*)vpnInterfaceId assignedRoutes:(WNVVpnRouteAssignment*)assignedRoutes assignedDomainName:(WNVVpnDomainNameAssignment*)assignedDomainName mtuSize:(unsigned int)mtuSize maxFrameSize:(unsigned int)maxFrameSize Reserved:(BOOL)Reserved;
- (WNVVpnPacketBuffer*)getVpnSendPacketBuffer;
- (WNVVpnPacketBuffer*)getVpnReceivePacketBuffer;
- (RTObject<WFIAsyncAction>*)requestCustomPromptAsync:(NSArray* /* RTObject<WNVIVpnCustomPromptElement>* */)customPromptElement;
- (void)requestCredentialsWithCertificateAsync:(WNVVpnCredentialType)credType credOptions:(unsigned int)credOptions certificate:(WSCCCertificate*)certificate success:(void (^)(WNVVpnCredential*))success failure:(void (^)(NSError*))failure;
- (void)requestCredentialsWithOptionsAsync:(WNVVpnCredentialType)credType credOptions:(unsigned int)credOptions success:(void (^)(WNVVpnCredential*))success failure:(void (^)(NSError*))failure;
- (void)requestCredentialsSimpleAsync:(WNVVpnCredentialType)credType success:(void (^)(WNVVpnCredential*))success failure:(void (^)(NSError*))failure;
- (void)terminateConnection:(NSString *)message;
- (void)startWithTrafficFilter:(NSArray* /* WNHostName* */)assignedClientIpv4List assignedClientIpv6List:(NSArray* /* WNHostName* */)assignedClientIpv6List vpnInterfaceId:(WNVVpnInterfaceId*)vpnInterfaceId assignedRoutes:(WNVVpnRouteAssignment*)assignedRoutes assignedNamespace:(WNVVpnDomainNameAssignment*)assignedNamespace mtuSize:(unsigned int)mtuSize maxFrameSize:(unsigned int)maxFrameSize reserved:(BOOL)reserved mainOuterTunnelTransport:(RTObject*)mainOuterTunnelTransport optionalOuterTunnelTransport:(RTObject*)optionalOuterTunnelTransport assignedTrafficFilters:(WNVVpnTrafficFilterAssignment*)assignedTrafficFilters;
@end

#endif // __WNVVpnChannel_DEFINED__

// Windows.Networking.Vpn.VpnChannelActivityEventArgs
#ifndef __WNVVpnChannelActivityEventArgs_DEFINED__
#define __WNVVpnChannelActivityEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnChannelActivityEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNVVpnChannelActivityEventType type;
@end

#endif // __WNVVpnChannelActivityEventArgs_DEFINED__

// Windows.Networking.Vpn.VpnSystemHealth
#ifndef __WNVVpnSystemHealth_DEFINED__
#define __WNVVpnSystemHealth_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnSystemHealth : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSSBuffer* statementOfHealth;
@end

#endif // __WNVVpnSystemHealth_DEFINED__

// Windows.Networking.Vpn.VpnDomainNameAssignment
#ifndef __WNVVpnDomainNameAssignment_DEFINED__
#define __WNVVpnDomainNameAssignment_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnDomainNameAssignment : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFUri* proxyAutoConfigurationUri;
@property (readonly) NSMutableArray* /* WNVVpnDomainNameInfo* */ domainNameList;
@end

#endif // __WNVVpnDomainNameAssignment_DEFINED__

// Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs
#ifndef __WNVVpnChannelActivityStateChangedArgs_DEFINED__
#define __WNVVpnChannelActivityStateChangedArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnChannelActivityStateChangedArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNVVpnChannelActivityEventType activityState;
@end

#endif // __WNVVpnChannelActivityStateChangedArgs_DEFINED__

// Windows.Networking.Vpn.VpnCredential
#ifndef __WNVVpnCredential_DEFINED__
#define __WNVVpnCredential_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCredential : RTObject <WNVIVpnCredential>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * additionalPin;
@property (readonly) WSCCCertificate* certificateCredential;
@property (readonly) WSCPasswordCredential* oldPasswordCredential;
@property (readonly) WSCPasswordCredential* passkeyCredential;
@end

#endif // __WNVVpnCredential_DEFINED__

// Windows.Networking.Vpn.VpnTrafficFilterAssignment
#ifndef __WNVVpnTrafficFilterAssignment_DEFINED__
#define __WNVVpnTrafficFilterAssignment_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnTrafficFilterAssignment : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL allowOutbound;
@property BOOL allowInbound;
@property (readonly) NSMutableArray* /* WNVVpnTrafficFilter* */ trafficFilterList;
@end

#endif // __WNVVpnTrafficFilterAssignment_DEFINED__

// Windows.Networking.Vpn.VpnAppId
#ifndef __WNVVpnAppId_DEFINED__
#define __WNVVpnAppId_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnAppId : RTObject
+ (WNVVpnAppId*)make:(WNVVpnAppIdType)type value:(NSString *)value ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * value;
@property WNVVpnAppIdType type;
@end

#endif // __WNVVpnAppId_DEFINED__

// Windows.Networking.Vpn.VpnDomainNameInfo
#ifndef __WNVVpnDomainNameInfo_DEFINED__
#define __WNVVpnDomainNameInfo_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnDomainNameInfo : RTObject
+ (WNVVpnDomainNameInfo*)makeVpnDomainNameInfo:(NSString *)name nameType:(WNVVpnDomainNameType)nameType dnsServerList:(id<NSFastEnumeration> /* WNHostName* */)dnsServerList proxyServerList:(id<NSFastEnumeration> /* WNHostName* */)proxyServerList ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNVVpnDomainNameType domainNameType;
@property (retain) WNHostName* domainName;
@property (readonly) NSMutableArray* /* WNHostName* */ dnsServers;
@property (readonly) NSMutableArray* /* WNHostName* */ webProxyServers;
@property (readonly) NSMutableArray* /* WFUri* */ webProxyUris;
@end

#endif // __WNVVpnDomainNameInfo_DEFINED__

// Windows.Networking.Vpn.VpnTrafficFilter
#ifndef __WNVVpnTrafficFilter_DEFINED__
#define __WNVVpnTrafficFilter_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnTrafficFilter : RTObject
+ (WNVVpnTrafficFilter*)make:(WNVVpnAppId*)appId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNVVpnRoutingPolicyType routingPolicyType;
@property WNVVpnIPProtocol protocol;
@property (retain) WNVVpnAppId* appId;
@property (readonly) NSMutableArray* /* NSString * */ appClaims;
@property (readonly) NSMutableArray* /* NSString * */ localAddressRanges;
@property (readonly) NSMutableArray* /* NSString * */ localPortRanges;
@property (readonly) NSMutableArray* /* NSString * */ remoteAddressRanges;
@property (readonly) NSMutableArray* /* NSString * */ remotePortRanges;
@end

#endif // __WNVVpnTrafficFilter_DEFINED__

// Windows.Networking.Vpn.VpnPacketBufferList
#ifndef __WNVVpnPacketBufferList_DEFINED__
#define __WNVVpnPacketBufferList_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnPacketBufferList : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNVVpnPacketBufferStatus status;
@property (readonly) unsigned int size;
- (void)append:(WNVVpnPacketBuffer*)nextVpnPacketBuffer;
- (void)addAtBegin:(WNVVpnPacketBuffer*)nextVpnPacketBuffer;
- (WNVVpnPacketBuffer*)removeAtEnd;
- (WNVVpnPacketBuffer*)removeAtBegin;
- (void)clear;
@end

#endif // __WNVVpnPacketBufferList_DEFINED__

// Windows.Networking.Vpn.VpnCustomEditBox
#ifndef __WNVVpnCustomEditBox_DEFINED__
#define __WNVVpnCustomEditBox_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomEditBox : RTObject <WNVIVpnCustomPrompt>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL noEcho;
@property (retain) NSString * defaultText;
@property (readonly) NSString * text;
@property (retain) NSString * label;
@property BOOL compulsory;
@property BOOL bordered;
@end

#endif // __WNVVpnCustomEditBox_DEFINED__

// Windows.Networking.Vpn.VpnCustomPromptTextInput
#ifndef __WNVVpnCustomPromptTextInput_DEFINED__
#define __WNVVpnCustomPromptTextInput_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomPromptTextInput : RTObject <WNVIVpnCustomPromptElement>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL emphasized;
@property (retain) NSString * displayName;
@property BOOL compulsory;
@property (retain) NSString * placeholderText;
@property BOOL isTextHidden;
@property (readonly) NSString * text;
@end

#endif // __WNVVpnCustomPromptTextInput_DEFINED__

// Windows.Networking.Vpn.VpnCustomComboBox
#ifndef __WNVVpnCustomComboBox_DEFINED__
#define __WNVVpnCustomComboBox_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomComboBox : RTObject <WNVIVpnCustomPrompt>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSArray* /* NSString * */ optionsText;
@property (readonly) unsigned int selected;
@property (retain) NSString * label;
@property BOOL compulsory;
@property BOOL bordered;
@end

#endif // __WNVVpnCustomComboBox_DEFINED__

// Windows.Networking.Vpn.VpnCustomPromptOptionSelector
#ifndef __WNVVpnCustomPromptOptionSelector_DEFINED__
#define __WNVVpnCustomPromptOptionSelector_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomPromptOptionSelector : RTObject <WNVIVpnCustomPromptElement>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL emphasized;
@property (retain) NSString * displayName;
@property BOOL compulsory;
@property (readonly) NSMutableArray* /* NSString * */ options;
@property (readonly) unsigned int selectedIndex;
@end

#endif // __WNVVpnCustomPromptOptionSelector_DEFINED__

// Windows.Networking.Vpn.VpnCustomTextBox
#ifndef __WNVVpnCustomTextBox_DEFINED__
#define __WNVVpnCustomTextBox_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomTextBox : RTObject <WNVIVpnCustomPrompt>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * label;
@property BOOL compulsory;
@property BOOL bordered;
@property (retain) NSString * displayText;
@end

#endif // __WNVVpnCustomTextBox_DEFINED__

// Windows.Networking.Vpn.VpnCustomPromptText
#ifndef __WNVVpnCustomPromptText_DEFINED__
#define __WNVVpnCustomPromptText_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomPromptText : RTObject <WNVIVpnCustomPromptElement>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL emphasized;
@property (retain) NSString * displayName;
@property BOOL compulsory;
@property (retain) NSString * text;
@end

#endif // __WNVVpnCustomPromptText_DEFINED__

// Windows.Networking.Vpn.VpnCustomCheckBox
#ifndef __WNVVpnCustomCheckBox_DEFINED__
#define __WNVVpnCustomCheckBox_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomCheckBox : RTObject <WNVIVpnCustomPrompt>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL initialCheckState;
@property (readonly) BOOL checked;
@property (retain) NSString * label;
@property BOOL compulsory;
@property BOOL bordered;
@end

#endif // __WNVVpnCustomCheckBox_DEFINED__

// Windows.Networking.Vpn.VpnCustomPromptBooleanInput
#ifndef __WNVVpnCustomPromptBooleanInput_DEFINED__
#define __WNVVpnCustomPromptBooleanInput_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomPromptBooleanInput : RTObject <WNVIVpnCustomPromptElement>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL initialValue;
@property (readonly) BOOL value;
@property BOOL emphasized;
@property (retain) NSString * displayName;
@property BOOL compulsory;
@end

#endif // __WNVVpnCustomPromptBooleanInput_DEFINED__

// Windows.Networking.Vpn.VpnCustomErrorBox
#ifndef __WNVVpnCustomErrorBox_DEFINED__
#define __WNVVpnCustomErrorBox_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnCustomErrorBox : RTObject <WNVIVpnCustomPrompt>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * label;
@property BOOL compulsory;
@property BOOL bordered;
@end

#endif // __WNVVpnCustomErrorBox_DEFINED__

// Windows.Networking.Vpn.VpnPlugInProfile
#ifndef __WNVVpnPlugInProfile_DEFINED__
#define __WNVVpnPlugInProfile_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnPlugInProfile : RTObject <WNVIVpnProfile>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * vpnPluginPackageFamilyName;
@property (retain) NSString * customConfiguration;
@property (readonly) NSMutableArray* /* WFUri* */ serverUris;
@property BOOL requireVpnClientAppUI;
@property (readonly) WNVVpnManagementConnectionStatus connectionStatus;
@property (retain) NSString * profileName;
@property BOOL rememberCredentials;
@property BOOL alwaysOn;
@property (readonly) NSMutableArray* /* WNVVpnAppId* */ appTriggers;
@property (readonly) NSMutableArray* /* WNVVpnDomainNameInfo* */ domainNameInfoList;
@property (readonly) NSMutableArray* /* WNVVpnRoute* */ routes;
@property (readonly) NSMutableArray* /* WNVVpnTrafficFilter* */ trafficFilters;
@end

#endif // __WNVVpnPlugInProfile_DEFINED__

// Windows.Networking.Vpn.VpnNativeProfile
#ifndef __WNVVpnNativeProfile_DEFINED__
#define __WNVVpnNativeProfile_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnNativeProfile : RTObject <WNVIVpnProfile>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNVVpnAuthenticationMethod userAuthenticationMethod;
@property WNVVpnAuthenticationMethod tunnelAuthenticationMethod;
@property WNVVpnRoutingPolicyType routingPolicyType;
@property (retain) NSString * eapConfiguration;
@property WNVVpnNativeProtocolType nativeProtocolType;
@property (readonly) NSMutableArray* /* NSString * */ servers;
@property BOOL requireVpnClientAppUI;
@property (readonly) WNVVpnManagementConnectionStatus connectionStatus;
@property (retain) NSString * profileName;
@property BOOL rememberCredentials;
@property BOOL alwaysOn;
@property (readonly) NSMutableArray* /* WNVVpnRoute* */ routes;
@property (readonly) NSMutableArray* /* WNVVpnAppId* */ appTriggers;
@property (readonly) NSMutableArray* /* WNVVpnTrafficFilter* */ trafficFilters;
@property (readonly) NSMutableArray* /* WNVVpnDomainNameInfo* */ domainNameInfoList;
@end

#endif // __WNVVpnNativeProfile_DEFINED__

// Windows.Networking.Vpn.VpnManagementAgent
#ifndef __WNVVpnManagementAgent_DEFINED__
#define __WNVVpnManagementAgent_DEFINED__

OBJCUWPWINDOWSNETWORKINGVPNEXPORT
@interface WNVVpnManagementAgent : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)addProfileFromXmlAsync:(NSString *)xml success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)addProfileFromObjectAsync:(RTObject<WNVIVpnProfile>*)profile success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)updateProfileFromXmlAsync:(NSString *)xml success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)updateProfileFromObjectAsync:(RTObject<WNVIVpnProfile>*)profile success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)getProfilesAsyncWithSuccess:(void (^)(NSArray* /* RTObject<WNVIVpnProfile>* */))success failure:(void (^)(NSError*))failure;
- (void)deleteProfileAsync:(RTObject<WNVIVpnProfile>*)profile success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)connectProfileAsync:(RTObject<WNVIVpnProfile>*)profile success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)connectProfileWithPasswordCredentialAsync:(RTObject<WNVIVpnProfile>*)profile passwordCredential:(WSCPasswordCredential*)passwordCredential success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
- (void)disconnectProfileAsync:(RTObject<WNVIVpnProfile>*)profile success:(void (^)(WNVVpnManagementErrorStatus))success failure:(void (^)(NSError*))failure;
@end

#endif // __WNVVpnManagementAgent_DEFINED__

