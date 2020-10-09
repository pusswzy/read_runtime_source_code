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

// WindowsDataXmlXsl.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDATAXMLXSLEXPORT
#define OBJCUWPWINDOWSDATAXMLXSLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDataXmlXsl.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDXXXsltProcessor;
@protocol WDXXIXsltProcessor, WDXXIXsltProcessor2, WDXXIXsltProcessorFactory;

#include "WindowsDataXmlDom.h"

#import <Foundation/Foundation.h>

// Windows.Data.Xml.Xsl.XsltProcessor
#ifndef __WDXXXsltProcessor_DEFINED__
#define __WDXXXsltProcessor_DEFINED__

OBJCUWPWINDOWSDATAXMLXSLEXPORT
@interface WDXXXsltProcessor : RTObject
+ (WDXXXsltProcessor*)makeInstance:(WDXDXmlDocument*)document ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (NSString *)transformToString:(RTObject<WDXDIXmlNode>*)inputNode;
- (WDXDXmlDocument*)transformToDocument:(RTObject<WDXDIXmlNode>*)inputNode;
@end

#endif // __WDXXXsltProcessor_DEFINED__

