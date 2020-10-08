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

// WindowsApplicationModelWalletSystem.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSAPPLICATIONMODELWALLETSYSTEMEXPORT
#define OBJCUWPWINDOWSAPPLICATIONMODELWALLETSYSTEMEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsApplicationModelWalletSystem.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WAWSWalletItemSystemStore, WAWSWalletManagerSystem;
@protocol WAWSIWalletItemSystemStore, WAWSIWalletItemSystemStore2, WAWSIWalletManagerSystemStatics;

// Windows.ApplicationModel.Wallet.System.WalletItemAppAssociation
enum _WAWSWalletItemAppAssociation {
    WAWSWalletItemAppAssociationNone = 0,
    WAWSWalletItemAppAssociationAppInstalled = 1,
    WAWSWalletItemAppAssociationAppNotInstalled = 2,
};
typedef unsigned WAWSWalletItemAppAssociation;

#include "WindowsApplicationModelWallet.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Wallet.System.WalletItemSystemStore
#ifndef __WAWSWalletItemSystemStore_DEFINED__
#define __WAWSWalletItemSystemStore_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETSYSTEMEXPORT
@interface WAWSWalletItemSystemStore : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addItemsChangedEvent:(void(^)(WAWSWalletItemSystemStore*, RTObject*))del;
- (void)removeItemsChangedEvent:(EventRegistrationToken)tok;
- (void)getItemsAsyncWithSuccess:(void (^)(NSArray* /* WAWWalletItem* */))success failure:(void (^)(NSError*))failure;
- (RTObject<WFIAsyncAction>*)deleteAsync:(WAWWalletItem*)item;
- (void)importItemAsync:(RTObject<WSSIRandomAccessStreamReference>*)stream success:(void (^)(WAWWalletItem*))success failure:(void (^)(NSError*))failure;
- (WAWSWalletItemAppAssociation)getAppStatusForItem:(WAWWalletItem*)item;
- (void)launchAppForItemAsync:(WAWWalletItem*)item success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WAWSWalletItemSystemStore_DEFINED__

// Windows.ApplicationModel.Wallet.System.WalletManagerSystem
#ifndef __WAWSWalletManagerSystem_DEFINED__
#define __WAWSWalletManagerSystem_DEFINED__

OBJCUWPWINDOWSAPPLICATIONMODELWALLETSYSTEMEXPORT
@interface WAWSWalletManagerSystem : RTObject
+ (void)requestStoreAsyncWithSuccess:(void (^)(WAWSWalletItemSystemStore*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WAWSWalletManagerSystem_DEFINED__

