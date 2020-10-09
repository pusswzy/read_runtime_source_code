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

// WindowsUIXamlInterop.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
#define OBJCUWPWINDOWSUIXAMLINTEROPEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXamlInterop.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXINotifyCollectionChangedEventArgs;
@class WUXITypeName;
@protocol WUXIIBindableIterable, WUXIIBindableVector, WUXIIBindableObservableVector, WUXIIBindableVectorView, WUXIIBindableIterator, WUXIINotifyCollectionChanged, WUXIINotifyCollectionChangedEventArgs, WUXIINotifyCollectionChangedEventArgsFactory;

// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
enum _WUXINotifyCollectionChangedAction {
    WUXINotifyCollectionChangedActionAdd = 0,
    WUXINotifyCollectionChangedActionRemove = 1,
    WUXINotifyCollectionChangedActionReplace = 2,
    WUXINotifyCollectionChangedActionMove = 3,
    WUXINotifyCollectionChangedActionReset = 4,
};
typedef unsigned WUXINotifyCollectionChangedAction;

// Windows.UI.Xaml.Interop.TypeKind
enum _WUXITypeKind {
    WUXITypeKindPrimitive = 0,
    WUXITypeKindMetadata = 1,
    WUXITypeKindCustom = 2,
};
typedef unsigned WUXITypeKind;

#include "WindowsFoundation.h"
// Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler
#ifndef __WUXIBindableVectorChangedEventHandler__DEFINED
#define __WUXIBindableVectorChangedEventHandler__DEFINED
typedef void(^WUXIBindableVectorChangedEventHandler)(RTObject<WUXIIBindableObservableVector>* vector, RTObject* e);
#endif // __WUXIBindableVectorChangedEventHandler__DEFINED

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
#ifndef __WUXINotifyCollectionChangedEventHandler__DEFINED
#define __WUXINotifyCollectionChangedEventHandler__DEFINED
typedef void(^WUXINotifyCollectionChangedEventHandler)(RTObject* sender, WUXINotifyCollectionChangedEventArgs* e);
#endif // __WUXINotifyCollectionChangedEventHandler__DEFINED


#import <Foundation/Foundation.h>

// [struct] Windows.UI.Xaml.Interop.TypeName
OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXITypeName : NSObject
+ (instancetype)new;
@property (retain) NSString * name;
@property WUXITypeKind kind;
@end

// Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler
#ifndef __WUXIBindableVectorChangedEventHandler__DEFINED
#define __WUXIBindableVectorChangedEventHandler__DEFINED
typedef void(^WUXIBindableVectorChangedEventHandler)(RTObject<WUXIIBindableObservableVector>* vector, RTObject* e);
#endif // __WUXIBindableVectorChangedEventHandler__DEFINED

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
#ifndef __WUXINotifyCollectionChangedEventHandler__DEFINED
#define __WUXINotifyCollectionChangedEventHandler__DEFINED
typedef void(^WUXINotifyCollectionChangedEventHandler)(RTObject* sender, WUXINotifyCollectionChangedEventArgs* e);
#endif // __WUXINotifyCollectionChangedEventHandler__DEFINED

// Windows.UI.Xaml.Interop.IBindableIterable
#ifndef __WUXIIBindableIterable_DEFINED__
#define __WUXIIBindableIterable_DEFINED__

@protocol WUXIIBindableIterable
- (RTObject<WUXIIBindableIterator>*)first;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIIBindableIterable : RTObject <WUXIIBindableIterable>
@end

#endif // __WUXIIBindableIterable_DEFINED__

// Windows.UI.Xaml.Interop.IBindableVector
#ifndef __WUXIIBindableVector_DEFINED__
#define __WUXIIBindableVector_DEFINED__

@protocol WUXIIBindableVector <WUXIIBindableIterable>
@property (readonly) unsigned int size;
- (RTObject*)getAt:(unsigned int)index;
- (RTObject<WUXIIBindableVectorView>*)getView;
- (BOOL)indexOf:(RTObject*)value index:(unsigned int*)index;
- (void)setAt:(unsigned int)index value:(RTObject*)value;
- (void)insertAt:(unsigned int)index value:(RTObject*)value;
- (void)removeAt:(unsigned int)index;
- (void)append:(RTObject*)value;
- (void)removeAtEnd;
- (void)clear;
- (RTObject<WUXIIBindableIterator>*)first;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIIBindableVector : RTObject <WUXIIBindableVector>
@end

#endif // __WUXIIBindableVector_DEFINED__

// Windows.UI.Xaml.Interop.IBindableObservableVector
#ifndef __WUXIIBindableObservableVector_DEFINED__
#define __WUXIIBindableObservableVector_DEFINED__

@protocol WUXIIBindableObservableVector <WUXIIBindableVector, WUXIIBindableIterable>
- (EventRegistrationToken)addVectorChangedEvent:(WUXIBindableVectorChangedEventHandler)del;
- (void)removeVectorChangedEvent:(EventRegistrationToken)tok;
- (RTObject*)getAt:(unsigned int)index;
- (RTObject<WUXIIBindableVectorView>*)getView;
- (BOOL)indexOf:(RTObject*)value index:(unsigned int*)index;
- (void)setAt:(unsigned int)index value:(RTObject*)value;
- (void)insertAt:(unsigned int)index value:(RTObject*)value;
- (void)removeAt:(unsigned int)index;
- (void)append:(RTObject*)value;
- (void)removeAtEnd;
- (void)clear;
- (RTObject<WUXIIBindableIterator>*)first;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIIBindableObservableVector : RTObject <WUXIIBindableObservableVector>
@end

#endif // __WUXIIBindableObservableVector_DEFINED__

// Windows.UI.Xaml.Interop.IBindableVectorView
#ifndef __WUXIIBindableVectorView_DEFINED__
#define __WUXIIBindableVectorView_DEFINED__

@protocol WUXIIBindableVectorView <WUXIIBindableIterable>
@property (readonly) unsigned int size;
- (RTObject*)getAt:(unsigned int)index;
- (BOOL)indexOf:(RTObject*)value index:(unsigned int*)index;
- (RTObject<WUXIIBindableIterator>*)first;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIIBindableVectorView : RTObject <WUXIIBindableVectorView>
@end

#endif // __WUXIIBindableVectorView_DEFINED__

// Windows.UI.Xaml.Interop.IBindableIterator
#ifndef __WUXIIBindableIterator_DEFINED__
#define __WUXIIBindableIterator_DEFINED__

@protocol WUXIIBindableIterator
@property (readonly) RTObject* current;
@property (readonly) BOOL hasCurrent;
- (BOOL)moveNext;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIIBindableIterator : RTObject <WUXIIBindableIterator>
@end

#endif // __WUXIIBindableIterator_DEFINED__

// Windows.UI.Xaml.Interop.INotifyCollectionChanged
#ifndef __WUXIINotifyCollectionChanged_DEFINED__
#define __WUXIINotifyCollectionChanged_DEFINED__

@protocol WUXIINotifyCollectionChanged
- (EventRegistrationToken)addCollectionChangedEvent:(WUXINotifyCollectionChangedEventHandler)del;
- (void)removeCollectionChangedEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXIINotifyCollectionChanged : RTObject <WUXIINotifyCollectionChanged>
@end

#endif // __WUXIINotifyCollectionChanged_DEFINED__

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
#ifndef __WUXINotifyCollectionChangedEventArgs_DEFINED__
#define __WUXINotifyCollectionChangedEventArgs_DEFINED__

OBJCUWPWINDOWSUIXAMLINTEROPEXPORT
@interface WUXINotifyCollectionChangedEventArgs : RTObject
+ (WUXINotifyCollectionChangedEventArgs*)makeInstanceWithAllParameters:(WUXINotifyCollectionChangedAction)action newItems:(RTObject<WUXIIBindableVector>*)newItems oldItems:(RTObject<WUXIIBindableVector>*)oldItems newIndex:(int)newIndex oldIndex:(int)oldIndex ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXINotifyCollectionChangedAction action;
@property (readonly) RTObject<WUXIIBindableVector>* newItems __attribute__ ((ns_returns_not_retained));
@property (readonly) int newStartingIndex;
@property (readonly) RTObject<WUXIIBindableVector>* oldItems;
@property (readonly) int oldStartingIndex;
@end

#endif // __WUXINotifyCollectionChangedEventArgs_DEFINED__

