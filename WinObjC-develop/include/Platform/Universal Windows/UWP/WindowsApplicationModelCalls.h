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

// WindowsApplicationModelCalls.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelCalls.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WACPhoneCallHistoryEntryAddress, WACPhoneCallHistoryEntry, WACPhoneCallHistoryEntryReader, WACPhoneCallHistoryEntryQueryOptions, WACPhoneCallHistoryStore, WACPhoneCallHistoryManagerForUser, WACPhoneCallHistoryManager;
@protocol WACIPhoneCallHistoryEntry, WACIPhoneCallHistoryEntryAddress, WACIPhoneCallHistoryEntryAddressFactory, WACIPhoneCallHistoryEntryQueryOptions, WACIPhoneCallHistoryEntryReader, WACIPhoneCallHistoryStore, WACIPhoneCallHistoryManagerStatics, WACIPhoneCallHistoryManagerStatics2, WACIPhoneCallHistoryManagerForUser;

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryOtherAppReadAccess
enum _WACPhoneCallHistoryEntryOtherAppReadAccess {
    WACPhoneCallHistoryEntryOtherAppReadAccessFull = 0,
    WACPhoneCallHistoryEntryOtherAppReadAccessSystemOnly = 1,
};
typedef unsigned WACPhoneCallHistoryEntryOtherAppReadAccess;

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryMedia
enum _WACPhoneCallHistoryEntryMedia {
    WACPhoneCallHistoryEntryMediaAudio = 0,
    WACPhoneCallHistoryEntryMediaVideo = 1,
};
typedef unsigned WACPhoneCallHistoryEntryMedia;

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryRawAddressKind
enum _WACPhoneCallHistoryEntryRawAddressKind {
    WACPhoneCallHistoryEntryRawAddressKindPhoneNumber = 0,
    WACPhoneCallHistoryEntryRawAddressKindCustom = 1,
};
typedef unsigned WACPhoneCallHistoryEntryRawAddressKind;

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryDesiredMedia
enum _WACPhoneCallHistoryEntryQueryDesiredMedia {
    WACPhoneCallHistoryEntryQueryDesiredMediaNone = 0,
    WACPhoneCallHistoryEntryQueryDesiredMediaAudio = 1,
    WACPhoneCallHistoryEntryQueryDesiredMediaVideo = 2,
    WACPhoneCallHistoryEntryQueryDesiredMediaAll = -1,
};
typedef unsigned WACPhoneCallHistoryEntryQueryDesiredMedia;

// Windows.ApplicationModel.Calls.PhoneCallHistoryStoreAccessType
enum _WACPhoneCallHistoryStoreAccessType {
    WACPhoneCallHistoryStoreAccessTypeAppEntriesReadWrite = 0,
    WACPhoneCallHistoryStoreAccessTypeAllEntriesLimitedReadWrite = 1,
    WACPhoneCallHistoryStoreAccessTypeAllEntriesReadWrite = 2,
};
typedef unsigned WACPhoneCallHistoryStoreAccessType;

// Windows.ApplicationModel.Calls.PhoneCallHistorySourceIdKind
enum _WACPhoneCallHistorySourceIdKind {
    WACPhoneCallHistorySourceIdKindCellularPhoneLineId = 0,
    WACPhoneCallHistorySourceIdKindPackageFamilyName = 1,
};
typedef unsigned WACPhoneCallHistorySourceIdKind;

#include "WindowsFoundation.h"
#include "WindowsSystem.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryAddress
#ifndef __WACPhoneCallHistoryEntryAddress_DEFINED__
#define __WACPhoneCallHistoryEntryAddress_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryEntryAddress : RTObject
+ (WACPhoneCallHistoryEntryAddress*)make:(NSString *)rawAddress rawAddressKind:(WACPhoneCallHistoryEntryRawAddressKind)rawAddressKind ACTIVATOR;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WACPhoneCallHistoryEntryRawAddressKind rawAddressKind;
@property (retain) NSString * rawAddress;
@property (retain) NSString * displayName;
@property (retain) NSString * contactId;
@end

#endif // __WACPhoneCallHistoryEntryAddress_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntry
#ifndef __WACPhoneCallHistoryEntry_DEFINED__
#define __WACPhoneCallHistoryEntry_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryEntry : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WACPhoneCallHistoryEntryMedia media;
@property BOOL isMissed;
@property BOOL isIncoming;
@property BOOL isCallerIdBlocked;
@property BOOL isSeen;
@property (retain) id /* WFTimeSpan* */ duration;
@property BOOL isEmergency;
@property BOOL isSuppressed;
@property (retain) WFDateTime* startTime;
@property WACPhoneCallHistorySourceIdKind sourceIdKind;
@property (retain) WACPhoneCallHistoryEntryAddress* address;
@property (retain) NSString * sourceId;
@property (retain) NSString * remoteId;
@property WACPhoneCallHistoryEntryOtherAppReadAccess otherAppReadAccess;
@property BOOL isRinging;
@property BOOL isVoicemail;
@property (readonly) NSString * id;
@property (readonly) NSString * sourceDisplayName;
@end

#endif // __WACPhoneCallHistoryEntry_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryReader
#ifndef __WACPhoneCallHistoryEntryReader_DEFINED__
#define __WACPhoneCallHistoryEntryReader_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryEntryReader : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readBatchAsyncWithSuccess:(void (^)(NSArray* /* WACPhoneCallHistoryEntry* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACPhoneCallHistoryEntryReader_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryOptions
#ifndef __WACPhoneCallHistoryEntryQueryOptions_DEFINED__
#define __WACPhoneCallHistoryEntryQueryOptions_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryEntryQueryOptions : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WACPhoneCallHistoryEntryQueryDesiredMedia desiredMedia;
@property (readonly) NSMutableArray* /* NSString * */ sourceIds;
@end

#endif // __WACPhoneCallHistoryEntryQueryOptions_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryStore
#ifndef __WACPhoneCallHistoryStore_DEFINED__
#define __WACPhoneCallHistoryStore_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryStore : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)getEntryAsync:(NSString *)callHistoryEntryId success:(void (^)(WACPhoneCallHistoryEntry*))success failure:(void (^)(NSError*))failure;
- (WACPhoneCallHistoryEntryReader*)getEntryReader;
- (WACPhoneCallHistoryEntryReader*)getEntryReaderWithOptions:(WACPhoneCallHistoryEntryQueryOptions*)queryOptions;
- (RTObject<WFIAsyncAction>*)saveEntryAsync:(WACPhoneCallHistoryEntry*)callHistoryEntry;
- (RTObject<WFIAsyncAction>*)deleteEntryAsync:(WACPhoneCallHistoryEntry*)callHistoryEntry;
- (RTObject<WFIAsyncAction>*)deleteEntriesAsync:(id<NSFastEnumeration> /* WACPhoneCallHistoryEntry* */)callHistoryEntries;
- (RTObject<WFIAsyncAction>*)markEntryAsSeenAsync:(WACPhoneCallHistoryEntry*)callHistoryEntry;
- (RTObject<WFIAsyncAction>*)markEntriesAsSeenAsync:(id<NSFastEnumeration> /* WACPhoneCallHistoryEntry* */)callHistoryEntries;
- (void)getUnseenCountAsyncWithSuccess:(void (^)(unsigned int))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)markAllAsSeenAsync;
- (void)getSourcesUnseenCountAsync:(id<NSFastEnumeration> /* NSString * */)sourceIds success:(void (^)(unsigned int))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)markSourcesAsSeenAsync:(id<NSFastEnumeration> /* NSString * */)sourceIds;
@end

#endif // __WACPhoneCallHistoryStore_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryManagerForUser
#ifndef __WACPhoneCallHistoryManagerForUser_DEFINED__
#define __WACPhoneCallHistoryManagerForUser_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryManagerForUser : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSUser* user;
- (void)requestStoreAsync:(WACPhoneCallHistoryStoreAccessType)accessType success:(void (^)(WACPhoneCallHistoryStore*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACPhoneCallHistoryManagerForUser_DEFINED__

// Windows.ApplicationModel.Calls.PhoneCallHistoryManager
#ifndef __WACPhoneCallHistoryManager_DEFINED__
#define __WACPhoneCallHistoryManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELCALLSEXPORT
@interface WACPhoneCallHistoryManager : RTObject
+ (WACPhoneCallHistoryManagerForUser*)getForUser:(WSUser*)user;
+ (void)requestStoreAsync:(WACPhoneCallHistoryStoreAccessType)accessType success:(void (^)(WACPhoneCallHistoryStore*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WACPhoneCallHistoryManager_DEFINED__

