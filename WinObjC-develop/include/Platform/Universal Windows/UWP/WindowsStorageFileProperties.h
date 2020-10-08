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

// WindowsStorageFileProperties.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSTORAGEEXPORT
#define OBJCUWPWINDOWSSTORAGEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsStorage.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSFGeotagHelper, WSFStorageItemThumbnail, WSFMusicProperties, WSFVideoProperties, WSFImageProperties, WSFDocumentProperties, WSFStorageItemContentProperties, WSFBasicProperties;
@protocol WSFIGeotagHelperStatics, WSFIThumbnailProperties, WSFIStorageItemExtraProperties, WSFIStorageItemContentProperties, WSFIMusicProperties, WSFIImageProperties, WSFIVideoProperties, WSFIDocumentProperties, WSFIBasicProperties;

// Windows.Storage.FileProperties.PropertyPrefetchOptions
enum _WSFPropertyPrefetchOptions {
    WSFPropertyPrefetchOptionsNone = 0,
    WSFPropertyPrefetchOptionsMusicProperties = 1,
    WSFPropertyPrefetchOptionsVideoProperties = 2,
    WSFPropertyPrefetchOptionsImageProperties = 4,
    WSFPropertyPrefetchOptionsDocumentProperties = 8,
    WSFPropertyPrefetchOptionsBasicProperties = 16,
};
typedef unsigned WSFPropertyPrefetchOptions;

// Windows.Storage.FileProperties.ThumbnailType
enum _WSFThumbnailType {
    WSFThumbnailTypeImage = 0,
    WSFThumbnailTypeIcon = 1,
};
typedef unsigned WSFThumbnailType;

// Windows.Storage.FileProperties.ThumbnailMode
enum _WSFThumbnailMode {
    WSFThumbnailModePicturesView = 0,
    WSFThumbnailModeVideosView = 1,
    WSFThumbnailModeMusicView = 2,
    WSFThumbnailModeDocumentsView = 3,
    WSFThumbnailModeListView = 4,
    WSFThumbnailModeSingleItem = 5,
};
typedef unsigned WSFThumbnailMode;

// Windows.Storage.FileProperties.ThumbnailOptions
enum _WSFThumbnailOptions {
    WSFThumbnailOptionsNone = 0,
    WSFThumbnailOptionsReturnOnlyIfCached = 1,
    WSFThumbnailOptionsResizeThumbnail = 2,
    WSFThumbnailOptionsUseCurrentScale = 4,
};
typedef unsigned WSFThumbnailOptions;

// Windows.Storage.FileProperties.PhotoOrientation
enum _WSFPhotoOrientation {
    WSFPhotoOrientationUnspecified = 0,
    WSFPhotoOrientationNormal = 1,
    WSFPhotoOrientationFlipHorizontal = 2,
    WSFPhotoOrientationRotate180 = 3,
    WSFPhotoOrientationFlipVertical = 4,
    WSFPhotoOrientationTranspose = 5,
    WSFPhotoOrientationRotate270 = 6,
    WSFPhotoOrientationTransverse = 7,
    WSFPhotoOrientationRotate90 = 8,
};
typedef unsigned WSFPhotoOrientation;

// Windows.Storage.FileProperties.VideoOrientation
enum _WSFVideoOrientation {
    WSFVideoOrientationNormal = 0,
    WSFVideoOrientationRotate90 = 90,
    WSFVideoOrientationRotate180 = 180,
    WSFVideoOrientationRotate270 = 270,
};
typedef unsigned WSFVideoOrientation;

#include "WindowsStorageStreams.h"
#include "WindowsStorage.h"
#include "WindowsDevicesGeolocation.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Storage.FileProperties.IStorageItemExtraProperties
#ifndef __WSFIStorageItemExtraProperties_DEFINED__
#define __WSFIStorageItemExtraProperties_DEFINED__

@protocol WSFIStorageItemExtraProperties
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFIStorageItemExtraProperties : RTObject <WSFIStorageItemExtraProperties>
@end

#endif // __WSFIStorageItemExtraProperties_DEFINED__

// Windows.Storage.FileProperties.GeotagHelper
#ifndef __WSFGeotagHelper_DEFINED__
#define __WSFGeotagHelper_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFGeotagHelper : RTObject
+ (void)getGeotagAsync:(RTObject<WSIStorageFile>*)file success:(void (^)(WDGGeopoint*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)setGeotagFromGeolocatorAsync:(RTObject<WSIStorageFile>*)file geolocator:(WDGGeolocator*)geolocator;
+ (RTObject<WFIAsyncAction>*)setGeotagAsync:(RTObject<WSIStorageFile>*)file geopoint:(WDGGeopoint*)geopoint;
@end

#endif // __WSFGeotagHelper_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Storage.Streams.IInputStream
#ifndef __WSSIInputStream_DEFINED__
#define __WSSIInputStream_DEFINED__

@protocol WSSIInputStream <WFIClosable>
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)close;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIInputStream : RTObject <WSSIInputStream>
@end

#endif // __WSSIInputStream_DEFINED__

// Windows.Storage.Streams.IOutputStream
#ifndef __WSSIOutputStream_DEFINED__
#define __WSSIOutputStream_DEFINED__

@protocol WSSIOutputStream <WFIClosable>
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIOutputStream : RTObject <WSSIOutputStream>
@end

#endif // __WSSIOutputStream_DEFINED__

// Windows.Storage.Streams.IRandomAccessStream
#ifndef __WSSIRandomAccessStream_DEFINED__
#define __WSSIRandomAccessStream_DEFINED__

@protocol WSSIRandomAccessStream <WFIClosable, WSSIInputStream, WSSIOutputStream>
@property (readonly) BOOL canRead;
@property (readonly) BOOL canWrite;
@property (readonly) uint64_t position;
@property uint64_t size;
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIRandomAccessStream : RTObject <WSSIRandomAccessStream>
@end

#endif // __WSSIRandomAccessStream_DEFINED__

// Windows.Storage.Streams.IContentTypeProvider
#ifndef __WSSIContentTypeProvider_DEFINED__
#define __WSSIContentTypeProvider_DEFINED__

@protocol WSSIContentTypeProvider
@property (readonly) NSString * contentType;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIContentTypeProvider : RTObject <WSSIContentTypeProvider>
@end

#endif // __WSSIContentTypeProvider_DEFINED__

// Windows.Storage.Streams.IRandomAccessStreamWithContentType
#ifndef __WSSIRandomAccessStreamWithContentType_DEFINED__
#define __WSSIRandomAccessStreamWithContentType_DEFINED__

@protocol WSSIRandomAccessStreamWithContentType <WSSIRandomAccessStream, WFIClosable, WSSIInputStream, WSSIOutputStream, WSSIContentTypeProvider>
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIRandomAccessStreamWithContentType : RTObject <WSSIRandomAccessStreamWithContentType>
@end

#endif // __WSSIRandomAccessStreamWithContentType_DEFINED__

// Windows.Storage.FileProperties.StorageItemThumbnail
#ifndef __WSFStorageItemThumbnail_DEFINED__
#define __WSFStorageItemThumbnail_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFStorageItemThumbnail : RTObject <WSSIRandomAccessStreamWithContentType, WSSIContentTypeProvider, WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int originalHeight;
@property (readonly) unsigned int originalWidth;
@property (readonly) BOOL returnedSmallerCachedSize;
@property (readonly) WSFThumbnailType type;
@property (readonly) NSString * contentType;
@property uint64_t size;
@property (readonly) BOOL canRead;
@property (readonly) BOOL canWrite;
@property (readonly) uint64_t position;
- (RTObject<WSSIInputStream>*)getInputStreamAt:(uint64_t)position;
- (RTObject<WSSIOutputStream>*)getOutputStreamAt:(uint64_t)position;
- (void)seek:(uint64_t)position;
- (RTObject<WSSIRandomAccessStream>*)cloneStream;
- (void)close;
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSFStorageItemThumbnail_DEFINED__

// Windows.Storage.FileProperties.MusicProperties
#ifndef __WSFMusicProperties_DEFINED__
#define __WSFMusicProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFMusicProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int rating;
@property (retain) NSString * albumArtist;
@property (retain) NSString * artist;
@property (retain) NSString * album;
@property (retain) NSString * publisher;
@property unsigned int year;
@property unsigned int trackNumber;
@property (retain) NSString * title;
@property (retain) NSString * subtitle;
@property (readonly) NSMutableArray* /* NSString * */ producers;
@property (readonly) NSMutableArray* /* NSString * */ composers;
@property (readonly) NSMutableArray* /* NSString * */ conductors;
@property (readonly) WFTimeSpan* duration;
@property (readonly) NSMutableArray* /* NSString * */ writers;
@property (readonly) NSMutableArray* /* NSString * */ genre;
@property (readonly) unsigned int bitrate;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFMusicProperties_DEFINED__

// Windows.Storage.FileProperties.VideoProperties
#ifndef __WSFVideoProperties_DEFINED__
#define __WSFVideoProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFVideoProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int year;
@property (retain) NSString * title;
@property (retain) NSString * subtitle;
@property (retain) NSString * publisher;
@property unsigned int rating;
@property (readonly) id /* double */ latitude;
@property (readonly) WSFVideoOrientation orientation;
@property (readonly) WFTimeSpan* duration;
@property (readonly) unsigned int bitrate;
@property (readonly) NSMutableArray* /* NSString * */ producers;
@property (readonly) NSMutableArray* /* NSString * */ directors;
@property (readonly) unsigned int height;
@property (readonly) unsigned int width;
@property (readonly) id /* double */ longitude;
@property (readonly) NSMutableArray* /* NSString * */ writers;
@property (readonly) NSMutableArray* /* NSString * */ keywords;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFVideoProperties_DEFINED__

// Windows.Storage.FileProperties.ImageProperties
#ifndef __WSFImageProperties_DEFINED__
#define __WSFImageProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFImageProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * title;
@property unsigned int rating;
@property (retain) WFDateTime* dateTaken;
@property (retain) NSString * cameraModel;
@property (retain) NSString * cameraManufacturer;
@property (readonly) id /* double */ latitude;
@property (readonly) id /* double */ longitude;
@property (readonly) WSFPhotoOrientation orientation;
@property (readonly) NSArray* /* NSString * */ peopleNames;
@property (readonly) unsigned int height;
@property (readonly) NSMutableArray* /* NSString * */ keywords;
@property (readonly) unsigned int width;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFImageProperties_DEFINED__

// Windows.Storage.FileProperties.DocumentProperties
#ifndef __WSFDocumentProperties_DEFINED__
#define __WSFDocumentProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFDocumentProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * title;
@property (retain) NSString * comment;
@property (readonly) NSMutableArray* /* NSString * */ author;
@property (readonly) NSMutableArray* /* NSString * */ keywords;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFDocumentProperties_DEFINED__

// Windows.Storage.FileProperties.StorageItemContentProperties
#ifndef __WSFStorageItemContentProperties_DEFINED__
#define __WSFStorageItemContentProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFStorageItemContentProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)getMusicPropertiesAsyncWithSuccess:(void (^)(WSFMusicProperties*))success failure:(void (^)(NSError*))failure;
- (void)getVideoPropertiesAsyncWithSuccess:(void (^)(WSFVideoProperties*))success failure:(void (^)(NSError*))failure;
- (void)getImagePropertiesAsyncWithSuccess:(void (^)(WSFImageProperties*))success failure:(void (^)(NSError*))failure;
- (void)getDocumentPropertiesAsyncWithSuccess:(void (^)(WSFDocumentProperties*))success failure:(void (^)(NSError*))failure;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFStorageItemContentProperties_DEFINED__

// Windows.Storage.FileProperties.BasicProperties
#ifndef __WSFBasicProperties_DEFINED__
#define __WSFBasicProperties_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSFBasicProperties : RTObject <WSFIStorageItemExtraProperties>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* dateModified;
@property (readonly) WFDateTime* itemDate;
@property (readonly) uint64_t size;
- (void)retrievePropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(NSMutableDictionary* /* NSString *, RTObject* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)savePropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, RTObject* > */)propertiesToSave;
- (RTObject<WFIAsyncAction>*)savePropertiesAsyncOverloadDefault;
@end

#endif // __WSFBasicProperties_DEFINED__

