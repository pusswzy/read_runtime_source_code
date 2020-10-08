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

// WindowsSecurityCryptographyDataProtection.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYDATAPROTECTIONEXPORT
#define OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYDATAPROTECTIONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsSecurityCryptographyDataProtection.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSCDDataProtectionProvider;
@protocol WSCDIDataProtectionProvider, WSCDIDataProtectionProviderFactory;

#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Security.Cryptography.DataProtection.DataProtectionProvider
#ifndef __WSCDDataProtectionProvider_DEFINED__
#define __WSCDDataProtectionProvider_DEFINED__

OBJCUWPWINDOWSSECURITYCRYPTOGRAPHYDATAPROTECTIONEXPORT
@interface WSCDDataProtectionProvider : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WSCDDataProtectionProvider*)makeOverloadExplicit:(NSString *)protectionDescriptor ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)protectAsync:(RTObject<WSSIBuffer>*)data success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
- (void)unprotectAsync:(RTObject<WSSIBuffer>*)data success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)protectStreamAsync:(RTObject<WSSIInputStream>*)src dest:(RTObject<WSSIOutputStream>*)dest;
- (RTObject<WFIAsyncAction>*)unprotectStreamAsync:(RTObject<WSSIInputStream>*)src dest:(RTObject<WSSIOutputStream>*)dest;
@end

#endif // __WSCDDataProtectionProvider_DEFINED__

