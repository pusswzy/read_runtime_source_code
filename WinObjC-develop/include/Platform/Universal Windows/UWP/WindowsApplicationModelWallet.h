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

// WindowsApplicationModelWallet.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelWallet.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WAWWalletBarcode, WAWWalletTransaction, WAWWalletRelevantLocation, WAWWalletItemCustomProperty, WAWWalletVerb, WAWWalletItem, WAWWalletItemStore, WAWWalletManager;
@protocol WAWIWalletBarcode, WAWIWalletItemCustomProperty, WAWIWalletVerb, WAWIWalletItem, WAWIWalletTransaction, WAWIWalletRelevantLocation, WAWIWalletItemStore, WAWIWalletItemStore2, WAWIWalletManagerStatics, WAWIWalletItemCustomPropertyFactory, WAWIWalletVerbFactory, WAWIWalletItemFactory, WAWIWalletBarcodeFactory;

// Windows.ApplicationModel.Wallet.WalletActionKind
enum _WAWWalletActionKind {
    WAWWalletActionKindOpenItem = 0,
    WAWWalletActionKindTransaction = 1,
    WAWWalletActionKindMoreTransactions = 2,
    WAWWalletActionKindMessage = 3,
    WAWWalletActionKindVerb = 4,
};
typedef unsigned WAWWalletActionKind;

// Windows.ApplicationModel.Wallet.WalletBarcodeSymbology
enum _WAWWalletBarcodeSymbology {
    WAWWalletBarcodeSymbologyInvalid = 0,
    WAWWalletBarcodeSymbologyUpca = 1,
    WAWWalletBarcodeSymbologyUpce = 2,
    WAWWalletBarcodeSymbologyEan13 = 3,
    WAWWalletBarcodeSymbologyEan8 = 4,
    WAWWalletBarcodeSymbologyItf = 5,
    WAWWalletBarcodeSymbologyCode39 = 6,
    WAWWalletBarcodeSymbologyCode128 = 7,
    WAWWalletBarcodeSymbologyQr = 8,
    WAWWalletBarcodeSymbologyPdf417 = 9,
    WAWWalletBarcodeSymbologyAztec = 10,
    WAWWalletBarcodeSymbologyCustom = 100000,
};
typedef unsigned WAWWalletBarcodeSymbology;

// Windows.ApplicationModel.Wallet.WalletDetailViewPosition
enum _WAWWalletDetailViewPosition {
    WAWWalletDetailViewPositionHidden = 0,
    WAWWalletDetailViewPositionHeaderField1 = 1,
    WAWWalletDetailViewPositionHeaderField2 = 2,
    WAWWalletDetailViewPositionPrimaryField1 = 3,
    WAWWalletDetailViewPositionPrimaryField2 = 4,
    WAWWalletDetailViewPositionSecondaryField1 = 5,
    WAWWalletDetailViewPositionSecondaryField2 = 6,
    WAWWalletDetailViewPositionSecondaryField3 = 7,
    WAWWalletDetailViewPositionSecondaryField4 = 8,
    WAWWalletDetailViewPositionSecondaryField5 = 9,
    WAWWalletDetailViewPositionCenterField1 = 10,
    WAWWalletDetailViewPositionFooterField1 = 11,
    WAWWalletDetailViewPositionFooterField2 = 12,
    WAWWalletDetailViewPositionFooterField3 = 13,
    WAWWalletDetailViewPositionFooterField4 = 14,
};
typedef unsigned WAWWalletDetailViewPosition;

// Windows.ApplicationModel.Wallet.WalletSummaryViewPosition
enum _WAWWalletSummaryViewPosition {
    WAWWalletSummaryViewPositionHidden = 0,
    WAWWalletSummaryViewPositionField1 = 1,
    WAWWalletSummaryViewPositionField2 = 2,
};
typedef unsigned WAWWalletSummaryViewPosition;

// Windows.ApplicationModel.Wallet.WalletItemKind
enum _WAWWalletItemKind {
    WAWWalletItemKindInvalid = 0,
    WAWWalletItemKindDeal = 1,
    WAWWalletItemKindGeneral = 2,
    WAWWalletItemKindPaymentInstrument = 3,
    WAWWalletItemKindTicket = 4,
    WAWWalletItemKindBoardingPass = 5,
    WAWWalletItemKindMembershipCard = 6,
};
typedef unsigned WAWWalletItemKind;

#include "WindowsUI.h"
#include "WindowsStorageStreams.h"
#include "WindowsFoundation.h"
#include "WindowsDevicesGeolocation.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Wallet.WalletBarcode
#ifndef __WAWWalletBarcode_DEFINED__
#define __WAWWalletBarcode_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletBarcode : RTObject
+ (WAWWalletBarcode*)makeWalletBarcode:(WAWWalletBarcodeSymbology)symbology value:(NSString *)value ACTIVATOR;
+ (WAWWalletBarcode*)makeCustomWalletBarcode:(RTObject<WSSIRandomAccessStreamReference>*)streamToBarcodeImage ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WAWWalletBarcodeSymbology symbology;
@property (readonly) NSString * value;
- (void)getImageAsyncWithSuccess:(void (^)(RTObject<WSSIRandomAccessStreamReference>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WAWWalletBarcode_DEFINED__

// Windows.ApplicationModel.Wallet.WalletTransaction
#ifndef __WAWWalletTransaction_DEFINED__
#define __WAWWalletTransaction_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletTransaction : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) id /* WFDateTime* */ transactionDate;
@property BOOL isLaunchable;
@property BOOL ignoreTimeOfDay;
@property (retain) NSString * displayLocation;
@property (retain) NSString * displayAmount;
@property (retain) NSString * Description;
@end

#endif // __WAWWalletTransaction_DEFINED__

// Windows.ApplicationModel.Wallet.WalletRelevantLocation
#ifndef __WAWWalletRelevantLocation_DEFINED__
#define __WAWWalletRelevantLocation_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletRelevantLocation : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WDGBasicGeoposition* position;
@property (retain) NSString * displayMessage;
@end

#endif // __WAWWalletRelevantLocation_DEFINED__

// Windows.ApplicationModel.Wallet.WalletItemCustomProperty
#ifndef __WAWWalletItemCustomProperty_DEFINED__
#define __WAWWalletItemCustomProperty_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletItemCustomProperty : RTObject
+ (WAWWalletItemCustomProperty*)makeWalletItemCustomProperty:(NSString *)name value:(NSString *)value ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * value;
@property WAWWalletSummaryViewPosition summaryViewPosition;
@property (retain) NSString * name;
@property WAWWalletDetailViewPosition detailViewPosition;
@property BOOL autoDetectLinks;
@end

#endif // __WAWWalletItemCustomProperty_DEFINED__

// Windows.ApplicationModel.Wallet.WalletVerb
#ifndef __WAWWalletVerb_DEFINED__
#define __WAWWalletVerb_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletVerb : RTObject
+ (WAWWalletVerb*)makeWalletVerb:(NSString *)name ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * name;
@end

#endif // __WAWWalletVerb_DEFINED__

// Windows.ApplicationModel.Wallet.WalletItem
#ifndef __WAWWalletItem_DEFINED__
#define __WAWWalletItem_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletItem : RTObject
+ (WAWWalletItem*)makeWalletItem:(WAWWalletItemKind)kind displayName:(NSString *)displayName ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * displayName;
@property (retain) NSString * displayMessage;
@property (retain) NSString * logoText;
@property (retain) WUColor* bodyFontColor;
@property (retain) WUColor* bodyColor;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* bodyBackgroundImage;
@property BOOL isDisplayMessageLaunchable;
@property BOOL isAcknowledged;
@property BOOL isMoreTransactionHistoryLaunchable;
@property (retain) WUColor* headerFontColor;
@property (retain) WUColor* headerColor;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* headerBackgroundImage;
@property (retain) id /* WFDateTime* */ expirationDate;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* logo99x99;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* logoImage;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* promotionalImage;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* logo159x159;
@property (retain) id /* WFDateTime* */ lastUpdated;
@property (retain) NSString * issuerDisplayName;
@property (retain) WAWWalletBarcode* barcode;
@property (retain) NSString * relevantDateDisplayMessage;
@property (retain) id /* WFDateTime* */ relevantDate;
@property (retain) RTObject<WSSIRandomAccessStreamReference>* logo336x336;
@property (readonly) WAWWalletItemKind kind;
@property (readonly) NSMutableDictionary* /* NSString *, WAWWalletItemCustomProperty* */ displayProperties;
@property (readonly) NSString * id;
@property (readonly) NSMutableDictionary* /* NSString *, WAWWalletRelevantLocation* */ relevantLocations;
@property (readonly) NSMutableDictionary* /* NSString *, WAWWalletTransaction* */ transactionHistory;
@property (readonly) NSMutableDictionary* /* NSString *, WAWWalletVerb* */ verbs;
@end

#endif // __WAWWalletItem_DEFINED__

// Windows.ApplicationModel.Wallet.WalletItemStore
#ifndef __WAWWalletItemStore_DEFINED__
#define __WAWWalletItemStore_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletItemStore : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (RTObject<WFIAsyncAction>*)addAsync:(NSString *)id item:(WAWWalletItem*)item;
- (RTObject<WFIAsyncAction>*)clearAsync;
- (void)getWalletItemAsync:(NSString *)id success:(void (^)(WAWWalletItem*))success failure:(void (^)(NSError*))failure;
- (void)getItemsAsyncWithSuccess:(void (^)(NSArray* /* WAWWalletItem* */))success failure:(void (^)(NSError*))failure;
- (void)getItemsWithKindAsync:(WAWWalletItemKind)kind success:(void (^)(NSArray* /* WAWWalletItem* */))success failure:(void (^)(NSError*))failure;
- (void)importItemAsync:(RTObject<WSSIRandomAccessStreamReference>*)stream success:(void (^)(WAWWalletItem*))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)deleteAsync:(NSString *)id;
- (RTObject<WFIAsyncAction>*)showAsync;
- (RTObject<WFIAsyncAction>*)showItemAsync:(NSString *)id;
- (RTObject<WFIAsyncAction>*)updateAsync:(WAWWalletItem*)item;
@end

#endif // __WAWWalletItemStore_DEFINED__

// Windows.ApplicationModel.Wallet.WalletManager
#ifndef __WAWWalletManager_DEFINED__
#define __WAWWalletManager_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETEXPORT
@interface WAWWalletManager : RTObject
+ (void)requestStoreAsyncWithSuccess:(void (^)(WAWWalletItemStore*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WAWWalletManager_DEFINED__

