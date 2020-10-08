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

// WindowsApplicationModelStore.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelStore.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WSLicenseInformation, WSListingInformation, WSPurchaseResults, WSProductPurchaseDisplayProperties, WSUnfulfilledConsumable, WSProductLicense, WSProductListing, WSCurrentApp, WSCurrentAppSimulator;
@protocol WSICurrentApp, WSICurrentAppWithConsumables, WSICurrentAppWithCampaignId, WSICurrentApp2Statics, WSICurrentAppSimulator, WSICurrentAppSimulatorWithCampaignId, WSICurrentAppSimulatorWithConsumables, WSIPurchaseResults, WSILicenseInformation, WSIProductLicense, WSIListingInformation, WSIListingInformation2, WSIProductListing, WSIProductListingWithConsumables, WSIProductListing2, WSICurrentAppStaticsWithFiltering, WSICurrentAppSimulatorStaticsWithFiltering, WSIProductLicenseWithFulfillment, WSIProductListingWithMetadata, WSIUnfulfilledConsumable, WSIProductPurchaseDisplayProperties, WSIProductPurchaseDisplayPropertiesFactory;

// Windows.ApplicationModel.Store.ProductPurchaseStatus
enum _WSProductPurchaseStatus {
    WSProductPurchaseStatusSucceeded = 0,
    WSProductPurchaseStatusAlreadyPurchased = 1,
    WSProductPurchaseStatusNotFulfilled = 2,
    WSProductPurchaseStatusNotPurchased = 3,
};
typedef unsigned WSProductPurchaseStatus;

// Windows.ApplicationModel.Store.ProductType
enum _WSProductType {
    WSProductTypeUnknown = 0,
    WSProductTypeDurable = 1,
    WSProductTypeConsumable = 2,
};
typedef unsigned WSProductType;

// Windows.ApplicationModel.Store.FulfillmentResult
enum _WSFulfillmentResult {
    WSFulfillmentResultSucceeded = 0,
    WSFulfillmentResultNothingToFulfill = 1,
    WSFulfillmentResultPurchasePending = 2,
    WSFulfillmentResultPurchaseReverted = 3,
    WSFulfillmentResultServerError = 4,
};
typedef unsigned WSFulfillmentResult;

#include "WindowsFoundation.h"
#include "WindowsStorage.h"
// Windows.ApplicationModel.Store.LicenseChangedEventHandler
#ifndef __WSLicenseChangedEventHandler__DEFINED
#define __WSLicenseChangedEventHandler__DEFINED
typedef void(^WSLicenseChangedEventHandler)();
#endif // __WSLicenseChangedEventHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Store.LicenseChangedEventHandler
#ifndef __WSLicenseChangedEventHandler__DEFINED
#define __WSLicenseChangedEventHandler__DEFINED
typedef void(^WSLicenseChangedEventHandler)();
#endif // __WSLicenseChangedEventHandler__DEFINED

// Windows.ApplicationModel.Store.LicenseInformation
#ifndef __WSLicenseInformation_DEFINED__
#define __WSLicenseInformation_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSLicenseInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* expirationDate;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isTrial;
@property (readonly) NSDictionary* /* NSString *, WSProductLicense* */ productLicenses;
- (EventRegistrationToken)addLicenseChangedEvent:(WSLicenseChangedEventHandler)del;
- (void)removeLicenseChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WSLicenseInformation_DEFINED__

// Windows.ApplicationModel.Store.ListingInformation
#ifndef __WSListingInformation_DEFINED__
#define __WSListingInformation_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSListingInformation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int ageRating;
@property (readonly) NSString * currentMarket;
@property (readonly) NSString * Description;
@property (readonly) NSString * formattedPrice;
@property (readonly) NSString * name;
@property (readonly) NSDictionary* /* NSString *, WSProductListing* */ productListings;
@property (readonly) NSString * currencyCode;
@property (readonly) NSString * formattedBasePrice;
@property (readonly) BOOL isOnSale;
@property (readonly) WFDateTime* saleEndDate;
@end

#endif // __WSListingInformation_DEFINED__

// Windows.ApplicationModel.Store.PurchaseResults
#ifndef __WSPurchaseResults_DEFINED__
#define __WSPurchaseResults_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSPurchaseResults : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * offerId;
@property (readonly) NSString * receiptXml;
@property (readonly) WSProductPurchaseStatus status;
@property (readonly) WFGUID* transactionId;
@end

#endif // __WSPurchaseResults_DEFINED__

// Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
#ifndef __WSProductPurchaseDisplayProperties_DEFINED__
#define __WSProductPurchaseDisplayProperties_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSProductPurchaseDisplayProperties : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WSProductPurchaseDisplayProperties*)makeProductPurchaseDisplayProperties:(NSString *)name ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * name;
@property (retain) WFUri* image;
@property (retain) NSString * Description;
@end

#endif // __WSProductPurchaseDisplayProperties_DEFINED__

// Windows.ApplicationModel.Store.UnfulfilledConsumable
#ifndef __WSUnfulfilledConsumable_DEFINED__
#define __WSUnfulfilledConsumable_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSUnfulfilledConsumable : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * offerId;
@property (readonly) NSString * productId;
@property (readonly) WFGUID* transactionId;
@end

#endif // __WSUnfulfilledConsumable_DEFINED__

// Windows.ApplicationModel.Store.ProductLicense
#ifndef __WSProductLicense_DEFINED__
#define __WSProductLicense_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSProductLicense : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFDateTime* expirationDate;
@property (readonly) BOOL isActive;
@property (readonly) NSString * productId;
@property (readonly) BOOL isConsumable;
@end

#endif // __WSProductLicense_DEFINED__

// Windows.ApplicationModel.Store.ProductListing
#ifndef __WSProductListing_DEFINED__
#define __WSProductListing_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSProductListing : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * formattedPrice;
@property (readonly) NSString * name;
@property (readonly) NSString * productId;
@property (readonly) NSString * formattedBasePrice;
@property (readonly) BOOL isOnSale;
@property (readonly) WFDateTime* saleEndDate;
@property (readonly) NSString * currencyCode;
@property (readonly) NSString * Description;
@property (readonly) WFUri* imageUri;
@property (readonly) id<NSFastEnumeration> /* NSString * */ keywords;
@property (readonly) NSString * tag;
@property (readonly) WSProductType productType;
@end

#endif // __WSProductListing_DEFINED__

// Windows.ApplicationModel.Store.CurrentApp
#ifndef __WSCurrentApp_DEFINED__
#define __WSCurrentApp_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSCurrentApp : RTObject
+ (void)getCustomerPurchaseIdAsync:(NSString *)serviceTicket publisherUserId:(NSString *)publisherUserId success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)getCustomerCollectionsIdAsync:(NSString *)serviceTicket publisherUserId:(NSString *)publisherUserId success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)reportConsumableFulfillmentAsync:(NSString *)productId transactionId:(WFGUID*)transactionId success:(void (^)(WSFulfillmentResult))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseWithResultsAsync:(NSString *)productId success:(void (^)(WSPurchaseResults*))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseWithDisplayPropertiesAsync:(NSString *)productId offerId:(NSString *)offerId displayProperties:(WSProductPurchaseDisplayProperties*)displayProperties success:(void (^)(WSPurchaseResults*))success failure:(void (^)(NSError*))failure;
+ (void)getUnfulfilledConsumablesAsyncWithSuccess:(void (^)(NSArray* /* WSUnfulfilledConsumable* */))success failure:(void (^)(NSError*))failure;
+ (void)getAppPurchaseCampaignIdAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationByProductIdsAsync:(id<NSFastEnumeration> /* NSString * */)productIds success:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationByKeywordsAsync:(id<NSFastEnumeration> /* NSString * */)keywords success:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (void)reportProductFulfillment:(NSString *)productId;
+ (void)requestAppPurchaseAsync:(BOOL)includeReceipt success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseAsync:(NSString *)productId includeReceipt:(BOOL)includeReceipt success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationAsyncWithSuccess:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (void)getAppReceiptAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)getProductReceiptAsync:(NSString *)productId success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (WFGUID*)appId;
+ (WSLicenseInformation*)licenseInformation;
+ (WFUri*)linkUri;
@end

#endif // __WSCurrentApp_DEFINED__

// Windows.ApplicationModel.Store.CurrentAppSimulator
#ifndef __WSCurrentAppSimulator_DEFINED__
#define __WSCurrentAppSimulator_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELSTOREEXPORT
@interface WSCurrentAppSimulator : RTObject
+ (void)getAppPurchaseCampaignIdAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)requestAppPurchaseAsync:(BOOL)includeReceipt success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseAsync:(NSString *)productId includeReceipt:(BOOL)includeReceipt success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationAsyncWithSuccess:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (void)getAppReceiptAsyncWithSuccess:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (void)getProductReceiptAsync:(NSString *)productId success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)reloadSimulatorAsync:(WSStorageFile*)simulatorSettingsFile;
+ (void)reportConsumableFulfillmentAsync:(NSString *)productId transactionId:(WFGUID*)transactionId success:(void (^)(WSFulfillmentResult))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseWithResultsAsync:(NSString *)productId success:(void (^)(WSPurchaseResults*))success failure:(void (^)(NSError*))failure;
+ (void)requestProductPurchaseWithDisplayPropertiesAsync:(NSString *)productId offerId:(NSString *)offerId displayProperties:(WSProductPurchaseDisplayProperties*)displayProperties success:(void (^)(WSPurchaseResults*))success failure:(void (^)(NSError*))failure;
+ (void)getUnfulfilledConsumablesAsyncWithSuccess:(void (^)(NSArray* /* WSUnfulfilledConsumable* */))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationByProductIdsAsync:(id<NSFastEnumeration> /* NSString * */)productIds success:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (void)loadListingInformationByKeywordsAsync:(id<NSFastEnumeration> /* NSString * */)keywords success:(void (^)(WSListingInformation*))success failure:(void (^)(NSError*))failure;
+ (WFGUID*)appId;
+ (WSLicenseInformation*)licenseInformation;
+ (WFUri*)linkUri;
@end

#endif // __WSCurrentAppSimulator_DEFINED__

