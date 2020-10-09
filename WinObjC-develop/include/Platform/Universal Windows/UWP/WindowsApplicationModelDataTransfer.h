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

// WindowsApplicationModelDataTransfer.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelDataTransfer.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WADStandardDataFormats, WADDataPackagePropertySetView, WADDataPackagePropertySet, WADDataProviderDeferral, WADDataProviderRequest, WADOperationCompletedEventArgs, WADShareProviderOperation, WADShareProvider, WADDataPackageView, WADShareTargetInfo, WADShareCompletedEventArgs, WADDataPackage, WADHtmlFormatHelper, WADClipboard, WADShareUIOptions, WADDataRequestDeferral, WADDataRequest, WADDataRequestedEventArgs, WADShareProvidersRequestedEventArgs, WADTargetApplicationChosenEventArgs, WADDataTransferManager, WADSharedStorageAccessManager;
@protocol WADIStandardDataFormatsStatics, WADIStandardDataFormatsStatics2, WADIDataPackagePropertySetView, WADIDataPackagePropertySetView2, WADIDataPackagePropertySetView3, WADIDataPackagePropertySet, WADIDataPackagePropertySet2, WADIDataPackagePropertySet3, WADIDataProviderDeferral, WADIDataProviderRequest, WADIOperationCompletedEventArgs, WADIOperationCompletedEventArgs2, WADIShareProvider, WADIShareProviderFactory, WADIShareProviderOperation, WADIShareTargetInfo, WADIShareCompletedEventArgs, WADIDataPackageView, WADIDataPackageView2, WADIDataPackageView3, WADIDataPackageView4, WADIDataPackage, WADIDataPackage2, WADIDataPackage3, WADIHtmlFormatHelperStatics, WADIClipboardStatics, WADIShareUIOptions, WADIDataRequestDeferral, WADIDataRequest, WADIDataRequestedEventArgs, WADIShareProvidersRequestedEventArgs, WADITargetApplicationChosenEventArgs, WADIDataTransferManager, WADIDataTransferManager2, WADIDataTransferManagerStatics, WADIDataTransferManagerStatics2, WADIDataTransferManagerStatics3, WADISharedStorageAccessManagerStatics;

// Windows.ApplicationModel.DataTransfer.DataPackageOperation
enum _WADDataPackageOperation {
    WADDataPackageOperationNone = 0,
    WADDataPackageOperationCopy = 1,
    WADDataPackageOperationMove = 2,
    WADDataPackageOperationLink = 4,
};
typedef unsigned WADDataPackageOperation;

// Windows.ApplicationModel.DataTransfer.ShareUITheme
enum _WADShareUITheme {
    WADShareUIThemeDefault = 0,
    WADShareUIThemeLight = 1,
    WADShareUIThemeDark = 2,
};
typedef unsigned WADShareUITheme;

#include "WindowsStorageStreams.h"
#include "WindowsFoundation.h"
#include "WindowsUI.h"
#include "WindowsStorage.h"
#include "WindowsSecurityEnterpriseData.h"
// Windows.ApplicationModel.DataTransfer.DataProviderHandler
#ifndef __WADDataProviderHandler__DEFINED
#define __WADDataProviderHandler__DEFINED
typedef void(^WADDataProviderHandler)(WADDataProviderRequest* request);
#endif // __WADDataProviderHandler__DEFINED

// Windows.ApplicationModel.DataTransfer.ShareProviderHandler
#ifndef __WADShareProviderHandler__DEFINED
#define __WADShareProviderHandler__DEFINED
typedef void(^WADShareProviderHandler)(WADShareProviderOperation* operation);
#endif // __WADShareProviderHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.ApplicationModel.DataTransfer.DataProviderHandler
#ifndef __WADDataProviderHandler__DEFINED
#define __WADDataProviderHandler__DEFINED
typedef void(^WADDataProviderHandler)(WADDataProviderRequest* request);
#endif // __WADDataProviderHandler__DEFINED

// Windows.ApplicationModel.DataTransfer.ShareProviderHandler
#ifndef __WADShareProviderHandler__DEFINED
#define __WADShareProviderHandler__DEFINED
typedef void(^WADShareProviderHandler)(WADShareProviderOperation* operation);
#endif // __WADShareProviderHandler__DEFINED

// Windows.ApplicationModel.DataTransfer.StandardDataFormats
#ifndef __WADStandardDataFormats_DEFINED__
#define __WADStandardDataFormats_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADStandardDataFormats : RTObject
+ (NSString *)bitmap;
+ (NSString *)html;
+ (NSString *)rtf;
+ (NSString *)storageItems;
+ (NSString *)text;
+ (NSString *)uri;
+ (NSString *)applicationLink;
+ (NSString *)webLink;
@end

#endif // __WADStandardDataFormats_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
#ifndef __WADDataPackagePropertySetView_DEFINED__
#define __WADDataPackagePropertySetView_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataPackagePropertySetView : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFUri* applicationListingUri;
@property (readonly) NSString * applicationName;
@property (readonly) NSString * Description;
@property (readonly) NSArray* /* NSString * */ fileTypes;
@property (readonly) WSSRandomAccessStreamReference* thumbnail;
@property (readonly) NSString * title;
@property (readonly) WFUri* contentSourceApplicationLink;
@property (readonly) WFUri* contentSourceWebLink;
@property (readonly) WUColor* logoBackgroundColor;
@property (readonly) NSString * packageFamilyName;
@property (readonly) RTObject<WSSIRandomAccessStreamReference>* square30x30Logo;
@property (readonly) NSString * enterpriseId;
@property (readonly) unsigned int size;
- (id)objectForKey: (id)key;
- (NSArray*)allKeys;
- (NSArray*)allKeysForObject: (id)obj;
- (NSArray*)allValues;
- (id)keyEnumerator;
- (unsigned int)count;

@end

#endif // __WADDataPackagePropertySetView_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
#ifndef __WADDataPackagePropertySet_DEFINED__
#define __WADDataPackagePropertySet_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataPackagePropertySet : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject<WSSIRandomAccessStreamReference>* thumbnail;
@property (retain) NSString * title;
@property (retain) NSString * Description;
@property (retain) NSString * applicationName;
@property (retain) WFUri* applicationListingUri;
@property (readonly) NSMutableArray* /* NSString * */ fileTypes;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* square30x30Logo;
@property (retain) NSString * packageFamilyName;
@property (retain) WUColor* logoBackgroundColor;
@property (retain) WFUri* contentSourceWebLink;
@property (retain) WFUri* contentSourceApplicationLink;
@property (retain) NSString * enterpriseId;
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

#endif // __WADDataPackagePropertySet_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataProviderDeferral
#ifndef __WADDataProviderDeferral_DEFINED__
#define __WADDataProviderDeferral_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataProviderDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WADDataProviderDeferral_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataProviderRequest
#ifndef __WADDataProviderRequest_DEFINED__
#define __WADDataProviderRequest_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataProviderRequest : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* deadline;
@property (readonly) NSString * formatId;
- (WADDataProviderDeferral*)getDeferral;
- (void)setData:(RTObject*)value;
@end

#endif // __WADDataProviderRequest_DEFINED__

// Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
#ifndef __WADOperationCompletedEventArgs_DEFINED__
#define __WADOperationCompletedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADOperationCompletedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WADDataPackageOperation operation;
@property (readonly) NSString * acceptedFormatId;
@end

#endif // __WADOperationCompletedEventArgs_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareProviderOperation
#ifndef __WADShareProviderOperation_DEFINED__
#define __WADShareProviderOperation_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareProviderOperation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WADDataPackageView* data;
@property (readonly) WADShareProvider* provider;
- (void)reportCompleted;
@end

#endif // __WADShareProviderOperation_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareProvider
#ifndef __WADShareProvider_DEFINED__
#define __WADShareProvider_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareProvider : RTObject
+ (WADShareProvider*)make:(NSString *)title displayIcon:(WSSRandomAccessStreamReference*)displayIcon backgroundColor:(WUColor*)backgroundColor handler:(WADShareProviderHandler)handler ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject* tag;
@property (readonly) WUColor* backgroundColor;
@property (readonly) WSSRandomAccessStreamReference* displayIcon;
@property (readonly) NSString * title;
@end

#endif // __WADShareProvider_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataPackageView
#ifndef __WADDataPackageView_DEFINED__
#define __WADDataPackageView_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataPackageView : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* NSString * */ availableFormats;
@property (readonly) WADDataPackagePropertySetView* properties;
@property (readonly) WADDataPackageOperation requestedOperation;
- (void)reportOperationCompleted:(WADDataPackageOperation)value;
- (BOOL)contains:(NSString *)formatId;
- (void)getDataAsync:(NSString *)formatId success:(void (^)(RTObject*))success failure:(void (^)(NSError*))failure;
- (void)getTextAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
- (void)getCustomTextAsync:(NSString *)formatId success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
- (void)getUriAsyncWithSuccess:(void (^)(WFUri*))success failure:(void (^)(NSError*))failure;
- (void)getHtmlFormatAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
- (void)getResourceMapAsyncWithSuccess:(void (^)(NSDictionary* /* NSString *, WSSRandomAccessStreamReference* */))success failure:(void (^)(NSError*))failure;
- (void)getRtfAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
- (void)getBitmapAsyncWithSuccess:(void (^)(WSSRandomAccessStreamReference*))success failure:(void (^)(NSError*))failure;
- (void)getStorageItemsAsyncWithSuccess:(void (^)(NSArray* /* RTObject<WSIStorageItem>* */))success failure:(void (^)(NSError*))failure;
- (void)getApplicationLinkAsyncWithSuccess:(void (^)(WFUri*))success failure:(void (^)(NSError*))failure;
- (void)getWebLinkAsyncWithSuccess:(void (^)(WFUri*))success failure:(void (^)(NSError*))failure;
- (void)requestAccessAsyncWithSuccess:(void (^)(WSEProtectionPolicyEvaluationResult))success failure:(void (^)(NSError*))failure;
- (void)requestAccessWithEnterpriseIdAsync:(NSString *)enterpriseId success:(void (^)(WSEProtectionPolicyEvaluationResult))success failure:(void (^)(NSError*))failure;
- (WSEProtectionPolicyEvaluationResult)unlockAndAssumeEnterpriseIdentity;
- (void)setAcceptedFormatId:(NSString *)formatId;
@end

#endif // __WADDataPackageView_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareTargetInfo
#ifndef __WADShareTargetInfo_DEFINED__
#define __WADShareTargetInfo_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareTargetInfo : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * appUserModelId;
@property (readonly) WADShareProvider* shareProvider;
@end

#endif // __WADShareTargetInfo_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs
#ifndef __WADShareCompletedEventArgs_DEFINED__
#define __WADShareCompletedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareCompletedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WADShareTargetInfo* shareTarget;
@end

#endif // __WADShareCompletedEventArgs_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataPackage
#ifndef __WADDataPackage_DEFINED__
#define __WADDataPackage_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataPackage : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WADDataPackageOperation requestedOperation;
@property (readonly) WADDataPackagePropertySet* properties;
@property (readonly) NSMutableDictionary* /* NSString *, WSSRandomAccessStreamReference* */ resourceMap;
- (EventRegistrationToken)addDestroyedEvent:(void(^)(WADDataPackage*, RTObject*))del;
- (void)removeDestroyedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addOperationCompletedEvent:(void(^)(WADDataPackage*, WADOperationCompletedEventArgs*))del;
- (void)removeOperationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addShareCompletedEvent:(void(^)(WADDataPackage*, WADShareCompletedEventArgs*))del;
- (void)removeShareCompletedEvent:(EventRegistrationToken)tok;
- (WADDataPackageView*)getView;
- (void)setData:(NSString *)formatId value:(RTObject*)value;
- (void)setDataProvider:(NSString *)formatId delayRenderer:(WADDataProviderHandler)delayRenderer;
- (void)setText:(NSString *)value;
- (void)setUri:(WFUri*)value;
- (void)setHtmlFormat:(NSString *)value;
- (void)setRtf:(NSString *)value;
- (void)setBitmap:(WSSRandomAccessStreamReference*)value;
- (void)setStorageItemsReadOnly:(id<NSFastEnumeration> /* RTObject<WSIStorageItem>* */)value;
- (void)setStorageItems:(id<NSFastEnumeration> /* RTObject<WSIStorageItem>* */)value readOnly:(BOOL)readOnly;
- (void)setApplicationLink:(WFUri*)value;
- (void)setWebLink:(WFUri*)value;
@end

#endif // __WADDataPackage_DEFINED__

// Windows.ApplicationModel.DataTransfer.HtmlFormatHelper
#ifndef __WADHtmlFormatHelper_DEFINED__
#define __WADHtmlFormatHelper_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADHtmlFormatHelper : RTObject
+ (NSString *)getStaticFragment:(NSString *)htmlFormat;
+ (NSString *)createHtmlFormat:(NSString *)htmlFragment;
@end

#endif // __WADHtmlFormatHelper_DEFINED__

// Windows.ApplicationModel.DataTransfer.Clipboard
#ifndef __WADClipboard_DEFINED__
#define __WADClipboard_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADClipboard : RTObject
+ (WADDataPackageView*)getContent;
+ (void)setContent:(WADDataPackage*)content;
+ (void)flush;
+ (void)clear;
+ (EventRegistrationToken)addContentChangedEvent:(void(^)(RTObject*, RTObject*))del;
+ (void)removeContentChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WADClipboard_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareUIOptions
#ifndef __WADShareUIOptions_DEFINED__
#define __WADShareUIOptions_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareUIOptions : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WADShareUITheme theme;
@property (retain) id /* WFRect* */ selectionRect;
@end

#endif // __WADShareUIOptions_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataRequestDeferral
#ifndef __WADDataRequestDeferral_DEFINED__
#define __WADDataRequestDeferral_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataRequestDeferral : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)complete;
@end

#endif // __WADDataRequestDeferral_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataRequest
#ifndef __WADDataRequest_DEFINED__
#define __WADDataRequest_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataRequest : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WADDataPackage* data;
@property (readonly) WFDateTime* deadline;
- (void)failWithDisplayText:(NSString *)value;
- (WADDataRequestDeferral*)getDeferral;
@end

#endif // __WADDataRequest_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs
#ifndef __WADDataRequestedEventArgs_DEFINED__
#define __WADDataRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WADDataRequest* request;
@end

#endif // __WADDataRequestedEventArgs_DEFINED__

// Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs
#ifndef __WADShareProvidersRequestedEventArgs_DEFINED__
#define __WADShareProvidersRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADShareProvidersRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WADDataPackageView* data;
@property (readonly) NSMutableArray* /* WADShareProvider* */ providers;
- (WFDeferral*)getDeferral;
@end

#endif // __WADShareProvidersRequestedEventArgs_DEFINED__

// Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs
#ifndef __WADTargetApplicationChosenEventArgs_DEFINED__
#define __WADTargetApplicationChosenEventArgs_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADTargetApplicationChosenEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * applicationName;
@end

#endif // __WADTargetApplicationChosenEventArgs_DEFINED__

// Windows.ApplicationModel.DataTransfer.DataTransferManager
#ifndef __WADDataTransferManager_DEFINED__
#define __WADDataTransferManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADDataTransferManager : RTObject
+ (BOOL)isSupported;
+ (void)showShareUIWithOptions:(WADShareUIOptions*)options;
+ (void)showShareUI;
+ (WADDataTransferManager*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addDataRequestedEvent:(void(^)(WADDataTransferManager*, WADDataRequestedEventArgs*))del;
- (void)removeDataRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTargetApplicationChosenEvent:(void(^)(WADDataTransferManager*, WADTargetApplicationChosenEventArgs*))del;
- (void)removeTargetApplicationChosenEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addShareProvidersRequestedEvent:(void(^)(WADDataTransferManager*, WADShareProvidersRequestedEventArgs*))del;
- (void)removeShareProvidersRequestedEvent:(EventRegistrationToken)tok;
@end

#endif // __WADDataTransferManager_DEFINED__

// Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager
#ifndef __WADSharedStorageAccessManager_DEFINED__
#define __WADSharedStorageAccessManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELDATATRANSFEREXPORT
@interface WADSharedStorageAccessManager : RTObject
+ (NSString *)addFile:(RTObject<WSIStorageFile>*)file;
+ (void)redeemTokenForFileAsync:(NSString *)token success:(void (^)(WSStorageFile*))success failure:(void (^)(NSError*))failure;
+ (void)removeFile:(NSString *)token;
@end

#endif // __WADSharedStorageAccessManager_DEFINED__

