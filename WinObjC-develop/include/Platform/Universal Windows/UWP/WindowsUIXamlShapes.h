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

// WindowsUIXamlShapes.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
#define OBJCUWPWINDOWSUIXAMLSHAPESEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXamlShapes.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXSShape, WUXSEllipse, WUXSLine, WUXSPath, WUXSPolygon, WUXSPolyline, WUXSRectangle;
@protocol WUXSIShape, WUXSIShapeStatics, WUXSIShapeFactory, WUXSIShape2, WUXSIEllipse, WUXSILine, WUXSILineStatics, WUXSIPath, WUXSIPathStatics, WUXSIPathFactory, WUXSIPolygon, WUXSIPolygonStatics, WUXSIPolyline, WUXSIPolylineStatics, WUXSIRectangle, WUXSIRectangleStatics;

#include "WindowsUIXamlMediaAnimation.h"
#include "WindowsApplicationModelDataTransfer.h"
#include "WindowsUIXamlMedia.h"
#include "WindowsUIXamlInput.h"
#include "WindowsUIComposition.h"
#include "WindowsUIXaml.h"
#include "WindowsFoundation.h"
#include "WindowsUIInput.h"
#include "WindowsUIXamlAutomationPeers.h"
#include "WindowsUIXamlControlsPrimitives.h"
#include "WindowsUIXamlData.h"
#include "WindowsUIXamlMediaMedia3D.h"
#include "WindowsUICore.h"
// Windows.UI.Xaml.DependencyPropertyChangedCallback
#ifndef __WXDependencyPropertyChangedCallback__DEFINED
#define __WXDependencyPropertyChangedCallback__DEFINED
typedef void(^WXDependencyPropertyChangedCallback)(WXDependencyObject* sender, WXDependencyProperty* dp);
#endif // __WXDependencyPropertyChangedCallback__DEFINED

// Windows.UI.Xaml.DragEventHandler
#ifndef __WXDragEventHandler__DEFINED
#define __WXDragEventHandler__DEFINED
typedef void(^WXDragEventHandler)(RTObject* sender, WXDragEventArgs* e);
#endif // __WXDragEventHandler__DEFINED

// Windows.UI.Xaml.Input.DoubleTappedEventHandler
#ifndef __WUXIDoubleTappedEventHandler__DEFINED
#define __WUXIDoubleTappedEventHandler__DEFINED
typedef void(^WUXIDoubleTappedEventHandler)(RTObject* sender, WUXIDoubleTappedRoutedEventArgs* e);
#endif // __WUXIDoubleTappedEventHandler__DEFINED

// Windows.UI.Xaml.Input.HoldingEventHandler
#ifndef __WUXIHoldingEventHandler__DEFINED
#define __WUXIHoldingEventHandler__DEFINED
typedef void(^WUXIHoldingEventHandler)(RTObject* sender, WUXIHoldingRoutedEventArgs* e);
#endif // __WUXIHoldingEventHandler__DEFINED

// Windows.UI.Xaml.Input.KeyEventHandler
#ifndef __WUXIKeyEventHandler__DEFINED
#define __WUXIKeyEventHandler__DEFINED
typedef void(^WUXIKeyEventHandler)(RTObject* sender, WUXIKeyRoutedEventArgs* e);
#endif // __WUXIKeyEventHandler__DEFINED

// Windows.UI.Xaml.Input.ManipulationCompletedEventHandler
#ifndef __WUXIManipulationCompletedEventHandler__DEFINED
#define __WUXIManipulationCompletedEventHandler__DEFINED
typedef void(^WUXIManipulationCompletedEventHandler)(RTObject* sender, WUXIManipulationCompletedRoutedEventArgs* e);
#endif // __WUXIManipulationCompletedEventHandler__DEFINED

// Windows.UI.Xaml.Input.ManipulationDeltaEventHandler
#ifndef __WUXIManipulationDeltaEventHandler__DEFINED
#define __WUXIManipulationDeltaEventHandler__DEFINED
typedef void(^WUXIManipulationDeltaEventHandler)(RTObject* sender, WUXIManipulationDeltaRoutedEventArgs* e);
#endif // __WUXIManipulationDeltaEventHandler__DEFINED

// Windows.UI.Xaml.Input.ManipulationInertiaStartingEventHandler
#ifndef __WUXIManipulationInertiaStartingEventHandler__DEFINED
#define __WUXIManipulationInertiaStartingEventHandler__DEFINED
typedef void(^WUXIManipulationInertiaStartingEventHandler)(RTObject* sender, WUXIManipulationInertiaStartingRoutedEventArgs* e);
#endif // __WUXIManipulationInertiaStartingEventHandler__DEFINED

// Windows.UI.Xaml.Input.ManipulationStartedEventHandler
#ifndef __WUXIManipulationStartedEventHandler__DEFINED
#define __WUXIManipulationStartedEventHandler__DEFINED
typedef void(^WUXIManipulationStartedEventHandler)(RTObject* sender, WUXIManipulationStartedRoutedEventArgs* e);
#endif // __WUXIManipulationStartedEventHandler__DEFINED

// Windows.UI.Xaml.Input.ManipulationStartingEventHandler
#ifndef __WUXIManipulationStartingEventHandler__DEFINED
#define __WUXIManipulationStartingEventHandler__DEFINED
typedef void(^WUXIManipulationStartingEventHandler)(RTObject* sender, WUXIManipulationStartingRoutedEventArgs* e);
#endif // __WUXIManipulationStartingEventHandler__DEFINED

// Windows.UI.Xaml.Input.PointerEventHandler
#ifndef __WUXIPointerEventHandler__DEFINED
#define __WUXIPointerEventHandler__DEFINED
typedef void(^WUXIPointerEventHandler)(RTObject* sender, WUXIPointerRoutedEventArgs* e);
#endif // __WUXIPointerEventHandler__DEFINED

// Windows.UI.Xaml.Input.RightTappedEventHandler
#ifndef __WUXIRightTappedEventHandler__DEFINED
#define __WUXIRightTappedEventHandler__DEFINED
typedef void(^WUXIRightTappedEventHandler)(RTObject* sender, WUXIRightTappedRoutedEventArgs* e);
#endif // __WUXIRightTappedEventHandler__DEFINED

// Windows.UI.Xaml.Input.TappedEventHandler
#ifndef __WUXITappedEventHandler__DEFINED
#define __WUXITappedEventHandler__DEFINED
typedef void(^WUXITappedEventHandler)(RTObject* sender, WUXITappedRoutedEventArgs* e);
#endif // __WUXITappedEventHandler__DEFINED

// Windows.UI.Xaml.RoutedEventHandler
#ifndef __WXRoutedEventHandler__DEFINED
#define __WXRoutedEventHandler__DEFINED
typedef void(^WXRoutedEventHandler)(RTObject* sender, WXRoutedEventArgs* e);
#endif // __WXRoutedEventHandler__DEFINED

// Windows.UI.Xaml.SizeChangedEventHandler
#ifndef __WXSizeChangedEventHandler__DEFINED
#define __WXSizeChangedEventHandler__DEFINED
typedef void(^WXSizeChangedEventHandler)(RTObject* sender, WXSizeChangedEventArgs* e);
#endif // __WXSizeChangedEventHandler__DEFINED


#import <Foundation/Foundation.h>

// Windows.UI.Xaml.IFrameworkElementOverrides
#ifndef __WXIFrameworkElementOverrides_DEFINED__
#define __WXIFrameworkElementOverrides_DEFINED__

@protocol WXIFrameworkElementOverrides
- (WFSize*)measureOverride:(WFSize*)availableSize;
- (WFSize*)arrangeOverride:(WFSize*)finalSize;
- (void)onApplyTemplate;
@end

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXIFrameworkElementOverrides : RTObject <WXIFrameworkElementOverrides>
@end

#endif // __WXIFrameworkElementOverrides_DEFINED__

// Windows.UI.Xaml.IFrameworkElementOverrides2
#ifndef __WXIFrameworkElementOverrides2_DEFINED__
#define __WXIFrameworkElementOverrides2_DEFINED__

@protocol WXIFrameworkElementOverrides2
- (BOOL)goToElementStateCore:(NSString *)stateName useTransitions:(BOOL)useTransitions;
@end

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXIFrameworkElementOverrides2 : RTObject <WXIFrameworkElementOverrides2>
@end

#endif // __WXIFrameworkElementOverrides2_DEFINED__

// Windows.UI.Xaml.IUIElementOverrides
#ifndef __WXIUIElementOverrides_DEFINED__
#define __WXIUIElementOverrides_DEFINED__

@protocol WXIUIElementOverrides
- (WUXAPAutomationPeer*)onCreateAutomationPeer;
- (void)onDisconnectVisualChildren;
- (id<NSFastEnumeration> /* id<NSFastEnumeration> < WFPoint* > */)findSubElementsForTouchTargeting:(WFPoint*)point boundingRect:(WFRect*)boundingRect;
@end

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXIUIElementOverrides : RTObject <WXIUIElementOverrides>
@end

#endif // __WXIUIElementOverrides_DEFINED__

// Windows.UI.Xaml.IUIElementOverrides7
#ifndef __WXIUIElementOverrides7_DEFINED__
#define __WXIUIElementOverrides7_DEFINED__

@protocol WXIUIElementOverrides7
- (id<NSFastEnumeration> /* WXDependencyObject* */)getChildrenInTabFocusOrder;
- (void)onProcessKeyboardAccelerators:(WUXIProcessKeyboardAcceleratorEventArgs*)args;
@end

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXIUIElementOverrides7 : RTObject <WXIUIElementOverrides7>
@end

#endif // __WXIUIElementOverrides7_DEFINED__

// Windows.UI.Xaml.DependencyObject
#ifndef __WXDependencyObject_DEFINED__
#define __WXDependencyObject_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
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

// Windows.UI.Xaml.UIElement
#ifndef __WXUIElement_DEFINED__
#define __WXUIElement_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXUIElement : WXDependencyObject
+ (BOOL)tryStartDirectManipulation:(WUXIPointer*)value;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isTapEnabled;
@property (retain) WUXMProjection* projection;
@property BOOL isRightTapEnabled;
@property BOOL isHoldingEnabled;
@property BOOL isHitTestVisible;
@property BOOL isDoubleTapEnabled;
@property BOOL allowDrop;
@property WUXIManipulationModes manipulationMode;
@property (retain) WUXMRectangleGeometry* clip;
@property (retain) WUXMCacheMode* cacheMode;
@property WXVisibility visibility;
@property BOOL useLayoutRounding;
@property (retain) WUXMATransitionCollection* transitions;
@property (retain) WFPoint* renderTransformOrigin;
@property (retain) WUXMTransform* renderTransform;
@property double opacity;
@property (readonly) WFSize* desiredSize;
@property (readonly) NSArray* /* WUXIPointer* */ pointerCaptures;
@property (readonly) WFSize* renderSize;
@property WUXMElementCompositeMode compositeMode;
@property (retain) WUXMMTransform3D* transform3D;
@property BOOL canDrag;
@property BOOL isAccessKeyScope;
@property BOOL exitDisplayModeOnAccessKeyInvoked;
@property (retain) WUXCPFlyoutBase* contextFlyout;
@property (retain) WXDependencyObject* accessKeyScopeOwner;
@property (retain) NSString * accessKey;
@property double keyTipHorizontalOffset;
@property WXElementHighContrastAdjustment highContrastAdjustment;
@property WUXIXYFocusNavigationStrategy xYFocusUpNavigationStrategy;
@property WUXIXYFocusNavigationStrategy xYFocusRightNavigationStrategy;
@property WUXIXYFocusNavigationStrategy xYFocusLeftNavigationStrategy;
@property WUXIXYFocusKeyboardNavigationMode xYFocusKeyboardNavigation;
@property WUXIXYFocusNavigationStrategy xYFocusDownNavigationStrategy;
@property WUXIKeyboardNavigationMode tabFocusNavigation;
@property double keyTipVerticalOffset;
@property WUXIKeyTipPlacementMode keyTipPlacementMode;
@property (readonly) NSMutableArray* /* WUXMXamlLight* */ lights;
@property (readonly) NSMutableArray* /* WUXIKeyboardAccelerator* */ keyboardAccelerators;
+ (WXDependencyProperty*)opacityProperty;
+ (WXDependencyProperty*)allowDropProperty;
+ (WXDependencyProperty*)cacheModeProperty;
+ (WXDependencyProperty*)clipProperty;
+ (WXRoutedEvent*)doubleTappedEvent;
+ (WXRoutedEvent*)dragEnterEvent;
+ (WXRoutedEvent*)dragLeaveEvent;
+ (WXRoutedEvent*)dragOverEvent;
+ (WXRoutedEvent*)dropEvent;
+ (WXRoutedEvent*)holdingEvent;
+ (WXDependencyProperty*)isDoubleTapEnabledProperty;
+ (WXDependencyProperty*)isHitTestVisibleProperty;
+ (WXDependencyProperty*)isHoldingEnabledProperty;
+ (WXDependencyProperty*)isRightTapEnabledProperty;
+ (WXDependencyProperty*)isTapEnabledProperty;
+ (WXRoutedEvent*)keyDownEvent;
+ (WXRoutedEvent*)keyUpEvent;
+ (WXRoutedEvent*)manipulationCompletedEvent;
+ (WXRoutedEvent*)manipulationDeltaEvent;
+ (WXRoutedEvent*)manipulationInertiaStartingEvent;
+ (WXDependencyProperty*)manipulationModeProperty;
+ (WXRoutedEvent*)manipulationStartedEvent;
+ (WXRoutedEvent*)manipulationStartingEvent;
+ (WXRoutedEvent*)pointerCanceledEvent;
+ (WXRoutedEvent*)pointerCaptureLostEvent;
+ (WXDependencyProperty*)pointerCapturesProperty;
+ (WXRoutedEvent*)pointerEnteredEvent;
+ (WXRoutedEvent*)pointerExitedEvent;
+ (WXRoutedEvent*)pointerMovedEvent;
+ (WXRoutedEvent*)pointerPressedEvent;
+ (WXRoutedEvent*)pointerReleasedEvent;
+ (WXRoutedEvent*)pointerWheelChangedEvent;
+ (WXDependencyProperty*)projectionProperty;
+ (WXDependencyProperty*)renderTransformOriginProperty;
+ (WXDependencyProperty*)renderTransformProperty;
+ (WXRoutedEvent*)rightTappedEvent;
+ (WXRoutedEvent*)tappedEvent;
+ (WXDependencyProperty*)transitionsProperty;
+ (WXDependencyProperty*)useLayoutRoundingProperty;
+ (WXDependencyProperty*)visibilityProperty;
+ (WXDependencyProperty*)compositeModeProperty;
+ (WXDependencyProperty*)transform3DProperty;
+ (WXDependencyProperty*)canDragProperty;
+ (WXDependencyProperty*)accessKeyProperty;
+ (WXDependencyProperty*)isAccessKeyScopeProperty;
+ (WXDependencyProperty*)exitDisplayModeOnAccessKeyInvokedProperty;
+ (WXDependencyProperty*)contextFlyoutProperty;
+ (WXDependencyProperty*)accessKeyScopeOwnerProperty;
+ (WXDependencyProperty*)xYFocusKeyboardNavigationProperty;
+ (WXDependencyProperty*)xYFocusLeftNavigationStrategyProperty;
+ (WXDependencyProperty*)xYFocusRightNavigationStrategyProperty;
+ (WXDependencyProperty*)xYFocusUpNavigationStrategyProperty;
+ (WXDependencyProperty*)highContrastAdjustmentProperty;
+ (WXDependencyProperty*)xYFocusDownNavigationStrategyProperty;
+ (WXDependencyProperty*)keyTipHorizontalOffsetProperty;
+ (WXDependencyProperty*)keyTipPlacementModeProperty;
+ (WXDependencyProperty*)keyTipVerticalOffsetProperty;
+ (WXDependencyProperty*)lightsProperty;
+ (WXDependencyProperty*)tabFocusNavigationProperty;
+ (WXRoutedEvent*)noFocusCandidateFoundEvent;
+ (WXRoutedEvent*)losingFocusEvent;
+ (WXRoutedEvent*)gettingFocusEvent;
+ (WXRoutedEvent*)characterReceivedEvent;
+ (WXRoutedEvent*)previewKeyUpEvent;
+ (WXRoutedEvent*)previewKeyDownEvent;
- (EventRegistrationToken)addDoubleTappedEvent:(WUXIDoubleTappedEventHandler)del;
- (void)removeDoubleTappedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDragEnterEvent:(WXDragEventHandler)del;
- (void)removeDragEnterEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDragLeaveEvent:(WXDragEventHandler)del;
- (void)removeDragLeaveEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDragOverEvent:(WXDragEventHandler)del;
- (void)removeDragOverEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDropEvent:(WXDragEventHandler)del;
- (void)removeDropEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addGotFocusEvent:(WXRoutedEventHandler)del;
- (void)removeGotFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addHoldingEvent:(WUXIHoldingEventHandler)del;
- (void)removeHoldingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyDownEvent:(WUXIKeyEventHandler)del;
- (void)removeKeyDownEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyUpEvent:(WUXIKeyEventHandler)del;
- (void)removeKeyUpEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLostFocusEvent:(WXRoutedEventHandler)del;
- (void)removeLostFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addManipulationCompletedEvent:(WUXIManipulationCompletedEventHandler)del;
- (void)removeManipulationCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addManipulationDeltaEvent:(WUXIManipulationDeltaEventHandler)del;
- (void)removeManipulationDeltaEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addManipulationInertiaStartingEvent:(WUXIManipulationInertiaStartingEventHandler)del;
- (void)removeManipulationInertiaStartingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addManipulationStartedEvent:(WUXIManipulationStartedEventHandler)del;
- (void)removeManipulationStartedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addManipulationStartingEvent:(WUXIManipulationStartingEventHandler)del;
- (void)removeManipulationStartingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCanceledEvent:(WUXIPointerEventHandler)del;
- (void)removePointerCanceledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCaptureLostEvent:(WUXIPointerEventHandler)del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(WUXIPointerEventHandler)del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(WUXIPointerEventHandler)del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(WUXIPointerEventHandler)del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(WUXIPointerEventHandler)del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(WUXIPointerEventHandler)del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(WUXIPointerEventHandler)del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addRightTappedEvent:(WUXIRightTappedEventHandler)del;
- (void)removeRightTappedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTappedEvent:(WUXITappedEventHandler)del;
- (void)removeTappedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDragStartingEvent:(void(^)(WXUIElement*, WXDragStartingEventArgs*))del;
- (void)removeDragStartingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDropCompletedEvent:(void(^)(WXUIElement*, WXDropCompletedEventArgs*))del;
- (void)removeDropCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAccessKeyDisplayDismissedEvent:(void(^)(WXUIElement*, WUXIAccessKeyDisplayDismissedEventArgs*))del;
- (void)removeAccessKeyDisplayDismissedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAccessKeyDisplayRequestedEvent:(void(^)(WXUIElement*, WUXIAccessKeyDisplayRequestedEventArgs*))del;
- (void)removeAccessKeyDisplayRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAccessKeyInvokedEvent:(void(^)(WXUIElement*, WUXIAccessKeyInvokedEventArgs*))del;
- (void)removeAccessKeyInvokedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addContextCanceledEvent:(void(^)(WXUIElement*, WXRoutedEventArgs*))del;
- (void)removeContextCanceledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addContextRequestedEvent:(void(^)(WXUIElement*, WUXIContextRequestedEventArgs*))del;
- (void)removeContextRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addGettingFocusEvent:(void(^)(WXUIElement*, WUXIGettingFocusEventArgs*))del;
- (void)removeGettingFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLosingFocusEvent:(void(^)(WXUIElement*, WUXILosingFocusEventArgs*))del;
- (void)removeLosingFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addNoFocusCandidateFoundEvent:(void(^)(WXUIElement*, WUXINoFocusCandidateFoundEventArgs*))del;
- (void)removeNoFocusCandidateFoundEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCharacterReceivedEvent:(void(^)(WXUIElement*, WUXICharacterReceivedRoutedEventArgs*))del;
- (void)removeCharacterReceivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPreviewKeyDownEvent:(WUXIKeyEventHandler)del;
- (void)removePreviewKeyDownEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPreviewKeyUpEvent:(WUXIKeyEventHandler)del;
- (void)removePreviewKeyUpEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addProcessKeyboardAcceleratorsEvent:(void(^)(WXUIElement*, WUXIProcessKeyboardAcceleratorEventArgs*))del;
- (void)removeProcessKeyboardAcceleratorsEvent:(EventRegistrationToken)tok;
- (void)measure:(WFSize*)availableSize;
- (void)arrange:(WFRect*)finalRect;
- (BOOL)capturePointer:(WUXIPointer*)value;
- (void)releasePointerCapture:(WUXIPointer*)value;
- (void)releasePointerCaptures;
- (void)addHandler:(WXRoutedEvent*)routedEvent handler:(RTObject*)handler handledEventsToo:(BOOL)handledEventsToo;
- (void)removeHandler:(WXRoutedEvent*)routedEvent handler:(RTObject*)handler;
- (WUXMGeneralTransform*)transformToVisual:(WXUIElement*)visual;
- (void)invalidateMeasure;
- (void)invalidateArrange;
- (void)updateLayout;
- (WUXAPAutomationPeer*)onCreateAutomationPeer;
- (void)onDisconnectVisualChildren;
- (id<NSFastEnumeration> /* id<NSFastEnumeration> < WFPoint* > */)findSubElementsForTouchTargeting:(WFPoint*)point boundingRect:(WFRect*)boundingRect;
- (BOOL)cancelDirectManipulations;
- (void)startDragAsync:(WUIPointerPoint*)pointerPoint success:(void (^)(WADDataPackageOperation))success failure:(void (^)(NSError*))failure;
- (void)startBringIntoView;
- (void)startBringIntoViewWithOptions:(WXBringIntoViewOptions*)options;
- (void)tryInvokeKeyboardAccelerator:(WUXIProcessKeyboardAcceleratorEventArgs*)args;
- (id<NSFastEnumeration> /* WXDependencyObject* */)getChildrenInTabFocusOrder;
- (void)onProcessKeyboardAccelerators:(WUXIProcessKeyboardAcceleratorEventArgs*)args;
@end

#endif // __WXUIElement_DEFINED__

// Windows.UI.Xaml.FrameworkElement
#ifndef __WXFrameworkElement_DEFINED__
#define __WXFrameworkElement_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WXFrameworkElement : WXUIElement
+ (void)deferTree:(WXDependencyObject*)element;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property double height;
@property WXFlowDirection flowDirection;
@property (retain) RTObject* dataContext;
@property (retain) NSString * name;
@property double minWidth;
@property (retain) WXResourceDictionary* resources;
@property double minHeight;
@property double maxWidth;
@property double maxHeight;
@property (retain) WXThickness* margin;
@property (retain) NSString * language;
@property WXHorizontalAlignment horizontalAlignment;
@property WXVerticalAlignment verticalAlignment;
@property double width;
@property (retain) RTObject* tag;
@property (retain) WXStyle* style;
@property (readonly) double actualWidth;
@property (readonly) WFUri* baseUri;
@property (readonly) double actualHeight;
@property (readonly) WXDependencyObject* parent;
@property (readonly) WXTriggerCollection* triggers;
@property WXElementTheme requestedTheme;
@property (retain) WXThickness* focusVisualSecondaryThickness;
@property (retain) WUXMBrush* focusVisualSecondaryBrush;
@property (retain) WXThickness* focusVisualPrimaryThickness;
@property (retain) WUXMBrush* focusVisualPrimaryBrush;
@property (retain) WXThickness* focusVisualMargin;
@property BOOL allowFocusWhenDisabled;
@property BOOL allowFocusOnInteraction;
@property (readonly) WXElementTheme actualTheme;
+ (WXDependencyProperty*)nameProperty;
+ (WXDependencyProperty*)actualHeightProperty;
+ (WXDependencyProperty*)actualWidthProperty;
+ (WXDependencyProperty*)dataContextProperty;
+ (WXDependencyProperty*)flowDirectionProperty;
+ (WXDependencyProperty*)heightProperty;
+ (WXDependencyProperty*)horizontalAlignmentProperty;
+ (WXDependencyProperty*)languageProperty;
+ (WXDependencyProperty*)marginProperty;
+ (WXDependencyProperty*)maxHeightProperty;
+ (WXDependencyProperty*)maxWidthProperty;
+ (WXDependencyProperty*)minHeightProperty;
+ (WXDependencyProperty*)minWidthProperty;
+ (WXDependencyProperty*)styleProperty;
+ (WXDependencyProperty*)tagProperty;
+ (WXDependencyProperty*)verticalAlignmentProperty;
+ (WXDependencyProperty*)widthProperty;
+ (WXDependencyProperty*)requestedThemeProperty;
+ (WXDependencyProperty*)focusVisualSecondaryThicknessProperty;
+ (WXDependencyProperty*)allowFocusOnInteractionProperty;
+ (WXDependencyProperty*)allowFocusWhenDisabledProperty;
+ (WXDependencyProperty*)focusVisualMarginProperty;
+ (WXDependencyProperty*)focusVisualPrimaryBrushProperty;
+ (WXDependencyProperty*)focusVisualPrimaryThicknessProperty;
+ (WXDependencyProperty*)focusVisualSecondaryBrushProperty;
+ (WXDependencyProperty*)actualThemeProperty;
- (EventRegistrationToken)addLayoutUpdatedEvent:(void(^)(RTObject*, RTObject*))del;
- (void)removeLayoutUpdatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLoadedEvent:(WXRoutedEventHandler)del;
- (void)removeLoadedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSizeChangedEvent:(WXSizeChangedEventHandler)del;
- (void)removeSizeChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addUnloadedEvent:(WXRoutedEventHandler)del;
- (void)removeUnloadedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addDataContextChangedEvent:(void(^)(WXFrameworkElement*, WXDataContextChangedEventArgs*))del;
- (void)removeDataContextChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLoadingEvent:(void(^)(WXFrameworkElement*, RTObject*))del;
- (void)removeLoadingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addActualThemeChangedEvent:(void(^)(WXFrameworkElement*, RTObject*))del;
- (void)removeActualThemeChangedEvent:(EventRegistrationToken)tok;
- (RTObject*)findName:(NSString *)name;
- (void)setBinding:(WXDependencyProperty*)dp binding:(WUXDBindingBase*)binding;
- (WFSize*)measureOverride:(WFSize*)availableSize;
- (WFSize*)arrangeOverride:(WFSize*)finalSize;
- (void)onApplyTemplate;
- (WUXDBindingExpression*)getBindingExpression:(WXDependencyProperty*)dp;
- (BOOL)goToElementStateCore:(NSString *)stateName useTransitions:(BOOL)useTransitions;
@end

#endif // __WXFrameworkElement_DEFINED__

// Windows.UI.Xaml.Shapes.Shape
#ifndef __WUXSShape_DEFINED__
#define __WUXSShape_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSShape : WXFrameworkElement
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUXMDoubleCollection* strokeDashArray;
@property (retain) WUXMBrush* stroke;
@property WUXMStretch stretch;
@property WUXMPenLineCap strokeDashCap;
@property double strokeDashOffset;
@property (retain) WUXMBrush* fill;
@property double strokeThickness;
@property WUXMPenLineCap strokeStartLineCap;
@property double strokeMiterLimit;
@property WUXMPenLineJoin strokeLineJoin;
@property WUXMPenLineCap strokeEndLineCap;
@property (readonly) WUXMTransform* geometryTransform;
+ (WXDependencyProperty*)fillProperty;
+ (WXDependencyProperty*)stretchProperty;
+ (WXDependencyProperty*)strokeDashArrayProperty;
+ (WXDependencyProperty*)strokeDashCapProperty;
+ (WXDependencyProperty*)strokeDashOffsetProperty;
+ (WXDependencyProperty*)strokeEndLineCapProperty;
+ (WXDependencyProperty*)strokeLineJoinProperty;
+ (WXDependencyProperty*)strokeMiterLimitProperty;
+ (WXDependencyProperty*)strokeProperty;
+ (WXDependencyProperty*)strokeStartLineCapProperty;
+ (WXDependencyProperty*)strokeThicknessProperty;
- (WUCCompositionBrush*)getAlphaMask;
@end

#endif // __WUXSShape_DEFINED__

// Windows.UI.Xaml.Shapes.Ellipse
#ifndef __WUXSEllipse_DEFINED__
#define __WUXSEllipse_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSEllipse : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXSEllipse_DEFINED__

// Windows.UI.Xaml.Shapes.Line
#ifndef __WUXSLine_DEFINED__
#define __WUXSLine_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSLine : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property double y2;
@property double y1;
@property double x2;
@property double x1;
+ (WXDependencyProperty*)x1Property;
+ (WXDependencyProperty*)x2Property;
+ (WXDependencyProperty*)y1Property;
+ (WXDependencyProperty*)y2Property;
@end

#endif // __WUXSLine_DEFINED__

// Windows.UI.Xaml.Shapes.Path
#ifndef __WUXSPath_DEFINED__
#define __WUXSPath_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSPath : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUXMGeometry* data;
+ (WXDependencyProperty*)dataProperty;
@end

#endif // __WUXSPath_DEFINED__

// Windows.UI.Xaml.Shapes.Polygon
#ifndef __WUXSPolygon_DEFINED__
#define __WUXSPolygon_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSPolygon : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUXMPointCollection* points;
@property WUXMFillRule fillRule;
+ (WXDependencyProperty*)fillRuleProperty;
+ (WXDependencyProperty*)pointsProperty;
@end

#endif // __WUXSPolygon_DEFINED__

// Windows.UI.Xaml.Shapes.Polyline
#ifndef __WUXSPolyline_DEFINED__
#define __WUXSPolyline_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSPolyline : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUXMPointCollection* points;
@property WUXMFillRule fillRule;
+ (WXDependencyProperty*)fillRuleProperty;
+ (WXDependencyProperty*)pointsProperty;
@end

#endif // __WUXSPolyline_DEFINED__

// Windows.UI.Xaml.Shapes.Rectangle
#ifndef __WUXSRectangle_DEFINED__
#define __WUXSRectangle_DEFINED__

OBJCUWPWINDOWSUIXAMLSHAPESEXPORT
@interface WUXSRectangle : WUXSShape
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property double radiusY;
@property double radiusX;
+ (WXDependencyProperty*)radiusXProperty;
+ (WXDependencyProperty*)radiusYProperty;
@end

#endif // __WUXSRectangle_DEFINED__

