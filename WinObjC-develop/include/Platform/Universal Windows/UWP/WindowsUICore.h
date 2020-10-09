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

// WindowsUICore.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUCBackRequestedEventArgs, WUCSystemNavigationManager, WUCCoreDispatcher, WUCCoreCursor, WUCCoreWindow, WUCWindowActivatedEventArgs, WUCAutomationProviderRequestedEventArgs, WUCCharacterReceivedEventArgs, WUCCoreWindowEventArgs, WUCInputEnabledEventArgs, WUCKeyEventArgs, WUCPointerEventArgs, WUCTouchHitTestingEventArgs, WUCWindowSizeChangedEventArgs, WUCVisibilityChangedEventArgs, WUCClosestInteractiveBoundsRequestedEventArgs, WUCIdleDispatchedHandlerArgs, WUCAcceleratorKeyEventArgs, WUCCoreAcceleratorKeys, WUCCoreWindowResizeManager, WUCCoreComponentInputSource, WUCCoreIndependentInputSource, WUCCoreWindowPopupShowingEventArgs, WUCCoreWindowDialog, WUCCoreWindowFlyout;
@class WUCCorePhysicalKeyStatus, WUCCoreProximityEvaluation;
@protocol WUCISystemNavigationManager, WUCISystemNavigationManager2, WUCISystemNavigationManagerStatics, WUCIBackRequestedEventArgs, WUCICoreWindowEventArgs, WUCIAutomationProviderRequestedEventArgs, WUCICharacterReceivedEventArgs, WUCIInputEnabledEventArgs, WUCIKeyEventArgs, WUCIKeyEventArgs2, WUCIPointerEventArgs, WUCITouchHitTestingEventArgs, WUCIClosestInteractiveBoundsRequestedEventArgs, WUCIWindowActivatedEventArgs, WUCIWindowSizeChangedEventArgs, WUCIVisibilityChangedEventArgs, WUCICoreWindow, WUCICoreWindow2, WUCICoreWindow3, WUCICoreWindow4, WUCICoreWindow5, WUCICoreWindowStatic, WUCIAcceleratorKeyEventArgs, WUCIAcceleratorKeyEventArgs2, WUCICoreAcceleratorKeys, WUCICoreDispatcher, WUCICoreDispatcher2, WUCICoreDispatcherWithTaskPriority, WUCIIdleDispatchedHandlerArgs, WUCICoreCursor, WUCICoreCursorFactory, WUCIInitializeWithCoreWindow, WUCICoreWindowResizeManager, WUCICoreWindowResizeManagerLayoutCapability, WUCICoreWindowResizeManagerStatics, WUCICoreInputSourceBase, WUCICorePointerInputSource, WUCICoreKeyboardInputSource, WUCICoreKeyboardInputSource2, WUCICoreComponentFocusable, WUCICoreTouchHitTesting, WUCICoreClosestInteractiveBoundsRequested, WUCICorePointerRedirector, WUCICoreWindowPopupShowingEventArgs, WUCICoreWindowDialog, WUCICoreWindowDialogFactory, WUCICoreWindowFlyout, WUCICoreWindowFlyoutFactory;

// Windows.UI.Core.AppViewBackButtonVisibility
enum _WUCAppViewBackButtonVisibility {
    WUCAppViewBackButtonVisibilityVisible = 0,
    WUCAppViewBackButtonVisibilityCollapsed = 1,
};
typedef unsigned WUCAppViewBackButtonVisibility;

// Windows.UI.Core.CoreWindowActivationState
enum _WUCCoreWindowActivationState {
    WUCCoreWindowActivationStateCodeActivated = 0,
    WUCCoreWindowActivationStateDeactivated = 1,
    WUCCoreWindowActivationStatePointerActivated = 2,
};
typedef unsigned WUCCoreWindowActivationState;

// Windows.UI.Core.CoreWindowActivationMode
enum _WUCCoreWindowActivationMode {
    WUCCoreWindowActivationModeNone = 0,
    WUCCoreWindowActivationModeDeactivated = 1,
    WUCCoreWindowActivationModeActivatedNotForeground = 2,
    WUCCoreWindowActivationModeActivatedInForeground = 3,
};
typedef unsigned WUCCoreWindowActivationMode;

// Windows.UI.Core.CoreCursorType
enum _WUCCoreCursorType {
    WUCCoreCursorTypeArrow = 0,
    WUCCoreCursorTypeCross = 1,
    WUCCoreCursorTypeCustom = 2,
    WUCCoreCursorTypeHand = 3,
    WUCCoreCursorTypeHelp = 4,
    WUCCoreCursorTypeIBeam = 5,
    WUCCoreCursorTypeSizeAll = 6,
    WUCCoreCursorTypeSizeNortheastSouthwest = 7,
    WUCCoreCursorTypeSizeNorthSouth = 8,
    WUCCoreCursorTypeSizeNorthwestSoutheast = 9,
    WUCCoreCursorTypeSizeWestEast = 10,
    WUCCoreCursorTypeUniversalNo = 11,
    WUCCoreCursorTypeUpArrow = 12,
    WUCCoreCursorTypeWait = 13,
    WUCCoreCursorTypePin = 14,
    WUCCoreCursorTypePerson = 15,
};
typedef unsigned WUCCoreCursorType;

// Windows.UI.Core.CoreDispatcherPriority
enum _WUCCoreDispatcherPriority {
    WUCCoreDispatcherPriorityIdle = -2,
    WUCCoreDispatcherPriorityLow = -1,
    WUCCoreDispatcherPriorityNormal = 0,
    WUCCoreDispatcherPriorityHigh = 1,
};
typedef unsigned WUCCoreDispatcherPriority;

// Windows.UI.Core.CoreProcessEventsOption
enum _WUCCoreProcessEventsOption {
    WUCCoreProcessEventsOptionProcessOneAndAllPending = 0,
    WUCCoreProcessEventsOptionProcessOneIfPresent = 1,
    WUCCoreProcessEventsOptionProcessUntilQuit = 2,
    WUCCoreProcessEventsOptionProcessAllIfPresent = 3,
};
typedef unsigned WUCCoreProcessEventsOption;

// Windows.UI.Core.CoreWindowFlowDirection
enum _WUCCoreWindowFlowDirection {
    WUCCoreWindowFlowDirectionLeftToRight = 0,
    WUCCoreWindowFlowDirectionRightToLeft = 1,
};
typedef unsigned WUCCoreWindowFlowDirection;

// Windows.UI.Core.CoreVirtualKeyStates
enum _WUCCoreVirtualKeyStates {
    WUCCoreVirtualKeyStatesNone = 0,
    WUCCoreVirtualKeyStatesDown = 1,
    WUCCoreVirtualKeyStatesLocked = 2,
};
typedef unsigned WUCCoreVirtualKeyStates;

// Windows.UI.Core.CoreAcceleratorKeyEventType
enum _WUCCoreAcceleratorKeyEventType {
    WUCCoreAcceleratorKeyEventTypeCharacter = 2,
    WUCCoreAcceleratorKeyEventTypeDeadCharacter = 3,
    WUCCoreAcceleratorKeyEventTypeKeyDown = 0,
    WUCCoreAcceleratorKeyEventTypeKeyUp = 1,
    WUCCoreAcceleratorKeyEventTypeSystemCharacter = 6,
    WUCCoreAcceleratorKeyEventTypeSystemDeadCharacter = 7,
    WUCCoreAcceleratorKeyEventTypeSystemKeyDown = 4,
    WUCCoreAcceleratorKeyEventTypeSystemKeyUp = 5,
    WUCCoreAcceleratorKeyEventTypeUnicodeCharacter = 8,
};
typedef unsigned WUCCoreAcceleratorKeyEventType;

// Windows.UI.Core.CoreProximityEvaluationScore
enum _WUCCoreProximityEvaluationScore {
    WUCCoreProximityEvaluationScoreClosest = 0,
    WUCCoreProximityEvaluationScoreFarthest = 2147483647,
};
typedef unsigned WUCCoreProximityEvaluationScore;

// Windows.UI.Core.CoreInputDeviceTypes
enum _WUCCoreInputDeviceTypes {
    WUCCoreInputDeviceTypesNone = 0,
    WUCCoreInputDeviceTypesTouch = 1,
    WUCCoreInputDeviceTypesPen = 2,
    WUCCoreInputDeviceTypesMouse = 4,
};
typedef unsigned WUCCoreInputDeviceTypes;

#include "WindowsUIPopups.h"
#include "WindowsFoundation.h"
#include "WindowsSystem.h"
#include "WindowsUIInput.h"
#include "WindowsFoundationCollections.h"
// Windows.UI.Core.DispatchedHandler
#ifndef __WUCDispatchedHandler__DEFINED
#define __WUCDispatchedHandler__DEFINED
typedef void(^WUCDispatchedHandler)();
#endif // __WUCDispatchedHandler__DEFINED

// Windows.UI.Core.IdleDispatchedHandler
#ifndef __WUCIdleDispatchedHandler__DEFINED
#define __WUCIdleDispatchedHandler__DEFINED
typedef void(^WUCIdleDispatchedHandler)(WUCIdleDispatchedHandlerArgs* e);
#endif // __WUCIdleDispatchedHandler__DEFINED

// Windows.UI.Popups.UICommandInvokedHandler
#ifndef __WUPUICommandInvokedHandler__DEFINED
#define __WUPUICommandInvokedHandler__DEFINED
typedef void(^WUPUICommandInvokedHandler)(RTObject<WUPIUICommand>* command);
#endif // __WUPUICommandInvokedHandler__DEFINED


#import <Foundation/Foundation.h>

// [struct] Windows.UI.Core.CorePhysicalKeyStatus
OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCorePhysicalKeyStatus : NSObject
+ (instancetype)new;
@property unsigned int repeatCount;
@property unsigned int scanCode;
@property BOOL isExtendedKey;
@property BOOL isMenuKeyDown;
@property BOOL wasKeyDown;
@property BOOL isKeyReleased;
@end

// [struct] Windows.UI.Core.CoreProximityEvaluation
OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreProximityEvaluation : NSObject
+ (instancetype)new;
@property int score;
@property (retain) WFPoint* adjustedPoint;
@end

// Windows.UI.Core.DispatchedHandler
#ifndef __WUCDispatchedHandler__DEFINED
#define __WUCDispatchedHandler__DEFINED
typedef void(^WUCDispatchedHandler)();
#endif // __WUCDispatchedHandler__DEFINED

// Windows.UI.Core.IdleDispatchedHandler
#ifndef __WUCIdleDispatchedHandler__DEFINED
#define __WUCIdleDispatchedHandler__DEFINED
typedef void(^WUCIdleDispatchedHandler)(WUCIdleDispatchedHandlerArgs* e);
#endif // __WUCIdleDispatchedHandler__DEFINED

// Windows.UI.Core.ICoreWindowEventArgs
#ifndef __WUCICoreWindowEventArgs_DEFINED__
#define __WUCICoreWindowEventArgs_DEFINED__

@protocol WUCICoreWindowEventArgs
@property BOOL handled;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICoreWindowEventArgs : RTObject <WUCICoreWindowEventArgs>
@end

#endif // __WUCICoreWindowEventArgs_DEFINED__

// Windows.UI.Core.ICoreWindow
#ifndef __WUCICoreWindow_DEFINED__
#define __WUCICoreWindow_DEFINED__

@protocol WUCICoreWindow
@property (readonly) RTObject* automationHostProvider;
@property (readonly) WFRect* bounds;
@property (readonly) RTObject<WFCIPropertySet>* customProperties;
@property (readonly) WUCCoreDispatcher* dispatcher;
@property WUCCoreWindowFlowDirection flowDirection;
@property BOOL isInputEnabled;
@property (retain) WUCCoreCursor* pointerCursor;
@property (readonly) WFPoint* pointerPosition;
@property (readonly) BOOL visible;
- (EventRegistrationToken)addActivatedEvent:(void(^)(WUCCoreWindow*, WUCWindowActivatedEventArgs*))del;
- (void)removeActivatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAutomationProviderRequestedEvent:(void(^)(WUCCoreWindow*, WUCAutomationProviderRequestedEventArgs*))del;
- (void)removeAutomationProviderRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCharacterReceivedEvent:(void(^)(WUCCoreWindow*, WUCCharacterReceivedEventArgs*))del;
- (void)removeCharacterReceivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addClosedEvent:(void(^)(WUCCoreWindow*, WUCCoreWindowEventArgs*))del;
- (void)removeClosedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addInputEnabledEvent:(void(^)(WUCCoreWindow*, WUCInputEnabledEventArgs*))del;
- (void)removeInputEnabledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyDownEvent:(void(^)(WUCCoreWindow*, WUCKeyEventArgs*))del;
- (void)removeKeyDownEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyUpEvent:(void(^)(WUCCoreWindow*, WUCKeyEventArgs*))del;
- (void)removeKeyUpEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCaptureLostEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSizeChangedEvent:(void(^)(WUCCoreWindow*, WUCWindowSizeChangedEventArgs*))del;
- (void)removeSizeChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTouchHitTestingEvent:(void(^)(WUCCoreWindow*, WUCTouchHitTestingEventArgs*))del;
- (void)removeTouchHitTestingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVisibilityChangedEvent:(void(^)(WUCCoreWindow*, WUCVisibilityChangedEventArgs*))del;
- (void)removeVisibilityChangedEvent:(EventRegistrationToken)tok;
- (void)activate;
- (void)close;
- (WUCCoreVirtualKeyStates)getAsyncKeyState:(WSVirtualKey)virtualKey;
- (WUCCoreVirtualKeyStates)getKeyState:(WSVirtualKey)virtualKey;
- (void)releasePointerCapture;
- (void)setPointerCapture;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICoreWindow : RTObject <WUCICoreWindow>
@end

#endif // __WUCICoreWindow_DEFINED__

// Windows.UI.Core.ICoreAcceleratorKeys
#ifndef __WUCICoreAcceleratorKeys_DEFINED__
#define __WUCICoreAcceleratorKeys_DEFINED__

@protocol WUCICoreAcceleratorKeys
- (EventRegistrationToken)addAcceleratorKeyActivatedEvent:(void(^)(WUCCoreDispatcher*, WUCAcceleratorKeyEventArgs*))del;
- (void)removeAcceleratorKeyActivatedEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICoreAcceleratorKeys : RTObject <WUCICoreAcceleratorKeys>
@end

#endif // __WUCICoreAcceleratorKeys_DEFINED__

// Windows.UI.Core.IInitializeWithCoreWindow
#ifndef __WUCIInitializeWithCoreWindow_DEFINED__
#define __WUCIInitializeWithCoreWindow_DEFINED__

@protocol WUCIInitializeWithCoreWindow
- (void)Initialize:(WUCCoreWindow*)window;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCIInitializeWithCoreWindow : RTObject <WUCIInitializeWithCoreWindow>
@end

#endif // __WUCIInitializeWithCoreWindow_DEFINED__

// Windows.UI.Core.ICoreInputSourceBase
#ifndef __WUCICoreInputSourceBase_DEFINED__
#define __WUCICoreInputSourceBase_DEFINED__

@protocol WUCICoreInputSourceBase
@property (readonly) WUCCoreDispatcher* dispatcher;
@property BOOL isInputEnabled;
- (EventRegistrationToken)addInputEnabledEvent:(void(^)(RTObject*, WUCInputEnabledEventArgs*))del;
- (void)removeInputEnabledEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICoreInputSourceBase : RTObject <WUCICoreInputSourceBase>
@end

#endif // __WUCICoreInputSourceBase_DEFINED__

// Windows.UI.Core.ICorePointerInputSource
#ifndef __WUCICorePointerInputSource_DEFINED__
#define __WUCICorePointerInputSource_DEFINED__

@protocol WUCICorePointerInputSource
@property (readonly) BOOL hasCapture;
@property (retain) WUCCoreCursor* pointerCursor;
@property (readonly) WFPoint* pointerPosition;
- (EventRegistrationToken)addPointerCaptureLostEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (void)releasePointerCapture;
- (void)setPointerCapture;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICorePointerInputSource : RTObject <WUCICorePointerInputSource>
@end

#endif // __WUCICorePointerInputSource_DEFINED__

// Windows.UI.Core.ICorePointerRedirector
#ifndef __WUCICorePointerRedirector_DEFINED__
#define __WUCICorePointerRedirector_DEFINED__

@protocol WUCICorePointerRedirector
- (EventRegistrationToken)addPointerRoutedAwayEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedAwayEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerRoutedReleasedEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerRoutedToEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedToEvent:(EventRegistrationToken)tok;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCICorePointerRedirector : RTObject <WUCICorePointerRedirector>
@end

#endif // __WUCICorePointerRedirector_DEFINED__

// Windows.UI.Core.BackRequestedEventArgs
#ifndef __WUCBackRequestedEventArgs_DEFINED__
#define __WUCBackRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCBackRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@end

#endif // __WUCBackRequestedEventArgs_DEFINED__

// Windows.UI.Core.SystemNavigationManager
#ifndef __WUCSystemNavigationManager_DEFINED__
#define __WUCSystemNavigationManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCSystemNavigationManager : RTObject
+ (WUCSystemNavigationManager*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WUCAppViewBackButtonVisibility appViewBackButtonVisibility;
- (EventRegistrationToken)addBackRequestedEvent:(void(^)(RTObject*, WUCBackRequestedEventArgs*))del;
- (void)removeBackRequestedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUCSystemNavigationManager_DEFINED__

// Windows.UI.Core.CoreDispatcher
#ifndef __WUCCoreDispatcher_DEFINED__
#define __WUCCoreDispatcher_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreDispatcher : RTObject <WUCICoreAcceleratorKeys>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL hasThreadAccess;
@property WUCCoreDispatcherPriority currentPriority;
- (EventRegistrationToken)addAcceleratorKeyActivatedEvent:(void(^)(WUCCoreDispatcher*, WUCAcceleratorKeyEventArgs*))del;
- (void)removeAcceleratorKeyActivatedEvent:(EventRegistrationToken)tok;
- (void)processEvents:(WUCCoreProcessEventsOption)options;
- (RTObject<WFIAsyncAction>*)runAsync:(WUCCoreDispatcherPriority)priority agileCallback:(WUCDispatchedHandler)agileCallback;
- (RTObject<WFIAsyncAction>*)runIdleAsync:(WUCIdleDispatchedHandler)agileCallback;
- (BOOL)shouldYield;
- (BOOL)shouldYieldToPriority:(WUCCoreDispatcherPriority)priority;
- (void)stopProcessEvents;
- (void)tryRunAsync:(WUCCoreDispatcherPriority)priority agileCallback:(WUCDispatchedHandler)agileCallback success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)tryRunIdleAsync:(WUCIdleDispatchedHandler)agileCallback success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WUCCoreDispatcher_DEFINED__

// Windows.UI.Core.CoreCursor
#ifndef __WUCCoreCursor_DEFINED__
#define __WUCCoreCursor_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreCursor : RTObject
+ (WUCCoreCursor*)makeCursor:(WUCCoreCursorType)type id:(unsigned int)id ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int id;
@property (readonly) WUCCoreCursorType type;
@end

#endif // __WUCCoreCursor_DEFINED__

// Windows.UI.Core.CoreWindow
#ifndef __WUCCoreWindow_DEFINED__
#define __WUCCoreWindow_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindow : RTObject <WUCICoreWindow, WUCICorePointerRedirector>
+ (WUCCoreWindow*)getForCurrentThread;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFPoint* pointerPosition;
@property (retain) WUCCoreCursor* pointerCursor;
@property BOOL isInputEnabled;
@property WUCCoreWindowFlowDirection flowDirection;
@property (readonly) RTObject* automationHostProvider;
@property (readonly) WFRect* bounds;
@property (readonly) RTObject<WFCIPropertySet>* customProperties;
@property (readonly) WUCCoreDispatcher* dispatcher;
@property (readonly) BOOL visible;
@property (readonly) WUCCoreWindowActivationMode activationMode;
@property (readonly) WSDispatcherQueue* dispatcherQueue;
- (EventRegistrationToken)addActivatedEvent:(void(^)(WUCCoreWindow*, WUCWindowActivatedEventArgs*))del;
- (void)removeActivatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAutomationProviderRequestedEvent:(void(^)(WUCCoreWindow*, WUCAutomationProviderRequestedEventArgs*))del;
- (void)removeAutomationProviderRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCharacterReceivedEvent:(void(^)(WUCCoreWindow*, WUCCharacterReceivedEventArgs*))del;
- (void)removeCharacterReceivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addClosedEvent:(void(^)(WUCCoreWindow*, WUCCoreWindowEventArgs*))del;
- (void)removeClosedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addInputEnabledEvent:(void(^)(WUCCoreWindow*, WUCInputEnabledEventArgs*))del;
- (void)removeInputEnabledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyDownEvent:(void(^)(WUCCoreWindow*, WUCKeyEventArgs*))del;
- (void)removeKeyDownEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyUpEvent:(void(^)(WUCCoreWindow*, WUCKeyEventArgs*))del;
- (void)removeKeyUpEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCaptureLostEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(void(^)(WUCCoreWindow*, WUCPointerEventArgs*))del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addSizeChangedEvent:(void(^)(WUCCoreWindow*, WUCWindowSizeChangedEventArgs*))del;
- (void)removeSizeChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTouchHitTestingEvent:(void(^)(WUCCoreWindow*, WUCTouchHitTestingEventArgs*))del;
- (void)removeTouchHitTestingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVisibilityChangedEvent:(void(^)(WUCCoreWindow*, WUCVisibilityChangedEventArgs*))del;
- (void)removeVisibilityChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerRoutedAwayEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedAwayEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerRoutedReleasedEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerRoutedToEvent:(void(^)(RTObject<WUCICorePointerRedirector>*, WUCPointerEventArgs*))del;
- (void)removePointerRoutedToEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addClosestInteractiveBoundsRequestedEvent:(void(^)(WUCCoreWindow*, WUCClosestInteractiveBoundsRequestedEventArgs*))del;
- (void)removeClosestInteractiveBoundsRequestedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addResizeCompletedEvent:(void(^)(WUCCoreWindow*, RTObject*))del;
- (void)removeResizeCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addResizeStartedEvent:(void(^)(WUCCoreWindow*, RTObject*))del;
- (void)removeResizeStartedEvent:(EventRegistrationToken)tok;
- (void)activate;
- (void)close;
- (WUCCoreVirtualKeyStates)getAsyncKeyState:(WSVirtualKey)virtualKey;
- (WUCCoreVirtualKeyStates)getKeyState:(WSVirtualKey)virtualKey;
- (void)releasePointerCapture;
- (void)setPointerCapture;
- (NSString *)getCurrentKeyEventDeviceId;
@end

#endif // __WUCCoreWindow_DEFINED__

// Windows.UI.Core.WindowActivatedEventArgs
#ifndef __WUCWindowActivatedEventArgs_DEFINED__
#define __WUCWindowActivatedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCWindowActivatedEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) WUCCoreWindowActivationState windowActivationState;
@end

#endif // __WUCWindowActivatedEventArgs_DEFINED__

// Windows.UI.Core.AutomationProviderRequestedEventArgs
#ifndef __WUCAutomationProviderRequestedEventArgs_DEFINED__
#define __WUCAutomationProviderRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCAutomationProviderRequestedEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) RTObject* automationProvider;
@property BOOL handled;
@end

#endif // __WUCAutomationProviderRequestedEventArgs_DEFINED__

// Windows.UI.Core.CharacterReceivedEventArgs
#ifndef __WUCCharacterReceivedEventArgs_DEFINED__
#define __WUCCharacterReceivedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCharacterReceivedEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int keyCode;
@property (readonly) WUCCorePhysicalKeyStatus* keyStatus;
@property BOOL handled;
@end

#endif // __WUCCharacterReceivedEventArgs_DEFINED__

// Windows.UI.Core.CoreWindowEventArgs
#ifndef __WUCCoreWindowEventArgs_DEFINED__
#define __WUCCoreWindowEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindowEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@end

#endif // __WUCCoreWindowEventArgs_DEFINED__

// Windows.UI.Core.InputEnabledEventArgs
#ifndef __WUCInputEnabledEventArgs_DEFINED__
#define __WUCInputEnabledEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCInputEnabledEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) BOOL inputEnabled;
@end

#endif // __WUCInputEnabledEventArgs_DEFINED__

// Windows.UI.Core.KeyEventArgs
#ifndef __WUCKeyEventArgs_DEFINED__
#define __WUCKeyEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCKeyEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) WUCCorePhysicalKeyStatus* keyStatus;
@property (readonly) WSVirtualKey virtualKey;
@property (readonly) NSString * deviceId;
@end

#endif // __WUCKeyEventArgs_DEFINED__

// Windows.UI.Core.PointerEventArgs
#ifndef __WUCPointerEventArgs_DEFINED__
#define __WUCPointerEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCPointerEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) WUIPointerPoint* currentPoint;
@property (readonly) WSVirtualKeyModifiers keyModifiers;
- (NSMutableArray* /* WUIPointerPoint* */)getIntermediatePoints;
@end

#endif // __WUCPointerEventArgs_DEFINED__

// Windows.UI.Core.TouchHitTestingEventArgs
#ifndef __WUCTouchHitTestingEventArgs_DEFINED__
#define __WUCTouchHitTestingEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCTouchHitTestingEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (retain) WUCCoreProximityEvaluation* proximityEvaluation;
@property (readonly) WFRect* boundingBox;
@property (readonly) WFPoint* point;
- (WUCCoreProximityEvaluation*)evaluateProximityToRect:(WFRect*)controlBoundingBox;
- (WUCCoreProximityEvaluation*)evaluateProximityToPolygon:(NSArray* /* WFPoint* */)controlVertices;
@end

#endif // __WUCTouchHitTestingEventArgs_DEFINED__

// Windows.UI.Core.WindowSizeChangedEventArgs
#ifndef __WUCWindowSizeChangedEventArgs_DEFINED__
#define __WUCWindowSizeChangedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCWindowSizeChangedEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) WFSize* size;
@end

#endif // __WUCWindowSizeChangedEventArgs_DEFINED__

// Windows.UI.Core.VisibilityChangedEventArgs
#ifndef __WUCVisibilityChangedEventArgs_DEFINED__
#define __WUCVisibilityChangedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCVisibilityChangedEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL handled;
@property (readonly) BOOL visible;
@end

#endif // __WUCVisibilityChangedEventArgs_DEFINED__

// Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs
#ifndef __WUCClosestInteractiveBoundsRequestedEventArgs_DEFINED__
#define __WUCClosestInteractiveBoundsRequestedEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCClosestInteractiveBoundsRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFRect* closestInteractiveBounds;
@property (readonly) WFPoint* pointerPosition;
@property (readonly) WFRect* searchBounds;
@end

#endif // __WUCClosestInteractiveBoundsRequestedEventArgs_DEFINED__

// Windows.UI.Core.IdleDispatchedHandlerArgs
#ifndef __WUCIdleDispatchedHandlerArgs_DEFINED__
#define __WUCIdleDispatchedHandlerArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCIdleDispatchedHandlerArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isDispatcherIdle;
@end

#endif // __WUCIdleDispatchedHandlerArgs_DEFINED__

// Windows.UI.Core.AcceleratorKeyEventArgs
#ifndef __WUCAcceleratorKeyEventArgs_DEFINED__
#define __WUCAcceleratorKeyEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCAcceleratorKeyEventArgs : RTObject <WUCICoreWindowEventArgs>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUCCoreAcceleratorKeyEventType eventType;
@property (readonly) WUCCorePhysicalKeyStatus* keyStatus;
@property (readonly) WSVirtualKey virtualKey;
@property (readonly) NSString * deviceId;
@property BOOL handled;
@end

#endif // __WUCAcceleratorKeyEventArgs_DEFINED__

// Windows.UI.Core.CoreAcceleratorKeys
#ifndef __WUCCoreAcceleratorKeys_DEFINED__
#define __WUCCoreAcceleratorKeys_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreAcceleratorKeys : RTObject <WUCICoreAcceleratorKeys>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addAcceleratorKeyActivatedEvent:(void(^)(WUCCoreDispatcher*, WUCAcceleratorKeyEventArgs*))del;
- (void)removeAcceleratorKeyActivatedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUCCoreAcceleratorKeys_DEFINED__

// Windows.UI.Core.CoreWindowResizeManager
#ifndef __WUCCoreWindowResizeManager_DEFINED__
#define __WUCCoreWindowResizeManager_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindowResizeManager : RTObject
+ (WUCCoreWindowResizeManager*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL shouldWaitForLayoutCompletion;
- (void)notifyLayoutCompleted;
@end

#endif // __WUCCoreWindowResizeManager_DEFINED__

// Windows.UI.Core.CoreComponentInputSource
#ifndef __WUCCoreComponentInputSource_DEFINED__
#define __WUCCoreComponentInputSource_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreComponentInputSource : RTObject <WUCICoreInputSourceBase, WUCICorePointerInputSource>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL hasFocus;
@property BOOL isInputEnabled;
@property (readonly) WUCCoreDispatcher* dispatcher;
@property (retain) WUCCoreCursor* pointerCursor;
@property (readonly) BOOL hasCapture;
@property (readonly) WFPoint* pointerPosition;
- (EventRegistrationToken)addInputEnabledEvent:(void(^)(RTObject*, WUCInputEnabledEventArgs*))del;
- (void)removeInputEnabledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCaptureLostEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addCharacterReceivedEvent:(void(^)(RTObject*, WUCCharacterReceivedEventArgs*))del;
- (void)removeCharacterReceivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyDownEvent:(void(^)(RTObject*, WUCKeyEventArgs*))del;
- (void)removeKeyDownEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addKeyUpEvent:(void(^)(RTObject*, WUCKeyEventArgs*))del;
- (void)removeKeyUpEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addGotFocusEvent:(void(^)(RTObject*, WUCCoreWindowEventArgs*))del;
- (void)removeGotFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addLostFocusEvent:(void(^)(RTObject*, WUCCoreWindowEventArgs*))del;
- (void)removeLostFocusEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addTouchHitTestingEvent:(void(^)(RTObject*, WUCTouchHitTestingEventArgs*))del;
- (void)removeTouchHitTestingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addClosestInteractiveBoundsRequestedEvent:(void(^)(WUCCoreComponentInputSource*, WUCClosestInteractiveBoundsRequestedEventArgs*))del;
- (void)removeClosestInteractiveBoundsRequestedEvent:(EventRegistrationToken)tok;
- (void)releasePointerCapture;
- (void)setPointerCapture;
- (WUCCoreVirtualKeyStates)getCurrentKeyState:(WSVirtualKey)virtualKey;
- (NSString *)getCurrentKeyEventDeviceId;
@end

#endif // __WUCCoreComponentInputSource_DEFINED__

// Windows.UI.Core.CoreIndependentInputSource
#ifndef __WUCCoreIndependentInputSource_DEFINED__
#define __WUCCoreIndependentInputSource_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreIndependentInputSource : RTObject <WUCICoreInputSourceBase, WUCICorePointerInputSource>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isInputEnabled;
@property (readonly) WUCCoreDispatcher* dispatcher;
@property (retain) WUCCoreCursor* pointerCursor;
@property (readonly) BOOL hasCapture;
@property (readonly) WFPoint* pointerPosition;
- (EventRegistrationToken)addInputEnabledEvent:(void(^)(RTObject*, WUCInputEnabledEventArgs*))del;
- (void)removeInputEnabledEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerCaptureLostEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerCaptureLostEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerEnteredEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerEnteredEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerExitedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerExitedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerMovedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerMovedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerPressedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerPressedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerReleasedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerReleasedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPointerWheelChangedEvent:(void(^)(RTObject*, WUCPointerEventArgs*))del;
- (void)removePointerWheelChangedEvent:(EventRegistrationToken)tok;
- (void)releasePointerCapture;
- (void)setPointerCapture;
@end

#endif // __WUCCoreIndependentInputSource_DEFINED__

// Windows.UI.Core.CoreWindowPopupShowingEventArgs
#ifndef __WUCCoreWindowPopupShowingEventArgs_DEFINED__
#define __WUCCoreWindowPopupShowingEventArgs_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindowPopupShowingEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)setDesiredSize:(WFSize*)value;
@end

#endif // __WUCCoreWindowPopupShowingEventArgs_DEFINED__

// Windows.UI.Core.CoreWindowDialog
#ifndef __WUCCoreWindowDialog_DEFINED__
#define __WUCCoreWindowDialog_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindowDialog : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WUCCoreWindowDialog*)makeWithTitle:(NSString *)title ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * title;
@property int isInteractionDelayed;
@property unsigned int defaultCommandIndex;
@property unsigned int cancelCommandIndex;
@property (copy) WUPUICommandInvokedHandler backButtonCommand;
@property (readonly) NSMutableArray* /* RTObject<WUPIUICommand>* */ commands;
@property (readonly) WFSize* maxSize;
@property (readonly) WFSize* minSize;
- (EventRegistrationToken)addShowingEvent:(void(^)(WUCCoreWindow*, WUCCoreWindowPopupShowingEventArgs*))del;
- (void)removeShowingEvent:(EventRegistrationToken)tok;
- (void)showAsyncWithSuccess:(void (^)(RTObject<WUPIUICommand>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WUCCoreWindowDialog_DEFINED__

// Windows.UI.Core.CoreWindowFlyout
#ifndef __WUCCoreWindowFlyout_DEFINED__
#define __WUCCoreWindowFlyout_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WUCCoreWindowFlyout : RTObject
+ (WUCCoreWindowFlyout*)make:(WFPoint*)position ACTIVATOR;
+ (WUCCoreWindowFlyout*)makeWithTitle:(WFPoint*)position title:(NSString *)title ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * title;
@property int isInteractionDelayed;
@property unsigned int defaultCommandIndex;
@property (copy) WUPUICommandInvokedHandler backButtonCommand;
@property (readonly) NSMutableArray* /* RTObject<WUPIUICommand>* */ commands;
@property (readonly) WFSize* maxSize;
@property (readonly) WFSize* minSize;
- (EventRegistrationToken)addShowingEvent:(void(^)(WUCCoreWindow*, WUCCoreWindowPopupShowingEventArgs*))del;
- (void)removeShowingEvent:(EventRegistrationToken)tok;
- (void)showAsyncWithSuccess:(void (^)(RTObject<WUPIUICommand>*))success failure:(void (^)(NSError*))failure;
@end

#endif // __WUCCoreWindowFlyout_DEFINED__

