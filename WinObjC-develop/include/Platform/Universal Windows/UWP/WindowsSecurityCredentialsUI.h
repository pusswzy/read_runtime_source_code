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

// WindowsSecurityCredentialsUI.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT
#define OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsSecurityCredentialsUI.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSCUCredentialPickerOptions, WSCUCredentialPickerResults, WSCUCredentialPicker, WSCUUserConsentVerifier;
@protocol WSCUICredentialPickerOptions, WSCUICredentialPickerStatics, WSCUICredentialPickerResults, WSCUIUserConsentVerifierStatics;

// Windows.Security.Credentials.UI.AuthenticationProtocol
enum _WSCUAuthenticationProtocol {
    WSCUAuthenticationProtocolBasic = 0,
    WSCUAuthenticationProtocolDigest = 1,
    WSCUAuthenticationProtocolNtlm = 2,
    WSCUAuthenticationProtocolKerberos = 3,
    WSCUAuthenticationProtocolNegotiate = 4,
    WSCUAuthenticationProtocolCredSsp = 5,
    WSCUAuthenticationProtocolCustom = 6,
};
typedef unsigned WSCUAuthenticationProtocol;

// Windows.Security.Credentials.UI.CredentialSaveOption
enum _WSCUCredentialSaveOption {
    WSCUCredentialSaveOptionUnselected = 0,
    WSCUCredentialSaveOptionSelected = 1,
    WSCUCredentialSaveOptionHidden = 2,
};
typedef unsigned WSCUCredentialSaveOption;

// Windows.Security.Credentials.UI.UserConsentVerifierAvailability
enum _WSCUUserConsentVerifierAvailability {
    WSCUUserConsentVerifierAvailabilityAvailable = 0,
    WSCUUserConsentVerifierAvailabilityDeviceNotPresent = 1,
    WSCUUserConsentVerifierAvailabilityNotConfiguredForUser = 2,
    WSCUUserConsentVerifierAvailabilityDisabledByPolicy = 3,
    WSCUUserConsentVerifierAvailabilityDeviceBusy = 4,
};
typedef unsigned WSCUUserConsentVerifierAvailability;

// Windows.Security.Credentials.UI.UserConsentVerificationResult
enum _WSCUUserConsentVerificationResult {
    WSCUUserConsentVerificationResultVerified = 0,
    WSCUUserConsentVerificationResultDeviceNotPresent = 1,
    WSCUUserConsentVerificationResultNotConfiguredForUser = 2,
    WSCUUserConsentVerificationResultDisabledByPolicy = 3,
    WSCUUserConsentVerificationResultDeviceBusy = 4,
    WSCUUserConsentVerificationResultRetriesExhausted = 5,
    WSCUUserConsentVerificationResultCanceled = 6,
};
typedef unsigned WSCUUserConsentVerificationResult;

#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Security.Credentials.UI.CredentialPickerOptions
#ifndef __WSCUCredentialPickerOptions_DEFINED__
#define __WSCUCredentialPickerOptions_DEFINED__

OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT
@interface WSCUCredentialPickerOptions : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * targetName;
@property (retain) RTObject<WSSIBuffer>* previousCredential;
@property (retain) NSString * message;
@property unsigned int errorCode;
@property (retain) NSString * customAuthenticationProtocol;
@property WSCUCredentialSaveOption credentialSaveOption;
@property (retain) NSString * caption;
@property BOOL callerSavesCredential;
@property WSCUAuthenticationProtocol authenticationProtocol;
@property BOOL alwaysDisplayDialog;
@end

#endif // __WSCUCredentialPickerOptions_DEFINED__

// Windows.Security.Credentials.UI.CredentialPickerResults
#ifndef __WSCUCredentialPickerResults_DEFINED__
#define __WSCUCredentialPickerResults_DEFINED__

OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT
@interface WSCUCredentialPickerResults : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* credential;
@property (readonly) NSString * credentialDomainName;
@property (readonly) NSString * credentialPassword;
@property (readonly) WSCUCredentialSaveOption credentialSaveOption;
@property (readonly) BOOL credentialSaved;
@property (readonly) NSString * credentialUserName;
@property (readonly) unsigned int errorCode;
@end

#endif // __WSCUCredentialPickerResults_DEFINED__

// Windows.Security.Credentials.UI.CredentialPicker
#ifndef __WSCUCredentialPicker_DEFINED__
#define __WSCUCredentialPicker_DEFINED__

OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT
@interface WSCUCredentialPicker : RTObject
+ (void)pickWithOptionsAsync:(WSCUCredentialPickerOptions*)options success:(void (^)(WSCUCredentialPickerResults*))success failure:(void (^)(NSError*))failure;
+ (void)pickWithMessageAsync:(NSString *)targetName message:(NSString *)message success:(void (^)(WSCUCredentialPickerResults*))success failure:(void (^)(NSError*))failure;
+ (void)pickWithCaptionAsync:(NSString *)targetName message:(NSString *)message caption:(NSString *)caption success:(void (^)(WSCUCredentialPickerResults*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSCUCredentialPicker_DEFINED__

// Windows.Security.Credentials.UI.UserConsentVerifier
#ifndef __WSCUUserConsentVerifier_DEFINED__
#define __WSCUUserConsentVerifier_DEFINED__

OBJCUWPWINDOWSSECURITYCREDENTIALSUIEXPORT
@interface WSCUUserConsentVerifier : RTObject
+ (void)checkAvailabilityAsyncWithSuccess:(void (^)(WSCUUserConsentVerifierAvailability))success failure:(void (^)(NSError*))failure;
+ (void)requestVerificationAsync:(NSString *)message success:(void (^)(WSCUUserConsentVerificationResult))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSCUUserConsentVerifier_DEFINED__

