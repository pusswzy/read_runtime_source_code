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

// WindowsStoragePickers.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
#define OBJCUWPWINDOWSSTORAGEPICKERSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsStoragePickers.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSPFilePickerSelectedFilesArray, WSPFilePickerFileTypesOrderedMap, WSPFileExtensionVector, WSPFileOpenPicker, WSPFileSavePicker, WSPFolderPicker;
@protocol WSPIFileOpenPicker, WSPIFileOpenPicker2, WSPIFileOpenPickerWithOperationId, WSPIFileOpenPickerStatics, WSPIFileSavePicker, WSPIFileSavePicker2, WSPIFileSavePicker3, WSPIFolderPicker, WSPIFolderPicker2;

// Windows.Storage.Pickers.PickerViewMode
enum _WSPPickerViewMode {
    WSPPickerViewModeList = 0,
    WSPPickerViewModeThumbnail = 1,
};
typedef unsigned WSPPickerViewMode;

// Windows.Storage.Pickers.PickerLocationId
enum _WSPPickerLocationId {
    WSPPickerLocationIdDocumentsLibrary = 0,
    WSPPickerLocationIdComputerFolder = 1,
    WSPPickerLocationIdDesktop = 2,
    WSPPickerLocationIdDownloads = 3,
    WSPPickerLocationIdHomeGroup = 4,
    WSPPickerLocationIdMusicLibrary = 5,
    WSPPickerLocationIdPicturesLibrary = 6,
    WSPPickerLocationIdVideosLibrary = 7,
    WSPPickerLocationIdObjects3D = 8,
    WSPPickerLocationIdUnspecified = 9,
};
typedef unsigned WSPPickerLocationId;

#include "WindowsStorage.h"
#include "WindowsFoundationCollections.h"

#import <Foundation/Foundation.h>

// Windows.Storage.Pickers.FilePickerSelectedFilesArray
#ifndef __WSPFilePickerSelectedFilesArray_DEFINED__
#define __WSPFilePickerSelectedFilesArray_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFilePickerSelectedFilesArray : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

@end

#endif // __WSPFilePickerSelectedFilesArray_DEFINED__

// Windows.Storage.Pickers.FilePickerFileTypesOrderedMap
#ifndef __WSPFilePickerFileTypesOrderedMap_DEFINED__
#define __WSPFilePickerFileTypesOrderedMap_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFilePickerFileTypesOrderedMap : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (id)objectForKey: (id)key;
- (NSArray*)allKeys;
- (NSArray*)allKeysForObject: (id)obj;
- (NSArray*)allValues;
- (id)keyEnumerator;
- (unsigned int)count;

-(void)setObject: (id)obj forKey: (id)key;
-(void)setObject:(id)object forKeyedSubscript:(id)key;
-(void)removeObjectForKey: (id)key;
-(void)removeAllObjects;
-(void)removeObjectsForKeys:(NSArray*)keys;
-(void)addEntriesFromDictionary:(NSDictionary*)otherDict;
-(void)addEntriesFromDictionaryNoReplace:(NSDictionary*)otherDict;
-(void)setDictionary: (NSDictionary*)dict;
@end

#endif // __WSPFilePickerFileTypesOrderedMap_DEFINED__

// Windows.Storage.Pickers.FileExtensionVector
#ifndef __WSPFileExtensionVector_DEFINED__
#define __WSPFileExtensionVector_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFileExtensionVector : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

@end

#endif // __WSPFileExtensionVector_DEFINED__

// Windows.Storage.Pickers.FileOpenPicker
#ifndef __WSPFileOpenPicker_DEFINED__
#define __WSPFileOpenPicker_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFileOpenPicker : RTObject
+ (void)resumePickSingleFileAsyncWithSuccess:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WSPPickerViewMode viewMode;
@property WSPPickerLocationId suggestedStartLocation;
@property (retain) NSString * settingsIdentifier;
@property (retain) NSString * commitButtonText;
@property (readonly) NSMutableArray* /* NSString * */ fileTypeFilter;
@property (readonly) WFCValueSet* continuationData;
- (void)pickSingleFileAsyncWithSuccess:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)pickMultipleFilesAsyncWithSuccess:(void (^)(NSArray* /* WSStorageFile* */))success failure:(void (^)(NSError*))failure;
- (void)pickSingleFileAsync:(NSString *)pickerOperationId success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)pickSingleFileAndContinue;
- (void)pickMultipleFilesAndContinue;
@end

#endif // __WSPFileOpenPicker_DEFINED__

// Windows.Storage.Pickers.FileSavePicker
#ifndef __WSPFileSavePicker_DEFINED__
#define __WSPFileSavePicker_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFileSavePicker : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WSPPickerLocationId suggestedStartLocation;
@property (retain) WSStorageFile* suggestedSaveFile;
@property (retain) NSString * suggestedFileName;
@property (retain) NSString * settingsIdentifier;
@property (retain) NSString * defaultFileExtension;
@property (retain) NSString * commitButtonText;
@property (readonly) NSMutableDictionary* /* NSString *, NSMutableArray* < NSString * > */ fileTypeChoices;
@property (readonly) WFCValueSet* continuationData;
@property (retain) NSString * enterpriseId;
- (void)pickSaveFileAsyncWithSuccess:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
- (void)pickSaveFileAndContinue;
@end

#endif // __WSPFileSavePicker_DEFINED__

// Windows.Storage.Pickers.FolderPicker
#ifndef __WSPFolderPicker_DEFINED__
#define __WSPFolderPicker_DEFINED__

OBJCUWPWINDOWSSTORAGEPICKERSEXPORT
@interface WSPFolderPicker : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WSPPickerViewMode viewMode;
@property WSPPickerLocationId suggestedStartLocation;
@property (retain) NSString * settingsIdentifier;
@property (retain) NSString * commitButtonText;
@property (readonly) NSMutableArray* /* NSString * */ fileTypeFilter;
@property (readonly) WFCValueSet* continuationData;
- (void)pickSingleFolderAsyncWithSuccess:(void (^)(WSStorageFolder*))success failure:(void (^)(NSError*))failure;
- (void)pickFolderAndContinue;
@end

#endif // __WSPFolderPicker_DEFINED__

