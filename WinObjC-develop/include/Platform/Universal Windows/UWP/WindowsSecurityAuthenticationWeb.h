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

// WindowsSecurityAuthenticationWeb.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSECURITYAUTHENTICATIONWEBEXPORT
#define OBJCUWPWINDOWSSECURITYAUTHENTICATIONWEBEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsSecurityAuthenticationWeb.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSAWWebAuthenticationResult, WSAWWebAuthenticationBroker;
@protocol WSAWIWebAuthenticationResult, WSAWIWebAuthenticationBrokerStatics, WSAWIWebAuthenticationBrokerStatics2;

// Windows.Security.Authentication.Web.TokenBindingKeyType
enum _WSAWTokenBindingKeyType {
    WSAWTokenBindingKeyTypeRsa2048 = 0,
    WSAWTokenBindingKeyTypeEcdsaP256 = 1,
    WSAWTokenBindingKeyTypeAnyExisting = 2,
};
typedef unsigned WSAWTokenBindingKeyType;

// Windows.Security.Authentication.Web.WebAuthenticationStatus
enum _WSAWWebAuthenticationStatus {
    WSAWWebAuthenticationStatusSuccess = 0,
    WSAWWebAuthenticationStatusUserCancel = 1,
    WSAWWebAuthenticationStatusErrorHttp = 2,
};
typedef unsigned WSAWWebAuthenticationStatus;

// Windows.Security.Authentication.Web.WebAuthenticationOptions
enum _WSAWWebAuthenticationOptions {
    WSAWWebAuthenticationOptionsNone = 0,
    WSAWWebAuthenticationOptionsSilentMode = 1,
    WSAWWebAuthenticationOptionsUseTitle = 2,
    WSAWWebAuthenticationOptionsUseHttpPost = 4,
    WSAWWebAuthenticationOptionsUseCorporateNetwork = 8,
};
typedef unsigned WSAWWebAuthenticationOptions;

#include "WindowsFoundation.h"
#include "WindowsFoundationCollections.h"

#import <Foundation/Foundation.h>

// Windows.Security.Authentication.Web.WebAuthenticationResult
#ifndef __WSAWWebAuthenticationResult_DEFINED__
#define __WSAWWebAuthenticationResult_DEFINED__

OBJCUWPWINDOWSSECURITYAUTHENTICATIONWEBEXPORT
@interface WSAWWebAuthenticationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * responseData;
@property (readonly) unsigned int responseErrorDetail;
@property (readonly) WSAWWebAuthenticationStatus responseStatus;
@end

#endif // __WSAWWebAuthenticationResult_DEFINED__

// Windows.Security.Authentication.Web.WebAuthenticationBroker
#ifndef __WSAWWebAuthenticationBroker_DEFINED__
#define __WSAWWebAuthenticationBroker_DEFINED__

OBJCUWPWINDOWSSECURITYAUTHENTICATIONWEBEXPORT
@interface WSAWWebAuthenticationBroker : RTObject
+ (void)authenticateAndContinue:(WFUri*)requestUri;
+ (void)authenticateWithCallbackUriAndContinue:(WFUri*)requestUri callbackUri:(WFUri*)callbackUri;
+ (void)authenticateWithCallbackUriContinuationDataAndOptionsAndContinue:(WFUri*)requestUri callbackUri:(WFUri*)callbackUri continuationData:(WFCValueSet*)continuationData options:(WSAWWebAuthenticationOptions)options;
+ (void)authenticateSilentlyAsync:(WFUri*)requestUri success:(void (^)(WSAWWebAuthenticationResult*))success failure:(void (^)(NSError*))failure;
+ (void)authenticateSilentlyWithOptionsAsync:(WFUri*)requestUri options:(WSAWWebAuthenticationOptions)options success:(void (^)(WSAWWebAuthenticationResult*))success failure:(void (^)(NSError*))failure;
+ (void)authenticateWithCallbackUriAsync:(WSAWWebAuthenticationOptions)options requestUri:(WFUri*)requestUri callbackUri:(WFUri*)callbackUri success:(void (^)(WSAWWebAuthenticationResult*))success failure:(void (^)(NSError*))failure;
+ (void)authenticateWithoutCallbackUriAsync:(WSAWWebAuthenticationOptions)options requestUri:(WFUri*)requestUri success:(void (^)(WSAWWebAuthenticationResult*))success failure:(void (^)(NSError*))failure;
+ (WFUri*)getCurrentApplicationCallbackUri;
@end

#endif // __WSAWWebAuthenticationBroker_DEFINED__

