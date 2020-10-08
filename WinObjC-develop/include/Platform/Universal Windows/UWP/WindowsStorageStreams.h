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

// WindowsStorageStreams.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSTORAGEEXPORT
#define OBJCUWPWINDOWSSTORAGEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsStorage.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSSDataReaderLoadOperation, WSSDataReader, WSSDataWriterStoreOperation, WSSDataWriter, WSSBuffer, WSSRandomAccessStream, WSSRandomAccessStreamReference, WSSFileRandomAccessStream, WSSFileInputStream, WSSFileOutputStream, WSSRandomAccessStreamOverStream, WSSInputStreamOverStream, WSSOutputStreamOverStream, WSSInMemoryRandomAccessStream;
@protocol WSSIDataReader, WSSIDataReaderFactory, WSSIDataReaderStatics, WSSIDataWriter, WSSIDataWriterFactory, WSSIBufferFactory, WSSIBuffer, WSSIBufferStatics, WSSIContentTypeProvider, WSSIInputStream, WSSIOutputStream, WSSIRandomAccessStream, WSSIRandomAccessStreamWithContentType, WSSIRandomAccessStreamReference, WSSIRandomAccessStreamStatics, WSSIInputStreamReference, WSSIRandomAccessStreamReferenceStatics, WSSIFileRandomAccessStreamStatics;

// Windows.Storage.Streams.ByteOrder
enum _WSSByteOrder {
    WSSByteOrderLittleEndian = 0,
    WSSByteOrderBigEndian = 1,
};
typedef unsigned WSSByteOrder;

// Windows.Storage.Streams.UnicodeEncoding
enum _WSSUnicodeEncoding {
    WSSUnicodeEncodingUtf8 = 0,
    WSSUnicodeEncodingUtf16LE = 1,
    WSSUnicodeEncodingUtf16BE = 2,
};
typedef unsigned WSSUnicodeEncoding;

// Windows.Storage.Streams.InputStreamOptions
enum _WSSInputStreamOptions {
    WSSInputStreamOptionsNone = 0,
    WSSInputStreamOptionsPartial = 1,
    WSSInputStreamOptionsReadAhead = 2,
};
typedef unsigned WSSInputStreamOptions;

// Windows.Storage.Streams.FileOpenDisposition
enum _WSSFileOpenDisposition {
    WSSFileOpenDispositionOpenExisting = 0,
    WSSFileOpenDispositionOpenAlways = 1,
    WSSFileOpenDispositionCreateNew = 2,
    WSSFileOpenDispositionCreateAlways = 3,
    WSSFileOpenDispositionTruncateExisting = 4,
};
typedef unsigned WSSFileOpenDisposition;

#include "WindowsFoundation.h"
#include "WindowsStorage.h"
#include "WindowsSystem.h"

#import <Foundation/Foundation.h>

// Windows.Storage.Streams.IDataReader
#ifndef __WSSIDataReader_DEFINED__
#define __WSSIDataReader_DEFINED__

@protocol WSSIDataReader
@property WSSByteOrder byteOrder;
@property WSSInputStreamOptions inputStreamOptions;
@property (readonly) unsigned int unconsumedBufferLength;
@property WSSUnicodeEncoding unicodeEncoding;
- (uint8_t)readByte;
- (void)readBytes:(NSArray* /* uint8_t */*)value;
- (RTObject<WSSIBuffer>*)readBuffer:(unsigned int)length;
- (BOOL)readBoolean;
- (WFGUID*)readGuid;
- (int16_t)readInt16;
- (int)readInt32;
- (int64_t)readInt64;
- (unsigned short)readUInt16;
- (unsigned int)readUInt32;
- (uint64_t)readUInt64;
- (float)readSingle;
- (double)readDouble;
- (NSString *)readString:(unsigned int)codeUnitCount;
- (WFDateTime*)readDateTime;
- (WFTimeSpan*)readTimeSpan;
// Failed to generate member LoadAsync (Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>)
- (RTObject<WSSIBuffer>*)detachBuffer;
- (RTObject<WSSIInputStream>*)detachStream;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIDataReader : RTObject <WSSIDataReader>
@end

#endif // __WSSIDataReader_DEFINED__

// Windows.Storage.Streams.IDataWriter
#ifndef __WSSIDataWriter_DEFINED__
#define __WSSIDataWriter_DEFINED__

@protocol WSSIDataWriter
@property WSSByteOrder byteOrder;
@property WSSUnicodeEncoding unicodeEncoding;
@property (readonly) unsigned int unstoredBufferLength;
- (void)writeByte:(uint8_t)value;
- (void)writeBytes:(NSArray* /* uint8_t */)value;
- (void)writeBuffer:(RTObject<WSSIBuffer>*)buffer;
- (void)writeBufferRange:(RTObject<WSSIBuffer>*)buffer start:(unsigned int)start count:(unsigned int)count;
- (void)writeBoolean:(BOOL)value;
- (void)writeGuid:(WFGUID*)value;
- (void)writeInt16:(int16_t)value;
- (void)writeInt32:(int)value;
- (void)writeInt64:(int64_t)value;
- (void)writeUInt16:(unsigned short)value;
- (void)writeUInt32:(unsigned int)value;
- (void)writeUInt64:(uint64_t)value;
- (void)writeSingle:(float)value;
- (void)writeDouble:(double)value;
- (void)writeDateTime:(WFDateTime*)value;
- (void)writeTimeSpan:(WFTimeSpan*)value;
- (unsigned int)writeString:(NSString *)value;
- (unsigned int)measureString:(NSString *)value;
// Failed to generate member StoreAsync (Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>)
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (RTObject<WSSIBuffer>*)detachBuffer;
- (RTObject<WSSIOutputStream>*)detachStream;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIDataWriter : RTObject <WSSIDataWriter>
@end

#endif // __WSSIDataWriter_DEFINED__

// Windows.Storage.Streams.IBuffer
#ifndef __WSSIBuffer_DEFINED__
#define __WSSIBuffer_DEFINED__

@protocol WSSIBuffer
@property (readonly) unsigned int capacity;
@property unsigned int length;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIBuffer : RTObject <WSSIBuffer>
@end

#endif // __WSSIBuffer_DEFINED__

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

// Windows.Storage.Streams.IRandomAccessStreamReference
#ifndef __WSSIRandomAccessStreamReference_DEFINED__
#define __WSSIRandomAccessStreamReference_DEFINED__

@protocol WSSIRandomAccessStreamReference
- (void)openReadAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamWithContentType>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIRandomAccessStreamReference : RTObject <WSSIRandomAccessStreamReference>
@end

#endif // __WSSIRandomAccessStreamReference_DEFINED__

// Windows.Storage.Streams.IInputStreamReference
#ifndef __WSSIInputStreamReference_DEFINED__
#define __WSSIInputStreamReference_DEFINED__

@protocol WSSIInputStreamReference
- (void)openSequentialReadAsyncWithSuccess:(void (^)(RTObject<WSSIInputStream>*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSIInputStreamReference : RTObject <WSSIInputStreamReference>
@end

#endif // __WSSIInputStreamReference_DEFINED__

// Windows.Foundation.IAsyncInfo
#ifndef __WFIAsyncInfo_DEFINED__
#define __WFIAsyncInfo_DEFINED__

@protocol WFIAsyncInfo
@property (readonly) HRESULT errorCode;
@property (readonly) unsigned int id;
@property (readonly) WFAsyncStatus status;
- (void)cancel;
- (void)close;
@end

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WFIAsyncInfo : RTObject <WFIAsyncInfo>
@end

#endif // __WFIAsyncInfo_DEFINED__

// Windows.Storage.Streams.DataReaderLoadOperation
#ifndef __WSSDataReaderLoadOperation_DEFINED__
#define __WSSDataReaderLoadOperation_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSDataReaderLoadOperation : RTObject <WFIAsyncInfo>
 // Failed to get type for default interface: Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>
@property (readonly) HRESULT errorCode;
@property (readonly) unsigned int id;
@property (readonly) WFAsyncStatus status;
// Failed to generate property Completed (Can't marshal Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>)
// Could not find base class Windows.Foundation.IAsyncOperation`1<UInt32> type information
- (void)cancel;
- (void)close;
@end

#endif // __WSSDataReaderLoadOperation_DEFINED__

// Windows.Storage.Streams.DataReader
#ifndef __WSSDataReader_DEFINED__
#define __WSSDataReader_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSDataReader : RTObject <WSSIDataReader, WFIClosable>
+ (WSSDataReader*)fromBuffer:(RTObject<WSSIBuffer>*)buffer;
+ (WSSDataReader*)makeDataReader:(RTObject<WSSIInputStream>*)inputStream ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WSSUnicodeEncoding unicodeEncoding;
@property WSSInputStreamOptions inputStreamOptions;
@property WSSByteOrder byteOrder;
@property (readonly) unsigned int unconsumedBufferLength;
- (uint8_t)readByte;
- (void)readBytes:(NSArray* /* uint8_t */*)value;
- (RTObject<WSSIBuffer>*)readBuffer:(unsigned int)length;
- (BOOL)readBoolean;
- (WFGUID*)readGuid;
- (int16_t)readInt16;
- (int)readInt32;
- (int64_t)readInt64;
- (unsigned short)readUInt16;
- (unsigned int)readUInt32;
- (uint64_t)readUInt64;
- (float)readSingle;
- (double)readDouble;
- (NSString *)readString:(unsigned int)codeUnitCount;
- (WFDateTime*)readDateTime;
- (WFTimeSpan*)readTimeSpan;
// Failed to generate member LoadAsync (Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>)
- (RTObject<WSSIBuffer>*)detachBuffer;
- (RTObject<WSSIInputStream>*)detachStream;
- (void)close;
@end

#endif // __WSSDataReader_DEFINED__

// Windows.Storage.Streams.DataWriterStoreOperation
#ifndef __WSSDataWriterStoreOperation_DEFINED__
#define __WSSDataWriterStoreOperation_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSDataWriterStoreOperation : RTObject <WFIAsyncInfo>
 // Failed to get type for default interface: Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>
@property (readonly) HRESULT errorCode;
@property (readonly) unsigned int id;
@property (readonly) WFAsyncStatus status;
// Failed to generate property Completed (Can't marshal Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>)
// Could not find base class Windows.Foundation.IAsyncOperation`1<UInt32> type information
- (void)cancel;
- (void)close;
@end

#endif // __WSSDataWriterStoreOperation_DEFINED__

// Windows.Storage.Streams.DataWriter
#ifndef __WSSDataWriter_DEFINED__
#define __WSSDataWriter_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSDataWriter : RTObject <WSSIDataWriter, WFIClosable>
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WSSDataWriter*)makeDataWriter:(RTObject<WSSIOutputStream>*)outputStream ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WSSUnicodeEncoding unicodeEncoding;
@property WSSByteOrder byteOrder;
@property (readonly) unsigned int unstoredBufferLength;
- (void)writeByte:(uint8_t)value;
- (void)writeBytes:(NSArray* /* uint8_t */)value;
- (void)writeBuffer:(RTObject<WSSIBuffer>*)buffer;
- (void)writeBufferRange:(RTObject<WSSIBuffer>*)buffer start:(unsigned int)start count:(unsigned int)count;
- (void)writeBoolean:(BOOL)value;
- (void)writeGuid:(WFGUID*)value;
- (void)writeInt16:(int16_t)value;
- (void)writeInt32:(int)value;
- (void)writeInt64:(int64_t)value;
- (void)writeUInt16:(unsigned short)value;
- (void)writeUInt32:(unsigned int)value;
- (void)writeUInt64:(uint64_t)value;
- (void)writeSingle:(float)value;
- (void)writeDouble:(double)value;
- (void)writeDateTime:(WFDateTime*)value;
- (void)writeTimeSpan:(WFTimeSpan*)value;
- (unsigned int)writeString:(NSString *)value;
- (unsigned int)measureString:(NSString *)value;
// Failed to generate member StoreAsync (Can't marshal Windows.Foundation.IAsyncOperation`1<UInt32>)
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (RTObject<WSSIBuffer>*)detachBuffer;
- (RTObject<WSSIOutputStream>*)detachStream;
- (void)close;
@end

#endif // __WSSDataWriter_DEFINED__

// Windows.Storage.Streams.Buffer
#ifndef __WSSBuffer_DEFINED__
#define __WSSBuffer_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSBuffer : RTObject <WSSIBuffer>
+ (WSSBuffer*)createCopyFromMemoryBuffer:(RTObject<WFIMemoryBuffer>*)input;
+ (WFMemoryBuffer*)createMemoryBufferOverIBuffer:(RTObject<WSSIBuffer>*)input;
+ (WSSBuffer*)make:(unsigned int)capacity ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int length;
@property (readonly) unsigned int capacity;
@end

#endif // __WSSBuffer_DEFINED__

// Windows.Storage.Streams.RandomAccessStream
#ifndef __WSSRandomAccessStream_DEFINED__
#define __WSSRandomAccessStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSRandomAccessStream : RTObject
+ (void)copyAsync:(RTObject<WSSIInputStream>*)source destination:(RTObject<WSSIOutputStream>*)destination success:(void (^)(uint64_t))success progress:(void (^)(uint64_t))progress failure:(void (^)(NSError*))failure;
+ (void)copySizeAsync:(RTObject<WSSIInputStream>*)source destination:(RTObject<WSSIOutputStream>*)destination bytesToCopy:(uint64_t)bytesToCopy success:(void (^)(uint64_t))success progress:(void (^)(uint64_t))progress failure:(void (^)(NSError*))failure;
+ (void)copyAndCloseAsync:(RTObject<WSSIInputStream>*)source destination:(RTObject<WSSIOutputStream>*)destination success:(void (^)(uint64_t))success progress:(void (^)(uint64_t))progress failure:(void (^)(NSError*))failure;
@end

#endif // __WSSRandomAccessStream_DEFINED__

// Windows.Storage.Streams.RandomAccessStreamReference
#ifndef __WSSRandomAccessStreamReference_DEFINED__
#define __WSSRandomAccessStreamReference_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSRandomAccessStreamReference : RTObject <WSSIRandomAccessStreamReference>
+ (WSSRandomAccessStreamReference*)createFromFile:(RTObject<WSIStorageFile>*)file;
+ (WSSRandomAccessStreamReference*)createFromUri:(WFUri*)uri;
+ (WSSRandomAccessStreamReference*)createFromStream:(RTObject<WSSIRandomAccessStream>*)stream;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)openReadAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamWithContentType>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSSRandomAccessStreamReference_DEFINED__

// Windows.Storage.Streams.FileRandomAccessStream
#ifndef __WSSFileRandomAccessStream_DEFINED__
#define __WSSFileRandomAccessStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSFileRandomAccessStream : RTObject <WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
+ (void)openAsync:(NSString *)filePath accessMode:(WSFileAccessMode)accessMode success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
+ (void)openWithOptionsAsync:(NSString *)filePath accessMode:(WSFileAccessMode)accessMode sharingOptions:(WSStorageOpenOptions)sharingOptions openDisposition:(WSSFileOpenDisposition)openDisposition success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
+ (void)openTransactedWriteAsync:(NSString *)filePath success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
+ (void)openTransactedWriteWithOptionsAsync:(NSString *)filePath openOptions:(WSStorageOpenOptions)openOptions openDisposition:(WSSFileOpenDisposition)openDisposition success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
+ (void)openForUserAsync:(WSUser*)user filePath:(NSString *)filePath accessMode:(WSFileAccessMode)accessMode success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
+ (void)openForUserWithOptionsAsync:(WSUser*)user filePath:(NSString *)filePath accessMode:(WSFileAccessMode)accessMode sharingOptions:(WSStorageOpenOptions)sharingOptions openDisposition:(WSSFileOpenDisposition)openDisposition success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
+ (void)openTransactedWriteForUserAsync:(WSUser*)user filePath:(NSString *)filePath success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
+ (void)openTransactedWriteForUserWithOptionsAsync:(WSUser*)user filePath:(NSString *)filePath openOptions:(WSStorageOpenOptions)openOptions openDisposition:(WSSFileOpenDisposition)openDisposition success:(void (^)(WSStorageStreamTransaction*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
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

#endif // __WSSFileRandomAccessStream_DEFINED__

// Windows.Storage.Streams.FileInputStream
#ifndef __WSSFileInputStream_DEFINED__
#define __WSSFileInputStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSFileInputStream : RTObject <WSSIInputStream, WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WSSFileInputStream_DEFINED__

// Windows.Storage.Streams.FileOutputStream
#ifndef __WSSFileOutputStream_DEFINED__
#define __WSSFileOutputStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSFileOutputStream : RTObject <WSSIOutputStream, WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WSSFileOutputStream_DEFINED__

// Windows.Storage.Streams.RandomAccessStreamOverStream
#ifndef __WSSRandomAccessStreamOverStream_DEFINED__
#define __WSSRandomAccessStreamOverStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSRandomAccessStreamOverStream : RTObject <WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
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

#endif // __WSSRandomAccessStreamOverStream_DEFINED__

// Windows.Storage.Streams.InputStreamOverStream
#ifndef __WSSInputStreamOverStream_DEFINED__
#define __WSSInputStreamOverStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSInputStreamOverStream : RTObject <WSSIInputStream, WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)readAsync:(RTObject<WSSIBuffer>*)buffer count:(unsigned int)count options:(WSSInputStreamOptions)options success:(void (^)(RTObject<WSSIBuffer>*))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WSSInputStreamOverStream_DEFINED__

// Windows.Storage.Streams.OutputStreamOverStream
#ifndef __WSSOutputStreamOverStream_DEFINED__
#define __WSSOutputStreamOverStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSOutputStreamOverStream : RTObject <WSSIOutputStream, WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)writeAsync:(RTObject<WSSIBuffer>*)buffer success:(void (^)(unsigned int))success progress:(void (^)(unsigned int))progress failure:(void (^)(NSError*))failure;
- (void)flushAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)close;
@end

#endif // __WSSOutputStreamOverStream_DEFINED__

// Windows.Storage.Streams.InMemoryRandomAccessStream
#ifndef __WSSInMemoryRandomAccessStream_DEFINED__
#define __WSSInMemoryRandomAccessStream_DEFINED__

OBJCUWPWINDOWSSTORAGEEXPORT
@interface WSSInMemoryRandomAccessStream : RTObject <WSSIRandomAccessStream, WSSIOutputStream, WFIClosable, WSSIInputStream>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
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

#endif // __WSSInMemoryRandomAccessStream_DEFINED__

