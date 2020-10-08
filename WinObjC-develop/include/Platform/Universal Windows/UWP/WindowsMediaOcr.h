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

// WindowsMediaOcr.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIAOCREXPORT
#define OBJCUWPWINDOWSMEDIAOCREXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaOcr.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMOOcrWord, WMOOcrLine, WMOOcrResult, WMOOcrEngine;
@protocol WMOIOcrWord, WMOIOcrLine, WMOIOcrResult, WMOIOcrEngine, WMOIOcrEngineStatics;

#include "WindowsFoundation.h"
#include "WindowsGraphicsImaging.h"
#include "WindowsGlobalization.h"

#import <Foundation/Foundation.h>

// Windows.Media.Ocr.OcrWord
#ifndef __WMOOcrWord_DEFINED__
#define __WMOOcrWord_DEFINED__

OBJCUWPWINDOWSMEDIAOCREXPORT
@interface WMOOcrWord : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFRect* boundingRect;
@property (readonly) NSString * text;
@end

#endif // __WMOOcrWord_DEFINED__

// Windows.Media.Ocr.OcrLine
#ifndef __WMOOcrLine_DEFINED__
#define __WMOOcrLine_DEFINED__

OBJCUWPWINDOWSMEDIAOCREXPORT
@interface WMOOcrLine : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * text;
@property (readonly) NSArray* /* WMOOcrWord* */ words;
@end

#endif // __WMOOcrLine_DEFINED__

// Windows.Media.Ocr.OcrResult
#ifndef __WMOOcrResult_DEFINED__
#define __WMOOcrResult_DEFINED__

OBJCUWPWINDOWSMEDIAOCREXPORT
@interface WMOOcrResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WMOOcrLine* */ lines;
@property (readonly) NSString * text;
@property (readonly) id /* double */ textAngle;
@end

#endif // __WMOOcrResult_DEFINED__

// Windows.Media.Ocr.OcrEngine
#ifndef __WMOOcrEngine_DEFINED__
#define __WMOOcrEngine_DEFINED__

OBJCUWPWINDOWSMEDIAOCREXPORT
@interface WMOOcrEngine : RTObject
+ (BOOL)isLanguageSupported:(WGLanguage*)language;
+ (WMOOcrEngine*)tryCreateFromLanguage:(WGLanguage*)language;
+ (WMOOcrEngine*)tryCreateFromUserProfileLanguages;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WGLanguage* recognizerLanguage;
+ (NSArray* /* WGLanguage* */)availableRecognizerLanguages;
+ (unsigned int)maxImageDimension;
- (void)recognizeAsync:(WGISoftwareBitmap*)bitmap success:(void (^)(WMOOcrResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WMOOcrEngine_DEFINED__

