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

// WindowsUIViewManagement.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
#define OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIViewManagement.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUVViewModePreferences, WUVApplicationView, WUVApplicationViewConsolidatedEventArgs, WUVApplicationViewTitleBar, WUVApplicationViewSwitcher, WUVActivationViewSwitcher, WUVApplicationViewTransferContext, WUVInputPaneVisibilityEventArgs, WUVInputPane, WUVProjectionManager, WUVUIViewSettings, WUVAccessibilitySettings, WUVUISettings, WUVApplicationViewScaling;
@protocol WUVIViewModePreferences, WUVIViewModePreferencesStatics, WUVIApplicationViewSwitcherStatics, WUVIApplicationViewSwitcherStatics2, WUVIApplicationViewSwitcherStatics3, WUVIApplicationViewInteropStatics, WUVIApplicationViewStatics, WUVIApplicationViewStatics2, WUVIApplicationViewStatics3, WUVIApplicationView, WUVIApplicationView2, WUVIApplicationViewTitleBar, WUVIApplicationView3, WUVIApplicationViewFullscreenStatics, WUVIApplicationView4, WUVIApplicationViewConsolidatedEventArgs, WUVIApplicationViewConsolidatedEventArgs2, WUVIActivationViewSwitcher, WUVIApplicationViewTransferContext, WUVIApplicationViewTransferContextStatics, WUVIInputPaneVisibilityEventArgs, WUVIInputPane, WUVIInputPane2, WUVIInputPaneControl, WUVIInputPaneStatics, WUVIProjectionManagerStatics, WUVIProjectionManagerStatics2, WUVIUIViewSettings, WUVIUIViewSettingsStatics, WUVIAccessibilitySettings, WUVIUISettings, WUVIUISettings2, WUVIUISettings3, WUVIUISettings4, WUVIApplicationViewScaling, WUVIApplicationViewScalingStatics;

// Windows.UI.ViewManagement.ApplicationViewState
enum _WUVApplicationViewState {
    WUVApplicationViewStateFullScreenLandscape = 0,
    WUVApplicationViewStateFilled = 1,
    WUVApplicationViewStateSnapped = 2,
    WUVApplicationViewStateFullScreenPortrait = 3,
};
typedef unsigned WUVApplicationViewState;

// Windows.UI.ViewManagement.ApplicationViewOrientation
enum _WUVApplicationViewOrientation {
    WUVApplicationViewOrientationLandscape = 0,
    WUVApplicationViewOrientationPortrait = 1,
};
typedef unsigned WUVApplicationViewOrientation;

// Windows.UI.ViewManagement.ApplicationViewSwitchingOptions
enum _WUVApplicationViewSwitchingOptions {
    WUVApplicationViewSwitchingOptionsDefault = 0,
    WUVApplicationViewSwitchingOptionsSkipAnimation = 1,
    WUVApplicationViewSwitchingOptionsConsolidateViews = 2,
};
typedef unsigned WUVApplicationViewSwitchingOptions;

// Windows.UI.ViewManagement.ViewSizePreference
enum _WUVViewSizePreference {
    WUVViewSizePreferenceDefault = 0,
    WUVViewSizePreferenceUseLess = 1,
    WUVViewSizePreferenceUseHalf = 2,
    WUVViewSizePreferenceUseMore = 3,
    WUVViewSizePreferenceUseMinimum = 4,
    WUVViewSizePreferenceUseNone = 5,
    WUVViewSizePreferenceCustom = 6,
};
typedef unsigned WUVViewSizePreference;

// Windows.UI.ViewManagement.ApplicationViewBoundsMode
enum _WUVApplicationViewBoundsMode {
    WUVApplicationViewBoundsModeUseVisible = 0,
    WUVApplicationViewBoundsModeUseCoreWindow = 1,
};
typedef unsigned WUVApplicationViewBoundsMode;

// Windows.UI.ViewManagement.FullScreenSystemOverlayMode
enum _WUVFullScreenSystemOverlayMode {
    WUVFullScreenSystemOverlayModeStandard = 0,
    WUVFullScreenSystemOverlayModeMinimal = 1,
};
typedef unsigned WUVFullScreenSystemOverlayMode;

// Windows.UI.ViewManagement.ApplicationViewWindowingMode
enum _WUVApplicationViewWindowingMode {
    WUVApplicationViewWindowingModeAuto = 0,
    WUVApplicationViewWindowingModePreferredLaunchViewSize = 1,
    WUVApplicationViewWindowingModeFullScreen = 2,
};
typedef unsigned WUVApplicationViewWindowingMode;

// Windows.UI.ViewManagement.ApplicationViewMode
enum _WUVApplicationViewMode {
    WUVApplicationViewModeDefault = 0,
    WUVApplicationViewModeCompactOverlay = 1,
};
typedef unsigned WUVApplicationViewMode;

// Windows.UI.ViewManagement.UserInteractionMode
enum _WUVUserInteractionMode {
    WUVUserInteractionModeMouse = 0,
    WUVUserInteractionModeTouch = 1,
};
typedef unsigned WUVUserInteractionMode;

// Windows.UI.ViewManagement.HandPreference
enum _WUVHandPreference {
    WUVHandPreferenceLeftHanded = 0,
    WUVHandPreferenceRightHanded = 1,
};
typedef unsigned WUVHandPreference;

// Windows.UI.ViewManagement.UIColorType
enum _WUVUIColorType {
    WUVUIColorTypeBackground = 0,
    WUVUIColorTypeForeground = 1,
    WUVUIColorTypeAccentDark3 = 2,
    WUVUIColorTypeAccentDark2 = 3,
    WUVUIColorTypeAccentDark1 = 4,
    WUVUIColorTypeAccent = 5,
    WUVUIColorTypeAccentLight1 = 6,
    WUVUIColorTypeAccentLight2 = 7,
    WUVUIColorTypeAccentLight3 = 8,
    WUVUIColorTypeComplement = 9,
};
typedef unsigned WUVUIColorType;

// Windows.UI.ViewManagement.UIElementType
enum _WUVUIElementType {
    WUVUIElementTypeActiveCaption = 0,
    WUVUIElementTypeBackground = 1,
    WUVUIElementTypeButtonFace = 2,
    WUVUIElementTypeButtonText = 3,
    WUVUIElementTypeCaptionText = 4,
    WUVUIElementTypeGrayText = 5,
    WUVUIElementTypeHighlight = 6,
    WUVUIElementTypeHighlightText = 7,
    WUVUIElementTypeHotlight = 8,
    WUVUIElementTypeInactiveCaption = 9,
    WUVUIElementTypeInactiveCaptionText = 10,
    WUVUIElementTypeWindow = 11,
    WUVUIElementTypeWindowText = 12,
    WUVUIElementTypeAccentColor = 1000,
    WUVUIElementTypeTextHigh = 1001,
    WUVUIElementTypeTextMedium = 1002,
    WUVUIElementTypeTextLow = 1003,
    WUVUIElementTypeTextContrastWithHigh = 1004,
    WUVUIElementTypeNonTextHigh = 1005,
    WUVUIElementTypeNonTextMediumHigh = 1006,
    WUVUIElementTypeNonTextMedium = 1007,
    WUVUIElementTypeNonTextMediumLow = 1008,
    WUVUIElementTypeNonTextLow = 1009,
    WUVUIElementTypePageBackground = 1010,
    WUVUIElementTypePopupBackground = 1011,
    WUVUIElementTypeOverlayOutsidePopup = 1012,
};
typedef unsigned WUVUIElementType;

#include "WindowsDevicesEnumeration.h"
#include "WindowsUI.h"
#include "WindowsUIPopups.h"
#include "WindowsFoundation.h"
#include "WindowsUICore.h"

#import <Foundation/Foundation.h>

// Windows.UI.ViewManagement.ViewModePreferences
#ifndef __WUVViewModePreferences_DEFINED__
#define __WUVViewModePreferences_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVViewModePreferences : RTObject
+ (WUVViewModePreferences*)createDefault:(WUVApplicationViewMode)mode;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WUVViewSizePreference viewSizePreference;
@property (retain) WFSize* customSize;
@end

#endif // __WUVViewModePreferences_DEFINED__

// Windows.UI.ViewManagement.ApplicationView
#ifndef __WUVApplicationView_DEFINED__
#define __WUVApplicationView_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationView : RTObject
+ (BOOL)tryUnsnapToFullscreen;
+ (WUVApplicationView*)getForCurrentView;
+ (BOOL)tryUnsnap;
+ (int)getApplicationViewIdForWindow:(RTObject<WUCICoreWindow>*)window;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isScreenCaptureEnabled;
@property (retain) NSString * title;
@property (readonly) BOOL adjacentToRightDisplayEdge;
@property (readonly) int id;
@property (readonly) BOOL isFullScreen;
@property (readonly) BOOL isOnLockScreen;
@property (readonly) WUVApplicationViewOrientation orientation;
@property (readonly) BOOL adjacentToLeftDisplayEdge;
@property BOOL suppressSystemOverlays;
@property (readonly) WUVApplicationViewBoundsMode desiredBoundsMode;
@property (readonly) WFRect* visibleBounds;
@property WUVFullScreenSystemOverlayMode fullScreenSystemOverlayMode;
@property (readonly) BOOL isFullScreenMode;
@property (readonly) WUVApplicationViewTitleBar* titleBar;
@property (readonly) WUVApplicationViewMode viewMode;
+ (WUVApplicationViewState)value;
+ (BOOL)terminateAppOnFinalViewClose;
+ (void)setTerminateAppOnFinalViewClose:(BOOL)value;
+ (WUVApplicationViewWindowingMode)preferredLaunchWindowingMode;
+ (void)setPreferredLaunchWindowingMode:(WUVApplicationViewWindowingMode)value;
+ (WFSize*)preferredLaunchViewSize;
+ (void)setPreferredLaunchViewSize:(WFSize*)value;
- (EventRegistrationToken)addConsolidatedEvent:(void(^)(WUVApplicationView*, WUVApplicationViewConsolidatedEventArgs*))del;
- (void)removeConsolidatedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addVisibleBoundsChangedEvent:(void(^)(WUVApplicationView*, RTObject*))del;
- (void)removeVisibleBoundsChangedEvent:(EventRegistrationToken)tok;
- (BOOL)setDesiredBoundsMode:(WUVApplicationViewBoundsMode)boundsMode;
- (BOOL)tryEnterFullScreenMode;
- (void)exitFullScreenMode;
- (void)showStandardSystemOverlays;
- (BOOL)tryResizeView:(WFSize*)value;
- (void)setPreferredMinSize:(WFSize*)minSize;
- (BOOL)isViewModeSupported:(WUVApplicationViewMode)viewMode;
- (void)tryEnterViewModeAsync:(WUVApplicationViewMode)viewMode success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)tryEnterViewModeWithPreferencesAsync:(WUVApplicationViewMode)viewMode viewModePreferences:(WUVViewModePreferences*)viewModePreferences success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
- (void)tryConsolidateAsyncWithSuccess:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
@end

#endif // __WUVApplicationView_DEFINED__

// Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs
#ifndef __WUVApplicationViewConsolidatedEventArgs_DEFINED__
#define __WUVApplicationViewConsolidatedEventArgs_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationViewConsolidatedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isUserInitiated;
@property (readonly) BOOL isAppInitiated;
@end

#endif // __WUVApplicationViewConsolidatedEventArgs_DEFINED__

// Windows.UI.ViewManagement.ApplicationViewTitleBar
#ifndef __WUVApplicationViewTitleBar_DEFINED__
#define __WUVApplicationViewTitleBar_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationViewTitleBar : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) id /* WUColor* */ buttonInactiveBackgroundColor;
@property (retain) id /* WUColor* */ buttonHoverForegroundColor;
@property (retain) id /* WUColor* */ buttonHoverBackgroundColor;
@property (retain) id /* WUColor* */ buttonForegroundColor;
@property (retain) id /* WUColor* */ buttonBackgroundColor;
@property (retain) id /* WUColor* */ buttonInactiveForegroundColor;
@property (retain) id /* WUColor* */ backgroundColor;
@property (retain) id /* WUColor* */ inactiveForegroundColor;
@property (retain) id /* WUColor* */ inactiveBackgroundColor;
@property (retain) id /* WUColor* */ foregroundColor;
@property (retain) id /* WUColor* */ buttonPressedForegroundColor;
@property (retain) id /* WUColor* */ buttonPressedBackgroundColor;
@end

#endif // __WUVApplicationViewTitleBar_DEFINED__

// Windows.UI.ViewManagement.ApplicationViewSwitcher
#ifndef __WUVApplicationViewSwitcher_DEFINED__
#define __WUVApplicationViewSwitcher_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationViewSwitcher : RTObject
+ (void)disableShowingMainViewOnActivation;
+ (void)tryShowAsStandaloneAsync:(int)viewId success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)tryShowAsStandaloneWithSizePreferenceAsync:(int)viewId sizePreference:(WUVViewSizePreference)sizePreference success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)tryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync:(int)viewId sizePreference:(WUVViewSizePreference)sizePreference anchorViewId:(int)anchorViewId anchorSizePreference:(WUVViewSizePreference)anchorSizePreference success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (RTObject<WFIAsyncAction>*)switchAsync:(int)viewId;
+ (RTObject<WFIAsyncAction>*)switchFromViewAsync:(int)toViewId fromViewId:(int)fromViewId;
+ (RTObject<WFIAsyncAction>*)switchFromViewWithOptionsAsync:(int)toViewId fromViewId:(int)fromViewId options:(WUVApplicationViewSwitchingOptions)options;
+ (void)prepareForCustomAnimatedSwitchAsync:(int)toViewId fromViewId:(int)fromViewId options:(WUVApplicationViewSwitchingOptions)options success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)tryShowAsViewModeAsync:(int)viewId viewMode:(WUVApplicationViewMode)viewMode success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)tryShowAsViewModeWithPreferencesAsync:(int)viewId viewMode:(WUVApplicationViewMode)viewMode viewModePreferences:(WUVViewModePreferences*)viewModePreferences success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)disableSystemViewActivationPolicy;
@end

#endif // __WUVApplicationViewSwitcher_DEFINED__

// Windows.UI.ViewManagement.ActivationViewSwitcher
#ifndef __WUVActivationViewSwitcher_DEFINED__
#define __WUVActivationViewSwitcher_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVActivationViewSwitcher : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (RTObject<WFIAsyncAction>*)showAsStandaloneAsync:(int)viewId;
- (RTObject<WFIAsyncAction>*)showAsStandaloneWithSizePreferenceAsync:(int)viewId sizePreference:(WUVViewSizePreference)sizePreference;
- (BOOL)isViewPresentedOnActivationVirtualDesktop:(int)viewId;
@end

#endif // __WUVActivationViewSwitcher_DEFINED__

// Windows.UI.ViewManagement.ApplicationViewTransferContext
#ifndef __WUVApplicationViewTransferContext_DEFINED__
#define __WUVApplicationViewTransferContext_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationViewTransferContext : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property int viewId;
+ (NSString *)dataPackageFormatId;
@end

#endif // __WUVApplicationViewTransferContext_DEFINED__

// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
#ifndef __WUVInputPaneVisibilityEventArgs_DEFINED__
#define __WUVInputPaneVisibilityEventArgs_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVInputPaneVisibilityEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL ensuredFocusedElementInView;
@property (readonly) WFRect* occludedRect;
@end

#endif // __WUVInputPaneVisibilityEventArgs_DEFINED__

// Windows.UI.ViewManagement.InputPane
#ifndef __WUVInputPane_DEFINED__
#define __WUVInputPane_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVInputPane : RTObject
+ (WUVInputPane*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFRect* occludedRect;
@property BOOL visible;
- (EventRegistrationToken)addHidingEvent:(void(^)(WUVInputPane*, WUVInputPaneVisibilityEventArgs*))del;
- (void)removeHidingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addShowingEvent:(void(^)(WUVInputPane*, WUVInputPaneVisibilityEventArgs*))del;
- (void)removeShowingEvent:(EventRegistrationToken)tok;
- (BOOL)tryShow;
- (BOOL)tryHide;
@end

#endif // __WUVInputPane_DEFINED__

// Windows.UI.ViewManagement.ProjectionManager
#ifndef __WUVProjectionManager_DEFINED__
#define __WUVProjectionManager_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVProjectionManager : RTObject
+ (RTObject<WFIAsyncAction>*)startProjectingWithDeviceInfoAsync:(int)projectionViewId anchorViewId:(int)anchorViewId displayDeviceInfo:(WDEDeviceInformation*)displayDeviceInfo;
+ (void)requestStartProjectingAsync:(int)projectionViewId anchorViewId:(int)anchorViewId selection:(WFRect*)selection success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (void)requestStartProjectingWithPlacementAsync:(int)projectionViewId anchorViewId:(int)anchorViewId selection:(WFRect*)selection prefferedPlacement:(WUPPlacement)prefferedPlacement success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (NSString *)getDeviceSelector;
+ (RTObject<WFIAsyncAction>*)startProjectingAsync:(int)projectionViewId anchorViewId:(int)anchorViewId;
+ (RTObject<WFIAsyncAction>*)swapDisplaysForViewsAsync:(int)projectionViewId anchorViewId:(int)anchorViewId;
+ (RTObject<WFIAsyncAction>*)stopProjectingAsync:(int)projectionViewId anchorViewId:(int)anchorViewId;
+ (BOOL)projectionDisplayAvailable;
+ (EventRegistrationToken)addProjectionDisplayAvailableChangedEvent:(void(^)(RTObject*, RTObject*))del;
+ (void)removeProjectionDisplayAvailableChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUVProjectionManager_DEFINED__

// Windows.UI.ViewManagement.UIViewSettings
#ifndef __WUVUIViewSettings_DEFINED__
#define __WUVUIViewSettings_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVUIViewSettings : RTObject
+ (WUVUIViewSettings*)getForCurrentView;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUVUserInteractionMode userInteractionMode;
@end

#endif // __WUVUIViewSettings_DEFINED__

// Windows.UI.ViewManagement.AccessibilitySettings
#ifndef __WUVAccessibilitySettings_DEFINED__
#define __WUVAccessibilitySettings_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVAccessibilitySettings : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL highContrast;
@property (readonly) NSString * highContrastScheme;
- (EventRegistrationToken)addHighContrastChangedEvent:(void(^)(WUVAccessibilitySettings*, RTObject*))del;
- (void)removeHighContrastChangedEvent:(EventRegistrationToken)tok;
@end

#endif // __WUVAccessibilitySettings_DEFINED__

// Windows.UI.ViewManagement.UISettings
#ifndef __WUVUISettings_DEFINED__
#define __WUVUISettings_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVUISettings : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL animationsEnabled;
@property (readonly) unsigned int caretBlinkRate;
@property (readonly) BOOL caretBrowsingEnabled;
@property (readonly) unsigned int caretWidth;
@property (readonly) WFSize* cursorSize;
@property (readonly) unsigned int doubleClickTime;
@property (readonly) WUVHandPreference handPreference;
@property (readonly) unsigned int messageDuration;
@property (readonly) unsigned int mouseHoverTime;
@property (readonly) WFSize* scrollBarArrowSize;
@property (readonly) WFSize* scrollBarSize;
@property (readonly) WFSize* scrollBarThumbBoxSize;
@property (readonly) double textScaleFactor;
@property (readonly) BOOL advancedEffectsEnabled;
- (EventRegistrationToken)addTextScaleFactorChangedEvent:(void(^)(WUVUISettings*, RTObject*))del;
- (void)removeTextScaleFactorChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addColorValuesChangedEvent:(void(^)(WUVUISettings*, RTObject*))del;
- (void)removeColorValuesChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addAdvancedEffectsEnabledChangedEvent:(void(^)(WUVUISettings*, RTObject*))del;
- (void)removeAdvancedEffectsEnabledChangedEvent:(EventRegistrationToken)tok;
- (WUColor*)uIElementColor:(WUVUIElementType)desiredElement;
- (WUColor*)getColorValue:(WUVUIColorType)desiredColor;
@end

#endif // __WUVUISettings_DEFINED__

// Windows.UI.ViewManagement.ApplicationViewScaling
#ifndef __WUVApplicationViewScaling_DEFINED__
#define __WUVApplicationViewScaling_DEFINED__

OBJCUWPWINDOWSUIVIEWMANAGEMENTEXPORT
@interface WUVApplicationViewScaling : RTObject
+ (BOOL)trySetDisableLayoutScaling:(BOOL)disableLayoutScaling;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (BOOL)disableLayoutScaling;
@end

#endif // __WUVApplicationViewScaling_DEFINED__

