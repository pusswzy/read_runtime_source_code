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

// WindowsSecurityAuthenticationWebProvider.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSAWPWebProviderTokenRequest, WSAWPWebProviderTokenResponse, WSAWPWebAccountClientView, WSAWPWebAccountManager, WSAWPWebAccountProviderRequestTokenOperation, WSAWPWebAccountProviderGetTokenSilentOperation, WSAWPWebAccountProviderAddAccountOperation, WSAWPWebAccountProviderManageAccountOperation, WSAWPWebAccountProviderDeleteAccountOperation, WSAWPWebAccountProviderSignOutAccountOperation, WSAWPWebAccountProviderRetrieveCookiesOperation, WSAWPWebAccountProviderTriggerDetails;
@protocol WSAWPIWebAccountProviderOperation, WSAWPIWebProviderTokenRequest, WSAWPIWebProviderTokenRequest2, WSAWPIWebProviderTokenResponse, WSAWPIWebProviderTokenResponseFactory, WSAWPIWebAccountClientView, WSAWPIWebAccountClientViewFactory, WSAWPIWebAccountManagerStatics, WSAWPIWebAccountManagerStatics2, WSAWPIWebAccountScopeManagerStatics, WSAWPIWebAccountMapManagerStatics, WSAWPIWebAccountManagerStatics3, WSAWPIWebAccountManagerStatics4, WSAWPIWebAccountProviderBaseReportOperation, WSAWPIWebAccountProviderUIReportOperation, WSAWPIWebAccountProviderSilentReportOperation, WSAWPIWebAccountProviderTokenOperation, WSAWPIWebAccountProviderAddAccountOperation, WSAWPIWebAccountProviderManageAccountOperation, WSAWPIWebAccountProviderDeleteAccountOperation, WSAWPIWebAccountProviderSignOutAccountOperation, WSAWPIWebAccountProviderRetrieveCookiesOperation, WSAWPIWebAccountProviderTokenObjects, WSAWPIWebAccountProviderTokenObjects2;

// Windows.Security.Authentication.Web.Provider.WebAccountProviderOperationKind
enum _WSAWPWebAccountProviderOperationKind {
    WSAWPWebAccountProviderOperationKindRequestToken = 0,
    WSAWPWebAccountProviderOperationKindGetTokenSilently = 1,
    WSAWPWebAccountProviderOperationKindAddAccount = 2,
    WSAWPWebAccountProviderOperationKindManageAccount = 3,
    WSAWPWebAccountProviderOperationKindDeleteAccount = 4,
    WSAWPWebAccountProviderOperationKindRetrieveCookies = 5,
    WSAWPWebAccountProviderOperationKindSignOutAccount = 6,
};
typedef unsigned WSAWPWebAccountProviderOperationKind;

// Windows.Security.Authentication.Web.Provider.WebAccountSelectionOptions
enum _WSAWPWebAccountSelectionOptions {
    WSAWPWebAccountSelectionOptionsDefault = 0,
    WSAWPWebAccountSelectionOptionsNew = 1,
};
typedef unsigned WSAWPWebAccountSelectionOptions;

// Windows.Security.Authentication.Web.Provider.WebAccountClientViewType
enum _WSAWPWebAccountClientViewType {
    WSAWPWebAccountClientViewTypeIdOnly = 0,
    WSAWPWebAccountClientViewTypeIdAndProperties = 1,
};
typedef unsigned WSAWPWebAccountClientViewType;

// Windows.Security.Authentication.Web.Provider.WebAccountScope
enum _WSAWPWebAccountScope {
    WSAWPWebAccountScopePerUser = 0,
    WSAWPWebAccountScopePerApplication = 1,
};
typedef unsigned WSAWPWebAccountScope;

#include "WindowsSecurityAuthenticationWebCore.h"
#include "WindowsSecurityCryptographyCore.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsSecurityCredentials.h"
#include "WindowsWebHttp.h"
#include "WindowsSecurityAuthenticationWeb.h"
#include "WindowsSystem.h"

#import <Foundation/Foundation.h>

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation
#ifndef __WSAWPIWebAccountProviderOperation_DEFINED__
#define __WSAWPIWebAccountProviderOperation_DEFINED__

@protocol WSAWPIWebAccountProviderOperation
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderOperation : RTObject <WSAWPIWebAccountProviderOperation>
@end

#endif // __WSAWPIWebAccountProviderOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation
#ifndef __WSAWPIWebAccountProviderBaseReportOperation_DEFINED__
#define __WSAWPIWebAccountProviderBaseReportOperation_DEFINED__

@protocol WSAWPIWebAccountProviderBaseReportOperation
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderBaseReportOperation : RTObject <WSAWPIWebAccountProviderBaseReportOperation>
@end

#endif // __WSAWPIWebAccountProviderBaseReportOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation
#ifndef __WSAWPIWebAccountProviderUIReportOperation_DEFINED__
#define __WSAWPIWebAccountProviderUIReportOperation_DEFINED__

@protocol WSAWPIWebAccountProviderUIReportOperation <WSAWPIWebAccountProviderBaseReportOperation>
- (void)reportUserCanceled;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderUIReportOperation : RTObject <WSAWPIWebAccountProviderUIReportOperation>
@end

#endif // __WSAWPIWebAccountProviderUIReportOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation
#ifndef __WSAWPIWebAccountProviderSilentReportOperation_DEFINED__
#define __WSAWPIWebAccountProviderSilentReportOperation_DEFINED__

@protocol WSAWPIWebAccountProviderSilentReportOperation <WSAWPIWebAccountProviderBaseReportOperation>
- (void)reportUserInteractionRequired;
- (void)reportUserInteractionRequiredWithError:(WSAWCWebProviderError*)value;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderSilentReportOperation : RTObject <WSAWPIWebAccountProviderSilentReportOperation>
@end

#endif // __WSAWPIWebAccountProviderSilentReportOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation
#ifndef __WSAWPIWebAccountProviderTokenOperation_DEFINED__
#define __WSAWPIWebAccountProviderTokenOperation_DEFINED__

@protocol WSAWPIWebAccountProviderTokenOperation <WSAWPIWebAccountProviderOperation>
@property (retain) WFDateTime* cacheExpirationTime;
@property (readonly) WSAWPWebProviderTokenRequest* providerRequest;
@property (readonly) NSMutableArray* /* WSAWPWebProviderTokenResponse* */ providerResponses;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderTokenOperation : RTObject <WSAWPIWebAccountProviderTokenOperation>
@end

#endif // __WSAWPIWebAccountProviderTokenOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects
#ifndef __WSAWPIWebAccountProviderTokenObjects_DEFINED__
#define __WSAWPIWebAccountProviderTokenObjects_DEFINED__

@protocol WSAWPIWebAccountProviderTokenObjects
@property (readonly) RTObject<WSAWPIWebAccountProviderOperation>* operation;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderTokenObjects : RTObject <WSAWPIWebAccountProviderTokenObjects>
@end

#endif // __WSAWPIWebAccountProviderTokenObjects_DEFINED__

// Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2
#ifndef __WSAWPIWebAccountProviderTokenObjects2_DEFINED__
#define __WSAWPIWebAccountProviderTokenObjects2_DEFINED__

@protocol WSAWPIWebAccountProviderTokenObjects2 <WSAWPIWebAccountProviderTokenObjects>
@property (readonly) WSUser* user;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPIWebAccountProviderTokenObjects2 : RTObject <WSAWPIWebAccountProviderTokenObjects2>
@end

#endif // __WSAWPIWebAccountProviderTokenObjects2_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest
#ifndef __WSAWPWebProviderTokenRequest_DEFINED__
#define __WSAWPWebProviderTokenRequest_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebProviderTokenRequest : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFUri* applicationCallbackUri;
@property (readonly) WSAWCWebTokenRequest* clientRequest;
@property (readonly) WSAWPWebAccountSelectionOptions webAccountSelectionOptions;
@property (readonly) NSArray* /* WSCWebAccount* */ webAccounts;
- (void)getApplicationTokenBindingKeyAsync:(WSAWTokenBindingKeyType)keyType target:(WFUri*)target success:(void (^)(WSCCCryptographicKey*))success failure:(void (^)(NSError*))failure;
- (void)getApplicationTokenBindingKeyIdAsync:(WSAWTokenBindingKeyType)keyType target:(WFUri*)target success:(void (^)(RTObject<WSSIBuffer>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WSAWPWebProviderTokenRequest_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse
#ifndef __WSAWPWebProviderTokenResponse_DEFINED__
#define __WSAWPWebProviderTokenResponse_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebProviderTokenResponse : RTObject
+ (WSAWPWebProviderTokenResponse*)make:(WSAWCWebTokenResponse*)webTokenResponse ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWCWebTokenResponse* clientResponse;
@end

#endif // __WSAWPWebProviderTokenResponse_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountClientView
#ifndef __WSAWPWebAccountClientView_DEFINED__
#define __WSAWPWebAccountClientView_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountClientView : RTObject
+ (WSAWPWebAccountClientView*)make:(WSAWPWebAccountClientViewType)viewType applicationCallbackUri:(WFUri*)applicationCallbackUri ACTIVATOR;
+ (WSAWPWebAccountClientView*)makeWithPairwiseId:(WSAWPWebAccountClientViewType)viewType applicationCallbackUri:(WFUri*)applicationCallbackUri accountPairwiseId:(NSString *)accountPairwiseId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * accountPairwiseId;
@property (readonly) WFUri* applicationCallbackUri;
@property (readonly) WSAWPWebAccountClientViewType type;
@end

#endif // __WSAWPWebAccountClientView_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountManager
#ifndef __WSAWPWebAccountManager_DEFINED__
#define __WSAWPWebAccountManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountManager : RTObject
+ (RTObject<WFIAsyncAction>*)pullCookiesAsync:(NSString *)uriString callerPFN:(NSString *)callerPFN;
+ (void)addWebAccountWithScopeAsync:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props scope:(WSAWPWebAccountScope)scope success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)setScopeAsync:(WSCWebAccount*)webAccount scope:(WSAWPWebAccountScope)scope;
+ (WSAWPWebAccountScope)getScope:(WSCWebAccount*)webAccount;
+ (RTObject<WFIAsyncAction>*)updateWebAccountPropertiesAsync:(WSCWebAccount*)webAccount webAccountUserName:(NSString *)webAccountUserName additionalProperties:(NSDictionary* /* NSString *, NSString * */)additionalProperties;
+ (void)addWebAccountAsync:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)deleteWebAccountAsync:(WSCWebAccount*)webAccount;
+ (void)findAllProviderWebAccountsAsyncWithSuccess:(void (^)(NSArray* /* WSCWebAccount* */))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)pushCookiesAsync:(WFUri*)uri cookies:(NSArray* /* WWHHttpCookie* */)cookies;
+ (RTObject<WFIAsyncAction>*)setViewAsync:(WSCWebAccount*)webAccount view:(WSAWPWebAccountClientView*)view;
+ (RTObject<WFIAsyncAction>*)clearViewAsync:(WSCWebAccount*)webAccount applicationCallbackUri:(WFUri*)applicationCallbackUri;
+ (void)getViewsAsync:(WSCWebAccount*)webAccount success:(void (^)(NSArray* /* WSAWPWebAccountClientView* */))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)setWebAccountPictureAsync:(WSCWebAccount*)webAccount webAccountPicture:(RTObject<WSSIRandomAccessStream>*)webAccountPicture;
+ (RTObject<WFIAsyncAction>*)clearWebAccountPictureAsync:(WSCWebAccount*)webAccount;
+ (void)findAllProviderWebAccountsForUserAsync:(WSUser*)user success:(void (^)(NSArray* /* WSCWebAccount* */))success failure:(void (^)(NSError*))failure;
+ (void)addWebAccountForUserAsync:(WSUser*)user webAccountId:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (void)addWebAccountWithScopeForUserAsync:(WSUser*)user webAccountId:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props scope:(WSAWPWebAccountScope)scope success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (void)addWebAccountWithScopeAndMapForUserAsync:(WSUser*)user webAccountId:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props scope:(WSAWPWebAccountScope)scope perUserWebAccountId:(NSString *)perUserWebAccountId success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)invalidateAppCacheForAllAccountsAsync;
+ (RTObject<WFIAsyncAction>*)invalidateAppCacheForAccountAsync:(WSCWebAccount*)webAccount;
+ (void)addWebAccountWithScopeAndMapAsync:(NSString *)webAccountId webAccountUserName:(NSString *)webAccountUserName props:(NSDictionary* /* NSString *, NSString * */)props scope:(WSAWPWebAccountScope)scope perUserWebAccountId:(NSString *)perUserWebAccountId success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)setPerAppToPerUserAccountAsync:(WSCWebAccount*)perAppAccount perUserWebAccountId:(NSString *)perUserWebAccountId;
+ (void)getPerUserFromPerAppAccountAsync:(WSCWebAccount*)perAppAccount success:(void (^)(WSCWebAccount*))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)clearPerUserFromPerAppAccountAsync:(WSCWebAccount*)perAppAccount;
@end

#endif // __WSAWPWebAccountManager_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation
#ifndef __WSAWPWebAccountProviderRequestTokenOperation_DEFINED__
#define __WSAWPWebAccountProviderRequestTokenOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderRequestTokenOperation : RTObject <WSAWPIWebAccountProviderTokenOperation, WSAWPIWebAccountProviderOperation, WSAWPIWebAccountProviderUIReportOperation, WSAWPIWebAccountProviderBaseReportOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
@property (retain) WFDateTime* cacheExpirationTime;
@property (readonly) WSAWPWebProviderTokenRequest* providerRequest;
@property (readonly) NSMutableArray* /* WSAWPWebProviderTokenResponse* */ providerResponses;
- (void)reportUserCanceled;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

#endif // __WSAWPWebAccountProviderRequestTokenOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation
#ifndef __WSAWPWebAccountProviderGetTokenSilentOperation_DEFINED__
#define __WSAWPWebAccountProviderGetTokenSilentOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderGetTokenSilentOperation : RTObject <WSAWPIWebAccountProviderTokenOperation, WSAWPIWebAccountProviderOperation, WSAWPIWebAccountProviderSilentReportOperation, WSAWPIWebAccountProviderBaseReportOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
@property (retain) WFDateTime* cacheExpirationTime;
@property (readonly) WSAWPWebProviderTokenRequest* providerRequest;
@property (readonly) NSMutableArray* /* WSAWPWebProviderTokenResponse* */ providerResponses;
- (void)reportUserInteractionRequired;
- (void)reportUserInteractionRequiredWithError:(WSAWCWebProviderError*)value;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

#endif // __WSAWPWebAccountProviderGetTokenSilentOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation
#ifndef __WSAWPWebAccountProviderAddAccountOperation_DEFINED__
#define __WSAWPWebAccountProviderAddAccountOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderAddAccountOperation : RTObject <WSAWPIWebAccountProviderOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
- (void)reportCompleted;
@end

#endif // __WSAWPWebAccountProviderAddAccountOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation
#ifndef __WSAWPWebAccountProviderManageAccountOperation_DEFINED__
#define __WSAWPWebAccountProviderManageAccountOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderManageAccountOperation : RTObject <WSAWPIWebAccountProviderOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSCWebAccount* webAccount;
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
- (void)reportCompleted;
@end

#endif // __WSAWPWebAccountProviderManageAccountOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation
#ifndef __WSAWPWebAccountProviderDeleteAccountOperation_DEFINED__
#define __WSAWPWebAccountProviderDeleteAccountOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderDeleteAccountOperation : RTObject <WSAWPIWebAccountProviderOperation, WSAWPIWebAccountProviderBaseReportOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSCWebAccount* webAccount;
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

#endif // __WSAWPWebAccountProviderDeleteAccountOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation
#ifndef __WSAWPWebAccountProviderSignOutAccountOperation_DEFINED__
#define __WSAWPWebAccountProviderSignOutAccountOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderSignOutAccountOperation : RTObject <WSAWPIWebAccountProviderOperation, WSAWPIWebAccountProviderBaseReportOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
@property (readonly) WFUri* applicationCallbackUri;
@property (readonly) NSString * clientId;
@property (readonly) WSCWebAccount* webAccount;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

#endif // __WSAWPWebAccountProviderSignOutAccountOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation
#ifndef __WSAWPWebAccountProviderRetrieveCookiesOperation_DEFINED__
#define __WSAWPWebAccountProviderRetrieveCookiesOperation_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderRetrieveCookiesOperation : RTObject <WSAWPIWebAccountProviderOperation, WSAWPIWebAccountProviderBaseReportOperation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WSAWPWebAccountProviderOperationKind kind;
@property (retain) WFUri* uri;
@property (readonly) WFUri* applicationCallbackUri;
@property (readonly) WFUri* context;
@property (readonly) NSMutableArray* /* WWHHttpCookie* */ cookies;
- (void)reportCompleted;
- (void)reportError:(WSAWCWebProviderError*)value;
@end

#endif // __WSAWPWebAccountProviderRetrieveCookiesOperation_DEFINED__

// Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails
#ifndef __WSAWPWebAccountProviderTriggerDetails_DEFINED__
#define __WSAWPWebAccountProviderTriggerDetails_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WSAWPWebAccountProviderTriggerDetails : RTObject <WSAWPIWebAccountProviderTokenObjects, WSAWPIWebAccountProviderTokenObjects2>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSAWPIWebAccountProviderOperation>* operation;
@property (readonly) WSUser* user;
@end

#endif // __WSAWPWebAccountProviderTriggerDetails_DEFINED__

