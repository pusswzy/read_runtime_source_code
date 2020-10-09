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

// WindowsMediaImport.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIAIMPORTEXPORT
#define OBJCUWPWINDOWSMEDIAIMPORTEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaImport.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMIPhotoImportSource, WMIPhotoImportOperation, WMIPhotoImportManager, WMIPhotoImportSession, WMIPhotoImportFindItemsResult, WMIPhotoImportImportItemsResult, WMIPhotoImportDeleteImportedItemsFromSourceResult, WMIPhotoImportStorageMedium, WMIPhotoImportSidecar, WMIPhotoImportVideoSegment, WMIPhotoImportItem, WMIPhotoImportSelectionChangedEventArgs, WMIPhotoImportItemImportedEventArgs;
@class WMIPhotoImportProgress;
@protocol WMIIPhotoImportManagerStatics, WMIIPhotoImportOperation, WMIIPhotoImportStorageMedium, WMIIPhotoImportSourceStatics, WMIIPhotoImportSource, WMIIPhotoImportSession, WMIIPhotoImportSession2, WMIIPhotoImportItem, WMIIPhotoImportFindItemsResult, WMIIPhotoImportFindItemsResult2, WMIIPhotoImportImportItemsResult, WMIIPhotoImportDeleteImportedItemsFromSourceResult, WMIIPhotoImportSidecar, WMIIPhotoImportVideoSegment, WMIIPhotoImportItemImportedEventArgs, WMIIPhotoImportSelectionChangedEventArgs;

// Windows.Media.Import.PhotoImportStage
enum _WMIPhotoImportStage {
    WMIPhotoImportStageNotStarted = 0,
    WMIPhotoImportStageFindingItems = 1,
    WMIPhotoImportStageImportingItems = 2,
    WMIPhotoImportStageDeletingImportedItemsFromSource = 3,
};
typedef unsigned WMIPhotoImportStage;

// Windows.Media.Import.PhotoImportAccessMode
enum _WMIPhotoImportAccessMode {
    WMIPhotoImportAccessModeReadWrite = 0,
    WMIPhotoImportAccessModeReadOnly = 1,
    WMIPhotoImportAccessModeReadAndDelete = 2,
};
typedef unsigned WMIPhotoImportAccessMode;

// Windows.Media.Import.PhotoImportImportMode
enum _WMIPhotoImportImportMode {
    WMIPhotoImportImportModeImportEverything = 0,
    WMIPhotoImportImportModeIgnoreSidecars = 1,
    WMIPhotoImportImportModeIgnoreSiblings = 2,
    WMIPhotoImportImportModeIgnoreSidecarsAndSiblings = 3,
};
typedef unsigned WMIPhotoImportImportMode;

// Windows.Media.Import.PhotoImportSourceType
enum _WMIPhotoImportSourceType {
    WMIPhotoImportSourceTypeGeneric = 0,
    WMIPhotoImportSourceTypeCamera = 1,
    WMIPhotoImportSourceTypeMediaPlayer = 2,
    WMIPhotoImportSourceTypePhone = 3,
    WMIPhotoImportSourceTypeVideo = 4,
    WMIPhotoImportSourceTypePersonalInfoManager = 5,
    WMIPhotoImportSourceTypeAudioRecorder = 6,
};
typedef unsigned WMIPhotoImportSourceType;

// Windows.Media.Import.PhotoImportContentType
enum _WMIPhotoImportContentType {
    WMIPhotoImportContentTypeUnknown = 0,
    WMIPhotoImportContentTypeImage = 1,
    WMIPhotoImportContentTypeVideo = 2,
};
typedef unsigned WMIPhotoImportContentType;

// Windows.Media.Import.PhotoImportPowerSource
enum _WMIPhotoImportPowerSource {
    WMIPhotoImportPowerSourceUnknown = 0,
    WMIPhotoImportPowerSourceBattery = 1,
    WMIPhotoImportPowerSourceExternal = 2,
};
typedef unsigned WMIPhotoImportPowerSource;

// Windows.Media.Import.PhotoImportStorageMediumType
enum _WMIPhotoImportStorageMediumType {
    WMIPhotoImportStorageMediumTypeUndefined = 0,
    WMIPhotoImportStorageMediumTypeFixed = 1,
    WMIPhotoImportStorageMediumTypeRemovable = 2,
};
typedef unsigned WMIPhotoImportStorageMediumType;

// Windows.Media.Import.PhotoImportContentTypeFilter
enum _WMIPhotoImportContentTypeFilter {
    WMIPhotoImportContentTypeFilterOnlyImages = 0,
    WMIPhotoImportContentTypeFilterOnlyVideos = 1,
    WMIPhotoImportContentTypeFilterImagesAndVideos = 2,
};
typedef unsigned WMIPhotoImportContentTypeFilter;

// Windows.Media.Import.PhotoImportItemSelectionMode
enum _WMIPhotoImportItemSelectionMode {
    WMIPhotoImportItemSelectionModeSelectAll = 0,
    WMIPhotoImportItemSelectionModeSelectNone = 1,
    WMIPhotoImportItemSelectionModeSelectNew = 2,
};
typedef unsigned WMIPhotoImportItemSelectionMode;

// Windows.Media.Import.PhotoImportSubfolderDateFormat
enum _WMIPhotoImportSubfolderDateFormat {
    WMIPhotoImportSubfolderDateFormatYear = 0,
    WMIPhotoImportSubfolderDateFormatYearMonth = 1,
    WMIPhotoImportSubfolderDateFormatYearMonthDay = 2,
};
typedef unsigned WMIPhotoImportSubfolderDateFormat;

// Windows.Media.Import.PhotoImportConnectionTransport
enum _WMIPhotoImportConnectionTransport {
    WMIPhotoImportConnectionTransportUnknown = 0,
    WMIPhotoImportConnectionTransportUsb = 1,
    WMIPhotoImportConnectionTransportIP = 2,
    WMIPhotoImportConnectionTransportBluetooth = 3,
};
typedef unsigned WMIPhotoImportConnectionTransport;

// Windows.Media.Import.PhotoImportSubfolderCreationMode
enum _WMIPhotoImportSubfolderCreationMode {
    WMIPhotoImportSubfolderCreationModeDoNotCreateSubfolders = 0,
    WMIPhotoImportSubfolderCreationModeCreateSubfoldersFromFileDate = 1,
    WMIPhotoImportSubfolderCreationModeCreateSubfoldersFromExifDate = 2,
    WMIPhotoImportSubfolderCreationModeKeepOriginalFolderStructure = 3,
};
typedef unsigned WMIPhotoImportSubfolderCreationMode;

#include "WindowsStorage.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// [struct] Windows.Media.Import.PhotoImportProgress
OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportProgress : NSObject
+ (instancetype)new;
@property unsigned int itemsImported;
@property unsigned int totalItemsToImport;
@property uint64_t bytesImported;
@property uint64_t totalBytesToImport;
@property double importProgress;
@end

// Windows.Media.Import.PhotoImportSource
#ifndef __WMIPhotoImportSource_DEFINED__
#define __WMIPhotoImportSource_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportSource : RTObject
+ (void)fromIdAsync:(NSString *)sourceId success:(void (^)(WMIPhotoImportSource*))success failure:(void (^)(NSError*))failure;
+ (void)fromFolderAsync:(RTObject<WSIStorageFolder>*)sourceRootFolder success:(void (^)(WMIPhotoImportSource*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* unsigned int */ batteryLevelPercent;
@property (readonly) NSString * connectionProtocol;
@property (readonly) WMIPhotoImportConnectionTransport connectionTransport;
@property (readonly) id /* WFDateTime* */ dateTime;
@property (readonly) NSString * Description;
@property (readonly) NSString * displayName;
@property (readonly) NSString * id;
@property (readonly) id /* BOOL */ isLocked;
@property (readonly) BOOL isMassStorage;
@property (readonly) NSString * manufacturer;
@property (readonly) NSString * model;
@property (readonly) WMIPhotoImportPowerSource powerSource;
@property (readonly) NSString * serialNumber;
@property (readonly) NSArray* /* WMIPhotoImportStorageMedium* */ storageMedia;
@property (readonly) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
@property (readonly) WMIPhotoImportSourceType type;
- (WMIPhotoImportSession*)createImportSession;
@end

#endif // __WMIPhotoImportSource_DEFINED__

// Windows.Media.Import.PhotoImportOperation
#ifndef __WMIPhotoImportOperation_DEFINED__
#define __WMIPhotoImportOperation_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportOperation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
// Failed to generate property ContinueDeletingImportedItemsFromSourceAsync (Cannot marshal Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult,Double>)
// Failed to generate property ContinueFindingItemsAsync (Cannot marshal Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportFindItemsResult,UInt32>)
// Failed to generate property ContinueImportingItemsAsync (Cannot marshal Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Import.PhotoImportImportItemsResult,Windows.Media.Import.PhotoImportProgress>)
@property (readonly) WMIPhotoImportSession* session;
@property (readonly) WMIPhotoImportStage stage;
@end

#endif // __WMIPhotoImportOperation_DEFINED__

// Windows.Media.Import.PhotoImportManager
#ifndef __WMIPhotoImportManager_DEFINED__
#define __WMIPhotoImportManager_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportManager : RTObject
+ (void)isSupportedAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)findAllSourcesAsyncWithSuccess:(void (^)(NSArray* /* WMIPhotoImportSource* */))success failure:(void (^)(NSError*))failure;
+ (NSArray* /* WMIPhotoImportOperation* */)getPendingOperations;
@end

#endif // __WMIPhotoImportManager_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Media.Import.PhotoImportSession
#ifndef __WMIPhotoImportSession_DEFINED__
#define __WMIPhotoImportSession_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportSession : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WMIPhotoImportSubfolderCreationMode subfolderCreationMode;
@property (retain) RTObject<WSIStorageFolder>* destinationFolder;
@property (retain) NSString * destinationFileNamePrefix;
@property BOOL appendSessionDateToDestinationFolder;
@property (readonly) WFGUID* sessionId;
@property (readonly) WMIPhotoImportSource* source;
@property WMIPhotoImportSubfolderDateFormat subfolderDateFormat;
@property BOOL rememberDeselectedItems;
- (void)findItemsAsync:(WMIPhotoImportContentTypeFilter)contentTypeFilter itemSelectionMode:(WMIPhotoImportItemSelectionMode)itemSelectionMode success:(void (^)(WMIPhotoImportFindItemsResult*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WMIPhotoImportSession_DEFINED__

// Windows.Media.Import.PhotoImportFindItemsResult
#ifndef __WMIPhotoImportFindItemsResult_DEFINED__
#define __WMIPhotoImportFindItemsResult_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportFindItemsResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WMIPhotoImportItem* */ foundItems;
@property (readonly) BOOL hasSucceeded;
@property (readonly) WMIPhotoImportImportMode importMode;
@property (readonly) unsigned int photosCount;
@property (readonly) uint64_t photosSizeInBytes;
@property (readonly) unsigned int selectedPhotosCount;
@property (readonly) uint64_t selectedPhotosSizeInBytes;
@property (readonly) unsigned int selectedSiblingsCount;
@property (readonly) uint64_t selectedSiblingsSizeInBytes;
@property (readonly) unsigned int selectedSidecarsCount;
@property (readonly) uint64_t selectedSidecarsSizeInBytes;
@property (readonly) unsigned int selectedTotalCount;
@property (readonly) uint64_t selectedTotalSizeInBytes;
@property (readonly) unsigned int selectedVideosCount;
@property (readonly) uint64_t selectedVideosSizeInBytes;
@property (readonly) WMIPhotoImportSession* session;
@property (readonly) unsigned int siblingsCount;
@property (readonly) uint64_t siblingsSizeInBytes;
@property (readonly) unsigned int sidecarsCount;
@property (readonly) uint64_t sidecarsSizeInBytes;
@property (readonly) unsigned int totalCount;
@property (readonly) uint64_t totalSizeInBytes;
@property (readonly) unsigned int videosCount;
@property (readonly) uint64_t videosSizeInBytes;
- (EventRegistrationToken)addItemImportedEvent:(void(^)(WMIPhotoImportFindItemsResult*, WMIPhotoImportItemImportedEventArgs*))del;
- (void)removeItemImportedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSelectionChangedEvent:(void(^)(WMIPhotoImportFindItemsResult*, WMIPhotoImportSelectionChangedEventArgs*))del;
- (void)removeSelectionChangedEvent:(EventRegistrationToken)tok;
- (void)selectAll;
- (void)selectNone;
- (RTObject<WFIAsyncAction>*)selectNewAsync;
- (void)setImportMode:(WMIPhotoImportImportMode)value;
- (void)importItemsAsyncWithSuccess:(void (^)(WMIPhotoImportImportItemsResult*))success progress:(void (^)(WMIPhotoImportProgress*))progress failure:(void (^)(NSError*))failure;
- (void)addItemsInDateRangeToSelection:(WFDateTime*)rangeStart rangeLength:(WFTimeSpan*)rangeLength;
@end

#endif // __WMIPhotoImportFindItemsResult_DEFINED__

// Windows.Media.Import.PhotoImportImportItemsResult
#ifndef __WMIPhotoImportImportItemsResult_DEFINED__
#define __WMIPhotoImportImportItemsResult_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportImportItemsResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL hasSucceeded;
@property (readonly) NSArray* /* WMIPhotoImportItem* */ importedItems;
@property (readonly) unsigned int photosCount;
@property (readonly) uint64_t photosSizeInBytes;
@property (readonly) WMIPhotoImportSession* session;
@property (readonly) unsigned int siblingsCount;
@property (readonly) uint64_t siblingsSizeInBytes;
@property (readonly) unsigned int sidecarsCount;
@property (readonly) uint64_t sidecarsSizeInBytes;
@property (readonly) unsigned int totalCount;
@property (readonly) uint64_t totalSizeInBytes;
@property (readonly) unsigned int videosCount;
@property (readonly) uint64_t videosSizeInBytes;
- (void)deleteImportedItemsFromSourceAsyncWithSuccess:(void (^)(WMIPhotoImportDeleteImportedItemsFromSourceResult*))success progress:(void (^)(double))progress failure:(void (^)(NSError*))failure;
@end

#endif // __WMIPhotoImportImportItemsResult_DEFINED__

// Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult
#ifndef __WMIPhotoImportDeleteImportedItemsFromSourceResult_DEFINED__
#define __WMIPhotoImportDeleteImportedItemsFromSourceResult_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportDeleteImportedItemsFromSourceResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WMIPhotoImportItem* */ deletedItems;
@property (readonly) BOOL hasSucceeded;
@property (readonly) unsigned int photosCount;
@property (readonly) uint64_t photosSizeInBytes;
@property (readonly) WMIPhotoImportSession* session;
@property (readonly) unsigned int siblingsCount;
@property (readonly) uint64_t siblingsSizeInBytes;
@property (readonly) unsigned int sidecarsCount;
@property (readonly) uint64_t sidecarsSizeInBytes;
@property (readonly) unsigned int totalCount;
@property (readonly) uint64_t totalSizeInBytes;
@property (readonly) unsigned int videosCount;
@property (readonly) uint64_t videosSizeInBytes;
@end

#endif // __WMIPhotoImportDeleteImportedItemsFromSourceResult_DEFINED__

// Windows.Media.Import.PhotoImportStorageMedium
#ifndef __WMIPhotoImportStorageMedium_DEFINED__
#define __WMIPhotoImportStorageMedium_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportStorageMedium : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) uint64_t availableSpaceInBytes;
@property (readonly) uint64_t capacityInBytes;
@property (readonly) NSString * Description;
@property (readonly) NSString * name;
@property (readonly) NSString * serialNumber;
@property (readonly) WMIPhotoImportStorageMediumType storageMediumType;
@property (readonly) WMIPhotoImportAccessMode supportedAccessMode;
- (void)refresh;
@end

#endif // __WMIPhotoImportStorageMedium_DEFINED__

// Windows.Media.Import.PhotoImportSidecar
#ifndef __WMIPhotoImportSidecar_DEFINED__
#define __WMIPhotoImportSidecar_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportSidecar : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* date;
@property (readonly) NSString * name;
@property (readonly) uint64_t sizeInBytes;
@end

#endif // __WMIPhotoImportSidecar_DEFINED__

// Windows.Media.Import.PhotoImportVideoSegment
#ifndef __WMIPhotoImportVideoSegment_DEFINED__
#define __WMIPhotoImportVideoSegment_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportVideoSegment : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* date;
@property (readonly) NSString * name;
@property (readonly) WMIPhotoImportSidecar* sibling;
@property (readonly) NSArray* /* WMIPhotoImportSidecar* */ sidecars;
@property (readonly) uint64_t sizeInBytes;
@end

#endif // __WMIPhotoImportVideoSegment_DEFINED__

// Windows.Media.Import.PhotoImportItem
#ifndef __WMIPhotoImportItem_DEFINED__
#define __WMIPhotoImportItem_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportItem : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isSelected;
@property (readonly) WMIPhotoImportContentType contentType;
@property (readonly) WFDateTime* date;
@property (readonly) NSArray* /* NSString * */ deletedFileNames;
@property (readonly) NSArray* /* NSString * */ importedFileNames;
@property (readonly) uint64_t itemKey;
@property (readonly) NSString * name;
@property (readonly) WMIPhotoImportSidecar* sibling;
@property (readonly) NSArray* /* WMIPhotoImportSidecar* */ sidecars;
@property (readonly) uint64_t sizeInBytes;
@property (readonly) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
@property (readonly) NSArray* /* WMIPhotoImportVideoSegment* */ videoSegments;
@end

#endif // __WMIPhotoImportItem_DEFINED__

// Windows.Media.Import.PhotoImportSelectionChangedEventArgs
#ifndef __WMIPhotoImportSelectionChangedEventArgs_DEFINED__
#define __WMIPhotoImportSelectionChangedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportSelectionChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isSelectionEmpty;
@end

#endif // __WMIPhotoImportSelectionChangedEventArgs_DEFINED__

// Windows.Media.Import.PhotoImportItemImportedEventArgs
#ifndef __WMIPhotoImportItemImportedEventArgs_DEFINED__
#define __WMIPhotoImportItemImportedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIAIMPORTEXPORT
@interface WMIPhotoImportItemImportedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMIPhotoImportItem* importedItem;
@end

#endif // __WMIPhotoImportItemImportedEventArgs_DEFINED__

