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

// WindowsApplicationModelContactsProvider.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WACPContactRemovedEventArgs, WACPContactPickerUI;
@protocol WACPIContactRemovedEventArgs, WACPIContactPickerUI, WACPIContactPickerUI2;

// Windows.ApplicationModel.Contacts.Provider.AddContactResult
enum _WACPAddContactResult {
    WACPAddContactResultAdded = 0,
    WACPAddContactResultAlreadyAdded = 1,
    WACPAddContactResultUnavailable = 2,
};
typedef unsigned WACPAddContactResult;

#include "WindowsApplicationModelContacts.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs
#ifndef __WACPContactRemovedEventArgs_DEFINED__
#define __WACPContactRemovedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WACPContactRemovedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * id;
@end

#endif // __WACPContactRemovedEventArgs_DEFINED__

// Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
#ifndef __WACPContactPickerUI_DEFINED__
#define __WACPContactPickerUI_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WACPContactPickerUI : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* NSString * */ desiredFields;
@property (readonly) WACContactSelectionMode selectionMode;
@property (readonly) NSMutableArray* /* WACContactFieldType */ desiredFieldsWithContactFieldType;
- (EventRegistrationToken)addContactRemovedEvent:(void(^)(WACPContactPickerUI*, WACPContactRemovedEventArgs*))del;
- (void)removeContactRemovedEvent:(EventRegistrationToken)tok;
- (WACPAddContactResult)addContact:(NSString *)id contact:(WACContact*)contact;
- (void)removeContact:(NSString *)id;
- (BOOL)containsContact:(NSString *)id;
- (WACPAddContactResult)addContact:(WACContact*)contact;
@end

#endif // __WACPContactPickerUI_DEFINED__

