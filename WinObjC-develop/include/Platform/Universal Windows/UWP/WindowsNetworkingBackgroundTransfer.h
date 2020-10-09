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

// WindowsNetworkingBackgroundTransfer.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
#define OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsNetworkingBackgroundTransfer.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WNBDownloadOperation, WNBUnconstrainedTransferRequestResult, WNBUploadOperation, WNBBackgroundTransferGroup, WNBBackgroundTransferCompletionGroup, WNBBackgroundTransferContentPart, WNBResponseInformation, WNBBackgroundTransferRangesDownloadedEventArgs, WNBBackgroundDownloader, WNBBackgroundUploader, WNBBackgroundTransferError, WNBContentPrefetcher, WNBBackgroundTransferCompletionGroupTriggerDetails;
@class WNBBackgroundDownloadProgress, WNBBackgroundUploadProgress, WNBBackgroundTransferFileRange;
@protocol WNBIBackgroundTransferBase, WNBIUnconstrainedTransferRequestResult, WNBIBackgroundDownloaderUserConsent, WNBIBackgroundUploaderUserConsent, WNBIBackgroundDownloader, WNBIBackgroundDownloader2, WNBIBackgroundDownloader3, WNBIBackgroundUploader, WNBIBackgroundUploader2, WNBIBackgroundUploader3, WNBIBackgroundTransferOperation, WNBIBackgroundTransferOperationPriority, WNBIDownloadOperation, WNBIDownloadOperation2, WNBIBackgroundTransferRangesDownloadedEventArgs, WNBIDownloadOperation3, WNBIUploadOperation, WNBIUploadOperation2, WNBIBackgroundDownloaderFactory, WNBIBackgroundDownloaderStaticMethods, WNBIBackgroundDownloaderStaticMethods2, WNBIBackgroundUploaderFactory, WNBIBackgroundUploaderStaticMethods, WNBIBackgroundUploaderStaticMethods2, WNBIResponseInformation, WNBIBackgroundTransferErrorStaticMethods, WNBIBackgroundTransferContentPart, WNBIBackgroundTransferContentPartFactory, WNBIBackgroundTransferGroup, WNBIBackgroundTransferGroupStatics, WNBIContentPrefetcherTime, WNBIContentPrefetcher, WNBIBackgroundTransferCompletionGroup, WNBIBackgroundTransferCompletionGroupTriggerDetails;

// Windows.Networking.BackgroundTransfer.BackgroundTransferStatus
enum _WNBBackgroundTransferStatus {
    WNBBackgroundTransferStatusIdle = 0,
    WNBBackgroundTransferStatusRunning = 1,
    WNBBackgroundTransferStatusPausedByApplication = 2,
    WNBBackgroundTransferStatusPausedCostedNetwork = 3,
    WNBBackgroundTransferStatusPausedNoNetwork = 4,
    WNBBackgroundTransferStatusCompleted = 5,
    WNBBackgroundTransferStatusCanceled = 6,
    WNBBackgroundTransferStatusError = 7,
    WNBBackgroundTransferStatusPausedRecoverableWebErrorStatus = 8,
    WNBBackgroundTransferStatusPausedSystemPolicy = 32,
};
typedef unsigned WNBBackgroundTransferStatus;

// Windows.Networking.BackgroundTransfer.BackgroundTransferCostPolicy
enum _WNBBackgroundTransferCostPolicy {
    WNBBackgroundTransferCostPolicyDefault = 0,
    WNBBackgroundTransferCostPolicyUnrestrictedOnly = 1,
    WNBBackgroundTransferCostPolicyAlways = 2,
};
typedef unsigned WNBBackgroundTransferCostPolicy;

// Windows.Networking.BackgroundTransfer.BackgroundTransferPriority
enum _WNBBackgroundTransferPriority {
    WNBBackgroundTransferPriorityDefault = 0,
    WNBBackgroundTransferPriorityHigh = 1,
};
typedef unsigned WNBBackgroundTransferPriority;

// Windows.Networking.BackgroundTransfer.BackgroundTransferBehavior
enum _WNBBackgroundTransferBehavior {
    WNBBackgroundTransferBehaviorParallel = 0,
    WNBBackgroundTransferBehaviorSerialized = 1,
};
typedef unsigned WNBBackgroundTransferBehavior;

#include "WindowsApplicationModelBackground.h"
#include "WindowsWeb.h"
#include "WindowsStorageStreams.h"
#include "WindowsSecurityCredentials.h"
#include "WindowsFoundation.h"
#include "WindowsStorage.h"
#include "WindowsUINotifications.h"

#import <Foundation/Foundation.h>

// [struct] Windows.Networking.BackgroundTransfer.BackgroundDownloadProgress
OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundDownloadProgress : NSObject
+ (instancetype)new;
@property uint64_t bytesReceived;
@property uint64_t totalBytesToReceive;
@property WNBBackgroundTransferStatus status;
@property BOOL hasResponseChanged;
@property BOOL hasRestarted;
@end

// [struct] Windows.Networking.BackgroundTransfer.BackgroundUploadProgress
OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundUploadProgress : NSObject
+ (instancetype)new;
@property uint64_t bytesReceived;
@property uint64_t bytesSent;
@property uint64_t totalBytesToReceive;
@property uint64_t totalBytesToSend;
@property WNBBackgroundTransferStatus status;
@property BOOL hasResponseChanged;
@property BOOL hasRestarted;
@end

// [struct] Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange
OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferFileRange : NSObject
+ (instancetype)new;
@property uint64_t offset;
@property uint64_t length;
@end

// Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
#ifndef __WNBIBackgroundTransferBase_DEFINED__
#define __WNBIBackgroundTransferBase_DEFINED__

@protocol WNBIBackgroundTransferBase
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (retain) NSString * group;
@property (retain) NSString * method;
@property (retain) WSCPasswordCredential* proxyCredential;
@property (retain) WSCPasswordCredential* serverCredential;
- (void)setRequestHeader:(NSString *)headerName headerValue:(NSString *)headerValue;
@end

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBIBackgroundTransferBase : RTObject <WNBIBackgroundTransferBase>
@end

#endif // __WNBIBackgroundTransferBase_DEFINED__

// Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
#ifndef __WNBIBackgroundTransferOperation_DEFINED__
#define __WNBIBackgroundTransferOperation_DEFINED__

@protocol WNBIBackgroundTransferOperation
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (readonly) NSString * group;
@property (readonly) WFGUID* guid;
@property (readonly) NSString * method;
@property (readonly) WFUri* requestedUri;
- (RTObject<WSSIInputStream>*)getResultStreamAt:(uint64_t)position;
- (WNBResponseInformation*)getResponseInformation;
@end

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBIBackgroundTransferOperation : RTObject <WNBIBackgroundTransferOperation>
@end

#endif // __WNBIBackgroundTransferOperation_DEFINED__

// Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
#ifndef __WNBIBackgroundTransferOperationPriority_DEFINED__
#define __WNBIBackgroundTransferOperationPriority_DEFINED__

@protocol WNBIBackgroundTransferOperationPriority
@property WNBBackgroundTransferPriority priority;
@end

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBIBackgroundTransferOperationPriority : RTObject <WNBIBackgroundTransferOperationPriority>
@end

#endif // __WNBIBackgroundTransferOperationPriority_DEFINED__

// Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory
#ifndef __WNBIBackgroundTransferContentPartFactory_DEFINED__
#define __WNBIBackgroundTransferContentPartFactory_DEFINED__

@protocol WNBIBackgroundTransferContentPartFactory
- (WNBBackgroundTransferContentPart*)createWithName:(NSString *)name;
- (WNBBackgroundTransferContentPart*)createWithNameAndFileName:(NSString *)name fileName:(NSString *)fileName;
@end

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBIBackgroundTransferContentPartFactory : RTObject <WNBIBackgroundTransferContentPartFactory>
@end

#endif // __WNBIBackgroundTransferContentPartFactory_DEFINED__

// Windows.Networking.BackgroundTransfer.DownloadOperation
#ifndef __WNBDownloadOperation_DEFINED__
#define __WNBDownloadOperation_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBDownloadOperation : RTObject <WNBIBackgroundTransferOperation, WNBIBackgroundTransferOperationPriority>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (retain) WFUri* requestedUri;
@property (readonly) NSString * method;
@property (readonly) NSString * group;
@property (readonly) WFGUID* guid;
@property WNBBackgroundTransferPriority priority;
@property (readonly) WNBBackgroundDownloadProgress* progress;
@property (readonly) RTObject<WSIStorageFile>* resultFile;
@property (readonly) WNBBackgroundTransferGroup* transferGroup;
@property BOOL isRandomAccessRequired;
@property (readonly) id /* WWWebErrorStatus */ currentWebErrorStatus;
@property (readonly) NSMutableArray* /* WWWebErrorStatus */ recoverableWebErrorStatuses;
- (EventRegistrationToken)addRangesDownloadedEvent:(void(^)(WNBDownloadOperation*, WNBBackgroundTransferRangesDownloadedEventArgs*))del;
- (void)removeRangesDownloadedEvent:(EventRegistrationToken)tok;
- (void)startAsyncWithSuccess:(void (^)(WNBDownloadOperation*))success progress:(void (^)(WNBDownloadOperation*))progress failure:(void (^)(NSError*))failure;
- (void)attachAsyncWithSuccess:(void (^)(WNBDownloadOperation*))success progress:(void (^)(WNBDownloadOperation*))progress failure:(void (^)(NSError*))failure;
- (void)pause;
- (void)resume;
- (RTObject<WSSIInputStream>*)getResultStreamAt:(uint64_t)position;
- (WNBResponseInformation*)getResponseInformation;
- (RTObject<WSSIRandomAccessStreamReference>*)getResultRandomAccessStreamReference;
- (NSMutableArray* /* WNBBackgroundTransferFileRange* */)getDownloadedRanges;
@end

#endif // __WNBDownloadOperation_DEFINED__

// Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult
#ifndef __WNBUnconstrainedTransferRequestResult_DEFINED__
#define __WNBUnconstrainedTransferRequestResult_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBUnconstrainedTransferRequestResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isUnconstrained;
@end

#endif // __WNBUnconstrainedTransferRequestResult_DEFINED__

// Windows.Networking.BackgroundTransfer.UploadOperation
#ifndef __WNBUploadOperation_DEFINED__
#define __WNBUploadOperation_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBUploadOperation : RTObject <WNBIBackgroundTransferOperation, WNBIBackgroundTransferOperationPriority>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (readonly) NSString * group;
@property (readonly) WFGUID* guid;
@property (readonly) NSString * method;
@property (readonly) WFUri* requestedUri;
@property WNBBackgroundTransferPriority priority;
@property (readonly) WNBBackgroundUploadProgress* progress;
@property (readonly) RTObject<WSIStorageFile>* sourceFile;
@property (readonly) WNBBackgroundTransferGroup* transferGroup;
- (void)startAsyncWithSuccess:(void (^)(WNBUploadOperation*))success progress:(void (^)(WNBUploadOperation*))progress failure:(void (^)(NSError*))failure;
- (void)attachAsyncWithSuccess:(void (^)(WNBUploadOperation*))success progress:(void (^)(WNBUploadOperation*))progress failure:(void (^)(NSError*))failure;
- (RTObject<WSSIInputStream>*)getResultStreamAt:(uint64_t)position;
- (WNBResponseInformation*)getResponseInformation;
@end

#endif // __WNBUploadOperation_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
#ifndef __WNBBackgroundTransferGroup_DEFINED__
#define __WNBBackgroundTransferGroup_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferGroup : RTObject
+ (WNBBackgroundTransferGroup*)createGroup:(NSString *)name;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WNBBackgroundTransferBehavior transferBehavior;
@property (readonly) NSString * name;
@end

#endif // __WNBBackgroundTransferGroup_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup
#ifndef __WNBBackgroundTransferCompletionGroup_DEFINED__
#define __WNBBackgroundTransferCompletionGroup_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferCompletionGroup : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isEnabled;
@property (readonly) RTObject<WABIBackgroundTrigger>* trigger;
- (void)enable;
@end

#endif // __WNBBackgroundTransferCompletionGroup_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart
#ifndef __WNBBackgroundTransferContentPart_DEFINED__
#define __WNBBackgroundTransferContentPart_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferContentPart : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WNBBackgroundTransferContentPart*)makeWithName:(NSString *)name ACTIVATOR;
+ (WNBBackgroundTransferContentPart*)makeWithNameAndFileName:(NSString *)name fileName:(NSString *)fileName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)setHeader:(NSString *)headerName headerValue:(NSString *)headerValue;
- (void)setText:(NSString *)value;
- (void)setFile:(RTObject<WSIStorageFile>*)value;
@end

#endif // __WNBBackgroundTransferContentPart_DEFINED__

// Windows.Networking.BackgroundTransfer.ResponseInformation
#ifndef __WNBResponseInformation_DEFINED__
#define __WNBResponseInformation_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBResponseInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFUri* actualUri;
@property (readonly) NSDictionary* /* NSString *, NSString * */ headers;
@property (readonly) BOOL isResumable;
@property (readonly) unsigned int statusCode;
@end

#endif // __WNBResponseInformation_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs
#ifndef __WNBBackgroundTransferRangesDownloadedEventArgs_DEFINED__
#define __WNBBackgroundTransferRangesDownloadedEventArgs_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferRangesDownloadedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WNBBackgroundTransferFileRange* */ addedRanges;
@property (readonly) BOOL wasDownloadRestarted;
- (WFDeferral*)getDeferral;
@end

#endif // __WNBBackgroundTransferRangesDownloadedEventArgs_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundDownloader
#ifndef __WNBBackgroundDownloader_DEFINED__
#define __WNBBackgroundDownloader_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundDownloader : RTObject <WNBIBackgroundTransferBase>
+ (void)requestUnconstrainedDownloadsAsync:(id<NSFastEnumeration> /* WNBDownloadOperation* */)operations success:(void (^)(WNBUnconstrainedTransferRequestResult*))success failure:(void (^)(NSError*))failure;
+ (void)getCurrentDownloadsAsyncWithSuccess:(void (^)(NSArray* /* WNBDownloadOperation* */))success failure:(void (^)(NSError*))failure;
+ (void)getCurrentDownloadsForGroupAsync:(NSString *)group success:(void (^)(NSArray* /* WNBDownloadOperation* */))success failure:(void (^)(NSError*))failure;
+ (void)getCurrentDownloadsForTransferGroupAsync:(WNBBackgroundTransferGroup*)group success:(void (^)(NSArray* /* WNBDownloadOperation* */))success failure:(void (^)(NSError*))failure;
+ (WNBBackgroundDownloader*)makeWithCompletionGroup:(WNBBackgroundTransferCompletionGroup*)completionGroup ACTIVATOR;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUNToastNotification* failureToastNotification;
@property (retain) WUNTileNotification* successTileNotification;
@property (retain) WUNToastNotification* successToastNotification;
@property (retain) WNBBackgroundTransferGroup* transferGroup;
@property (retain) WUNTileNotification* failureTileNotification;
@property (readonly) WNBBackgroundTransferCompletionGroup* completionGroup;
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (retain) NSString * group;
@property (retain) NSString * method;
@property (retain) WSCPasswordCredential* proxyCredential;
@property (retain) WSCPasswordCredential* serverCredential;
- (WNBDownloadOperation*)createDownload:(WFUri*)uri resultFile:(RTObject<WSIStorageFile>*)resultFile;
- (WNBDownloadOperation*)createDownloadFromFile:(WFUri*)uri resultFile:(RTObject<WSIStorageFile>*)resultFile requestBodyFile:(RTObject<WSIStorageFile>*)requestBodyFile;
- (void)createDownloadAsync:(WFUri*)uri resultFile:(RTObject<WSIStorageFile>*)resultFile requestBodyStream:(RTObject<WSSIInputStream>*)requestBodyStream success:(void (^)(WNBDownloadOperation*))success failure:(void (^)(NSError*))failure;
- (void)setRequestHeader:(NSString *)headerName headerValue:(NSString *)headerValue;
@end

#endif // __WNBBackgroundDownloader_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundUploader
#ifndef __WNBBackgroundUploader_DEFINED__
#define __WNBBackgroundUploader_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundUploader : RTObject <WNBIBackgroundTransferBase>
+ (void)getCurrentUploadsAsyncWithSuccess:(void (^)(NSArray* /* WNBUploadOperation* */))success failure:(void (^)(NSError*))failure;
+ (void)getCurrentUploadsForGroupAsync:(NSString *)group success:(void (^)(NSArray* /* WNBUploadOperation* */))success failure:(void (^)(NSError*))failure;
+ (void)requestUnconstrainedUploadsAsync:(id<NSFastEnumeration> /* WNBUploadOperation* */)operations success:(void (^)(WNBUnconstrainedTransferRequestResult*))success failure:(void (^)(NSError*))failure;
+ (void)getCurrentUploadsForTransferGroupAsync:(WNBBackgroundTransferGroup*)group success:(void (^)(NSArray* /* WNBUploadOperation* */))success failure:(void (^)(NSError*))failure;
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WNBBackgroundUploader*)makeWithCompletionGroup:(WNBBackgroundTransferCompletionGroup*)completionGroup ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WSCPasswordCredential* serverCredential;
@property (retain) WSCPasswordCredential* proxyCredential;
@property (retain) NSString * method;
@property (retain) NSString * group;
@property WNBBackgroundTransferCostPolicy costPolicy;
@property (retain) WUNTileNotification* failureTileNotification;
@property (retain) WNBBackgroundTransferGroup* transferGroup;
@property (retain) WUNToastNotification* successToastNotification;
@property (retain) WUNTileNotification* successTileNotification;
@property (retain) WUNToastNotification* failureToastNotification;
@property (readonly) WNBBackgroundTransferCompletionGroup* completionGroup;
- (WNBUploadOperation*)createUpload:(WFUri*)uri sourceFile:(RTObject<WSIStorageFile>*)sourceFile;
- (void)createUploadFromStreamAsync:(WFUri*)uri sourceStream:(RTObject<WSSIInputStream>*)sourceStream success:(void (^)(WNBUploadOperation*))success failure:(void (^)(NSError*))failure;
- (void)createUploadWithFormDataAndAutoBoundaryAsync:(WFUri*)uri parts:(id<NSFastEnumeration> /* WNBBackgroundTransferContentPart* */)parts success:(void (^)(WNBUploadOperation*))success failure:(void (^)(NSError*))failure;
- (void)createUploadWithSubTypeAsync:(WFUri*)uri parts:(id<NSFastEnumeration> /* WNBBackgroundTransferContentPart* */)parts subType:(NSString *)subType success:(void (^)(WNBUploadOperation*))success failure:(void (^)(NSError*))failure;
- (void)createUploadWithSubTypeAndBoundaryAsync:(WFUri*)uri parts:(id<NSFastEnumeration> /* WNBBackgroundTransferContentPart* */)parts subType:(NSString *)subType boundary:(NSString *)boundary success:(void (^)(WNBUploadOperation*))success failure:(void (^)(NSError*))failure;
- (void)setRequestHeader:(NSString *)headerName headerValue:(NSString *)headerValue;
@end

#endif // __WNBBackgroundUploader_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferError
#ifndef __WNBBackgroundTransferError_DEFINED__
#define __WNBBackgroundTransferError_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferError : RTObject
+ (WWWebErrorStatus)getStatus:(int)hresult;
@end

#endif // __WNBBackgroundTransferError_DEFINED__

// Windows.Networking.BackgroundTransfer.ContentPrefetcher
#ifndef __WNBContentPrefetcher_DEFINED__
#define __WNBContentPrefetcher_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBContentPrefetcher : RTObject
+ (WFUri*)indirectContentUri;
+ (void)setIndirectContentUri:(WFUri*)value;
+ (NSMutableArray* /* WFUri* */)contentUris;
+ (id /* WFDateTime* */)lastSuccessfulPrefetchTime;
@end

#endif // __WNBContentPrefetcher_DEFINED__

// Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails
#ifndef __WNBBackgroundTransferCompletionGroupTriggerDetails_DEFINED__
#define __WNBBackgroundTransferCompletionGroupTriggerDetails_DEFINED__

OBJCUWPWINDOWSNETWORKINGBACKGROUNDTRANSFEREXPORT
@interface WNBBackgroundTransferCompletionGroupTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WNBDownloadOperation* */ downloads;
@property (readonly) NSArray* /* WNBUploadOperation* */ uploads;
@end

#endif // __WNBBackgroundTransferCompletionGroupTriggerDetails_DEFINED__

