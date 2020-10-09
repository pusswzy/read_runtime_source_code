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

// WindowsStorageBulkAccess.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
#define OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsStorageBulkAccess.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSBFileInformationFactory, WSBFileInformation, WSBFolderInformation;
@protocol WSBIStorageItemInformation, WSBIFileInformationFactoryFactory, WSBIFileInformationFactory;

#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsStorageFileProperties.h"
#include "WindowsStorage.h"
#include "WindowsStorageSearch.h"

#import <Foundation/Foundation.h>

// Windows.Storage.BulkAccess.IStorageItemInformation
#ifndef __WSBIStorageItemInformation_DEFINED__
#define __WSBIStorageItemInformation_DEFINED__

@protocol WSBIStorageItemInformation
@property (readonly) WSFBasicProperties* basicProperties;
@property (readonly) WSFDocumentProperties* documentProperties;
@property (readonly) WSFImageProperties* imageProperties;
@property (readonly) WSFMusicProperties* musicProperties;
@property (readonly) WSFStorageItemThumbnail* thumbnail;
@property (readonly) WSFVideoProperties* videoProperties;
- (EventRegistrationToken)addPropertiesUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removePropertiesUpdatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addThumbnailUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removeThumbnailUpdatedEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSBIStorageItemInformation : RTObject <WSBIStorageItemInformation>
@end

#endif // __WSBIStorageItemInformation_DEFINED__

// Windows.Storage.BulkAccess.FileInformationFactory
#ifndef __WSBFileInformationFactory_DEFINED__
#define __WSBFileInformationFactory_DEFINED__

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSBFileInformationFactory : RTObject
+ (WSBFileInformationFactory*)makeWithMode:(RTObject<WSSIStorageQueryResultBase>*)queryResult mode:(WSFThumbnailMode)mode ACTIVATOR;
+ (WSBFileInformationFactory*)makeWithModeAndSize:(RTObject<WSSIStorageQueryResultBase>*)queryResult mode:(WSFThumbnailMode)mode requestedThumbnailSize:(unsigned int)requestedThumbnailSize ACTIVATOR;
+ (WSBFileInformationFactory*)makeWithModeAndSizeAndOptions:(RTObject<WSSIStorageQueryResultBase>*)queryResult mode:(WSFThumbnailMode)mode requestedThumbnailSize:(unsigned int)requestedThumbnailSize thumbnailOptions:(WSFThumbnailOptions)thumbnailOptions ACTIVATOR;
+ (WSBFileInformationFactory*)makeWithModeAndSizeAndOptionsAndFlags:(RTObject<WSSIStorageQueryResultBase>*)queryResult mode:(WSFThumbnailMode)mode requestedThumbnailSize:(unsigned int)requestedThumbnailSize thumbnailOptions:(WSFThumbnailOptions)thumbnailOptions delayLoad:(BOOL)delayLoad ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)getItemsAsync:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* RTObject<WSBIStorageItemInformation>* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsyncDefaultStartAndCountWithSuccess:(void (^)(NSArray* /* RTObject<WSBIStorageItemInformation>* */))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsync:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSBFileInformation* */))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsyncDefaultStartAndCountWithSuccess:(void (^)(NSArray* /* WSBFileInformation* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsync:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSBFolderInformation* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsyncDefaultStartAndCountWithSuccess:(void (^)(NSArray* /* WSBFolderInformation* */))success failure:(void (^)(NSError*))failure;
- (RTObject*)getVirtualizedItemsVector;
- (RTObject*)getVirtualizedFilesVector;
- (RTObject*)getVirtualizedFoldersVector;
@end

#endif // __WSBFileInformationFactory_DEFINED__

// Windows.Storage.IStorageItem
#ifndef __WSIStorageItem_DEFINED__
#define __WSIStorageItem_DEFINED__

@protocol WSIStorageItem
@property (readonly) WSFileAttributes attributes;
@property (readonly) WFDateTime* dateCreated;
@property (readonly) NSString * name;
@property (readonly) NSString * path;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageItem : RTObject <WSIStorageItem>
@end

#endif // __WSIStorageItem_DEFINED__

// Windows.Storage.Streams.IRandomAccessStreamReference
#ifndef __WSSIRandomAccessStreamReference_DEFINED__
#define __WSSIRandomAccessStreamReference_DEFINED__

@protocol WSSIRandomAccessStreamReference
- (void)openReadAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamWithContentType>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSSIRandomAccessStreamReference : RTObject <WSSIRandomAccessStreamReference>
@end

#endif // __WSSIRandomAccessStreamReference_DEFINED__

// Windows.Storage.Streams.IInputStreamReference
#ifndef __WSSIInputStreamReference_DEFINED__
#define __WSSIInputStreamReference_DEFINED__

@protocol WSSIInputStreamReference
- (void)openSequentialReadAsyncWithSuccess:(void (^)(RTObject<WSSIInputStream>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSSIInputStreamReference : RTObject <WSSIInputStreamReference>
@end

#endif // __WSSIInputStreamReference_DEFINED__

// Windows.Storage.IStorageFile
#ifndef __WSIStorageFile_DEFINED__
#define __WSIStorageFile_DEFINED__

@protocol WSIStorageFile <WSIStorageItem, WSSIRandomAccessStreamReference, WSSIInputStreamReference>
@property (readonly) NSString * contentType;
@property (readonly) NSString * fileType;
- (void)openAsync:(WSFileAccessMode)accessMode success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
- (void)openTransactedWriteAsyncWithSuccess:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
- (void)copyOverloadDefaultNameAndOptions:(RTObject<WSIStorageFolder>*)destinationFolder success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)copyOverloadDefaultOptions:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)copyOverload:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName option:(WSNameCollisionOption)option success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)copyAndReplaceAsync:(RTObject<WSIStorageFile>*)fileToReplace __attribute__ ((ns_returns_not_retained));
- (RTObject<WFIAsyncAction>*)moveOverloadDefaultNameAndOptions:(RTObject<WSIStorageFolder>*)destinationFolder;
- (RTObject<WFIAsyncAction>*)moveOverloadDefaultOptions:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName;
- (RTObject<WFIAsyncAction>*)moveOverload:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)moveAndReplaceAsync:(RTObject<WSIStorageFile>*)fileToReplace;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
- (void)openReadAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamWithContentType>*))success failure:(void (^)(NSError*))failure;
- (void)openSequentialReadAsyncWithSuccess:(void (^)(RTObject<WSSIInputStream>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageFile : RTObject <WSIStorageFile>
@end

#endif // __WSIStorageFile_DEFINED__

// Windows.Storage.IStorageItemProperties
#ifndef __WSIStorageItemProperties_DEFINED__
#define __WSIStorageItemProperties_DEFINED__

@protocol WSIStorageItemProperties
@property (readonly) NSString * displayName;
@property (readonly) NSString * displayType;
@property (readonly) NSString * folderRelativeId;
@property (readonly) WSFStorageItemContentProperties* properties;
- (void)getThumbnailAsyncOverloadDefaultSizeDefaultOptions:(WSFThumbnailMode)mode success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncOverloadDefaultOptions:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsync:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize options:(WSFThumbnailOptions)options success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageItemProperties : RTObject <WSIStorageItemProperties>
@end

#endif // __WSIStorageItemProperties_DEFINED__

// Windows.Storage.IStorageItem2
#ifndef __WSIStorageItem2_DEFINED__
#define __WSIStorageItem2_DEFINED__

@protocol WSIStorageItem2 <WSIStorageItem>
- (void)getParentAsyncWithSuccess:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (BOOL)IsEqual:(RTObject<WSIStorageItem>*)item;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageItem2 : RTObject <WSIStorageItem2>
@end

#endif // __WSIStorageItem2_DEFINED__

// Windows.Storage.IStorageItemPropertiesWithProvider
#ifndef __WSIStorageItemPropertiesWithProvider_DEFINED__
#define __WSIStorageItemPropertiesWithProvider_DEFINED__

@protocol WSIStorageItemPropertiesWithProvider <WSIStorageItemProperties>
@property (readonly) WSStorageProvider* provider;
- (void)getThumbnailAsyncOverloadDefaultSizeDefaultOptions:(WSFThumbnailMode)mode success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncOverloadDefaultOptions:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsync:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize options:(WSFThumbnailOptions)options success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageItemPropertiesWithProvider : RTObject <WSIStorageItemPropertiesWithProvider>
@end

#endif // __WSIStorageItemPropertiesWithProvider_DEFINED__

// Windows.Storage.IStorageFilePropertiesWithAvailability
#ifndef __WSIStorageFilePropertiesWithAvailability_DEFINED__
#define __WSIStorageFilePropertiesWithAvailability_DEFINED__

@protocol WSIStorageFilePropertiesWithAvailability
@property (readonly) BOOL isAvailable;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageFilePropertiesWithAvailability : RTObject <WSIStorageFilePropertiesWithAvailability>
@end

#endif // __WSIStorageFilePropertiesWithAvailability_DEFINED__

// Windows.Storage.IStorageFile2
#ifndef __WSIStorageFile2_DEFINED__
#define __WSIStorageFile2_DEFINED__

@protocol WSIStorageFile2
- (void)openWithOptionsAsync:(WSFileAccessMode)accessMode options:(WSStorageOpenOptions)options success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
- (void)openTransactedWriteWithOptionsAsync:(WSStorageOpenOptions)options success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageFile2 : RTObject <WSIStorageFile2>
@end

#endif // __WSIStorageFile2_DEFINED__

// Windows.Storage.BulkAccess.FileInformation
#ifndef __WSBFileInformation_DEFINED__
#define __WSBFileInformation_DEFINED__

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSBFileInformation : RTObject <WSBIStorageItemInformation, WSIStorageFile, WSSIInputStreamReference, WSSIRandomAccessStreamReference, WSIStorageItem, WSIStorageItemProperties, WSIStorageItem2, WSIStorageItemPropertiesWithProvider, WSIStorageFilePropertiesWithAvailability, WSIStorageFile2>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSFBasicProperties* basicProperties;
@property (readonly) WSFDocumentProperties* documentProperties;
@property (readonly) WSFImageProperties* imageProperties;
@property (readonly) WSFMusicProperties* musicProperties;
@property (readonly) WSFStorageItemThumbnail* thumbnail;
@property (readonly) WSFVideoProperties* videoProperties;
@property (readonly) NSString * contentType;
@property (readonly) NSString * fileType;
@property (readonly) BOOL isAvailable;
@property (readonly) WSFileAttributes attributes;
@property (readonly) NSString * name;
@property (readonly) NSString * path;
@property (readonly) WFDateTime* dateCreated;
@property (readonly) NSString * displayName;
@property (readonly) NSString * displayType;
@property (readonly) NSString * folderRelativeId;
@property (readonly) WSFStorageItemContentProperties* properties;
@property (readonly) WSStorageProvider* provider;
- (EventRegistrationToken)addPropertiesUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removePropertiesUpdatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addThumbnailUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removeThumbnailUpdatedEvent:(EventRegistrationToken)tok;
- (void)openAsync:(WSFileAccessMode)accessMode success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
- (void)openTransactedWriteAsyncWithSuccess:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
- (void)copyOverloadDefaultNameAndOptions:(RTObject<WSIStorageFolder>*)destinationFolder success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)copyOverloadDefaultOptions:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)copyOverload:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName option:(WSNameCollisionOption)option success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)copyAndReplaceAsync:(RTObject<WSIStorageFile>*)fileToReplace __attribute__ ((ns_returns_not_retained));
- (RTObject<WFIAsyncAction>*)moveOverloadDefaultNameAndOptions:(RTObject<WSIStorageFolder>*)destinationFolder;
- (RTObject<WFIAsyncAction>*)moveOverloadDefaultOptions:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName;
- (RTObject<WFIAsyncAction>*)moveOverload:(RTObject<WSIStorageFolder>*)destinationFolder desiredNewName:(NSString *)desiredNewName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)moveAndReplaceAsync:(RTObject<WSIStorageFile>*)fileToReplace;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
- (void)openReadAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamWithContentType>*))success failure:(void (^)(NSError*))failure;
- (void)openSequentialReadAsyncWithSuccess:(void (^)(RTObject<WSSIInputStream>*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncOverloadDefaultSizeDefaultOptions:(WSFThumbnailMode)mode success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncOverloadDefaultOptions:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsync:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize options:(WSFThumbnailOptions)options success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getParentAsyncWithSuccess:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (BOOL)IsEqual:(RTObject<WSIStorageItem>*)item;
- (void)openWithOptionsAsync:(WSFileAccessMode)accessMode options:(WSStorageOpenOptions)options success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
- (void)openTransactedWriteWithOptionsAsync:(WSStorageOpenOptions)options success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSBFileInformation_DEFINED__

// Windows.Storage.IStorageFolder
#ifndef __WSIStorageFolder_DEFINED__
#define __WSIStorageFolder_DEFINED__

@protocol WSIStorageFolder <WSIStorageItem>
- (void)createFileAsyncOverloadDefaultOptions:(NSString *)desiredName success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)createFileAsync:(NSString *)desiredName options:(WSCreationCollisionOption)options success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)createFolderAsyncOverloadDefaultOptions:(NSString *)desiredName success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)createFolderAsync:(NSString *)desiredName options:(WSCreationCollisionOption)options success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)getFileAsync:(NSString *)name success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)getFolderAsync:(NSString *)name success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)getItemAsync:(NSString *)name success:(void (^)(RTObject<WSIStorageItem>*))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsyncOverloadDefaultOptionsStartAndCountWithSuccess:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsyncOverloadDefaultOptionsStartAndCountWithSuccess:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsyncOverloadDefaultStartAndCountWithSuccess:(void (^)(NSArray* /* RTObject<WSIStorageItem>* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageFolder : RTObject <WSIStorageFolder>
@end

#endif // __WSIStorageFolder_DEFINED__

// Windows.Storage.Search.IStorageFolderQueryOperations
#ifndef __WSSIStorageFolderQueryOperations_DEFINED__
#define __WSSIStorageFolderQueryOperations_DEFINED__

@protocol WSSIStorageFolderQueryOperations
- (void)getIndexedStateAsyncWithSuccess:(void (^)(WSSIndexedState))success failure:(void (^)(NSError*))failure;
- (WSSStorageFileQueryResult*)createFileQueryOverloadDefault;
- (WSSStorageFileQueryResult*)createFileQuery:(WSSCommonFileQuery)query;
- (WSSStorageFileQueryResult*)createFileQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (WSSStorageFolderQueryResult*)createFolderQueryOverloadDefault;
- (WSSStorageFolderQueryResult*)createFolderQuery:(WSSCommonFolderQuery)query;
- (WSSStorageFolderQueryResult*)createFolderQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (WSSStorageItemQueryResult*)createItemQuery;
- (WSSStorageItemQueryResult*)createItemQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (void)getFilesAsync:(WSSCommonFileQuery)query startIndex:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsyncOverloadDefaultStartAndCount:(WSSCommonFileQuery)query success:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsync:(WSSCommonFolderQuery)query startIndex:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsyncOverloadDefaultStartAndCount:(WSSCommonFolderQuery)query success:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsync:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* RTObject<WSIStorageItem>* */))success failure:(void (^)(NSError*))failure;
- (BOOL)areQueryOptionsSupported:(WSSQueryOptions*)queryOptions;
- (BOOL)isCommonFolderQuerySupported:(WSSCommonFolderQuery)query;
- (BOOL)isCommonFileQuerySupported:(WSSCommonFileQuery)query;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSSIStorageFolderQueryOperations : RTObject <WSSIStorageFolderQueryOperations>
@end

#endif // __WSSIStorageFolderQueryOperations_DEFINED__

// Windows.Storage.IStorageFolder2
#ifndef __WSIStorageFolder2_DEFINED__
#define __WSIStorageFolder2_DEFINED__

@protocol WSIStorageFolder2
- (void)tryGetItemAsync:(NSString *)name success:(void (^)(RTObject<WSIStorageItem>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSIStorageFolder2 : RTObject <WSIStorageFolder2>
@end

#endif // __WSIStorageFolder2_DEFINED__

// Windows.Storage.BulkAccess.FolderInformation
#ifndef __WSBFolderInformation_DEFINED__
#define __WSBFolderInformation_DEFINED__

OBJCUWPWINDOWSSTORAGEBULKACCESSEXPORT
@interface WSBFolderInformation : RTObject <WSBIStorageItemInformation, WSIStorageFolder, WSIStorageItem, WSIStorageItemProperties, WSSIStorageFolderQueryOperations, WSIStorageItem2, WSIStorageFolder2, WSIStorageItemPropertiesWithProvider>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSFBasicProperties* basicProperties;
@property (readonly) WSFDocumentProperties* documentProperties;
@property (readonly) WSFImageProperties* imageProperties;
@property (readonly) WSFMusicProperties* musicProperties;
@property (readonly) WSFStorageItemThumbnail* thumbnail;
@property (readonly) WSFVideoProperties* videoProperties;
@property (readonly) WSFileAttributes attributes;
@property (readonly) WFDateTime* dateCreated;
@property (readonly) NSString * name;
@property (readonly) NSString * path;
@property (readonly) NSString * displayName;
@property (readonly) NSString * displayType;
@property (readonly) NSString * folderRelativeId;
@property (readonly) WSFStorageItemContentProperties* properties;
@property (readonly) WSStorageProvider* provider;
- (EventRegistrationToken)addPropertiesUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removePropertiesUpdatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addThumbnailUpdatedEvent:(void(^)(RTObject<WSBIStorageItemInformation>*, RTObject*))del;
- (void)removeThumbnailUpdatedEvent:(EventRegistrationToken)tok;
- (void)createFileAsyncOverloadDefaultOptions:(NSString *)desiredName success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)createFileAsync:(NSString *)desiredName options:(WSCreationCollisionOption)options success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)createFolderAsyncOverloadDefaultOptions:(NSString *)desiredName success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)createFolderAsync:(NSString *)desiredName options:(WSCreationCollisionOption)options success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)getFileAsync:(NSString *)name success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)getFolderAsync:(NSString *)name success:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)getItemAsync:(NSString *)name success:(void (^)(RTObject<WSIStorageItem>*))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsyncOverloadDefaultOptionsStartAndCountWithSuccess:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsyncOverloadDefaultOptionsStartAndCountWithSuccess:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsyncOverloadDefaultStartAndCountWithSuccess:(void (^)(NSArray* /* RTObject<WSIStorageItem>* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)renameAsyncOverloadDefaultOptions:(NSString *)desiredName;
- (RTObject<WFIAsyncAction>*)renameAsync:(NSString *)desiredName option:(WSNameCollisionOption)option;
- (RTObject<WFIAsyncAction>*)deleteAsyncOverloadDefaultOptions;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WSStorageDeleteOption)option;
- (void)getBasicPropertiesAsyncWithSuccess:(void (^)(WSFBasicProperties*))success failure:(void (^)(NSError*))failure;
- (BOOL)isOfType:(WSStorageItemTypes)type;
- (void)getThumbnailAsyncOverloadDefaultSizeDefaultOptions:(WSFThumbnailMode)mode success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncOverloadDefaultOptions:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsync:(WSFThumbnailMode)mode requestedSize:(unsigned int)requestedSize options:(WSFThumbnailOptions)options success:(void (^)(WSFStorageItemThumbnail*))success failure:(void (^)(NSError*))failure;
- (void)getIndexedStateAsyncWithSuccess:(void (^)(WSSIndexedState))success failure:(void (^)(NSError*))failure;
- (WSSStorageFileQueryResult*)createFileQueryOverloadDefault;
- (WSSStorageFileQueryResult*)createFileQuery:(WSSCommonFileQuery)query;
- (WSSStorageFileQueryResult*)createFileQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (WSSStorageFolderQueryResult*)createFolderQueryOverloadDefault;
- (WSSStorageFolderQueryResult*)createFolderQuery:(WSSCommonFolderQuery)query;
- (WSSStorageFolderQueryResult*)createFolderQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (WSSStorageItemQueryResult*)createItemQuery;
- (WSSStorageItemQueryResult*)createItemQueryWithOptions:(WSSQueryOptions*)queryOptions;
- (void)getFilesAsync:(WSSCommonFileQuery)query startIndex:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFilesAsyncOverloadDefaultStartAndCount:(WSSCommonFileQuery)query success:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsync:(WSSCommonFolderQuery)query startIndex:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getFoldersAsyncOverloadDefaultStartAndCount:(WSSCommonFolderQuery)query success:(void (^)(NSArray* /* WSStorageFolder* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsync:(unsigned int)startIndex maxItemsToRetrieve:(unsigned int)maxItemsToRetrieve success:(void (^)(NSArray* /* RTObject<WSIStorageItem>* */))success failure:(void (^)(NSError*))failure;
- (BOOL)areQueryOptionsSupported:(WSSQueryOptions*)queryOptions;
- (BOOL)isCommonFolderQuerySupported:(WSSCommonFolderQuery)query;
- (BOOL)isCommonFileQuerySupported:(WSSCommonFileQuery)query;
- (void)getParentAsyncWithSuccess:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (BOOL)IsEqual:(RTObject<WSIStorageItem>*)item;
- (void)tryGetItemAsync:(NSString *)name success:(void (^)(RTObject<WSIStorageItem>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSBFolderInformation_DEFINED__

