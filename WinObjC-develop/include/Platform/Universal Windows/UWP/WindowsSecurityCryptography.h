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

// WindowsSecurityCryptography.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYEXPORT
#define OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsSecurityCryptography.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSCCryptographicBuffer;
@protocol WSCICryptographicBufferStatics;

// Windows.Security.Cryptography.BinaryStringEncoding
enum _WSCBinaryStringEncoding {
    WSCBinaryStringEncodingUtf8 = 0,
    WSCBinaryStringEncodingUtf16LE = 1,
    WSCBinaryStringEncodingUtf16BE = 2,
};
typedef unsigned WSCBinaryStringEncoding;

#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Security.Cryptography.CryptographicBuffer
#ifndef __WSCCryptographicBuffer_DEFINED__
#define __WSCCryptographicBuffer_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYEXPORT
@interface WSCCryptographicBuffer : RTObject
+ (BOOL)compare:(RTObject<WSSIBuffer>*)object1 object2:(RTObject<WSSIBuffer>*)object2;
+ (RTObject<WSSIBuffer>*)generateRandom:(unsigned int)length;
+ (unsigned int)generateRandomNumber;
+ (RTObject<WSSIBuffer>*)createFromByteArray:(NSArray* /* uint8_t */)value;
+ (void)copyToByteArray:(RTObject<WSSIBuffer>*)buffer value:(NSArray* /* uint8_t */*)value;
+ (RTObject<WSSIBuffer>*)decodeFromHexString:(NSString *)value;
+ (NSString *)encodeToHexString:(RTObject<WSSIBuffer>*)buffer;
+ (RTObject<WSSIBuffer>*)decodeFromBase64String:(NSString *)value;
+ (NSString *)encodeToBase64String:(RTObject<WSSIBuffer>*)buffer;
+ (RTObject<WSSIBuffer>*)convertStringToBinary:(NSString *)value encoding:(WSCBinaryStringEncoding)encoding;
+ (NSString *)convertBinaryToString:(WSCBinaryStringEncoding)encoding buffer:(RTObject<WSSIBuffer>*)buffer;
@end

#endif // __WSCCryptographicBuffer_DEFINED__

