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

// WindowsGraphicsImaging.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
#define OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsGraphicsImaging.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WGIBitmapTransform, WGIBitmapTypedValue, WGIBitmapPropertySet, WGIBitmapPropertiesView, WGIBitmapProperties, WGIPixelDataProvider, WGIImageStream, WGIBitmapFrame, WGIBitmapCodecInformation, WGIBitmapDecoder, WGIBitmapEncoder, WGIBitmapBuffer, WGISoftwareBitmap;
@class WGIBitmapBounds, WGIBitmapSize, WGIBitmapPlaneDescription;
@protocol WGIIBitmapTransform, WGIIBitmapTypedValue, WGIIBitmapTypedValueFactory, WGIIBitmapPropertiesView, WGIIBitmapProperties, WGIIPixelDataProvider, WGIIBitmapFrame, WGIIBitmapFrameWithSoftwareBitmap, WGIIBitmapCodecInformation, WGIIBitmapDecoderStatics, WGIIBitmapDecoder, WGIIBitmapEncoderStatics, WGIIBitmapEncoder, WGIIBitmapEncoderWithSoftwareBitmap, WGIISoftwareBitmap, WGIISoftwareBitmapFactory, WGIISoftwareBitmapStatics, WGIIBitmapBuffer;

// Windows.Graphics.Imaging.BitmapInterpolationMode
enum _WGIBitmapInterpolationMode {
    WGIBitmapInterpolationModeNearestNeighbor = 0,
    WGIBitmapInterpolationModeLinear = 1,
    WGIBitmapInterpolationModeCubic = 2,
    WGIBitmapInterpolationModeFant = 3,
};
typedef unsigned WGIBitmapInterpolationMode;

// Windows.Graphics.Imaging.BitmapFlip
enum _WGIBitmapFlip {
    WGIBitmapFlipNone = 0,
    WGIBitmapFlipHorizontal = 1,
    WGIBitmapFlipVertical = 2,
};
typedef unsigned WGIBitmapFlip;

// Windows.Graphics.Imaging.BitmapRotation
enum _WGIBitmapRotation {
    WGIBitmapRotationNone = 0,
    WGIBitmapRotationClockwise90Degrees = 1,
    WGIBitmapRotationClockwise180Degrees = 2,
    WGIBitmapRotationClockwise270Degrees = 3,
};
typedef unsigned WGIBitmapRotation;

// Windows.Graphics.Imaging.ColorManagementMode
enum _WGIColorManagementMode {
    WGIColorManagementModeDoNotColorManage = 0,
    WGIColorManagementModeColorManageToSRgb = 1,
};
typedef unsigned WGIColorManagementMode;

// Windows.Graphics.Imaging.ExifOrientationMode
enum _WGIExifOrientationMode {
    WGIExifOrientationModeIgnoreExifOrientation = 0,
    WGIExifOrientationModeRespectExifOrientation = 1,
};
typedef unsigned WGIExifOrientationMode;

// Windows.Graphics.Imaging.PngFilterMode
enum _WGIPngFilterMode {
    WGIPngFilterModeAutomatic = 0,
    WGIPngFilterModeNone = 1,
    WGIPngFilterModeSub = 2,
    WGIPngFilterModeUp = 3,
    WGIPngFilterModeAverage = 4,
    WGIPngFilterModePaeth = 5,
    WGIPngFilterModeAdaptive = 6,
};
typedef unsigned WGIPngFilterMode;

// Windows.Graphics.Imaging.TiffCompressionMode
enum _WGITiffCompressionMode {
    WGITiffCompressionModeAutomatic = 0,
    WGITiffCompressionModeNone = 1,
    WGITiffCompressionModeCcitt3 = 2,
    WGITiffCompressionModeCcitt4 = 3,
    WGITiffCompressionModeLzw = 4,
    WGITiffCompressionModeRle = 5,
    WGITiffCompressionModeZip = 6,
    WGITiffCompressionModeLzwhDifferencing = 7,
};
typedef unsigned WGITiffCompressionMode;

// Windows.Graphics.Imaging.JpegSubsamplingMode
enum _WGIJpegSubsamplingMode {
    WGIJpegSubsamplingModeDefault = 0,
    WGIJpegSubsamplingModeY4Cb2Cr0 = 1,
    WGIJpegSubsamplingModeY4Cb2Cr2 = 2,
    WGIJpegSubsamplingModeY4Cb4Cr4 = 3,
};
typedef unsigned WGIJpegSubsamplingMode;

// Windows.Graphics.Imaging.BitmapPixelFormat
enum _WGIBitmapPixelFormat {
    WGIBitmapPixelFormatUnknown = 0,
    WGIBitmapPixelFormatRgba16 = 12,
    WGIBitmapPixelFormatRgba8 = 30,
    WGIBitmapPixelFormatGray16 = 57,
    WGIBitmapPixelFormatGray8 = 62,
    WGIBitmapPixelFormatBgra8 = 87,
    WGIBitmapPixelFormatNv12 = 103,
    WGIBitmapPixelFormatYuy2 = 107,
};
typedef unsigned WGIBitmapPixelFormat;

// Windows.Graphics.Imaging.BitmapAlphaMode
enum _WGIBitmapAlphaMode {
    WGIBitmapAlphaModePremultiplied = 0,
    WGIBitmapAlphaModeStraight = 1,
    WGIBitmapAlphaModeIgnore = 2,
};
typedef unsigned WGIBitmapAlphaMode;

// Windows.Graphics.Imaging.BitmapBufferAccessMode
enum _WGIBitmapBufferAccessMode {
    WGIBitmapBufferAccessModeRead = 0,
    WGIBitmapBufferAccessModeReadWrite = 1,
    WGIBitmapBufferAccessModeWrite = 2,
};
typedef unsigned WGIBitmapBufferAccessMode;

#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsGraphicsDirectXDirect3D11.h"

#import <Foundation/Foundation.h>

// [struct] Windows.Graphics.Imaging.BitmapBounds
OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapBounds : NSObject
+ (instancetype)new;
@property unsigned int x;
@property unsigned int y;
@property unsigned int width;
@property unsigned int height;
@end

// [struct] Windows.Graphics.Imaging.BitmapSize
OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapSize : NSObject
+ (instancetype)new;
@property unsigned int width;
@property unsigned int height;
@end

// [struct] Windows.Graphics.Imaging.BitmapPlaneDescription
OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapPlaneDescription : NSObject
+ (instancetype)new;
@property int startIndex;
@property int width;
@property int height;
@property int stride;
@end

// Windows.Graphics.Imaging.IBitmapPropertiesView
#ifndef __WGIIBitmapPropertiesView_DEFINED__
#define __WGIIBitmapPropertiesView_DEFINED__

@protocol WGIIBitmapPropertiesView
- (void)getPropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(WGIBitmapPropertySet*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIIBitmapPropertiesView : RTObject <WGIIBitmapPropertiesView>
@end

#endif // __WGIIBitmapPropertiesView_DEFINED__

// Windows.Graphics.Imaging.IBitmapFrame
#ifndef __WGIIBitmapFrame_DEFINED__
#define __WGIIBitmapFrame_DEFINED__

@protocol WGIIBitmapFrame
@property (readonly) WGIBitmapAlphaMode bitmapAlphaMode;
@property (readonly) WGIBitmapPixelFormat bitmapPixelFormat;
@property (readonly) WGIBitmapPropertiesView* bitmapProperties;
@property (readonly) double dpiX;
@property (readonly) double dpiY;
@property (readonly) unsigned int orientedPixelHeight;
@property (readonly) unsigned int orientedPixelWidth;
@property (readonly) unsigned int pixelHeight;
@property (readonly) unsigned int pixelWidth;
- (void)getThumbnailAsyncWithSuccess:(void (^)(WGIImageStream*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataAsyncWithSuccess:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIIBitmapFrame : RTObject <WGIIBitmapFrame>
@end

#endif // __WGIIBitmapFrame_DEFINED__

// Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
#ifndef __WGIIBitmapFrameWithSoftwareBitmap_DEFINED__
#define __WGIIBitmapFrameWithSoftwareBitmap_DEFINED__

@protocol WGIIBitmapFrameWithSoftwareBitmap <WGIIBitmapFrame>
- (void)getSoftwareBitmapAsyncWithSuccess:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapConvertedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncWithSuccess:(void (^)(WGIImageStream*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataAsyncWithSuccess:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIIBitmapFrameWithSoftwareBitmap : RTObject <WGIIBitmapFrameWithSoftwareBitmap>
@end

#endif // __WGIIBitmapFrameWithSoftwareBitmap_DEFINED__

// Windows.Graphics.Imaging.BitmapTransform
#ifndef __WGIBitmapTransform_DEFINED__
#define __WGIBitmapTransform_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapTransform : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int scaledWidth;
@property unsigned int scaledHeight;
@property WGIBitmapRotation rotation;
@property WGIBitmapInterpolationMode interpolationMode;
@property WGIBitmapFlip flip;
@property (retain) WGIBitmapBounds* bounds;
@end

#endif // __WGIBitmapTransform_DEFINED__

// Windows.Graphics.Imaging.BitmapTypedValue
#ifndef __WGIBitmapTypedValue_DEFINED__
#define __WGIBitmapTypedValue_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapTypedValue : RTObject
+ (WGIBitmapTypedValue*)make:(RTObject*)value type:(WFPropertyType)type ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFPropertyType type;
@property (readonly) RTObject* value;
@end

#endif // __WGIBitmapTypedValue_DEFINED__

// Windows.Graphics.Imaging.BitmapPropertySet
#ifndef __WGIBitmapPropertySet_DEFINED__
#define __WGIBitmapPropertySet_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapPropertySet : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
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

#endif // __WGIBitmapPropertySet_DEFINED__

// Windows.Graphics.Imaging.BitmapPropertiesView
#ifndef __WGIBitmapPropertiesView_DEFINED__
#define __WGIBitmapPropertiesView_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapPropertiesView : RTObject <WGIIBitmapPropertiesView>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)getPropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(WGIBitmapPropertySet*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WGIBitmapPropertiesView_DEFINED__

// Windows.Graphics.Imaging.BitmapProperties
#ifndef __WGIBitmapProperties_DEFINED__
#define __WGIBitmapProperties_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapProperties : RTObject <WGIIBitmapPropertiesView>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (RTObject<WFIAsyncAction>*)setPropertiesAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, WGIBitmapTypedValue* > */)propertiesToSet;
- (void)getPropertiesAsync:(id<NSFastEnumeration> /* NSString * */)propertiesToRetrieve success:(void (^)(WGIBitmapPropertySet*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WGIBitmapProperties_DEFINED__

// Windows.Graphics.Imaging.PixelDataProvider
#ifndef __WGIPixelDataProvider_DEFINED__
#define __WGIPixelDataProvider_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIPixelDataProvider : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (NSArray* /* uint8_t */)detachPixelData;
@end

#endif // __WGIPixelDataProvider_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
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

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
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

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
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

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WSSIRandomAccessStream : RTObject <WSSIRandomAccessStream>
@end

#endif // __WSSIRandomAccessStream_DEFINED__

// Windows.Storage.Streams.IContentTypeProvider
#ifndef __WSSIContentTypeProvider_DEFINED__
#define __WSSIContentTypeProvider_DEFINED__

@protocol WSSIContentTypeProvider
@property (readonly) NSString * contentType;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
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

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WSSIRandomAccessStreamWithContentType : RTObject <WSSIRandomAccessStreamWithContentType>
@end

#endif // __WSSIRandomAccessStreamWithContentType_DEFINED__

// Windows.Graphics.Imaging.ImageStream
#ifndef __WGIImageStream_DEFINED__
#define __WGIImageStream_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIImageStream : RTObject <WSSIRandomAccessStreamWithContentType, WSSIContentTypeProvider, WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
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

#endif // __WGIImageStream_DEFINED__

// Windows.Graphics.Imaging.BitmapFrame
#ifndef __WGIBitmapFrame_DEFINED__
#define __WGIBitmapFrame_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapFrame : RTObject <WGIIBitmapFrame, WGIIBitmapFrameWithSoftwareBitmap>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WGIBitmapAlphaMode bitmapAlphaMode;
@property (readonly) WGIBitmapPixelFormat bitmapPixelFormat;
@property (readonly) WGIBitmapPropertiesView* bitmapProperties;
@property (readonly) double dpiX;
@property (readonly) double dpiY;
@property (readonly) unsigned int orientedPixelHeight;
@property (readonly) unsigned int orientedPixelWidth;
@property (readonly) unsigned int pixelHeight;
@property (readonly) unsigned int pixelWidth;
- (void)getThumbnailAsyncWithSuccess:(void (^)(WGIImageStream*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataAsyncWithSuccess:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapAsyncWithSuccess:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapConvertedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WGIBitmapFrame_DEFINED__

// Windows.Graphics.Imaging.BitmapCodecInformation
#ifndef __WGIBitmapCodecInformation_DEFINED__
#define __WGIBitmapCodecInformation_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapCodecInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFGUID* codecId;
@property (readonly) NSArray* /* NSString * */ fileExtensions;
@property (readonly) NSString * friendlyName;
@property (readonly) NSArray* /* NSString * */ mimeTypes;
@end

#endif // __WGIBitmapCodecInformation_DEFINED__

// Windows.Graphics.Imaging.BitmapDecoder
#ifndef __WGIBitmapDecoder_DEFINED__
#define __WGIBitmapDecoder_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapDecoder : RTObject <WGIIBitmapFrame, WGIIBitmapFrameWithSoftwareBitmap>
+ (NSArray* /* WGIBitmapCodecInformation* */)getDecoderInformationEnumerator;
+ (void)createAsync:(RTObject<WSSIRandomAccessStream>*)stream success:(void (^)(WGIBitmapDecoder*))success failure:(void (^)(NSError*))failure;
+ (void)createWithIdAsync:(WFGUID*)decoderId stream:(RTObject<WSSIRandomAccessStream>*)stream success:(void (^)(WGIBitmapDecoder*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WGIBitmapPropertiesView* bitmapContainerProperties;
@property (readonly) WGIBitmapCodecInformation* decoderInformation;
@property (readonly) unsigned int frameCount;
@property (readonly) WGIBitmapAlphaMode bitmapAlphaMode;
@property (readonly) WGIBitmapPixelFormat bitmapPixelFormat;
@property (readonly) WGIBitmapPropertiesView* bitmapProperties;
@property (readonly) double dpiX;
@property (readonly) double dpiY;
@property (readonly) unsigned int orientedPixelHeight;
@property (readonly) unsigned int orientedPixelWidth;
@property (readonly) unsigned int pixelHeight;
@property (readonly) unsigned int pixelWidth;
+ (WFGUID*)bmpDecoderId;
+ (WFGUID*)gifDecoderId;
+ (WFGUID*)icoDecoderId;
+ (WFGUID*)jpegDecoderId;
+ (WFGUID*)jpegXRDecoderId;
+ (WFGUID*)pngDecoderId;
+ (WFGUID*)tiffDecoderId;
- (void)getPreviewAsyncWithSuccess:(void (^)(WGIImageStream*))success failure:(void (^)(NSError*))failure;
- (void)getFrameAsync:(unsigned int)frameIndex success:(void (^)(WGIBitmapFrame*))success failure:(void (^)(NSError*))failure;
- (void)getThumbnailAsyncWithSuccess:(void (^)(WGIImageStream*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataAsyncWithSuccess:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getPixelDataTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGIPixelDataProvider*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapAsyncWithSuccess:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapConvertedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
- (void)getSoftwareBitmapTransformedAsync:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode transform:(WGIBitmapTransform*)transform exifOrientationMode:(WGIExifOrientationMode)exifOrientationMode colorManagementMode:(WGIColorManagementMode)colorManagementMode success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WGIBitmapDecoder_DEFINED__

// Windows.Graphics.Imaging.BitmapEncoder
#ifndef __WGIBitmapEncoder_DEFINED__
#define __WGIBitmapEncoder_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapEncoder : RTObject
+ (NSArray* /* WGIBitmapCodecInformation* */)getEncoderInformationEnumerator;
+ (void)createAsync:(WFGUID*)encoderId stream:(RTObject<WSSIRandomAccessStream>*)stream success:(void (^)(WGIBitmapEncoder*))success failure:(void (^)(NSError*))failure;
+ (void)createWithEncodingOptionsAsync:(WFGUID*)encoderId stream:(RTObject<WSSIRandomAccessStream>*)stream encodingOptions:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, WGIBitmapTypedValue* > */)encodingOptions success:(void (^)(WGIBitmapEncoder*))success failure:(void (^)(NSError*))failure;
+ (void)createForTranscodingAsync:(RTObject<WSSIRandomAccessStream>*)stream bitmapDecoder:(WGIBitmapDecoder*)bitmapDecoder success:(void (^)(WGIBitmapEncoder*))success failure:(void (^)(NSError*))failure;
+ (void)createForInPlacePropertyEncodingAsync:(WGIBitmapDecoder*)bitmapDecoder success:(void (^)(WGIBitmapEncoder*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isThumbnailGenerated;
@property unsigned int generatedThumbnailWidth;
@property unsigned int generatedThumbnailHeight;
@property (readonly) WGIBitmapProperties* bitmapContainerProperties;
@property (readonly) WGIBitmapProperties* bitmapProperties;
@property (readonly) WGIBitmapTransform* bitmapTransform;
@property (readonly) WGIBitmapCodecInformation* encoderInformation;
+ (WFGUID*)bmpEncoderId;
+ (WFGUID*)gifEncoderId;
+ (WFGUID*)jpegEncoderId;
+ (WFGUID*)jpegXREncoderId;
+ (WFGUID*)pngEncoderId;
+ (WFGUID*)tiffEncoderId;
- (void)setPixelData:(WGIBitmapPixelFormat)pixelFormat alphaMode:(WGIBitmapAlphaMode)alphaMode width:(unsigned int)width height:(unsigned int)height dpiX:(double)dpiX dpiY:(double)dpiY pixels:(NSArray* /* uint8_t */)pixels;
- (RTObject<WFIAsyncAction>*)goToNextFrameAsync;
- (RTObject<WFIAsyncAction>*)goToNextFrameWithEncodingOptionsAsync:(id<NSFastEnumeration> /* RTKeyValuePair* < NSString *, WGIBitmapTypedValue* > */)encodingOptions;
- (RTObject<WFIAsyncAction>*)flushAsync;
- (void)setSoftwareBitmap:(WGISoftwareBitmap*)bitmap;
@end

#endif // __WGIBitmapEncoder_DEFINED__

// Windows.Foundation.IMemoryBuffer
#ifndef __WFIMemoryBuffer_DEFINED__
#define __WFIMemoryBuffer_DEFINED__

@protocol WFIMemoryBuffer <WFIClosable>
- (RTObject<WFIMemoryBufferReference>*)createReference;
- (void)close;
@end

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WFIMemoryBuffer : RTObject <WFIMemoryBuffer>
@end

#endif // __WFIMemoryBuffer_DEFINED__

// Windows.Graphics.Imaging.BitmapBuffer
#ifndef __WGIBitmapBuffer_DEFINED__
#define __WGIBitmapBuffer_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGIBitmapBuffer : RTObject <WFIMemoryBuffer, WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (int)getPlaneCount;
- (WGIBitmapPlaneDescription*)getPlaneDescription:(int)index;
- (RTObject<WFIMemoryBufferReference>*)createReference;
- (void)close;
@end

#endif // __WGIBitmapBuffer_DEFINED__

// Windows.Graphics.Imaging.SoftwareBitmap
#ifndef __WGISoftwareBitmap_DEFINED__
#define __WGISoftwareBitmap_DEFINED__

OBJCUWPWINDOWSGRAPHICSIMAGINGEXPORT
@interface WGISoftwareBitmap : RTObject <WFIClosable>
+ (WGISoftwareBitmap*)Copy:(WGISoftwareBitmap*)source;
+ (WGISoftwareBitmap*)convert:(WGISoftwareBitmap*)source format:(WGIBitmapPixelFormat)format;
+ (WGISoftwareBitmap*)convertWithAlpha:(WGISoftwareBitmap*)source format:(WGIBitmapPixelFormat)format alpha:(WGIBitmapAlphaMode)alpha;
+ (WGISoftwareBitmap*)createCopyFromBuffer:(RTObject<WSSIBuffer>*)source format:(WGIBitmapPixelFormat)format width:(int)width height:(int)height;
+ (WGISoftwareBitmap*)createCopyWithAlphaFromBuffer:(RTObject<WSSIBuffer>*)source format:(WGIBitmapPixelFormat)format width:(int)width height:(int)height alpha:(WGIBitmapAlphaMode)alpha;
+ (void)createCopyFromSurfaceAsync:(RTObject<WGDDIDirect3DSurface>*)surface success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
+ (void)createCopyWithAlphaFromSurfaceAsync:(RTObject<WGDDIDirect3DSurface>*)surface alpha:(WGIBitmapAlphaMode)alpha success:(void (^)(WGISoftwareBitmap*))success failure:(void (^)(NSError*))failure;
+ (WGISoftwareBitmap*)make:(WGIBitmapPixelFormat)format width:(int)width height:(int)height ACTIVATOR;
+ (WGISoftwareBitmap*)makeWithAlpha:(WGIBitmapPixelFormat)format width:(int)width height:(int)height alpha:(WGIBitmapAlphaMode)alpha ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property double dpiY;
@property double dpiX;
@property (readonly) WGIBitmapAlphaMode bitmapAlphaMode;
@property (readonly) WGIBitmapPixelFormat bitmapPixelFormat;
@property (readonly) BOOL isReadOnly;
@property (readonly) int pixelHeight;
@property (readonly) int pixelWidth;
- (WGIBitmapBuffer*)lockBuffer:(WGIBitmapBufferAccessMode)mode;
- (void)copyTo:(WGISoftwareBitmap*)bitmap;
- (void)copyFromBuffer:(RTObject<WSSIBuffer>*)buffer;
- (void)copyToBuffer:(RTObject<WSSIBuffer>*)buffer;
- (WGISoftwareBitmap*)getReadOnlyView;
- (void)close;
@end

#endif // __WGISoftwareBitmap_DEFINED__

