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

// WindowsUIXamlData.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLEXPORT
#define OBJCUWPWINDOWSUIXAMLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXaml.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXDCurrentChangingEventArgs, WUXDPropertyChangedEventArgs, WUXDBindingExpressionBase, WUXDBindingOperations, WUXDBindingBase, WUXDBindingExpression, WUXDRelativeSource, WUXDBinding, WUXDItemIndexRange, WUXDCollectionViewSource;
@class WUXDLoadMoreItemsResult;
@protocol WUXDIItemsRangeInfo, WUXDISelectionInfo, WUXDICustomProperty, WUXDICustomPropertyProvider, WUXDINotifyPropertyChanged, WUXDISupportIncrementalLoading, WUXDIValueConverter, WUXDIBindingExpressionBase, WUXDIBindingExpressionBaseFactory, WUXDIBindingOperations, WUXDIBindingOperationsStatics, WUXDICurrentChangingEventArgs, WUXDICurrentChangingEventArgsFactory, WUXDIPropertyChangedEventArgs, WUXDIPropertyChangedEventArgsFactory, WUXDIBindingBase, WUXDIBindingBaseFactory, WUXDIBindingExpression, WUXDIBindingExpressionFactory, WUXDIRelativeSource, WUXDIRelativeSourceFactory, WUXDIBinding, WUXDIBindingFactory, WUXDIBinding2, WUXDICollectionView, WUXDICollectionViewFactory, WUXDICollectionViewGroup, WUXDIItemIndexRange, WUXDIItemIndexRangeFactory, WUXDICollectionViewSource, WUXDICollectionViewSourceStatics;

// Windows.UI.Xaml.Data.BindingMode
enum _WUXDBindingMode {
    WUXDBindingModeOneWay = 1,
    WUXDBindingModeOneTime = 2,
    WUXDBindingModeTwoWay = 3,
};
typedef unsigned WUXDBindingMode;

// Windows.UI.Xaml.Data.RelativeSourceMode
enum _WUXDRelativeSourceMode {
    WUXDRelativeSourceModeNone = 0,
    WUXDRelativeSourceModeTemplatedParent = 1,
    WUXDRelativeSourceModeSelf = 2,
};
typedef unsigned WUXDRelativeSourceMode;

// Windows.UI.Xaml.Data.UpdateSourceTrigger
enum _WUXDUpdateSourceTrigger {
    WUXDUpdateSourceTriggerDefault = 0,
    WUXDUpdateSourceTriggerPropertyChanged = 1,
    WUXDUpdateSourceTriggerExplicit = 2,
    WUXDUpdateSourceTriggerLostFocus = 3,
};
typedef unsigned WUXDUpdateSourceTrigger;

#include "WindowsFoundation.h"
#include "WindowsUIXamlInterop.h"
#include "WindowsUIXaml.h"
#include "WindowsUICore.h"
// Windows.UI.Xaml.Data.CurrentChangingEventHandler
#ifndef __WUXDCurrentChangingEventHandler__DEFINED
#define __WUXDCurrentChangingEventHandler__DEFINED
typedef void(^WUXDCurrentChangingEventHandler)(RTObject* sender, WUXDCurrentChangingEventArgs* e);
#endif // __WUXDCurrentChangingEventHandler__DEFINED

// Windows.UI.Xaml.Data.PropertyChangedEventHandler
#ifndef __WUXDPropertyChangedEventHandler__DEFINED
#define __WUXDPropertyChangedEventHandler__DEFINED
typedef void(^WUXDPropertyChangedEventHandler)(RTObject* sender, WUXDPropertyChangedEventArgs* e);
#endif // __WUXDPropertyChangedEventHandler__DEFINED

// Windows.UI.Xaml.DependencyPropertyChangedCallback
#ifndef __WXDependencyPropertyChangedCallback__DEFINED
#define __WXDependencyPropertyChangedCallback__DEFINED
typedef void(^WXDependencyPropertyChangedCallback)(WXDependencyObject* sender, WXDependencyProperty* dp);
#endif // __WXDependencyPropertyChangedCallback__DEFINED


#import <Foundation/Foundation.h>

// [struct] Windows.UI.Xaml.Data.LoadMoreItemsResult
OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDLoadMoreItemsResult : NSObject
+ (instancetype)new;
@property unsigned int count;
@end

// Windows.UI.Xaml.Data.CurrentChangingEventHandler
#ifndef __WUXDCurrentChangingEventHandler__DEFINED
#define __WUXDCurrentChangingEventHandler__DEFINED
typedef void(^WUXDCurrentChangingEventHandler)(RTObject* sender, WUXDCurrentChangingEventArgs* e);
#endif // __WUXDCurrentChangingEventHandler__DEFINED

// Windows.UI.Xaml.Data.PropertyChangedEventHandler
#ifndef __WUXDPropertyChangedEventHandler__DEFINED
#define __WUXDPropertyChangedEventHandler__DEFINED
typedef void(^WUXDPropertyChangedEventHandler)(RTObject* sender, WUXDPropertyChangedEventArgs* e);
#endif // __WUXDPropertyChangedEventHandler__DEFINED

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.UI.Xaml.Data.IItemsRangeInfo
#ifndef __WUXDIItemsRangeInfo_DEFINED__
#define __WUXDIItemsRangeInfo_DEFINED__

@protocol WUXDIItemsRangeInfo <WFIClosable>
- (void)rangesChanged:(WUXDItemIndexRange*)visibleRange trackedItems:(NSArray* /* WUXDItemIndexRange* */)trackedItems;
- (void)close;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDIItemsRangeInfo : RTObject <WUXDIItemsRangeInfo>
@end

#endif // __WUXDIItemsRangeInfo_DEFINED__

// Windows.UI.Xaml.Data.ISelectionInfo
#ifndef __WUXDISelectionInfo_DEFINED__
#define __WUXDISelectionInfo_DEFINED__

@protocol WUXDISelectionInfo
- (void)selectRange:(WUXDItemIndexRange*)itemIndexRange;
- (void)deselectRange:(WUXDItemIndexRange*)itemIndexRange;
- (BOOL)isSelected:(int)index;
- (NSArray* /* WUXDItemIndexRange* */)getSelectedRanges;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDISelectionInfo : RTObject <WUXDISelectionInfo>
@end

#endif // __WUXDISelectionInfo_DEFINED__

// Windows.UI.Xaml.Data.ICustomProperty
#ifndef __WUXDICustomProperty_DEFINED__
#define __WUXDICustomProperty_DEFINED__

@protocol WUXDICustomProperty
@property (readonly) BOOL canRead;
@property (readonly) BOOL canWrite;
@property (readonly) NSString * name;
@property (readonly) WUXITypeName* type;
- (RTObject*)getValue:(RTObject*)target;
- (void)setValue:(RTObject*)target value:(RTObject*)value;
- (RTObject*)getIndexedValue:(RTObject*)target index:(RTObject*)index;
- (void)setIndexedValue:(RTObject*)target value:(RTObject*)value index:(RTObject*)index;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDICustomProperty : RTObject <WUXDICustomProperty>
@end

#endif // __WUXDICustomProperty_DEFINED__

// Windows.UI.Xaml.Data.ICustomPropertyProvider
#ifndef __WUXDICustomPropertyProvider_DEFINED__
#define __WUXDICustomPropertyProvider_DEFINED__

@protocol WUXDICustomPropertyProvider
@property (readonly) WUXITypeName* type;
- (RTObject<WUXDICustomProperty>*)getCustomProperty:(NSString *)name;
- (RTObject<WUXDICustomProperty>*)getIndexedProperty:(NSString *)name type:(WUXITypeName*)type;
- (NSString *)getStringRepresentation;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDICustomPropertyProvider : RTObject <WUXDICustomPropertyProvider>
@end

#endif // __WUXDICustomPropertyProvider_DEFINED__

// Windows.UI.Xaml.Data.INotifyPropertyChanged
#ifndef __WUXDINotifyPropertyChanged_DEFINED__
#define __WUXDINotifyPropertyChanged_DEFINED__

@protocol WUXDINotifyPropertyChanged
- (EventRegistrationToken)addPropertyChangedEvent:(WUXDPropertyChangedEventHandler)del;
- (void)removePropertyChangedEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDINotifyPropertyChanged : RTObject <WUXDINotifyPropertyChanged>
@end

#endif // __WUXDINotifyPropertyChanged_DEFINED__

// Windows.UI.Xaml.Data.ISupportIncrementalLoading
#ifndef __WUXDISupportIncrementalLoading_DEFINED__
#define __WUXDISupportIncrementalLoading_DEFINED__

@protocol WUXDISupportIncrementalLoading
@property (readonly) BOOL hasMoreItems;
- (void)loadMoreItemsAsync:(unsigned int)count success:(void (^)(WUXDLoadMoreItemsResult*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDISupportIncrementalLoading : RTObject <WUXDISupportIncrementalLoading>
@end

#endif // __WUXDISupportIncrementalLoading_DEFINED__

// Windows.UI.Xaml.Data.IValueConverter
#ifndef __WUXDIValueConverter_DEFINED__
#define __WUXDIValueConverter_DEFINED__

@protocol WUXDIValueConverter
- (RTObject*)convert:(RTObject*)value targetType:(WUXITypeName*)targetType parameter:(RTObject*)parameter language:(NSString *)language;
- (RTObject*)convertBack:(RTObject*)value targetType:(WUXITypeName*)targetType parameter:(RTObject*)parameter language:(NSString *)language;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDIValueConverter : RTObject <WUXDIValueConverter>
@end

#endif // __WUXDIValueConverter_DEFINED__

// Windows.UI.Xaml.Data.ICollectionView
#ifndef __WUXDICollectionView_DEFINED__
#define __WUXDICollectionView_DEFINED__

@protocol WUXDICollectionView
@property (readonly) NSMutableArray<RTObservableCollection>* /* RTObject* */ collectionGroups;
@property (readonly) RTObject* currentItem;
@property (readonly) int currentPosition;
@property (readonly) BOOL hasMoreItems;
@property (readonly) BOOL isCurrentAfterLast;
@property (readonly) BOOL isCurrentBeforeFirst;
- (EventRegistrationToken)addCurrentChangedEvent:(void(^)(RTObject*, RTObject*))del;
- (void)removeCurrentChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCurrentChangingEvent:(WUXDCurrentChangingEventHandler)del;
- (void)removeCurrentChangingEvent:(EventRegistrationToken)tok;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (EventRegistrationToken)addObserver: (RTCollectionListener)receiver;
- (void)removeObserver: (EventRegistrationToken)receiverToken;
- (BOOL)moveCurrentTo:(RTObject*)item;
- (BOOL)moveCurrentToPosition:(int)index;
- (BOOL)moveCurrentToFirst;
- (BOOL)moveCurrentToLast;
- (BOOL)moveCurrentToNext;
- (BOOL)moveCurrentToPrevious;
- (void)loadMoreItemsAsync:(unsigned int)count success:(void (^)(WUXDLoadMoreItemsResult*))success failure:(void (^)(NSError*))failure;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDICollectionView : RTObject <WUXDICollectionView>
@end

#endif // __WUXDICollectionView_DEFINED__

// Windows.UI.Xaml.Data.ICollectionViewFactory
#ifndef __WUXDICollectionViewFactory_DEFINED__
#define __WUXDICollectionViewFactory_DEFINED__

@protocol WUXDICollectionViewFactory
- (RTObject<WUXDICollectionView>*)createView;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDICollectionViewFactory : RTObject <WUXDICollectionViewFactory>
@end

#endif // __WUXDICollectionViewFactory_DEFINED__

// Windows.UI.Xaml.Data.ICollectionViewGroup
#ifndef __WUXDICollectionViewGroup_DEFINED__
#define __WUXDICollectionViewGroup_DEFINED__

@protocol WUXDICollectionViewGroup
@property (readonly) RTObject* group;
@property (readonly) NSMutableArray<RTObservableCollection>* /* RTObject* */ groupItems;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDICollectionViewGroup : RTObject <WUXDICollectionViewGroup>
@end

#endif // __WUXDICollectionViewGroup_DEFINED__

// Windows.UI.Xaml.Data.CurrentChangingEventArgs
#ifndef __WUXDCurrentChangingEventArgs_DEFINED__
#define __WUXDCurrentChangingEventArgs_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDCurrentChangingEventArgs : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL cancel;
@property (readonly) BOOL isCancelable;
@end

#endif // __WUXDCurrentChangingEventArgs_DEFINED__

// Windows.UI.Xaml.Data.PropertyChangedEventArgs
#ifndef __WUXDPropertyChangedEventArgs_DEFINED__
#define __WUXDPropertyChangedEventArgs_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDPropertyChangedEventArgs : RTObject
+ (WUXDPropertyChangedEventArgs*)makeInstance:(NSString *)name ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * propertyName;
@end

#endif // __WUXDPropertyChangedEventArgs_DEFINED__

// Windows.UI.Xaml.Data.BindingExpressionBase
#ifndef __WUXDBindingExpressionBase_DEFINED__
#define __WUXDBindingExpressionBase_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDBindingExpressionBase : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXDBindingExpressionBase_DEFINED__

// Windows.UI.Xaml.Data.BindingOperations
#ifndef __WUXDBindingOperations_DEFINED__
#define __WUXDBindingOperations_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDBindingOperations : RTObject
+ (void)setBinding:(WXDependencyObject*)target dp:(WXDependencyProperty*)dp binding:(WUXDBindingBase*)binding;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXDBindingOperations_DEFINED__

// Windows.UI.Xaml.DependencyObject
#ifndef __WXDependencyObject_DEFINED__
#define __WXDependencyObject_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WXDependencyObject : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUCCoreDispatcher* dispatcher;
- (RTObject*)getValue:(WXDependencyProperty*)dp;
- (void)setValue:(WXDependencyProperty*)dp value:(RTObject*)value;
- (void)clearValue:(WXDependencyProperty*)dp;
- (RTObject*)readLocalValue:(WXDependencyProperty*)dp;
- (RTObject*)getAnimationBaseValue:(WXDependencyProperty*)dp;
- (int64_t)registerPropertyChangedCallback:(WXDependencyProperty*)dp callback:(WXDependencyPropertyChangedCallback)callback;
- (void)unregisterPropertyChangedCallback:(WXDependencyProperty*)dp token:(int64_t)token;
@end

#endif // __WXDependencyObject_DEFINED__

// Windows.UI.Xaml.Data.BindingBase
#ifndef __WUXDBindingBase_DEFINED__
#define __WUXDBindingBase_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDBindingBase : WXDependencyObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXDBindingBase_DEFINED__

// Windows.UI.Xaml.Data.BindingExpression
#ifndef __WUXDBindingExpression_DEFINED__
#define __WUXDBindingExpression_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDBindingExpression : WUXDBindingExpressionBase
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject* dataItem;
@property (readonly) WUXDBinding* parentBinding;
- (void)updateSource;
@end

#endif // __WUXDBindingExpression_DEFINED__

// Windows.UI.Xaml.Data.RelativeSource
#ifndef __WUXDRelativeSource_DEFINED__
#define __WUXDRelativeSource_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDRelativeSource : WXDependencyObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WUXDRelativeSourceMode mode;
@end

#endif // __WUXDRelativeSource_DEFINED__

// Windows.UI.Xaml.Data.Binding
#ifndef __WUXDBinding_DEFINED__
#define __WUXDBinding_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDBinding : WUXDBindingBase
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WXPropertyPath* path;
@property WUXDBindingMode mode;
@property (retain) NSString * elementName;
@property (retain) RTObject* converterParameter;
@property (retain) NSString * converterLanguage;
@property (retain) RTObject<WUXDIValueConverter>* converter;
@property (retain) RTObject* source;
@property (retain) WUXDRelativeSource* relativeSource;
@property WUXDUpdateSourceTrigger updateSourceTrigger;
@property (retain) RTObject* targetNullValue;
@property (retain) RTObject* fallbackValue;
@end

#endif // __WUXDBinding_DEFINED__

// Windows.UI.Xaml.Data.ItemIndexRange
#ifndef __WUXDItemIndexRange_DEFINED__
#define __WUXDItemIndexRange_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDItemIndexRange : RTObject
+ (WUXDItemIndexRange*)makeInstance:(int)firstIndex length:(unsigned int)length ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) int firstIndex;
@property (readonly) int lastIndex;
@property (readonly) unsigned int length;
@end

#endif // __WUXDItemIndexRange_DEFINED__

// Windows.UI.Xaml.Data.CollectionViewSource
#ifndef __WUXDCollectionViewSource_DEFINED__
#define __WUXDCollectionViewSource_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXDCollectionViewSource : WXDependencyObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject* source;
@property (retain) WXPropertyPath* itemsPath;
@property BOOL isSourceGrouped;
@property (readonly) RTObject<WUXDICollectionView>* view;
+ (WXDependencyProperty*)isSourceGroupedProperty;
+ (WXDependencyProperty*)itemsPathProperty;
+ (WXDependencyProperty*)sourceProperty;
+ (WXDependencyProperty*)viewProperty;
@end

#endif // __WUXDCollectionViewSource_DEFINED__

