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

// WindowsNetworkingProximity.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
#define OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsNetworkingProximity.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WNPProximityMessage, WNPProximityDevice, WNPTriggeredConnectionStateChangedEventArgs, WNPPeerInformation, WNPConnectionRequestedEventArgs, WNPPeerWatcher, WNPPeerFinder;
@protocol WNPIProximityMessage, WNPIProximityDevice, WNPIProximityDeviceStatics, WNPITriggeredConnectionStateChangedEventArgs, WNPIPeerInformation, WNPIPeerInformationWithHostAndService, WNPIPeerInformation3, WNPIConnectionRequestedEventArgs, WNPIPeerWatcher, WNPIPeerFinderStatics, WNPIPeerFinderStatics2;

// Windows.Networking.Proximity.TriggeredConnectState
enum _WNPTriggeredConnectState {
    WNPTriggeredConnectStatePeerFound = 0,
    WNPTriggeredConnectStateListening = 1,
    WNPTriggeredConnectStateConnecting = 2,
    WNPTriggeredConnectStateCompleted = 3,
    WNPTriggeredConnectStateCanceled = 4,
    WNPTriggeredConnectStateFailed = 5,
};
typedef unsigned WNPTriggeredConnectState;

// Windows.Networking.Proximity.PeerWatcherStatus
enum _WNPPeerWatcherStatus {
    WNPPeerWatcherStatusCreated = 0,
    WNPPeerWatcherStatusStarted = 1,
    WNPPeerWatcherStatusEnumerationCompleted = 2,
    WNPPeerWatcherStatusStopping = 3,
    WNPPeerWatcherStatusStopped = 4,
    WNPPeerWatcherStatusAborted = 5,
};
typedef unsigned WNPPeerWatcherStatus;

// Windows.Networking.Proximity.PeerDiscoveryTypes
enum _WNPPeerDiscoveryTypes {
    WNPPeerDiscoveryTypesNone = 0,
    WNPPeerDiscoveryTypesBrowse = 1,
    WNPPeerDiscoveryTypesTriggered = 2,
};
typedef unsigned WNPPeerDiscoveryTypes;

// Windows.Networking.Proximity.PeerRole
enum _WNPPeerRole {
    WNPPeerRolePeer = 0,
    WNPPeerRoleHost = 1,
    WNPPeerRoleClient = 2,
};
typedef unsigned WNPPeerRole;

#include "WindowsStorageStreams.h"
#include "WindowsFoundation.h"
#include "WindowsNetworking.h"
#include "WindowsNetworkingSockets.h"
// Windows.Networking.Proximity.DeviceArrivedEventHandler
#ifndef __WNPDeviceArrivedEventHandler__DEFINED
#define __WNPDeviceArrivedEventHandler__DEFINED
typedef void(^WNPDeviceArrivedEventHandler)(WNPProximityDevice* sender);
#endif // __WNPDeviceArrivedEventHandler__DEFINED

// Windows.Networking.Proximity.DeviceDepartedEventHandler
#ifndef __WNPDeviceDepartedEventHandler__DEFINED
#define __WNPDeviceDepartedEventHandler__DEFINED
typedef void(^WNPDeviceDepartedEventHandler)(WNPProximityDevice* sender);
#endif // __WNPDeviceDepartedEventHandler__DEFINED

// Windows.Networking.Proximity.MessageReceivedHandler
#ifndef __WNPMessageReceivedHandler__DEFINED
#define __WNPMessageReceivedHandler__DEFINED
typedef void(^WNPMessageReceivedHandler)(WNPProximityDevice* sender, WNPProximityMessage* message);
#endif // __WNPMessageReceivedHandler__DEFINED

// Windows.Networking.Proximity.MessageTransmittedHandler
#ifndef __WNPMessageTransmittedHandler__DEFINED
#define __WNPMessageTransmittedHandler__DEFINED
typedef void(^WNPMessageTransmittedHandler)(WNPProximityDevice* sender, int64_t messageId);
#endif // __WNPMessageTransmittedHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.Networking.Proximity.MessageReceivedHandler
#ifndef __WNPMessageReceivedHandler__DEFINED
#define __WNPMessageReceivedHandler__DEFINED
typedef void(^WNPMessageReceivedHandler)(WNPProximityDevice* sender, WNPProximityMessage* message);
#endif // __WNPMessageReceivedHandler__DEFINED

// Windows.Networking.Proximity.MessageTransmittedHandler
#ifndef __WNPMessageTransmittedHandler__DEFINED
#define __WNPMessageTransmittedHandler__DEFINED
typedef void(^WNPMessageTransmittedHandler)(WNPProximityDevice* sender, int64_t messageId);
#endif // __WNPMessageTransmittedHandler__DEFINED

// Windows.Networking.Proximity.DeviceArrivedEventHandler
#ifndef __WNPDeviceArrivedEventHandler__DEFINED
#define __WNPDeviceArrivedEventHandler__DEFINED
typedef void(^WNPDeviceArrivedEventHandler)(WNPProximityDevice* sender);
#endif // __WNPDeviceArrivedEventHandler__DEFINED

// Windows.Networking.Proximity.DeviceDepartedEventHandler
#ifndef __WNPDeviceDepartedEventHandler__DEFINED
#define __WNPDeviceDepartedEventHandler__DEFINED
typedef void(^WNPDeviceDepartedEventHandler)(WNPProximityDevice* sender);
#endif // __WNPDeviceDepartedEventHandler__DEFINED

// Windows.Networking.Proximity.ProximityMessage
#ifndef __WNPProximityMessage_DEFINED__
#define __WNPProximityMessage_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPProximityMessage : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* data;
@property (readonly) NSString * dataAsString;
@property (readonly) NSString * messageType;
@property (readonly) int64_t subscriptionId;
@end

#endif // __WNPProximityMessage_DEFINED__

// Windows.Networking.Proximity.ProximityDevice
#ifndef __WNPProximityDevice_DEFINED__
#define __WNPProximityDevice_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPProximityDevice : RTObject
+ (NSString *)getDeviceSelector;
+ (WNPProximityDevice*)getDefault;
+ (WNPProximityDevice*)fromId:(NSString *)deviceId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) uint64_t bitsPerSecond;
@property (readonly) NSString * deviceId;
@property (readonly) unsigned int maxMessageBytes;
- (EventRegistrationToken)addDeviceArrivedEvent:(WNPDeviceArrivedEventHandler)del;
- (void)removeDeviceArrivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDeviceDepartedEvent:(WNPDeviceDepartedEventHandler)del;
- (void)removeDeviceDepartedEvent:(EventRegistrationToken)tok;
- (int64_t)subscribeForMessage:(NSString *)messageType messageReceivedHandler:(WNPMessageReceivedHandler)messageReceivedHandler;
- (int64_t)publishMessage:(NSString *)messageType message:(NSString *)message;
- (int64_t)publishMessageWithCallback:(NSString *)messageType message:(NSString *)message messageTransmittedHandler:(WNPMessageTransmittedHandler)messageTransmittedHandler;
- (int64_t)publishBinaryMessage:(NSString *)messageType message:(RTObject<WSSIBuffer>*)message;
- (int64_t)publishBinaryMessageWithCallback:(NSString *)messageType message:(RTObject<WSSIBuffer>*)message messageTransmittedHandler:(WNPMessageTransmittedHandler)messageTransmittedHandler;
- (int64_t)publishUriMessage:(WFUri*)message;
- (int64_t)publishUriMessageWithCallback:(WFUri*)message messageTransmittedHandler:(WNPMessageTransmittedHandler)messageTransmittedHandler;
- (void)stopSubscribingForMessage:(int64_t)subscriptionId;
- (void)stopPublishingMessage:(int64_t)messageId;
@end

#endif // __WNPProximityDevice_DEFINED__

// Windows.Networking.Proximity.TriggeredConnectionStateChangedEventArgs
#ifndef __WNPTriggeredConnectionStateChangedEventArgs_DEFINED__
#define __WNPTriggeredConnectionStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPTriggeredConnectionStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int id;
@property (readonly) WNSStreamSocket* socket;
@property (readonly) WNPTriggeredConnectState state;
@end

#endif // __WNPTriggeredConnectionStateChangedEventArgs_DEFINED__

// Windows.Networking.Proximity.PeerInformation
#ifndef __WNPPeerInformation_DEFINED__
#define __WNPPeerInformation_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPPeerInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * displayName;
@property (readonly) RTObject<WSSIBuffer>* discoveryData;
@property (readonly) NSString * id;
@property (readonly) WNHostName* hostName;
@property (readonly) NSString * serviceName;
@end

#endif // __WNPPeerInformation_DEFINED__

// Windows.Networking.Proximity.ConnectionRequestedEventArgs
#ifndef __WNPConnectionRequestedEventArgs_DEFINED__
#define __WNPConnectionRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPConnectionRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNPPeerInformation* peerInformation;
@end

#endif // __WNPConnectionRequestedEventArgs_DEFINED__

// Windows.Networking.Proximity.PeerWatcher
#ifndef __WNPPeerWatcher_DEFINED__
#define __WNPPeerWatcher_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPPeerWatcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WNPPeerWatcherStatus status;
- (EventRegistrationToken)addAddedEvent:(void(^)(WNPPeerWatcher*, WNPPeerInformation*))del;
- (void)removeAddedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addEnumerationCompletedEvent:(void(^)(WNPPeerWatcher*, RTObject*))del;
- (void)removeEnumerationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addRemovedEvent:(void(^)(WNPPeerWatcher*, WNPPeerInformation*))del;
- (void)removeRemovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStoppedEvent:(void(^)(WNPPeerWatcher*, RTObject*))del;
- (void)removeStoppedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addUpdatedEvent:(void(^)(WNPPeerWatcher*, WNPPeerInformation*))del;
- (void)removeUpdatedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WNPPeerWatcher_DEFINED__

// Windows.Networking.Proximity.PeerFinder
#ifndef __WNPPeerFinder_DEFINED__
#define __WNPPeerFinder_DEFINED__

OBJCUWPWINDOWSNETWORKINGPROXIMITYEXPORT
@interface WNPPeerFinder : RTObject
+ (void)start;
+ (void)startWithMessage:(NSString *)peerMessage;
+ (void)stop;
+ (void)findAllPeersAsyncWithSuccess:(void (^)(NSArray* /* WNPPeerInformation* */))success failure:(void (^)(NSError*))failure;
+ (void)connectAsync:(WNPPeerInformation*)peerInformation success:(void (^)(WNSStreamSocket*))success failure:(void (^)(NSError*))failure;
+ (WNPPeerWatcher*)createWatcher;
+ (NSString *)displayName;
+ (void)setDisplayName:(NSString *)value;
+ (BOOL)allowWiFiDirect;
+ (void)setAllowWiFiDirect:(BOOL)value;
+ (BOOL)allowInfrastructure;
+ (void)setAllowInfrastructure:(BOOL)value;
+ (BOOL)allowBluetooth;
+ (void)setAllowBluetooth:(BOOL)value;
+ (NSMutableDictionary* /* NSString *, NSString * */)alternateIdentities;
+ (WNPPeerDiscoveryTypes)supportedDiscoveryTypes;
+ (WNPPeerRole)role;
+ (void)setRole:(WNPPeerRole)value;
+ (RTObject<WSSIBuffer>*)discoveryData;
+ (void)setDiscoveryData:(RTObject<WSSIBuffer>*)value;
+ (EventRegistrationToken)addConnectionRequestedEvent:(void(^)(RTObject*, WNPConnectionRequestedEventArgs*))del;
+ (void)removeConnectionRequestedEvent:(EventRegistrationToken)tok;
+ (EventRegistrationToken)addTriggeredConnectionStateChangedEvent:(void(^)(RTObject*, WNPTriggeredConnectionStateChangedEventArgs*))del;
+ (void)removeTriggeredConnectionStateChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WNPPeerFinder_DEFINED__

