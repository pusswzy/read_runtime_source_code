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

// WindowsMediaPlayTo.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
#define OBJCUWPWINDOWSMEDIAPLAYTOEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaPlayTo.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMPSourceChangeRequestedEventArgs, WMPPlaybackRateChangeRequestedEventArgs, WMPCurrentTimeChangeRequestedEventArgs, WMPMuteChangeRequestedEventArgs, WMPVolumeChangeRequestedEventArgs, WMPPlayToReceiver, WMPPlayToConnection, WMPPlayToSource, WMPPlayToConnectionStateChangedEventArgs, WMPPlayToConnectionTransferredEventArgs, WMPPlayToConnectionErrorEventArgs, WMPPlayToSourceSelectedEventArgs, WMPPlayToSourceDeferral, WMPPlayToSourceRequest, WMPPlayToSourceRequestedEventArgs, WMPPlayToManager;
@protocol WMPISourceChangeRequestedEventArgs, WMPIPlaybackRateChangeRequestedEventArgs, WMPICurrentTimeChangeRequestedEventArgs, WMPIMuteChangeRequestedEventArgs, WMPIVolumeChangeRequestedEventArgs, WMPIPlayToReceiver, WMPIPlayToSource, WMPIPlayToSourceWithPreferredSourceUri, WMPIPlayToConnectionStateChangedEventArgs, WMPIPlayToConnectionTransferredEventArgs, WMPIPlayToConnectionErrorEventArgs, WMPIPlayToConnection, WMPIPlayToSourceSelectedEventArgs, WMPIPlayToSourceDeferral, WMPIPlayToSourceRequest, WMPIPlayToSourceRequestedEventArgs, WMPIPlayToManager, WMPIPlayToManagerStatics;

// Windows.Media.PlayTo.PlayToConnectionState
enum _WMPPlayToConnectionState {
    WMPPlayToConnectionStateDisconnected = 0,
    WMPPlayToConnectionStateConnected = 1,
    WMPPlayToConnectionStateRendering = 2,
};
typedef unsigned WMPPlayToConnectionState;

// Windows.Media.PlayTo.PlayToConnectionError
enum _WMPPlayToConnectionError {
    WMPPlayToConnectionErrorNone = 0,
    WMPPlayToConnectionErrorDeviceNotResponding = 1,
    WMPPlayToConnectionErrorDeviceError = 2,
    WMPPlayToConnectionErrorDeviceLocked = 3,
    WMPPlayToConnectionErrorProtectedPlaybackFailed = 4,
};
typedef unsigned WMPPlayToConnectionError;

#include "WindowsFoundationCollections.h"
#include "WindowsStorageStreams.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Media.PlayTo.SourceChangeRequestedEventArgs
#ifndef __WMPSourceChangeRequestedEventArgs_DEFINED__
#define __WMPSourceChangeRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPSourceChangeRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * album;
@property (readonly) NSString * author;
@property (readonly) id /* WFDateTime* */ date;
@property (readonly) NSString * Description;
@property (readonly) NSString * genre;
@property (readonly) NSDictionary* /* NSString *, RTObject* */ properties;
@property (readonly) id /* unsigned int */ rating;
@property (readonly) RTObject<WSSIRandomAccessStreamWithContentType>* stream;
@property (readonly) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
@property (readonly) NSString * title;
@end

#endif // __WMPSourceChangeRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.PlaybackRateChangeRequestedEventArgs
#ifndef __WMPPlaybackRateChangeRequestedEventArgs_DEFINED__
#define __WMPPlaybackRateChangeRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlaybackRateChangeRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double rate;
@end

#endif // __WMPPlaybackRateChangeRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.CurrentTimeChangeRequestedEventArgs
#ifndef __WMPCurrentTimeChangeRequestedEventArgs_DEFINED__
#define __WMPCurrentTimeChangeRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPCurrentTimeChangeRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* time;
@end

#endif // __WMPCurrentTimeChangeRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.MuteChangeRequestedEventArgs
#ifndef __WMPMuteChangeRequestedEventArgs_DEFINED__
#define __WMPMuteChangeRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPMuteChangeRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL mute;
@end

#endif // __WMPMuteChangeRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.VolumeChangeRequestedEventArgs
#ifndef __WMPVolumeChangeRequestedEventArgs_DEFINED__
#define __WMPVolumeChangeRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPVolumeChangeRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double volume;
@end

#endif // __WMPVolumeChangeRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToReceiver
#ifndef __WMPPlayToReceiver_DEFINED__
#define __WMPPlayToReceiver_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToReceiver : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL supportsVideo;
@property BOOL supportsImage;
@property BOOL supportsAudio;
@property (retain) NSString * friendlyName;
@property (readonly) RTObject<WFCIPropertySet>* properties;
- (EventRegistrationToken)addCurrentTimeChangeRequestedEvent:(void(^)(WMPPlayToReceiver*, WMPCurrentTimeChangeRequestedEventArgs*))del;
- (void)removeCurrentTimeChangeRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addMuteChangeRequestedEvent:(void(^)(WMPPlayToReceiver*, WMPMuteChangeRequestedEventArgs*))del;
- (void)removeMuteChangeRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPauseRequestedEvent:(void(^)(WMPPlayToReceiver*, RTObject*))del;
- (void)removePauseRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPlayRequestedEvent:(void(^)(WMPPlayToReceiver*, RTObject*))del;
- (void)removePlayRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPlaybackRateChangeRequestedEvent:(void(^)(WMPPlayToReceiver*, WMPPlaybackRateChangeRequestedEventArgs*))del;
- (void)removePlaybackRateChangeRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceChangeRequestedEvent:(void(^)(WMPPlayToReceiver*, WMPSourceChangeRequestedEventArgs*))del;
- (void)removeSourceChangeRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStopRequestedEvent:(void(^)(WMPPlayToReceiver*, RTObject*))del;
- (void)removeStopRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTimeUpdateRequestedEvent:(void(^)(WMPPlayToReceiver*, RTObject*))del;
- (void)removeTimeUpdateRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVolumeChangeRequestedEvent:(void(^)(WMPPlayToReceiver*, WMPVolumeChangeRequestedEventArgs*))del;
- (void)removeVolumeChangeRequestedEvent:(EventRegistrationToken)tok;
- (void)notifyVolumeChange:(double)volume mute:(BOOL)mute;
- (void)notifyRateChange:(double)rate;
- (void)notifyLoadedMetadata;
- (void)notifyTimeUpdate:(WFTimeSpan*)currentTime;
- (void)notifyDurationChange:(WFTimeSpan*)duration;
- (void)notifySeeking;
- (void)notifySeeked;
- (void)notifyPaused;
- (void)notifyPlaying;
- (void)notifyEnded;
- (void)notifyError;
- (void)notifyStopped;
- (RTObject<WFIAsyncAction>*)startAsync;
- (RTObject<WFIAsyncAction>*)stopAsync;
@end

#endif // __WMPPlayToReceiver_DEFINED__

// Windows.Media.PlayTo.PlayToConnection
#ifndef __WMPPlayToConnection_DEFINED__
#define __WMPPlayToConnection_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToConnection : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMPPlayToConnectionState state;
- (EventRegistrationToken)addErrorEvent:(void(^)(WMPPlayToConnection*, WMPPlayToConnectionErrorEventArgs*))del;
- (void)removeErrorEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStateChangedEvent:(void(^)(WMPPlayToConnection*, WMPPlayToConnectionStateChangedEventArgs*))del;
- (void)removeStateChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTransferredEvent:(void(^)(WMPPlayToConnection*, WMPPlayToConnectionTransferredEventArgs*))del;
- (void)removeTransferredEvent:(EventRegistrationToken)tok;
@end

#endif // __WMPPlayToConnection_DEFINED__

// Windows.Media.PlayTo.PlayToSource
#ifndef __WMPPlayToSource_DEFINED__
#define __WMPPlayToSource_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToSource : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WMPPlayToSource* next;
@property (readonly) WMPPlayToConnection* connection;
@property (retain) WFUri* preferredSourceUri;
- (void)playNext;
@end

#endif // __WMPPlayToSource_DEFINED__

// Windows.Media.PlayTo.PlayToConnectionStateChangedEventArgs
#ifndef __WMPPlayToConnectionStateChangedEventArgs_DEFINED__
#define __WMPPlayToConnectionStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToConnectionStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMPPlayToConnectionState currentState;
@property (readonly) WMPPlayToConnectionState previousState;
@end

#endif // __WMPPlayToConnectionStateChangedEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToConnectionTransferredEventArgs
#ifndef __WMPPlayToConnectionTransferredEventArgs_DEFINED__
#define __WMPPlayToConnectionTransferredEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToConnectionTransferredEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMPPlayToSource* currentSource;
@property (readonly) WMPPlayToSource* previousSource;
@end

#endif // __WMPPlayToConnectionTransferredEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToConnectionErrorEventArgs
#ifndef __WMPPlayToConnectionErrorEventArgs_DEFINED__
#define __WMPPlayToConnectionErrorEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToConnectionErrorEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMPPlayToConnectionError code;
@property (readonly) NSString * message;
@end

#endif // __WMPPlayToConnectionErrorEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToSourceSelectedEventArgs
#ifndef __WMPPlayToSourceSelectedEventArgs_DEFINED__
#define __WMPPlayToSourceSelectedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToSourceSelectedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * friendlyName;
@property (readonly) RTObject<WSSIRandomAccessStreamWithContentType>* icon;
@property (readonly) BOOL supportsAudio;
@property (readonly) BOOL supportsImage;
@property (readonly) BOOL supportsVideo;
@end

#endif // __WMPPlayToSourceSelectedEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToSourceDeferral
#ifndef __WMPPlayToSourceDeferral_DEFINED__
#define __WMPPlayToSourceDeferral_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToSourceDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WMPPlayToSourceDeferral_DEFINED__

// Windows.Media.PlayTo.PlayToSourceRequest
#ifndef __WMPPlayToSourceRequest_DEFINED__
#define __WMPPlayToSourceRequest_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToSourceRequest : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* deadline;
- (void)displayErrorString:(NSString *)errorString;
- (WMPPlayToSourceDeferral*)getDeferral;
- (void)setSource:(WMPPlayToSource*)value;
@end

#endif // __WMPPlayToSourceRequest_DEFINED__

// Windows.Media.PlayTo.PlayToSourceRequestedEventArgs
#ifndef __WMPPlayToSourceRequestedEventArgs_DEFINED__
#define __WMPPlayToSourceRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToSourceRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMPPlayToSourceRequest* sourceRequest;
@end

#endif // __WMPPlayToSourceRequestedEventArgs_DEFINED__

// Windows.Media.PlayTo.PlayToManager
#ifndef __WMPPlayToManager_DEFINED__
#define __WMPPlayToManager_DEFINED__

OBJCUWPWINDOWSMEDIAPLAYTOEXPORT
@interface WMPPlayToManager : RTObject
+ (WMPPlayToManager*)getForCurrentView;
+ (void)showPlayToUI;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL defaultSourceSelection;
- (EventRegistrationToken)addSourceRequestedEvent:(void(^)(WMPPlayToManager*, WMPPlayToSourceRequestedEventArgs*))del;
- (void)removeSourceRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSourceSelectedEvent:(void(^)(WMPPlayToManager*, WMPPlayToSourceSelectedEventArgs*))del;
- (void)removeSourceSelectedEvent:(EventRegistrationToken)tok;
@end

#endif // __WMPPlayToManager_DEFINED__

