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

// WindowsUIXamlAutomationProvider.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLEXPORT
#define OBJCUWPWINDOWSUIXAMLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXaml.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXAPIRawElementProviderSimple;
@protocol WUXAPIAnnotationProvider, WUXAPIDockProvider, WUXAPIDragProvider, WUXAPIDropTargetProvider, WUXAPIExpandCollapseProvider, WUXAPIGridItemProvider, WUXAPIGridProvider, WUXAPIInvokeProvider, WUXAPIItemContainerProvider, WUXAPIMultipleViewProvider, WUXAPIObjectModelProvider, WUXAPIRangeValueProvider, WUXAPIScrollItemProvider, WUXAPIScrollProvider, WUXAPISelectionItemProvider, WUXAPISelectionProvider, WUXAPISpreadsheetItemProvider, WUXAPISpreadsheetProvider, WUXAPIStylesProvider, WUXAPISynchronizedInputProvider, WUXAPITableItemProvider, WUXAPITableProvider, WUXAPITextChildProvider, WUXAPITextRangeProvider, WUXAPITextProvider, WUXAPITextProvider2, WUXAPITextRangeProvider2, WUXAPIToggleProvider, WUXAPITransformProvider, WUXAPITransformProvider2, WUXAPIValueProvider, WUXAPIVirtualizedItemProvider, WUXAPIWindowProvider, WUXAPIIRawElementProviderSimple, WUXAPICustomNavigationProvider, WUXAPITextEditProvider;

#include "WindowsUIXamlAutomationPeers.h"
#include "WindowsUI.h"
#include "WindowsFoundation.h"
#include "WindowsUIXamlAutomation.h"
#include "WindowsUIXamlAutomationText.h"
#include "WindowsUIXaml.h"
#include "WindowsUICore.h"
// Windows.UI.Xaml.DependencyPropertyChangedCallback
#ifndef __WXDependencyPropertyChangedCallback__DEFINED
#define __WXDependencyPropertyChangedCallback__DEFINED
typedef void(^WXDependencyPropertyChangedCallback)(WXDependencyObject* sender, WXDependencyProperty* dp);
#endif // __WXDependencyPropertyChangedCallback__DEFINED


#import <Foundation/Foundation.h>

// Windows.UI.Xaml.Automation.Provider.IAnnotationProvider
#ifndef __WUXAPIAnnotationProvider_DEFINED__
#define __WUXAPIAnnotationProvider_DEFINED__

@protocol WUXAPIAnnotationProvider
@property (readonly) int annotationTypeId;
@property (readonly) NSString * annotationTypeName;
@property (readonly) NSString * author;
@property (readonly) NSString * dateTime;
@property (readonly) WUXAPIRawElementProviderSimple* target;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAnnotationProvider : RTObject <WUXAPIAnnotationProvider>
@end

#endif // __WUXAPIAnnotationProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IDockProvider
#ifndef __WUXAPIDockProvider_DEFINED__
#define __WUXAPIDockProvider_DEFINED__

@protocol WUXAPIDockProvider
@property (readonly) WUXADockPosition dockPosition;
- (void)setDockPosition:(WUXADockPosition)dockPosition;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIDockProvider : RTObject <WUXAPIDockProvider>
@end

#endif // __WUXAPIDockProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IDragProvider
#ifndef __WUXAPIDragProvider_DEFINED__
#define __WUXAPIDragProvider_DEFINED__

@protocol WUXAPIDragProvider
@property (readonly) NSString * dropEffect;
@property (readonly) NSArray* /* NSString * */ dropEffects;
@property (readonly) BOOL isGrabbed;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getGrabbedItems;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIDragProvider : RTObject <WUXAPIDragProvider>
@end

#endif // __WUXAPIDragProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IDropTargetProvider
#ifndef __WUXAPIDropTargetProvider_DEFINED__
#define __WUXAPIDropTargetProvider_DEFINED__

@protocol WUXAPIDropTargetProvider
@property (readonly) NSString * dropEffect;
@property (readonly) NSArray* /* NSString * */ dropEffects;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIDropTargetProvider : RTObject <WUXAPIDropTargetProvider>
@end

#endif // __WUXAPIDropTargetProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider
#ifndef __WUXAPIExpandCollapseProvider_DEFINED__
#define __WUXAPIExpandCollapseProvider_DEFINED__

@protocol WUXAPIExpandCollapseProvider
@property (readonly) WUXAExpandCollapseState expandCollapseState;
- (void)collapse;
- (void)expand;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIExpandCollapseProvider : RTObject <WUXAPIExpandCollapseProvider>
@end

#endif // __WUXAPIExpandCollapseProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IGridItemProvider
#ifndef __WUXAPIGridItemProvider_DEFINED__
#define __WUXAPIGridItemProvider_DEFINED__

@protocol WUXAPIGridItemProvider
@property (readonly) int column;
@property (readonly) int columnSpan;
@property (readonly) WUXAPIRawElementProviderSimple* containingGrid;
@property (readonly) int row;
@property (readonly) int rowSpan;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIGridItemProvider : RTObject <WUXAPIGridItemProvider>
@end

#endif // __WUXAPIGridItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IGridProvider
#ifndef __WUXAPIGridProvider_DEFINED__
#define __WUXAPIGridProvider_DEFINED__

@protocol WUXAPIGridProvider
@property (readonly) int columnCount;
@property (readonly) int rowCount;
- (WUXAPIRawElementProviderSimple*)getItem:(int)row column:(int)column;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIGridProvider : RTObject <WUXAPIGridProvider>
@end

#endif // __WUXAPIGridProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IInvokeProvider
#ifndef __WUXAPIInvokeProvider_DEFINED__
#define __WUXAPIInvokeProvider_DEFINED__

@protocol WUXAPIInvokeProvider
- (void)invoke;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIInvokeProvider : RTObject <WUXAPIInvokeProvider>
@end

#endif // __WUXAPIInvokeProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IItemContainerProvider
#ifndef __WUXAPIItemContainerProvider_DEFINED__
#define __WUXAPIItemContainerProvider_DEFINED__

@protocol WUXAPIItemContainerProvider
- (WUXAPIRawElementProviderSimple*)findItemByProperty:(WUXAPIRawElementProviderSimple*)startAfter automationProperty:(WUXAAutomationProperty*)automationProperty value:(RTObject*)value;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIItemContainerProvider : RTObject <WUXAPIItemContainerProvider>
@end

#endif // __WUXAPIItemContainerProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider
#ifndef __WUXAPIMultipleViewProvider_DEFINED__
#define __WUXAPIMultipleViewProvider_DEFINED__

@protocol WUXAPIMultipleViewProvider
@property (readonly) int currentView;
- (NSArray* /* int */)getSupportedViews;
- (NSString *)getViewName:(int)viewId;
- (void)setCurrentView:(int)viewId;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIMultipleViewProvider : RTObject <WUXAPIMultipleViewProvider>
@end

#endif // __WUXAPIMultipleViewProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IObjectModelProvider
#ifndef __WUXAPIObjectModelProvider_DEFINED__
#define __WUXAPIObjectModelProvider_DEFINED__

@protocol WUXAPIObjectModelProvider
- (RTObject*)getUnderlyingObjectModel;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIObjectModelProvider : RTObject <WUXAPIObjectModelProvider>
@end

#endif // __WUXAPIObjectModelProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IRangeValueProvider
#ifndef __WUXAPIRangeValueProvider_DEFINED__
#define __WUXAPIRangeValueProvider_DEFINED__

@protocol WUXAPIRangeValueProvider
@property (readonly) BOOL isReadOnly;
@property (readonly) double largeChange;
@property (readonly) double maximum;
@property (readonly) double minimum;
@property (readonly) double smallChange;
@property (readonly) double value;
- (void)setValue:(double)value;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIRangeValueProvider : RTObject <WUXAPIRangeValueProvider>
@end

#endif // __WUXAPIRangeValueProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IScrollItemProvider
#ifndef __WUXAPIScrollItemProvider_DEFINED__
#define __WUXAPIScrollItemProvider_DEFINED__

@protocol WUXAPIScrollItemProvider
- (void)scrollIntoView;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIScrollItemProvider : RTObject <WUXAPIScrollItemProvider>
@end

#endif // __WUXAPIScrollItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IScrollProvider
#ifndef __WUXAPIScrollProvider_DEFINED__
#define __WUXAPIScrollProvider_DEFINED__

@protocol WUXAPIScrollProvider
@property (readonly) double horizontalScrollPercent;
@property (readonly) double horizontalViewSize;
@property (readonly) BOOL horizontallyScrollable;
@property (readonly) double verticalScrollPercent;
@property (readonly) double verticalViewSize;
@property (readonly) BOOL verticallyScrollable;
- (void)scroll:(WUXAScrollAmount)horizontalAmount verticalAmount:(WUXAScrollAmount)verticalAmount;
- (void)setScrollPercent:(double)horizontalPercent verticalPercent:(double)verticalPercent;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIScrollProvider : RTObject <WUXAPIScrollProvider>
@end

#endif // __WUXAPIScrollProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider
#ifndef __WUXAPISelectionItemProvider_DEFINED__
#define __WUXAPISelectionItemProvider_DEFINED__

@protocol WUXAPISelectionItemProvider
@property (readonly) BOOL isSelected;
@property (readonly) WUXAPIRawElementProviderSimple* selectionContainer;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)select;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPISelectionItemProvider : RTObject <WUXAPISelectionItemProvider>
@end

#endif // __WUXAPISelectionItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ISelectionProvider
#ifndef __WUXAPISelectionProvider_DEFINED__
#define __WUXAPISelectionProvider_DEFINED__

@protocol WUXAPISelectionProvider
@property (readonly) BOOL canSelectMultiple;
@property (readonly) BOOL isSelectionRequired;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getSelection;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPISelectionProvider : RTObject <WUXAPISelectionProvider>
@end

#endif // __WUXAPISelectionProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider
#ifndef __WUXAPISpreadsheetItemProvider_DEFINED__
#define __WUXAPISpreadsheetItemProvider_DEFINED__

@protocol WUXAPISpreadsheetItemProvider
@property (readonly) NSString * formula;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getAnnotationObjects;
- (NSArray* /* WUXAAnnotationType */)getAnnotationTypes;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPISpreadsheetItemProvider : RTObject <WUXAPISpreadsheetItemProvider>
@end

#endif // __WUXAPISpreadsheetItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider
#ifndef __WUXAPISpreadsheetProvider_DEFINED__
#define __WUXAPISpreadsheetProvider_DEFINED__

@protocol WUXAPISpreadsheetProvider
- (WUXAPIRawElementProviderSimple*)getItemByName:(NSString *)name;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPISpreadsheetProvider : RTObject <WUXAPISpreadsheetProvider>
@end

#endif // __WUXAPISpreadsheetProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IStylesProvider
#ifndef __WUXAPIStylesProvider_DEFINED__
#define __WUXAPIStylesProvider_DEFINED__

@protocol WUXAPIStylesProvider
@property (readonly) NSString * extendedProperties;
@property (readonly) WUColor* fillColor;
@property (readonly) WUColor* fillPatternColor;
@property (readonly) NSString * fillPatternStyle;
@property (readonly) NSString * shape;
@property (readonly) int styleId;
@property (readonly) NSString * styleName;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIStylesProvider : RTObject <WUXAPIStylesProvider>
@end

#endif // __WUXAPIStylesProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider
#ifndef __WUXAPISynchronizedInputProvider_DEFINED__
#define __WUXAPISynchronizedInputProvider_DEFINED__

@protocol WUXAPISynchronizedInputProvider
- (void)cancel;
- (void)startListening:(WUXASynchronizedInputType)inputType;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPISynchronizedInputProvider : RTObject <WUXAPISynchronizedInputProvider>
@end

#endif // __WUXAPISynchronizedInputProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITableItemProvider
#ifndef __WUXAPITableItemProvider_DEFINED__
#define __WUXAPITableItemProvider_DEFINED__

@protocol WUXAPITableItemProvider
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getColumnHeaderItems;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getRowHeaderItems;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITableItemProvider : RTObject <WUXAPITableItemProvider>
@end

#endif // __WUXAPITableItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITableProvider
#ifndef __WUXAPITableProvider_DEFINED__
#define __WUXAPITableProvider_DEFINED__

@protocol WUXAPITableProvider
@property (readonly) WUXARowOrColumnMajor rowOrColumnMajor;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getColumnHeaders;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getRowHeaders;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITableProvider : RTObject <WUXAPITableProvider>
@end

#endif // __WUXAPITableProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextChildProvider
#ifndef __WUXAPITextChildProvider_DEFINED__
#define __WUXAPITextChildProvider_DEFINED__

@protocol WUXAPITextChildProvider
@property (readonly) WUXAPIRawElementProviderSimple* textContainer;
@property (readonly) RTObject<WUXAPITextRangeProvider>* textRange;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextChildProvider : RTObject <WUXAPITextChildProvider>
@end

#endif // __WUXAPITextChildProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextRangeProvider
#ifndef __WUXAPITextRangeProvider_DEFINED__
#define __WUXAPITextRangeProvider_DEFINED__

@protocol WUXAPITextRangeProvider
- (RTObject<WUXAPITextRangeProvider>*)clone;
- (BOOL)compare:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider;
- (int)compareEndpoints:(WUXATTextPatternRangeEndpoint)endpoint textRangeProvider:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider targetEndpoint:(WUXATTextPatternRangeEndpoint)targetEndpoint;
- (void)expandToEnclosingUnit:(WUXATTextUnit)unit;
- (RTObject<WUXAPITextRangeProvider>*)findAttribute:(int)attributeId value:(RTObject*)value backward:(BOOL)backward;
- (RTObject<WUXAPITextRangeProvider>*)findText:(NSString *)text backward:(BOOL)backward ignoreCase:(BOOL)ignoreCase;
- (RTObject*)getAttributeValue:(int)attributeId;
- (void)getBoundingRectangles:(NSArray* /* double */*)returnValue;
- (WUXAPIRawElementProviderSimple*)getEnclosingElement;
- (NSString *)getText:(int)maxLength;
- (int)move:(WUXATTextUnit)unit count:(int)count;
- (int)moveEndpointByUnit:(WUXATTextPatternRangeEndpoint)endpoint unit:(WUXATTextUnit)unit count:(int)count;
- (void)moveEndpointByRange:(WUXATTextPatternRangeEndpoint)endpoint textRangeProvider:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider targetEndpoint:(WUXATTextPatternRangeEndpoint)targetEndpoint;
- (void)select;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)scrollIntoView:(BOOL)alignToTop;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getChildren;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextRangeProvider : RTObject <WUXAPITextRangeProvider>
@end

#endif // __WUXAPITextRangeProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextProvider
#ifndef __WUXAPITextProvider_DEFINED__
#define __WUXAPITextProvider_DEFINED__

@protocol WUXAPITextProvider
@property (readonly) RTObject<WUXAPITextRangeProvider>* documentRange;
@property (readonly) WUXASupportedTextSelection supportedTextSelection;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getSelection;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getVisibleRanges;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromChild:(WUXAPIRawElementProviderSimple*)childElement;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromPoint:(WFPoint*)screenLocation;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextProvider : RTObject <WUXAPITextProvider>
@end

#endif // __WUXAPITextProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextProvider2
#ifndef __WUXAPITextProvider2_DEFINED__
#define __WUXAPITextProvider2_DEFINED__

@protocol WUXAPITextProvider2 <WUXAPITextProvider>
- (RTObject<WUXAPITextRangeProvider>*)rangeFromAnnotation:(WUXAPIRawElementProviderSimple*)annotationElement;
- (RTObject<WUXAPITextRangeProvider>*)getCaretRange:(BOOL*)isActive;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getSelection;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getVisibleRanges;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromChild:(WUXAPIRawElementProviderSimple*)childElement;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromPoint:(WFPoint*)screenLocation;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextProvider2 : RTObject <WUXAPITextProvider2>
@end

#endif // __WUXAPITextProvider2_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2
#ifndef __WUXAPITextRangeProvider2_DEFINED__
#define __WUXAPITextRangeProvider2_DEFINED__

@protocol WUXAPITextRangeProvider2 <WUXAPITextRangeProvider>
- (void)showContextMenu;
- (RTObject<WUXAPITextRangeProvider>*)clone;
- (BOOL)compare:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider;
- (int)compareEndpoints:(WUXATTextPatternRangeEndpoint)endpoint textRangeProvider:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider targetEndpoint:(WUXATTextPatternRangeEndpoint)targetEndpoint;
- (void)expandToEnclosingUnit:(WUXATTextUnit)unit;
- (RTObject<WUXAPITextRangeProvider>*)findAttribute:(int)attributeId value:(RTObject*)value backward:(BOOL)backward;
- (RTObject<WUXAPITextRangeProvider>*)findText:(NSString *)text backward:(BOOL)backward ignoreCase:(BOOL)ignoreCase;
- (RTObject*)getAttributeValue:(int)attributeId;
- (void)getBoundingRectangles:(NSArray* /* double */*)returnValue;
- (WUXAPIRawElementProviderSimple*)getEnclosingElement;
- (NSString *)getText:(int)maxLength;
- (int)move:(WUXATTextUnit)unit count:(int)count;
- (int)moveEndpointByUnit:(WUXATTextPatternRangeEndpoint)endpoint unit:(WUXATTextUnit)unit count:(int)count;
- (void)moveEndpointByRange:(WUXATTextPatternRangeEndpoint)endpoint textRangeProvider:(RTObject<WUXAPITextRangeProvider>*)textRangeProvider targetEndpoint:(WUXATTextPatternRangeEndpoint)targetEndpoint;
- (void)select;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)scrollIntoView:(BOOL)alignToTop;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getChildren;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextRangeProvider2 : RTObject <WUXAPITextRangeProvider2>
@end

#endif // __WUXAPITextRangeProvider2_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IToggleProvider
#ifndef __WUXAPIToggleProvider_DEFINED__
#define __WUXAPIToggleProvider_DEFINED__

@protocol WUXAPIToggleProvider
@property (readonly) WUXAToggleState toggleState;
- (void)toggle;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIToggleProvider : RTObject <WUXAPIToggleProvider>
@end

#endif // __WUXAPIToggleProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITransformProvider
#ifndef __WUXAPITransformProvider_DEFINED__
#define __WUXAPITransformProvider_DEFINED__

@protocol WUXAPITransformProvider
@property (readonly) BOOL canMove;
@property (readonly) BOOL canResize;
@property (readonly) BOOL canRotate;
- (void)move:(double)x y:(double)y;
- (void)resize:(double)width height:(double)height;
- (void)rotate:(double)degrees;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITransformProvider : RTObject <WUXAPITransformProvider>
@end

#endif // __WUXAPITransformProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITransformProvider2
#ifndef __WUXAPITransformProvider2_DEFINED__
#define __WUXAPITransformProvider2_DEFINED__

@protocol WUXAPITransformProvider2 <WUXAPITransformProvider>
@property (readonly) BOOL canZoom;
@property (readonly) double maxZoom;
@property (readonly) double minZoom;
@property (readonly) double zoomLevel;
- (void)zoom:(double)zoom;
- (void)zoomByUnit:(WUXAZoomUnit)zoomUnit;
- (void)move:(double)x y:(double)y;
- (void)resize:(double)width height:(double)height;
- (void)rotate:(double)degrees;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITransformProvider2 : RTObject <WUXAPITransformProvider2>
@end

#endif // __WUXAPITransformProvider2_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IValueProvider
#ifndef __WUXAPIValueProvider_DEFINED__
#define __WUXAPIValueProvider_DEFINED__

@protocol WUXAPIValueProvider
@property (readonly) BOOL isReadOnly;
@property (readonly) NSString * value;
- (void)setValue:(NSString *)value;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIValueProvider : RTObject <WUXAPIValueProvider>
@end

#endif // __WUXAPIValueProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider
#ifndef __WUXAPIVirtualizedItemProvider_DEFINED__
#define __WUXAPIVirtualizedItemProvider_DEFINED__

@protocol WUXAPIVirtualizedItemProvider
- (void)realize;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIVirtualizedItemProvider : RTObject <WUXAPIVirtualizedItemProvider>
@end

#endif // __WUXAPIVirtualizedItemProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.IWindowProvider
#ifndef __WUXAPIWindowProvider_DEFINED__
#define __WUXAPIWindowProvider_DEFINED__

@protocol WUXAPIWindowProvider
@property (readonly) WUXAWindowInteractionState interactionState;
@property (readonly) BOOL isModal;
@property (readonly) BOOL isTopmost;
@property (readonly) BOOL maximizable;
@property (readonly) BOOL minimizable;
@property (readonly) WUXAWindowVisualState visualState;
- (void)close;
- (void)setVisualState:(WUXAWindowVisualState)state;
- (BOOL)waitForInputIdle:(int)milliseconds;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIWindowProvider : RTObject <WUXAPIWindowProvider>
@end

#endif // __WUXAPIWindowProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider
#ifndef __WUXAPICustomNavigationProvider_DEFINED__
#define __WUXAPICustomNavigationProvider_DEFINED__

@protocol WUXAPICustomNavigationProvider
- (RTObject*)navigateCustom:(WUXAPAutomationNavigationDirection)direction;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPICustomNavigationProvider : RTObject <WUXAPICustomNavigationProvider>
@end

#endif // __WUXAPICustomNavigationProvider_DEFINED__

// Windows.UI.Xaml.Automation.Provider.ITextEditProvider
#ifndef __WUXAPITextEditProvider_DEFINED__
#define __WUXAPITextEditProvider_DEFINED__

@protocol WUXAPITextEditProvider <WUXAPITextProvider>
- (RTObject<WUXAPITextRangeProvider>*)getActiveComposition;
- (RTObject<WUXAPITextRangeProvider>*)getConversionTarget;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getSelection;
- (NSArray* /* RTObject<WUXAPITextRangeProvider>* */)getVisibleRanges;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromChild:(WUXAPIRawElementProviderSimple*)childElement;
- (RTObject<WUXAPITextRangeProvider>*)rangeFromPoint:(WFPoint*)screenLocation;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPITextEditProvider : RTObject <WUXAPITextEditProvider>
@end

#endif // __WUXAPITextEditProvider_DEFINED__

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

// Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple
#ifndef __WUXAPIRawElementProviderSimple_DEFINED__
#define __WUXAPIRawElementProviderSimple_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIRawElementProviderSimple : WXDependencyObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPIRawElementProviderSimple_DEFINED__

