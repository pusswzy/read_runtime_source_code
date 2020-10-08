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

// WindowsSecurityCredentials.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSCKeyCredentialRetrievalResult, WSCKeyCredentialOperationResult, WSCKeyCredentialAttestationResult, WSCKeyCredential, WSCKeyCredentialManager, WSCWebAccountProvider, WSCWebAccount, WSCPasswordCredential, WSCPasswordVault, WSCPasswordCredentialPropertyStore;
@protocol WSCIKeyCredentialManagerStatics, WSCIKeyCredential, WSCIKeyCredentialRetrievalResult, WSCIKeyCredentialOperationResult, WSCIKeyCredentialAttestationResult, WSCIWebAccountFactory, WSCIWebAccount, WSCIWebAccount2, WSCIWebAccountProviderFactory, WSCIWebAccountProvider, WSCIWebAccountProvider2, WSCIWebAccountProvider3, WSCIPasswordCredential, WSCICredentialFactory, WSCIPasswordVault;

// Windows.Security.Credentials.KeyCredentialStatus
enum _WSCKeyCredentialStatus {
    WSCKeyCredentialStatusSuccess = 0,
    WSCKeyCredentialStatusUnknownError = 1,
    WSCKeyCredentialStatusNotFound = 2,
    WSCKeyCredentialStatusUserCanceled = 3,
    WSCKeyCredentialStatusUserPrefersPassword = 4,
    WSCKeyCredentialStatusCredentialAlreadyExists = 5,
    WSCKeyCredentialStatusSecurityDeviceLocked = 6,
};
typedef unsigned WSCKeyCredentialStatus;

// Windows.Security.Credentials.KeyCredentialAttestationStatus
enum _WSCKeyCredentialAttestationStatus {
    WSCKeyCredentialAttestationStatusSuccess = 0,
    WSCKeyCredentialAttestationStatusUnknownError = 1,
    WSCKeyCredentialAttestationStatusNotSupported = 2,
    WSCKeyCredentialAttestationStatusTemporaryFailure = 3,
};
typedef unsigned WSCKeyCredentialAttestationStatus;

// Windows.Security.Credentials.KeyCredentialCreationOption
enum _WSCKeyCredentialCreationOption {
    WSCKeyCredentialCreationOptionReplaceExisting = 0,
    WSCKeyCredentialCreationOptionFailIfExists = 1,
};
typedef unsigned WSCKeyCredentialCreationOption;

// Windows.Security.Credentials.WebAccountState
enum _WSCWebAccountState {
    WSCWebAccountStateNone = 0,
    WSCWebAccountStateConnected = 1,
    WSCWebAccountStateError = 2,
};
typedef unsigned WSCWebAccountState;

// Windows.Security.Credentials.WebAccountPictureSize
enum _WSCWebAccountPictureSize {
    WSCWebAccountPictureSizeSize64x64 = 64,
    WSCWebAccountPictureSizeSize208x208 = 208,
    WSCWebAccountPictureSizeSize424x424 = 424,
    WSCWebAccountPictureSizeSize1080x1080 = 1080,
};
typedef unsigned WSCWebAccountPictureSize;

#include "WindowsFoundationCollections.h"
#include "WindowsStorageStreams.h"
#include "WindowsSecurityCryptographyCore.h"
#include "WindowsFoundation.h"
#include "WindowsSystem.h"

#import <Foundation/Foundation.h>

// Windows.Security.Credentials.IWebAccount
#ifndef __WSCIWebAccount_DEFINED__
#define __WSCIWebAccount_DEFINED__

@protocol WSCIWebAccount
@property (readonly) WSCWebAccountState state;
@property (readonly) NSString * userName;
@property (readonly) WSCWebAccountProvider* webAccountProvider;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCIWebAccount : RTObject <WSCIWebAccount>
@end

#endif // __WSCIWebAccount_DEFINED__

// Windows.Security.Credentials.KeyCredentialRetrievalResult
#ifndef __WSCKeyCredentialRetrievalResult_DEFINED__
#define __WSCKeyCredentialRetrievalResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCKeyCredentialRetrievalResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSCKeyCredential* credential;
@property (readonly) WSCKeyCredentialStatus status;
@end

#endif // __WSCKeyCredentialRetrievalResult_DEFINED__

// Windows.Security.Credentials.KeyCredentialOperationResult
#ifndef __WSCKeyCredentialOperationResult_DEFINED__
#define __WSCKeyCredentialOperationResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCKeyCredentialOperationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* result;
@property (readonly) WSCKeyCredentialStatus status;
@end

#endif // __WSCKeyCredentialOperationResult_DEFINED__

// Windows.Security.Credentials.KeyCredentialAttestationResult
#ifndef __WSCKeyCredentialAttestationResult_DEFINED__
#define __WSCKeyCredentialAttestationResult_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCKeyCredentialAttestationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* attestationBuffer;
@property (readonly) RTObject<WSSIBuffer>* certificateChainBuffer;
@property (readonly) WSCKeyCredentialAttestationStatus status;
@end

#endif // __WSCKeyCredentialAttestationResult_DEFINED__

// Windows.Security.Credentials.KeyCredential
#ifndef __WSCKeyCredential_DEFINED__
#define __WSCKeyCredential_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCKeyCredential : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * name;
- (RTObject<WSSIBuffer>*)retrievePublicKeyWithDefaultBlobType;
- (RTObject<WSSIBuffer>*)retrievePublicKeyWithBlobType:(WSCCCryptographicPublicKeyBlobType)blobType;
- (void)requestSignAsync:(RTObject<WSSIBuffer>*)data success:(void (^)(WSCKeyCredentialOperationResult*))success failure:(void (^)(NSError*))failure;
- (void)getAttestationAsyncWithSuccess:(void (^)(WSCKeyCredentialAttestationResult*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSCKeyCredential_DEFINED__

// Windows.Security.Credentials.KeyCredentialManager
#ifndef __WSCKeyCredentialManager_DEFINED__
#define __WSCKeyCredentialManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCKeyCredentialManager : RTObject
+ (void)isSupportedAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)renewAttestationAsync;
+ (void)requestCreateAsync:(NSString *)name option:(WSCKeyCredentialCreationOption)option success:(void (^)(WSCKeyCredentialRetrievalResult*))success failure:(void (^)(NSError*))failure;
+ (void)openAsync:(NSString *)name success:(void (^)(WSCKeyCredentialRetrievalResult*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)deleteAsync:(NSString *)name;
@end

#endif // __WSCKeyCredentialManager_DEFINED__

// Windows.Security.Credentials.WebAccountProvider
#ifndef __WSCWebAccountProvider_DEFINED__
#define __WSCWebAccountProvider_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCWebAccountProvider : RTObject
+ (WSCWebAccountProvider*)makeWebAccountProvider:(NSString *)id displayName:(NSString *)displayName iconUri:(WFUri*)iconUri ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * displayName;
@property (readonly) WFUri* iconUri;
@property (readonly) NSString * id;
@property (readonly) NSString * authority;
@property (readonly) NSString * displayPurpose;
@property (readonly) WSUser* user;
@end

#endif // __WSCWebAccountProvider_DEFINED__

// Windows.Security.Credentials.WebAccount
#ifndef __WSCWebAccount_DEFINED__
#define __WSCWebAccount_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCWebAccount : RTObject <WSCIWebAccount>
+ (WSCWebAccount*)makeWebAccount:(WSCWebAccountProvider*)webAccountProvider userName:(NSString *)userName state:(WSCWebAccountState)state ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSCWebAccountState state;
@property (readonly) NSString * userName;
@property (readonly) WSCWebAccountProvider* webAccountProvider;
@property (readonly) NSString * id;
@property (readonly) NSDictionary* /* NSString *, NSString * */ properties;
- (void)getPictureAsync:(WSCWebAccountPictureSize)desizedSize success:(void (^)(RTObject<WSSIRandomAccessStream>*))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)signOutAsync;
- (RTObject<WFIAsyncAction>*)signOutWithClientIdAsync:(NSString *)clientId;
@end

#endif // __WSCWebAccount_DEFINED__

// Windows.Security.Credentials.PasswordCredential
#ifndef __WSCPasswordCredential_DEFINED__
#define __WSCPasswordCredential_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCPasswordCredential : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WSCPasswordCredential*)makePasswordCredential:(NSString *)resource userName:(NSString *)userName password:(NSString *)password ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * userName;
@property (retain) NSString * resource;
@property (retain) NSString * password;
@property (readonly) RTObject<WFCIPropertySet>* properties;
- (void)retrievePassword;
@end

#endif // __WSCPasswordCredential_DEFINED__

// Windows.Security.Credentials.PasswordVault
#ifndef __WSCPasswordVault_DEFINED__
#define __WSCPasswordVault_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCPasswordVault : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)add:(WSCPasswordCredential*)credential;
- (void)remove:(WSCPasswordCredential*)credential;
- (WSCPasswordCredential*)retrieve:(NSString *)resource userName:(NSString *)userName;
- (NSArray* /* WSCPasswordCredential* */)findAllByResource:(NSString *)resource;
- (NSArray* /* WSCPasswordCredential* */)findAllByUserName:(NSString *)userName;
- (NSArray* /* WSCPasswordCredential* */)retrieveAll;
@end

#endif // __WSCPasswordVault_DEFINED__

// Windows.Foundation.Collections.IPropertySet
#ifndef __WFCIPropertySet_DEFINED__
#define __WFCIPropertySet_DEFINED__

@protocol WFCIPropertySet
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
-(EventRegistrationToken)addObserver: (RTCollectionListener)receiver;
-(void)removeObserver: (EventRegistrationToken)receiverToken;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WFCIPropertySet : RTObject <WFCIPropertySet>
@end

#endif // __WFCIPropertySet_DEFINED__

// Windows.Security.Credentials.PasswordCredentialPropertyStore
#ifndef __WSCPasswordCredentialPropertyStore_DEFINED__
#define __WSCPasswordCredentialPropertyStore_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSCPasswordCredentialPropertyStore : RTObject <WFCIPropertySet>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
// Could not generate add_MapChanged (Can't marshal Windows.Foundation.Collections.MapChangedEventHandler`2<String,System.Object>)
- (void)removeMapChangedEvent:(EventRegistrationToken)tok;
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
-(EventRegistrationToken)addObserver: (RTCollectionListener)receiver;
-(void)removeObserver: (EventRegistrationToken)receiverToken;
@end

#endif // __WSCPasswordCredentialPropertyStore_DEFINED__

