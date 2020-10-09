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

// WindowsUIXamlAutomationPeers.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLEXPORT
#define OBJCUWPWINDOWSUIXAMLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXaml.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXAPAutomationPeer, WUXAPAutomationPeerAnnotation, WUXAPFrameworkElementAutomationPeer, WUXAPColorSpectrumAutomationPeer, WUXAPPersonPictureAutomationPeer, WUXAPRatingControlAutomationPeer, WUXAPButtonBaseAutomationPeer, WUXAPCaptureElementAutomationPeer, WUXAPComboBoxItemAutomationPeer, WUXAPFlipViewItemAutomationPeer, WUXAPGroupItemAutomationPeer, WUXAPImageAutomationPeer, WUXAPListBoxItemAutomationPeer, WUXAPMediaTransportControlsAutomationPeer, WUXAPPasswordBoxAutomationPeer, WUXAPProgressRingAutomationPeer, WUXAPRichTextBlockAutomationPeer, WUXAPRichTextBlockOverflowAutomationPeer, WUXAPSettingsFlyoutAutomationPeer, WUXAPTextBlockAutomationPeer, WUXAPTextBoxAutomationPeer, WUXAPThumbAutomationPeer, WUXAPAutoSuggestBoxAutomationPeer, WUXAPDatePickerAutomationPeer, WUXAPFlyoutPresenterAutomationPeer, WUXAPGridViewItemAutomationPeer, WUXAPHubAutomationPeer, WUXAPListViewBaseHeaderItemAutomationPeer, WUXAPListViewItemAutomationPeer, WUXAPNavigationViewItemAutomationPeer, WUXAPMediaElementAutomationPeer, WUXAPMediaPlayerElementAutomationPeer, WUXAPRichEditBoxAutomationPeer, WUXAPSearchBoxAutomationPeer, WUXAPTimePickerAutomationPeer, WUXAPGridViewHeaderItemAutomationPeer, WUXAPListViewHeaderItemAutomationPeer, WUXAPButtonAutomationPeer, WUXAPHyperlinkButtonAutomationPeer, WUXAPRepeatButtonAutomationPeer, WUXAPMenuFlyoutItemAutomationPeer, WUXAPAppBarButtonAutomationPeer, WUXAPItemsControlAutomationPeer, WUXAPMenuFlyoutPresenterAutomationPeer, WUXAPRangeBaseAutomationPeer, WUXAPProgressBarAutomationPeer, WUXAPScrollBarAutomationPeer, WUXAPSliderAutomationPeer, WUXAPColorPickerSliderAutomationPeer, WUXAPHubSectionAutomationPeer, WUXAPScrollViewerAutomationPeer, WUXAPSelectorAutomationPeer, WUXAPFlipViewAutomationPeer, WUXAPListBoxAutomationPeer, WUXAPListViewBaseAutomationPeer, WUXAPGridViewAutomationPeer, WUXAPListViewAutomationPeer, WUXAPSemanticZoomAutomationPeer, WUXAPToggleSwitchAutomationPeer, WUXAPToggleButtonAutomationPeer, WUXAPCheckBoxAutomationPeer, WUXAPRadioButtonAutomationPeer, WUXAPToggleMenuFlyoutItemAutomationPeer, WUXAPAppBarToggleButtonAutomationPeer, WUXAPItemAutomationPeer, WUXAPSelectorItemAutomationPeer, WUXAPComboBoxItemDataAutomationPeer, WUXAPFlipViewItemDataAutomationPeer, WUXAPListBoxItemDataAutomationPeer, WUXAPGridViewItemDataAutomationPeer, WUXAPListViewItemDataAutomationPeer, WUXAPComboBoxAutomationPeer, WUXAPAppBarAutomationPeer, WUXAPInkToolbarAutomationPeer, WUXAPMapControlAutomationPeer, WUXAPLoopingSelectorItemDataAutomationPeer, WUXAPDatePickerFlyoutPresenterAutomationPeer, WUXAPListPickerFlyoutPresenterAutomationPeer, WUXAPLoopingSelectorAutomationPeer, WUXAPLoopingSelectorItemAutomationPeer, WUXAPPickerFlyoutPresenterAutomationPeer, WUXAPPivotItemAutomationPeer, WUXAPPivotItemDataAutomationPeer, WUXAPTimePickerFlyoutPresenterAutomationPeer, WUXAPPivotAutomationPeer;
@class WUXAPRawElementProviderRuntimeId;
@protocol WUXAPIColorSpectrumAutomationPeer, WUXAPIColorSpectrumAutomationPeerFactory, WUXAPIColorPickerSliderAutomationPeer, WUXAPIColorPickerSliderAutomationPeerFactory, WUXAPINavigationViewItemAutomationPeer, WUXAPINavigationViewItemAutomationPeerFactory, WUXAPIPersonPictureAutomationPeer, WUXAPIPersonPictureAutomationPeerFactory, WUXAPIRatingControlAutomationPeer, WUXAPIRatingControlAutomationPeerFactory, WUXAPIItemAutomationPeer, WUXAPIItemAutomationPeerFactory, WUXAPIButtonBaseAutomationPeer, WUXAPIButtonBaseAutomationPeerFactory, WUXAPICaptureElementAutomationPeer, WUXAPICaptureElementAutomationPeerFactory, WUXAPIComboBoxItemAutomationPeer, WUXAPIComboBoxItemAutomationPeerFactory, WUXAPIFlipViewItemAutomationPeer, WUXAPIFlipViewItemAutomationPeerFactory, WUXAPIGroupItemAutomationPeer, WUXAPIGroupItemAutomationPeerFactory, WUXAPIImageAutomationPeer, WUXAPIImageAutomationPeerFactory, WUXAPIItemsControlAutomationPeer, WUXAPIItemsControlAutomationPeerFactory, WUXAPIItemsControlAutomationPeer2, WUXAPIItemsControlAutomationPeerOverrides2, WUXAPIListBoxItemAutomationPeer, WUXAPIListBoxItemAutomationPeerFactory, WUXAPIMediaTransportControlsAutomationPeer, WUXAPIMediaTransportControlsAutomationPeerFactory, WUXAPIPasswordBoxAutomationPeer, WUXAPIPasswordBoxAutomationPeerFactory, WUXAPIProgressRingAutomationPeer, WUXAPIProgressRingAutomationPeerFactory, WUXAPIRangeBaseAutomationPeer, WUXAPIRangeBaseAutomationPeerFactory, WUXAPIRichTextBlockAutomationPeer, WUXAPIRichTextBlockAutomationPeerFactory, WUXAPIRichTextBlockOverflowAutomationPeer, WUXAPIRichTextBlockOverflowAutomationPeerFactory, WUXAPISelectorItemAutomationPeer, WUXAPISelectorItemAutomationPeerFactory, WUXAPISemanticZoomAutomationPeer, WUXAPISemanticZoomAutomationPeerFactory, WUXAPISettingsFlyoutAutomationPeer, WUXAPISettingsFlyoutAutomationPeerFactory, WUXAPITextBlockAutomationPeer, WUXAPITextBlockAutomationPeerFactory, WUXAPITextBoxAutomationPeer, WUXAPITextBoxAutomationPeerFactory, WUXAPIThumbAutomationPeer, WUXAPIThumbAutomationPeerFactory, WUXAPIToggleSwitchAutomationPeer, WUXAPIToggleSwitchAutomationPeerFactory, WUXAPIButtonAutomationPeer, WUXAPIButtonAutomationPeerFactory, WUXAPIComboBoxItemDataAutomationPeer, WUXAPIComboBoxItemDataAutomationPeerFactory, WUXAPIFlipViewItemDataAutomationPeer, WUXAPIFlipViewItemDataAutomationPeerFactory, WUXAPIHyperlinkButtonAutomationPeer, WUXAPIHyperlinkButtonAutomationPeerFactory, WUXAPIListBoxItemDataAutomationPeer, WUXAPIListBoxItemDataAutomationPeerFactory, WUXAPIProgressBarAutomationPeer, WUXAPIProgressBarAutomationPeerFactory, WUXAPIRepeatButtonAutomationPeer, WUXAPIRepeatButtonAutomationPeerFactory, WUXAPIScrollBarAutomationPeer, WUXAPIScrollBarAutomationPeerFactory, WUXAPISelectorAutomationPeer, WUXAPISelectorAutomationPeerFactory, WUXAPISliderAutomationPeer, WUXAPISliderAutomationPeerFactory, WUXAPIToggleButtonAutomationPeer, WUXAPIToggleButtonAutomationPeerFactory, WUXAPICheckBoxAutomationPeer, WUXAPICheckBoxAutomationPeerFactory, WUXAPIComboBoxAutomationPeer, WUXAPIComboBoxAutomationPeerFactory, WUXAPIFlipViewAutomationPeer, WUXAPIFlipViewAutomationPeerFactory, WUXAPIListBoxAutomationPeer, WUXAPIListBoxAutomationPeerFactory, WUXAPIRadioButtonAutomationPeer, WUXAPIRadioButtonAutomationPeerFactory, WUXAPIAppBarAutomationPeer, WUXAPIAppBarAutomationPeerFactory, WUXAPIAutoSuggestBoxAutomationPeer, WUXAPIAutoSuggestBoxAutomationPeerFactory, WUXAPIDatePickerAutomationPeer, WUXAPIDatePickerAutomationPeerFactory, WUXAPIFlyoutPresenterAutomationPeer, WUXAPIFlyoutPresenterAutomationPeerFactory, WUXAPIGridViewItemAutomationPeer, WUXAPIGridViewItemAutomationPeerFactory, WUXAPIHubAutomationPeer, WUXAPIHubAutomationPeerFactory, WUXAPIHubSectionAutomationPeer, WUXAPIHubSectionAutomationPeerFactory, WUXAPIListViewBaseHeaderItemAutomationPeer, WUXAPIListViewBaseHeaderItemAutomationPeerFactory, WUXAPIListViewItemAutomationPeer, WUXAPIListViewItemAutomationPeerFactory, WUXAPIMediaElementAutomationPeer, WUXAPIMediaElementAutomationPeerFactory, WUXAPIMediaPlayerElementAutomationPeer, WUXAPIMediaPlayerElementAutomationPeerFactory, WUXAPIMenuFlyoutItemAutomationPeer, WUXAPIMenuFlyoutItemAutomationPeerFactory, WUXAPIRichEditBoxAutomationPeer, WUXAPIRichEditBoxAutomationPeerFactory, WUXAPIScrollViewerAutomationPeer, WUXAPIScrollViewerAutomationPeerFactory, WUXAPISearchBoxAutomationPeer, WUXAPISearchBoxAutomationPeerFactory, WUXAPITimePickerAutomationPeer, WUXAPITimePickerAutomationPeerFactory, WUXAPIToggleMenuFlyoutItemAutomationPeer, WUXAPIToggleMenuFlyoutItemAutomationPeerFactory, WUXAPIGridViewHeaderItemAutomationPeer, WUXAPIGridViewHeaderItemAutomationPeerFactory, WUXAPIGridViewItemDataAutomationPeer, WUXAPIGridViewItemDataAutomationPeerFactory, WUXAPIListViewHeaderItemAutomationPeer, WUXAPIListViewHeaderItemAutomationPeerFactory, WUXAPIListViewItemDataAutomationPeer, WUXAPIListViewItemDataAutomationPeerFactory, WUXAPIMenuFlyoutPresenterAutomationPeer, WUXAPIMenuFlyoutPresenterAutomationPeerFactory, WUXAPIAppBarButtonAutomationPeer, WUXAPIAppBarButtonAutomationPeerFactory, WUXAPIAppBarToggleButtonAutomationPeer, WUXAPIAppBarToggleButtonAutomationPeerFactory, WUXAPIListViewBaseAutomationPeer, WUXAPIListViewBaseAutomationPeerFactory, WUXAPIGridViewAutomationPeer, WUXAPIGridViewAutomationPeerFactory, WUXAPIListViewAutomationPeer, WUXAPIListViewAutomationPeerFactory, WUXAPIAutomationPeer, WUXAPIAutomationPeerOverrides, WUXAPIAutomationPeerProtected, WUXAPIAutomationPeerStatics, WUXAPIAutomationPeerFactory, WUXAPIAutomationPeer2, WUXAPIAutomationPeerOverrides2, WUXAPIAutomationPeer3, WUXAPIAutomationPeerOverrides3, WUXAPIAutomationPeerStatics3, WUXAPIAutomationPeer4, WUXAPIAutomationPeerOverrides4, WUXAPIAutomationPeer5, WUXAPIAutomationPeerOverrides5, WUXAPIAutomationPeer6, WUXAPIAutomationPeerOverrides6, WUXAPIAutomationPeer7, WUXAPIAutomationPeerAnnotation, WUXAPIAutomationPeerAnnotationStatics, WUXAPIAutomationPeerAnnotationFactory, WUXAPIFrameworkElementAutomationPeer, WUXAPIFrameworkElementAutomationPeerStatics, WUXAPIFrameworkElementAutomationPeerFactory, WUXAPIInkToolbarAutomationPeer, WUXAPIMapControlAutomationPeer, WUXAPILoopingSelectorItemDataAutomationPeer, WUXAPIDatePickerFlyoutPresenterAutomationPeer, WUXAPIListPickerFlyoutPresenterAutomationPeer, WUXAPILoopingSelectorAutomationPeer, WUXAPILoopingSelectorItemAutomationPeer, WUXAPIPickerFlyoutPresenterAutomationPeer, WUXAPIPivotItemAutomationPeer, WUXAPIPivotItemAutomationPeerFactory, WUXAPIPivotItemDataAutomationPeer, WUXAPIPivotItemDataAutomationPeerFactory, WUXAPITimePickerFlyoutPresenterAutomationPeer, WUXAPIPivotAutomationPeer, WUXAPIPivotAutomationPeerFactory;

// Windows.UI.Xaml.Automation.Peers.AccessibilityView
enum _WUXAPAccessibilityView {
    WUXAPAccessibilityViewRaw = 0,
    WUXAPAccessibilityViewControl = 1,
    WUXAPAccessibilityViewContent = 2,
};
typedef unsigned WUXAPAccessibilityView;

// Windows.UI.Xaml.Automation.Peers.AutomationControlType
enum _WUXAPAutomationControlType {
    WUXAPAutomationControlTypeButton = 0,
    WUXAPAutomationControlTypeCalendar = 1,
    WUXAPAutomationControlTypeCheckBox = 2,
    WUXAPAutomationControlTypeComboBox = 3,
    WUXAPAutomationControlTypeEdit = 4,
    WUXAPAutomationControlTypeHyperlink = 5,
    WUXAPAutomationControlTypeImage = 6,
    WUXAPAutomationControlTypeListItem = 7,
    WUXAPAutomationControlTypeList = 8,
    WUXAPAutomationControlTypeMenu = 9,
    WUXAPAutomationControlTypeMenuBar = 10,
    WUXAPAutomationControlTypeMenuItem = 11,
    WUXAPAutomationControlTypeProgressBar = 12,
    WUXAPAutomationControlTypeRadioButton = 13,
    WUXAPAutomationControlTypeScrollBar = 14,
    WUXAPAutomationControlTypeSlider = 15,
    WUXAPAutomationControlTypeSpinner = 16,
    WUXAPAutomationControlTypeStatusBar = 17,
    WUXAPAutomationControlTypeTab = 18,
    WUXAPAutomationControlTypeTabItem = 19,
    WUXAPAutomationControlTypeText = 20,
    WUXAPAutomationControlTypeToolBar = 21,
    WUXAPAutomationControlTypeToolTip = 22,
    WUXAPAutomationControlTypeTree = 23,
    WUXAPAutomationControlTypeTreeItem = 24,
    WUXAPAutomationControlTypeCustom = 25,
    WUXAPAutomationControlTypeGroup = 26,
    WUXAPAutomationControlTypeThumb = 27,
    WUXAPAutomationControlTypeDataGrid = 28,
    WUXAPAutomationControlTypeDataItem = 29,
    WUXAPAutomationControlTypeDocument = 30,
    WUXAPAutomationControlTypeSplitButton = 31,
    WUXAPAutomationControlTypeWindow = 32,
    WUXAPAutomationControlTypePane = 33,
    WUXAPAutomationControlTypeHeader = 34,
    WUXAPAutomationControlTypeHeaderItem = 35,
    WUXAPAutomationControlTypeTable = 36,
    WUXAPAutomationControlTypeTitleBar = 37,
    WUXAPAutomationControlTypeSeparator = 38,
    WUXAPAutomationControlTypeSemanticZoom = 39,
    WUXAPAutomationControlTypeAppBar = 40,
};
typedef unsigned WUXAPAutomationControlType;

// Windows.UI.Xaml.Automation.Peers.AutomationEvents
enum _WUXAPAutomationEvents {
    WUXAPAutomationEventsToolTipOpened = 0,
    WUXAPAutomationEventsToolTipClosed = 1,
    WUXAPAutomationEventsMenuOpened = 2,
    WUXAPAutomationEventsMenuClosed = 3,
    WUXAPAutomationEventsAutomationFocusChanged = 4,
    WUXAPAutomationEventsInvokePatternOnInvoked = 5,
    WUXAPAutomationEventsSelectionItemPatternOnElementAddedToSelection = 6,
    WUXAPAutomationEventsSelectionItemPatternOnElementRemovedFromSelection = 7,
    WUXAPAutomationEventsSelectionItemPatternOnElementSelected = 8,
    WUXAPAutomationEventsSelectionPatternOnInvalidated = 9,
    WUXAPAutomationEventsTextPatternOnTextSelectionChanged = 10,
    WUXAPAutomationEventsTextPatternOnTextChanged = 11,
    WUXAPAutomationEventsAsyncContentLoaded = 12,
    WUXAPAutomationEventsPropertyChanged = 13,
    WUXAPAutomationEventsStructureChanged = 14,
    WUXAPAutomationEventsDragStart = 15,
    WUXAPAutomationEventsDragCancel = 16,
    WUXAPAutomationEventsDragComplete = 17,
    WUXAPAutomationEventsDragEnter = 18,
    WUXAPAutomationEventsDragLeave = 19,
    WUXAPAutomationEventsDropped = 20,
    WUXAPAutomationEventsLiveRegionChanged = 21,
    WUXAPAutomationEventsInputReachedTarget = 22,
    WUXAPAutomationEventsInputReachedOtherElement = 23,
    WUXAPAutomationEventsInputDiscarded = 24,
    WUXAPAutomationEventsWindowClosed = 25,
    WUXAPAutomationEventsWindowOpened = 26,
    WUXAPAutomationEventsConversionTargetChanged = 27,
    WUXAPAutomationEventsTextEditTextChanged = 28,
    WUXAPAutomationEventsLayoutInvalidated = 29,
};
typedef unsigned WUXAPAutomationEvents;

// Windows.UI.Xaml.Automation.Peers.AutomationLandmarkType
enum _WUXAPAutomationLandmarkType {
    WUXAPAutomationLandmarkTypeNone = 0,
    WUXAPAutomationLandmarkTypeCustom = 1,
    WUXAPAutomationLandmarkTypeForm = 2,
    WUXAPAutomationLandmarkTypeMain = 3,
    WUXAPAutomationLandmarkTypeNavigation = 4,
    WUXAPAutomationLandmarkTypeSearch = 5,
};
typedef unsigned WUXAPAutomationLandmarkType;

// Windows.UI.Xaml.Automation.Peers.AutomationLiveSetting
enum _WUXAPAutomationLiveSetting {
    WUXAPAutomationLiveSettingOff = 0,
    WUXAPAutomationLiveSettingPolite = 1,
    WUXAPAutomationLiveSettingAssertive = 2,
};
typedef unsigned WUXAPAutomationLiveSetting;

// Windows.UI.Xaml.Automation.Peers.AutomationNavigationDirection
enum _WUXAPAutomationNavigationDirection {
    WUXAPAutomationNavigationDirectionParent = 0,
    WUXAPAutomationNavigationDirectionNextSibling = 1,
    WUXAPAutomationNavigationDirectionPreviousSibling = 2,
    WUXAPAutomationNavigationDirectionFirstChild = 3,
    WUXAPAutomationNavigationDirectionLastChild = 4,
};
typedef unsigned WUXAPAutomationNavigationDirection;

// Windows.UI.Xaml.Automation.Peers.AutomationNotificationKind
enum _WUXAPAutomationNotificationKind {
    WUXAPAutomationNotificationKindItemAdded = 0,
    WUXAPAutomationNotificationKindItemRemoved = 1,
    WUXAPAutomationNotificationKindActionCompleted = 2,
    WUXAPAutomationNotificationKindActionAborted = 3,
    WUXAPAutomationNotificationKindOther = 4,
};
typedef unsigned WUXAPAutomationNotificationKind;

// Windows.UI.Xaml.Automation.Peers.AutomationNotificationProcessing
enum _WUXAPAutomationNotificationProcessing {
    WUXAPAutomationNotificationProcessingImportantAll = 0,
    WUXAPAutomationNotificationProcessingImportantMostRecent = 1,
    WUXAPAutomationNotificationProcessingAll = 2,
    WUXAPAutomationNotificationProcessingMostRecent = 3,
    WUXAPAutomationNotificationProcessingCurrentThenMostRecent = 4,
};
typedef unsigned WUXAPAutomationNotificationProcessing;

// Windows.UI.Xaml.Automation.Peers.AutomationOrientation
enum _WUXAPAutomationOrientation {
    WUXAPAutomationOrientationNone = 0,
    WUXAPAutomationOrientationHorizontal = 1,
    WUXAPAutomationOrientationVertical = 2,
};
typedef unsigned WUXAPAutomationOrientation;

// Windows.UI.Xaml.Automation.Peers.AutomationStructureChangeType
enum _WUXAPAutomationStructureChangeType {
    WUXAPAutomationStructureChangeTypeChildAdded = 0,
    WUXAPAutomationStructureChangeTypeChildRemoved = 1,
    WUXAPAutomationStructureChangeTypeChildrenInvalidated = 2,
    WUXAPAutomationStructureChangeTypeChildrenBulkAdded = 3,
    WUXAPAutomationStructureChangeTypeChildrenBulkRemoved = 4,
    WUXAPAutomationStructureChangeTypeChildrenReordered = 5,
};
typedef unsigned WUXAPAutomationStructureChangeType;

// Windows.UI.Xaml.Automation.Peers.PatternInterface
enum _WUXAPPatternInterface {
    WUXAPPatternInterfaceInvoke = 0,
    WUXAPPatternInterfaceSelection = 1,
    WUXAPPatternInterfaceValue = 2,
    WUXAPPatternInterfaceRangeValue = 3,
    WUXAPPatternInterfaceScroll = 4,
    WUXAPPatternInterfaceScrollItem = 5,
    WUXAPPatternInterfaceExpandCollapse = 6,
    WUXAPPatternInterfaceGrid = 7,
    WUXAPPatternInterfaceGridItem = 8,
    WUXAPPatternInterfaceMultipleView = 9,
    WUXAPPatternInterfaceWindow = 10,
    WUXAPPatternInterfaceSelectionItem = 11,
    WUXAPPatternInterfaceDock = 12,
    WUXAPPatternInterfaceTable = 13,
    WUXAPPatternInterfaceTableItem = 14,
    WUXAPPatternInterfaceToggle = 15,
    WUXAPPatternInterfaceTransform = 16,
    WUXAPPatternInterfaceText = 17,
    WUXAPPatternInterfaceItemContainer = 18,
    WUXAPPatternInterfaceVirtualizedItem = 19,
    WUXAPPatternInterfaceText2 = 20,
    WUXAPPatternInterfaceTextChild = 21,
    WUXAPPatternInterfaceTextRange = 22,
    WUXAPPatternInterfaceAnnotation = 23,
    WUXAPPatternInterfaceDrag = 24,
    WUXAPPatternInterfaceDropTarget = 25,
    WUXAPPatternInterfaceObjectModel = 26,
    WUXAPPatternInterfaceSpreadsheet = 27,
    WUXAPPatternInterfaceSpreadsheetItem = 28,
    WUXAPPatternInterfaceStyles = 29,
    WUXAPPatternInterfaceTransform2 = 30,
    WUXAPPatternInterfaceSynchronizedInput = 31,
    WUXAPPatternInterfaceTextEdit = 32,
    WUXAPPatternInterfaceCustomNavigation = 33,
};
typedef unsigned WUXAPPatternInterface;

#include "WindowsUIXamlAutomationProvider.h"
#include "WindowsUIXamlControlsPrimitives.h"
#include "WindowsUIXamlControls.h"
#include "WindowsFoundation.h"
#include "WindowsUIXamlAutomation.h"
#include "WindowsUIXaml.h"
#include "WindowsUICore.h"
// Windows.UI.Xaml.DependencyPropertyChangedCallback
#ifndef __WXDependencyPropertyChangedCallback__DEFINED
#define __WXDependencyPropertyChangedCallback__DEFINED
typedef void(^WXDependencyPropertyChangedCallback)(WXDependencyObject* sender, WXDependencyProperty* dp);
#endif // __WXDependencyPropertyChangedCallback__DEFINED


#import <Foundation/Foundation.h>

// [struct] Windows.UI.Xaml.Automation.Peers.RawElementProviderRuntimeId
OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRawElementProviderRuntimeId : NSObject
+ (instancetype)new;
@property unsigned int part1;
@property unsigned int part2;
@end

// Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeerOverrides2
#ifndef __WUXAPIItemsControlAutomationPeerOverrides2_DEFINED__
#define __WUXAPIItemsControlAutomationPeerOverrides2_DEFINED__

@protocol WUXAPIItemsControlAutomationPeerOverrides2
- (WUXAPItemAutomationPeer*)onCreateItemAutomationPeer:(RTObject*)item;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIItemsControlAutomationPeerOverrides2 : RTObject <WUXAPIItemsControlAutomationPeerOverrides2>
@end

#endif // __WUXAPIItemsControlAutomationPeerOverrides2_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides
#ifndef __WUXAPIAutomationPeerOverrides_DEFINED__
#define __WUXAPIAutomationPeerOverrides_DEFINED__

@protocol WUXAPIAutomationPeerOverrides
- (RTObject*)getPatternCore:(WUXAPPatternInterface)patternInterface;
- (NSString *)getAcceleratorKeyCore;
- (NSString *)getAccessKeyCore;
- (WUXAPAutomationControlType)getAutomationControlTypeCore;
- (NSString *)getAutomationIdCore;
- (WFRect*)getBoundingRectangleCore;
- (NSMutableArray* /* WUXAPAutomationPeer* */)getChildrenCore;
- (NSString *)getClassNameCore;
- (WFPoint*)getClickablePointCore;
- (NSString *)getHelpTextCore;
- (NSString *)getItemStatusCore;
- (NSString *)getItemTypeCore;
- (WUXAPAutomationPeer*)getLabeledByCore;
- (NSString *)getLocalizedControlTypeCore;
- (NSString *)getNameCore;
- (WUXAPAutomationOrientation)getOrientationCore;
- (BOOL)hasKeyboardFocusCore;
- (BOOL)isContentElementCore;
- (BOOL)isControlElementCore;
- (BOOL)isEnabledCore;
- (BOOL)isKeyboardFocusableCore;
- (BOOL)isOffscreenCore;
- (BOOL)isPasswordCore;
- (BOOL)isRequiredForFormCore;
- (void)setFocusCore;
- (WUXAPAutomationPeer*)getPeerFromPointCore:(WFPoint*)point;
- (WUXAPAutomationLiveSetting)getLiveSettingCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides : RTObject <WUXAPIAutomationPeerOverrides>
@end

#endif // __WUXAPIAutomationPeerOverrides_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides2
#ifndef __WUXAPIAutomationPeerOverrides2_DEFINED__
#define __WUXAPIAutomationPeerOverrides2_DEFINED__

@protocol WUXAPIAutomationPeerOverrides2
- (void)showContextMenuCore;
- (NSArray* /* WUXAPAutomationPeer* */)getControlledPeersCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides2 : RTObject <WUXAPIAutomationPeerOverrides2>
@end

#endif // __WUXAPIAutomationPeerOverrides2_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides3
#ifndef __WUXAPIAutomationPeerOverrides3_DEFINED__
#define __WUXAPIAutomationPeerOverrides3_DEFINED__

@protocol WUXAPIAutomationPeerOverrides3
- (RTObject*)navigateCore:(WUXAPAutomationNavigationDirection)direction;
- (RTObject*)getElementFromPointCore:(WFPoint*)pointInWindowCoordinates;
- (RTObject*)getFocusedElementCore;
- (NSMutableArray* /* WUXAPAutomationPeerAnnotation* */)getAnnotationsCore;
- (int)getPositionInSetCore;
- (int)getSizeOfSetCore;
- (int)getLevelCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides3 : RTObject <WUXAPIAutomationPeerOverrides3>
@end

#endif // __WUXAPIAutomationPeerOverrides3_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides4
#ifndef __WUXAPIAutomationPeerOverrides4_DEFINED__
#define __WUXAPIAutomationPeerOverrides4_DEFINED__

@protocol WUXAPIAutomationPeerOverrides4
- (WUXAPAutomationLandmarkType)getLandmarkTypeCore;
- (NSString *)getLocalizedLandmarkTypeCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides4 : RTObject <WUXAPIAutomationPeerOverrides4>
@end

#endif // __WUXAPIAutomationPeerOverrides4_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides5
#ifndef __WUXAPIAutomationPeerOverrides5_DEFINED__
#define __WUXAPIAutomationPeerOverrides5_DEFINED__

@protocol WUXAPIAutomationPeerOverrides5
- (BOOL)isPeripheralCore;
- (BOOL)isDataValidForFormCore;
- (NSString *)getFullDescriptionCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getDescribedByCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getFlowsToCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getFlowsFromCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides5 : RTObject <WUXAPIAutomationPeerOverrides5>
@end

#endif // __WUXAPIAutomationPeerOverrides5_DEFINED__

// Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides6
#ifndef __WUXAPIAutomationPeerOverrides6_DEFINED__
#define __WUXAPIAutomationPeerOverrides6_DEFINED__

@protocol WUXAPIAutomationPeerOverrides6
- (int)getCultureCore;
@end

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPIAutomationPeerOverrides6 : RTObject <WUXAPIAutomationPeerOverrides6>
@end

#endif // __WUXAPIAutomationPeerOverrides6_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.AutomationPeer
#ifndef __WUXAPAutomationPeer_DEFINED__
#define __WUXAPAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAutomationPeer : WXDependencyObject
+ (BOOL)listenerExists:(WUXAPAutomationEvents)eventId;
+ (WUXAPRawElementProviderRuntimeId*)generateRawElementProviderRuntimeId;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WUXAPAutomationPeer* eventsSource;
- (RTObject*)getPattern:(WUXAPPatternInterface)patternInterface;
- (void)raiseAutomationEvent:(WUXAPAutomationEvents)eventId;
- (void)raisePropertyChangedEvent:(WUXAAutomationProperty*)automationProperty oldValue:(RTObject*)oldValue newValue:(RTObject*)newValue;
- (NSString *)getAcceleratorKey;
- (NSString *)getAccessKey;
- (WUXAPAutomationControlType)getAutomationControlType;
- (NSString *)getAutomationId;
- (WFRect*)getBoundingRectangle;
- (NSMutableArray* /* WUXAPAutomationPeer* */)getChildren;
- (NSString *)getClassName;
- (WFPoint*)getClickablePoint;
- (NSString *)getHelpText;
- (NSString *)getItemStatus;
- (NSString *)getItemType;
- (WUXAPAutomationPeer*)getLabeledBy;
- (NSString *)getLocalizedControlType;
- (NSString *)getName;
- (WUXAPAutomationOrientation)getOrientation;
- (BOOL)hasKeyboardFocus;
- (BOOL)isContentElement;
- (BOOL)isControlElement;
- (BOOL)isEnabled;
- (BOOL)isKeyboardFocusable;
- (BOOL)isOffscreen;
- (BOOL)isPassword;
- (BOOL)isRequiredForForm;
- (void)setFocus;
- (WUXAPAutomationPeer*)getParent;
- (void)invalidatePeer;
- (WUXAPAutomationPeer*)getPeerFromPoint:(WFPoint*)point;
- (WUXAPAutomationLiveSetting)getLiveSetting;
- (RTObject*)getPatternCore:(WUXAPPatternInterface)patternInterface;
- (NSString *)getAcceleratorKeyCore;
- (NSString *)getAccessKeyCore;
- (WUXAPAutomationControlType)getAutomationControlTypeCore;
- (NSString *)getAutomationIdCore;
- (WFRect*)getBoundingRectangleCore;
- (NSMutableArray* /* WUXAPAutomationPeer* */)getChildrenCore;
- (NSString *)getClassNameCore;
- (WFPoint*)getClickablePointCore;
- (NSString *)getHelpTextCore;
- (NSString *)getItemStatusCore;
- (NSString *)getItemTypeCore;
- (WUXAPAutomationPeer*)getLabeledByCore;
- (NSString *)getLocalizedControlTypeCore;
- (NSString *)getNameCore;
- (WUXAPAutomationOrientation)getOrientationCore;
- (BOOL)hasKeyboardFocusCore;
- (BOOL)isContentElementCore;
- (BOOL)isControlElementCore;
- (BOOL)isEnabledCore;
- (BOOL)isKeyboardFocusableCore;
- (BOOL)isOffscreenCore;
- (BOOL)isPasswordCore;
- (BOOL)isRequiredForFormCore;
- (void)setFocusCore;
- (WUXAPAutomationPeer*)getPeerFromPointCore:(WFPoint*)point;
- (WUXAPAutomationLiveSetting)getLiveSettingCore;
- (WUXAPAutomationPeer*)peerFromProvider:(WUXAPIRawElementProviderSimple*)provider;
- (WUXAPIRawElementProviderSimple*)providerFromPeer:(WUXAPAutomationPeer*)peer;
- (void)showContextMenuCore;
- (NSArray* /* WUXAPAutomationPeer* */)getControlledPeersCore;
- (RTObject*)navigate:(WUXAPAutomationNavigationDirection)direction;
- (RTObject*)getElementFromPoint:(WFPoint*)pointInWindowCoordinates;
- (RTObject*)getFocusedElement;
- (void)showContextMenu;
- (NSArray* /* WUXAPAutomationPeer* */)getControlledPeers;
- (NSMutableArray* /* WUXAPAutomationPeerAnnotation* */)getAnnotations;
- (void)setParent:(WUXAPAutomationPeer*)peer;
- (void)raiseTextEditTextChangedEvent:(WUXAAutomationTextEditChangeType)automationTextEditChangeType changedData:(NSArray* /* NSString * */)changedData;
- (int)getPositionInSet;
- (int)getSizeOfSet;
- (int)getLevel;
- (void)raiseStructureChangedEvent:(WUXAPAutomationStructureChangeType)structureChangeType child:(WUXAPAutomationPeer*)child;
- (RTObject*)navigateCore:(WUXAPAutomationNavigationDirection)direction;
- (RTObject*)getElementFromPointCore:(WFPoint*)pointInWindowCoordinates;
- (RTObject*)getFocusedElementCore;
- (NSMutableArray* /* WUXAPAutomationPeerAnnotation* */)getAnnotationsCore;
- (int)getPositionInSetCore;
- (int)getSizeOfSetCore;
- (int)getLevelCore;
- (WUXAPAutomationLandmarkType)getLandmarkType;
- (NSString *)getLocalizedLandmarkType;
- (WUXAPAutomationLandmarkType)getLandmarkTypeCore;
- (NSString *)getLocalizedLandmarkTypeCore;
- (BOOL)isPeripheral;
- (BOOL)isDataValidForForm;
- (NSString *)getFullDescription;
- (BOOL)isPeripheralCore;
- (BOOL)isDataValidForFormCore;
- (NSString *)getFullDescriptionCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getDescribedByCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getFlowsToCore;
- (id<NSFastEnumeration> /* WUXAPAutomationPeer* */)getFlowsFromCore;
- (int)getCulture;
- (int)getCultureCore;
- (void)raiseNotificationEvent:(WUXAPAutomationNotificationKind)notificationKind notificationProcessing:(WUXAPAutomationNotificationProcessing)notificationProcessing displayString:(NSString *)displayString activityId:(NSString *)activityId;
@end

#endif // __WUXAPAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.AutomationPeerAnnotation
#ifndef __WUXAPAutomationPeerAnnotation_DEFINED__
#define __WUXAPAutomationPeerAnnotation_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAutomationPeerAnnotation : WXDependencyObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WUXAPAutomationPeerAnnotation*)makeInstance:(WUXAAnnotationType)type ACTIVATOR;
+ (WUXAPAutomationPeerAnnotation*)makeWithPeerParameter:(WUXAAnnotationType)type peer:(WUXAPAutomationPeer*)peer ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WUXAAnnotationType type;
@property (retain) WUXAPAutomationPeer* peer;
+ (WXDependencyProperty*)peerProperty;
+ (WXDependencyProperty*)typeProperty;
@end

#endif // __WUXAPAutomationPeerAnnotation_DEFINED__

// Windows.UI.Xaml.Automation.Peers.FrameworkElementAutomationPeer
#ifndef __WUXAPFrameworkElementAutomationPeer_DEFINED__
#define __WUXAPFrameworkElementAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPFrameworkElementAutomationPeer : WUXAPAutomationPeer
+ (WUXAPAutomationPeer*)fromElement:(WXUIElement*)element;
+ (WUXAPAutomationPeer*)createPeerForElement:(WXUIElement*)element;
+ (WUXAPFrameworkElementAutomationPeer*)makeInstanceWithOwner:(WXFrameworkElement*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WXUIElement* owner;
@end

#endif // __WUXAPFrameworkElementAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ColorSpectrumAutomationPeer
#ifndef __WUXAPColorSpectrumAutomationPeer_DEFINED__
#define __WUXAPColorSpectrumAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPColorSpectrumAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPColorSpectrumAutomationPeer*)makeInstanceWithOwner:(WUXCPColorSpectrum*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPColorSpectrumAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PersonPictureAutomationPeer
#ifndef __WUXAPPersonPictureAutomationPeer_DEFINED__
#define __WUXAPPersonPictureAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPersonPictureAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPPersonPictureAutomationPeer*)makeInstanceWithOwner:(WXCPersonPicture*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPPersonPictureAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.RatingControlAutomationPeer
#ifndef __WUXAPRatingControlAutomationPeer_DEFINED__
#define __WUXAPRatingControlAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRatingControlAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPRatingControlAutomationPeer*)makeInstanceWithOwner:(WXCRatingControl*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPRatingControlAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ButtonBaseAutomationPeer
#ifndef __WUXAPButtonBaseAutomationPeer_DEFINED__
#define __WUXAPButtonBaseAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPButtonBaseAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPButtonBaseAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.CaptureElementAutomationPeer
#ifndef __WUXAPCaptureElementAutomationPeer_DEFINED__
#define __WUXAPCaptureElementAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPCaptureElementAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPCaptureElementAutomationPeer*)makeInstanceWithOwner:(WXCCaptureElement*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPCaptureElementAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ComboBoxItemAutomationPeer
#ifndef __WUXAPComboBoxItemAutomationPeer_DEFINED__
#define __WUXAPComboBoxItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPComboBoxItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPComboBoxItemAutomationPeer*)makeInstanceWithOwner:(WXCComboBoxItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPComboBoxItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.FlipViewItemAutomationPeer
#ifndef __WUXAPFlipViewItemAutomationPeer_DEFINED__
#define __WUXAPFlipViewItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPFlipViewItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPFlipViewItemAutomationPeer*)makeInstanceWithOwner:(WXCFlipViewItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPFlipViewItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.GroupItemAutomationPeer
#ifndef __WUXAPGroupItemAutomationPeer_DEFINED__
#define __WUXAPGroupItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPGroupItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPGroupItemAutomationPeer*)makeInstanceWithOwner:(WXCGroupItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPGroupItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ImageAutomationPeer
#ifndef __WUXAPImageAutomationPeer_DEFINED__
#define __WUXAPImageAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPImageAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPImageAutomationPeer*)makeInstanceWithOwner:(WXCImage*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPImageAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListBoxItemAutomationPeer
#ifndef __WUXAPListBoxItemAutomationPeer_DEFINED__
#define __WUXAPListBoxItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListBoxItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPListBoxItemAutomationPeer*)makeInstanceWithOwner:(WXCListBoxItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListBoxItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.MediaTransportControlsAutomationPeer
#ifndef __WUXAPMediaTransportControlsAutomationPeer_DEFINED__
#define __WUXAPMediaTransportControlsAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMediaTransportControlsAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPMediaTransportControlsAutomationPeer*)makeInstanceWithOwner:(WXCMediaTransportControls*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPMediaTransportControlsAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PasswordBoxAutomationPeer
#ifndef __WUXAPPasswordBoxAutomationPeer_DEFINED__
#define __WUXAPPasswordBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPasswordBoxAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPPasswordBoxAutomationPeer*)makeInstanceWithOwner:(WXCPasswordBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPPasswordBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ProgressRingAutomationPeer
#ifndef __WUXAPProgressRingAutomationPeer_DEFINED__
#define __WUXAPProgressRingAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPProgressRingAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPProgressRingAutomationPeer*)makeInstanceWithOwner:(WXCProgressRing*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPProgressRingAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.RichTextBlockAutomationPeer
#ifndef __WUXAPRichTextBlockAutomationPeer_DEFINED__
#define __WUXAPRichTextBlockAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRichTextBlockAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPRichTextBlockAutomationPeer*)makeInstanceWithOwner:(WXCRichTextBlock*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPRichTextBlockAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.RichTextBlockOverflowAutomationPeer
#ifndef __WUXAPRichTextBlockOverflowAutomationPeer_DEFINED__
#define __WUXAPRichTextBlockOverflowAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRichTextBlockOverflowAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPRichTextBlockOverflowAutomationPeer*)makeInstanceWithOwner:(WXCRichTextBlockOverflow*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPRichTextBlockOverflowAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.SettingsFlyoutAutomationPeer
#ifndef __WUXAPSettingsFlyoutAutomationPeer_DEFINED__
#define __WUXAPSettingsFlyoutAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSettingsFlyoutAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPSettingsFlyoutAutomationPeer*)makeInstanceWithOwner:(WXCSettingsFlyout*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPSettingsFlyoutAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.TextBlockAutomationPeer
#ifndef __WUXAPTextBlockAutomationPeer_DEFINED__
#define __WUXAPTextBlockAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPTextBlockAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPTextBlockAutomationPeer*)makeInstanceWithOwner:(WXCTextBlock*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPTextBlockAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.TextBoxAutomationPeer
#ifndef __WUXAPTextBoxAutomationPeer_DEFINED__
#define __WUXAPTextBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPTextBoxAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPTextBoxAutomationPeer*)makeInstanceWithOwner:(WXCTextBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPTextBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ThumbAutomationPeer
#ifndef __WUXAPThumbAutomationPeer_DEFINED__
#define __WUXAPThumbAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPThumbAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPThumbAutomationPeer*)makeInstanceWithOwner:(WUXCPThumb*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPThumbAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.AutoSuggestBoxAutomationPeer
#ifndef __WUXAPAutoSuggestBoxAutomationPeer_DEFINED__
#define __WUXAPAutoSuggestBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAutoSuggestBoxAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPAutoSuggestBoxAutomationPeer*)makeInstanceWithOwner:(WXCAutoSuggestBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPAutoSuggestBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.DatePickerAutomationPeer
#ifndef __WUXAPDatePickerAutomationPeer_DEFINED__
#define __WUXAPDatePickerAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPDatePickerAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPDatePickerAutomationPeer*)makeInstanceWithOwner:(WXCDatePicker*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPDatePickerAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.FlyoutPresenterAutomationPeer
#ifndef __WUXAPFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPFlyoutPresenterAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPFlyoutPresenterAutomationPeer*)makeInstanceWithOwner:(WXCFlyoutPresenter*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPFlyoutPresenterAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.GridViewItemAutomationPeer
#ifndef __WUXAPGridViewItemAutomationPeer_DEFINED__
#define __WUXAPGridViewItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPGridViewItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPGridViewItemAutomationPeer*)makeInstanceWithOwner:(WXCGridViewItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPGridViewItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.HubAutomationPeer
#ifndef __WUXAPHubAutomationPeer_DEFINED__
#define __WUXAPHubAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPHubAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPHubAutomationPeer*)makeInstanceWithOwner:(WXCHub*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPHubAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListViewBaseHeaderItemAutomationPeer
#ifndef __WUXAPListViewBaseHeaderItemAutomationPeer_DEFINED__
#define __WUXAPListViewBaseHeaderItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewBaseHeaderItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListViewBaseHeaderItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListViewItemAutomationPeer
#ifndef __WUXAPListViewItemAutomationPeer_DEFINED__
#define __WUXAPListViewItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPListViewItemAutomationPeer*)makeInstanceWithOwner:(WXCListViewItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListViewItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.NavigationViewItemAutomationPeer
#ifndef __WUXAPNavigationViewItemAutomationPeer_DEFINED__
#define __WUXAPNavigationViewItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPNavigationViewItemAutomationPeer : WUXAPListViewItemAutomationPeer
+ (WUXAPNavigationViewItemAutomationPeer*)makeInstanceWithOwner:(WXCNavigationViewItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPNavigationViewItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.MediaElementAutomationPeer
#ifndef __WUXAPMediaElementAutomationPeer_DEFINED__
#define __WUXAPMediaElementAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMediaElementAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPMediaElementAutomationPeer*)makeInstanceWithOwner:(WXCMediaElement*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPMediaElementAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.MediaPlayerElementAutomationPeer
#ifndef __WUXAPMediaPlayerElementAutomationPeer_DEFINED__
#define __WUXAPMediaPlayerElementAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMediaPlayerElementAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPMediaPlayerElementAutomationPeer*)makeInstanceWithOwner:(WXCMediaPlayerElement*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPMediaPlayerElementAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.RichEditBoxAutomationPeer
#ifndef __WUXAPRichEditBoxAutomationPeer_DEFINED__
#define __WUXAPRichEditBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRichEditBoxAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPRichEditBoxAutomationPeer*)makeInstanceWithOwner:(WXCRichEditBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPRichEditBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.SearchBoxAutomationPeer
#ifndef __WUXAPSearchBoxAutomationPeer_DEFINED__
#define __WUXAPSearchBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSearchBoxAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPSearchBoxAutomationPeer*)makeInstanceWithOwner:(WXCSearchBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPSearchBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.TimePickerAutomationPeer
#ifndef __WUXAPTimePickerAutomationPeer_DEFINED__
#define __WUXAPTimePickerAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPTimePickerAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPTimePickerAutomationPeer*)makeInstanceWithOwner:(WXCTimePicker*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPTimePickerAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.GridViewHeaderItemAutomationPeer
#ifndef __WUXAPGridViewHeaderItemAutomationPeer_DEFINED__
#define __WUXAPGridViewHeaderItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPGridViewHeaderItemAutomationPeer : WUXAPListViewBaseHeaderItemAutomationPeer
+ (WUXAPGridViewHeaderItemAutomationPeer*)makeInstanceWithOwner:(WXCGridViewHeaderItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPGridViewHeaderItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListViewHeaderItemAutomationPeer
#ifndef __WUXAPListViewHeaderItemAutomationPeer_DEFINED__
#define __WUXAPListViewHeaderItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewHeaderItemAutomationPeer : WUXAPListViewBaseHeaderItemAutomationPeer
+ (WUXAPListViewHeaderItemAutomationPeer*)makeInstanceWithOwner:(WXCListViewHeaderItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListViewHeaderItemAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ButtonAutomationPeer
#ifndef __WUXAPButtonAutomationPeer_DEFINED__
#define __WUXAPButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPButtonAutomationPeer : WUXAPButtonBaseAutomationPeer <WUXAPIInvokeProvider>
+ (WUXAPButtonAutomationPeer*)makeInstanceWithOwner:(WXCButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)invoke;
@end

#endif // __WUXAPButtonAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.HyperlinkButtonAutomationPeer
#ifndef __WUXAPHyperlinkButtonAutomationPeer_DEFINED__
#define __WUXAPHyperlinkButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPHyperlinkButtonAutomationPeer : WUXAPButtonBaseAutomationPeer <WUXAPIInvokeProvider>
+ (WUXAPHyperlinkButtonAutomationPeer*)makeInstanceWithOwner:(WXCHyperlinkButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)invoke;
@end

#endif // __WUXAPHyperlinkButtonAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.RepeatButtonAutomationPeer
#ifndef __WUXAPRepeatButtonAutomationPeer_DEFINED__
#define __WUXAPRepeatButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRepeatButtonAutomationPeer : WUXAPButtonBaseAutomationPeer <WUXAPIInvokeProvider>
+ (WUXAPRepeatButtonAutomationPeer*)makeInstanceWithOwner:(WUXCPRepeatButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)invoke;
@end

#endif // __WUXAPRepeatButtonAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.MenuFlyoutItemAutomationPeer
#ifndef __WUXAPMenuFlyoutItemAutomationPeer_DEFINED__
#define __WUXAPMenuFlyoutItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMenuFlyoutItemAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIInvokeProvider>
+ (WUXAPMenuFlyoutItemAutomationPeer*)makeInstanceWithOwner:(WXCMenuFlyoutItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)invoke;
@end

#endif // __WUXAPMenuFlyoutItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.AppBarButtonAutomationPeer
#ifndef __WUXAPAppBarButtonAutomationPeer_DEFINED__
#define __WUXAPAppBarButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAppBarButtonAutomationPeer : WUXAPButtonAutomationPeer
+ (WUXAPAppBarButtonAutomationPeer*)makeInstanceWithOwner:(WXCAppBarButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPAppBarButtonAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ItemsControlAutomationPeer
#ifndef __WUXAPItemsControlAutomationPeer_DEFINED__
#define __WUXAPItemsControlAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPItemsControlAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIItemContainerProvider>
+ (WUXAPItemsControlAutomationPeer*)makeInstanceWithOwner:(WXCItemsControl*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (WUXAPIRawElementProviderSimple*)findItemByProperty:(WUXAPIRawElementProviderSimple*)startAfter automationProperty:(WUXAAutomationProperty*)automationProperty value:(RTObject*)value;
- (WUXAPItemAutomationPeer*)createItemAutomationPeer:(RTObject*)item;
- (WUXAPItemAutomationPeer*)onCreateItemAutomationPeer:(RTObject*)item;
@end

#endif // __WUXAPItemsControlAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.MenuFlyoutPresenterAutomationPeer
#ifndef __WUXAPMenuFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPMenuFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMenuFlyoutPresenterAutomationPeer : WUXAPItemsControlAutomationPeer
+ (WUXAPMenuFlyoutPresenterAutomationPeer*)makeInstanceWithOwner:(WXCMenuFlyoutPresenter*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPMenuFlyoutPresenterAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.RangeBaseAutomationPeer
#ifndef __WUXAPRangeBaseAutomationPeer_DEFINED__
#define __WUXAPRangeBaseAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRangeBaseAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIRangeValueProvider>
+ (WUXAPRangeBaseAutomationPeer*)makeInstanceWithOwner:(WUXCPRangeBase*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isReadOnly;
@property (readonly) double largeChange;
@property (readonly) double maximum;
@property (readonly) double minimum;
@property (readonly) double smallChange;
@property (readonly) double value;
- (void)setValue:(double)value;
@end

#endif // __WUXAPRangeBaseAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ProgressBarAutomationPeer
#ifndef __WUXAPProgressBarAutomationPeer_DEFINED__
#define __WUXAPProgressBarAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPProgressBarAutomationPeer : WUXAPRangeBaseAutomationPeer
+ (WUXAPProgressBarAutomationPeer*)makeInstanceWithOwner:(WXCProgressBar*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPProgressBarAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ScrollBarAutomationPeer
#ifndef __WUXAPScrollBarAutomationPeer_DEFINED__
#define __WUXAPScrollBarAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPScrollBarAutomationPeer : WUXAPRangeBaseAutomationPeer
+ (WUXAPScrollBarAutomationPeer*)makeInstanceWithOwner:(WUXCPScrollBar*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPScrollBarAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.SliderAutomationPeer
#ifndef __WUXAPSliderAutomationPeer_DEFINED__
#define __WUXAPSliderAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSliderAutomationPeer : WUXAPRangeBaseAutomationPeer
+ (WUXAPSliderAutomationPeer*)makeInstanceWithOwner:(WXCSlider*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPSliderAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ColorPickerSliderAutomationPeer
#ifndef __WUXAPColorPickerSliderAutomationPeer_DEFINED__
#define __WUXAPColorPickerSliderAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPColorPickerSliderAutomationPeer : WUXAPSliderAutomationPeer
+ (WUXAPColorPickerSliderAutomationPeer*)makeInstanceWithOwner:(WUXCPColorPickerSlider*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPColorPickerSliderAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.HubSectionAutomationPeer
#ifndef __WUXAPHubSectionAutomationPeer_DEFINED__
#define __WUXAPHubSectionAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPHubSectionAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPHubSectionAutomationPeer*)makeInstanceWithOwner:(WXCHubSection*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPHubSectionAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ScrollViewerAutomationPeer
#ifndef __WUXAPScrollViewerAutomationPeer_DEFINED__
#define __WUXAPScrollViewerAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPScrollViewerAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIScrollProvider>
+ (WUXAPScrollViewerAutomationPeer*)makeInstanceWithOwner:(WXCScrollViewer*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double horizontalScrollPercent;
@property (readonly) double horizontalViewSize;
@property (readonly) BOOL horizontallyScrollable;
@property (readonly) double verticalScrollPercent;
@property (readonly) double verticalViewSize;
@property (readonly) BOOL verticallyScrollable;
- (void)scroll:(WUXAScrollAmount)horizontalAmount verticalAmount:(WUXAScrollAmount)verticalAmount;
- (void)setScrollPercent:(double)horizontalPercent verticalPercent:(double)verticalPercent;
@end

#endif // __WUXAPScrollViewerAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.SelectorAutomationPeer
#ifndef __WUXAPSelectorAutomationPeer_DEFINED__
#define __WUXAPSelectorAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSelectorAutomationPeer : WUXAPItemsControlAutomationPeer <WUXAPISelectionProvider>
+ (WUXAPSelectorAutomationPeer*)makeInstanceWithOwner:(WUXCPSelector*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL canSelectMultiple;
@property (readonly) BOOL isSelectionRequired;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getSelection;
@end

#endif // __WUXAPSelectorAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.FlipViewAutomationPeer
#ifndef __WUXAPFlipViewAutomationPeer_DEFINED__
#define __WUXAPFlipViewAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPFlipViewAutomationPeer : WUXAPSelectorAutomationPeer
+ (WUXAPFlipViewAutomationPeer*)makeInstanceWithOwner:(WXCFlipView*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPFlipViewAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListBoxAutomationPeer
#ifndef __WUXAPListBoxAutomationPeer_DEFINED__
#define __WUXAPListBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListBoxAutomationPeer : WUXAPSelectorAutomationPeer
+ (WUXAPListBoxAutomationPeer*)makeInstanceWithOwner:(WXCListBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListBoxAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ListViewBaseAutomationPeer
#ifndef __WUXAPListViewBaseAutomationPeer_DEFINED__
#define __WUXAPListViewBaseAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewBaseAutomationPeer : WUXAPSelectorAutomationPeer <WUXAPIDropTargetProvider>
+ (WUXAPListViewBaseAutomationPeer*)makeInstanceWithOwner:(WXCListViewBase*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * dropEffect;
@property (readonly) NSArray* /* NSString * */ dropEffects;
@end

#endif // __WUXAPListViewBaseAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.GridViewAutomationPeer
#ifndef __WUXAPGridViewAutomationPeer_DEFINED__
#define __WUXAPGridViewAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPGridViewAutomationPeer : WUXAPListViewBaseAutomationPeer
+ (WUXAPGridViewAutomationPeer*)makeInstanceWithOwner:(WXCGridView*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPGridViewAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListViewAutomationPeer
#ifndef __WUXAPListViewAutomationPeer_DEFINED__
#define __WUXAPListViewAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewAutomationPeer : WUXAPListViewBaseAutomationPeer
+ (WUXAPListViewAutomationPeer*)makeInstanceWithOwner:(WXCListView*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListViewAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.SemanticZoomAutomationPeer
#ifndef __WUXAPSemanticZoomAutomationPeer_DEFINED__
#define __WUXAPSemanticZoomAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSemanticZoomAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIToggleProvider>
+ (WUXAPSemanticZoomAutomationPeer*)makeInstanceWithOwner:(WXCSemanticZoom*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAToggleState toggleState;
- (void)toggle;
@end

#endif // __WUXAPSemanticZoomAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ToggleSwitchAutomationPeer
#ifndef __WUXAPToggleSwitchAutomationPeer_DEFINED__
#define __WUXAPToggleSwitchAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPToggleSwitchAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIToggleProvider>
+ (WUXAPToggleSwitchAutomationPeer*)makeInstanceWithOwner:(WXCToggleSwitch*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAToggleState toggleState;
- (void)toggle;
@end

#endif // __WUXAPToggleSwitchAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ToggleButtonAutomationPeer
#ifndef __WUXAPToggleButtonAutomationPeer_DEFINED__
#define __WUXAPToggleButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPToggleButtonAutomationPeer : WUXAPButtonBaseAutomationPeer <WUXAPIToggleProvider>
+ (WUXAPToggleButtonAutomationPeer*)makeInstanceWithOwner:(WUXCPToggleButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAToggleState toggleState;
- (void)toggle;
@end

#endif // __WUXAPToggleButtonAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.CheckBoxAutomationPeer
#ifndef __WUXAPCheckBoxAutomationPeer_DEFINED__
#define __WUXAPCheckBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPCheckBoxAutomationPeer : WUXAPToggleButtonAutomationPeer
+ (WUXAPCheckBoxAutomationPeer*)makeInstanceWithOwner:(WXCCheckBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPCheckBoxAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.RadioButtonAutomationPeer
#ifndef __WUXAPRadioButtonAutomationPeer_DEFINED__
#define __WUXAPRadioButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPRadioButtonAutomationPeer : WUXAPToggleButtonAutomationPeer <WUXAPISelectionItemProvider>
+ (WUXAPRadioButtonAutomationPeer*)makeInstanceWithOwner:(WXCRadioButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isSelected;
@property (readonly) WUXAPIRawElementProviderSimple* selectionContainer;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)select;
@end

#endif // __WUXAPRadioButtonAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ToggleMenuFlyoutItemAutomationPeer
#ifndef __WUXAPToggleMenuFlyoutItemAutomationPeer_DEFINED__
#define __WUXAPToggleMenuFlyoutItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPToggleMenuFlyoutItemAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIToggleProvider>
+ (WUXAPToggleMenuFlyoutItemAutomationPeer*)makeInstanceWithOwner:(WXCToggleMenuFlyoutItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAToggleState toggleState;
- (void)toggle;
@end

#endif // __WUXAPToggleMenuFlyoutItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.AppBarToggleButtonAutomationPeer
#ifndef __WUXAPAppBarToggleButtonAutomationPeer_DEFINED__
#define __WUXAPAppBarToggleButtonAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAppBarToggleButtonAutomationPeer : WUXAPToggleButtonAutomationPeer
+ (WUXAPAppBarToggleButtonAutomationPeer*)makeInstanceWithOwner:(WXCAppBarToggleButton*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPAppBarToggleButtonAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ItemAutomationPeer
#ifndef __WUXAPItemAutomationPeer_DEFINED__
#define __WUXAPItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPItemAutomationPeer : WUXAPAutomationPeer <WUXAPIVirtualizedItemProvider>
+ (WUXAPItemAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPItemsControlAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject* item;
@property (readonly) WUXAPItemsControlAutomationPeer* itemsControlAutomationPeer;
- (void)realize;
@end

#endif // __WUXAPItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.SelectorItemAutomationPeer
#ifndef __WUXAPSelectorItemAutomationPeer_DEFINED__
#define __WUXAPSelectorItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPSelectorItemAutomationPeer : WUXAPItemAutomationPeer <WUXAPISelectionItemProvider>
+ (WUXAPSelectorItemAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPSelectorAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isSelected;
@property (readonly) WUXAPIRawElementProviderSimple* selectionContainer;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)select;
@end

#endif // __WUXAPSelectorItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ComboBoxItemDataAutomationPeer
#ifndef __WUXAPComboBoxItemDataAutomationPeer_DEFINED__
#define __WUXAPComboBoxItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPComboBoxItemDataAutomationPeer : WUXAPSelectorItemAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPComboBoxItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPComboBoxAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPComboBoxItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.FlipViewItemDataAutomationPeer
#ifndef __WUXAPFlipViewItemDataAutomationPeer_DEFINED__
#define __WUXAPFlipViewItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPFlipViewItemDataAutomationPeer : WUXAPSelectorItemAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPFlipViewItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPFlipViewAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPFlipViewItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListBoxItemDataAutomationPeer
#ifndef __WUXAPListBoxItemDataAutomationPeer_DEFINED__
#define __WUXAPListBoxItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListBoxItemDataAutomationPeer : WUXAPSelectorItemAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPListBoxItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPListBoxAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPListBoxItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.GridViewItemDataAutomationPeer
#ifndef __WUXAPGridViewItemDataAutomationPeer_DEFINED__
#define __WUXAPGridViewItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPGridViewItemDataAutomationPeer : WUXAPSelectorItemAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPGridViewItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPGridViewAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPGridViewItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListViewItemDataAutomationPeer
#ifndef __WUXAPListViewItemDataAutomationPeer_DEFINED__
#define __WUXAPListViewItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListViewItemDataAutomationPeer : WUXAPSelectorItemAutomationPeer <WUXAPIScrollItemProvider>
+ (WUXAPListViewItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPListViewBaseAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)scrollIntoView;
@end

#endif // __WUXAPListViewItemDataAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.ComboBoxAutomationPeer
#ifndef __WUXAPComboBoxAutomationPeer_DEFINED__
#define __WUXAPComboBoxAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPComboBoxAutomationPeer : WUXAPSelectorAutomationPeer <WUXAPIExpandCollapseProvider, WUXAPIValueProvider, WUXAPIWindowProvider>
+ (WUXAPComboBoxAutomationPeer*)makeInstanceWithOwner:(WXCComboBox*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAExpandCollapseState expandCollapseState;
@property (readonly) BOOL isReadOnly;
@property (readonly) NSString * value;
@property (readonly) WUXAWindowInteractionState interactionState;
@property (readonly) BOOL isModal;
@property (readonly) BOOL isTopmost;
@property (readonly) BOOL maximizable;
@property (readonly) BOOL minimizable;
@property (readonly) WUXAWindowVisualState visualState;
- (void)collapse;
- (void)expand;
- (void)setValue:(NSString *)value;
- (void)close;
- (void)setVisualState:(WUXAWindowVisualState)state;
- (BOOL)waitForInputIdle:(int)milliseconds;
@end

#endif // __WUXAPComboBoxAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.AppBarAutomationPeer
#ifndef __WUXAPAppBarAutomationPeer_DEFINED__
#define __WUXAPAppBarAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPAppBarAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIToggleProvider, WUXAPIExpandCollapseProvider, WUXAPIWindowProvider>
+ (WUXAPAppBarAutomationPeer*)makeInstanceWithOwner:(WXCAppBar*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAExpandCollapseState expandCollapseState;
@property (readonly) WUXAToggleState toggleState;
@property (readonly) WUXAWindowInteractionState interactionState;
@property (readonly) BOOL isModal;
@property (readonly) BOOL isTopmost;
@property (readonly) BOOL maximizable;
@property (readonly) BOOL minimizable;
@property (readonly) WUXAWindowVisualState visualState;
- (void)toggle;
- (void)collapse;
- (void)expand;
- (void)close;
- (void)setVisualState:(WUXAWindowVisualState)state;
- (BOOL)waitForInputIdle:(int)milliseconds;
@end

#endif // __WUXAPAppBarAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.InkToolbarAutomationPeer
#ifndef __WUXAPInkToolbarAutomationPeer_DEFINED__
#define __WUXAPInkToolbarAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPInkToolbarAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPInkToolbarAutomationPeer_DEFINED__

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

// Windows.UI.Xaml.Automation.Peers.MapControlAutomationPeer
#ifndef __WUXAPMapControlAutomationPeer_DEFINED__
#define __WUXAPMapControlAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPMapControlAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIScrollProvider, WUXAPITransformProvider2, WUXAPITransformProvider>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double horizontalScrollPercent;
@property (readonly) double horizontalViewSize;
@property (readonly) BOOL horizontallyScrollable;
@property (readonly) double verticalScrollPercent;
@property (readonly) double verticalViewSize;
@property (readonly) BOOL verticallyScrollable;
@property (readonly) BOOL canRotate;
@property (readonly) BOOL canMove;
@property (readonly) BOOL canResize;
@property (readonly) double zoomLevel;
@property (readonly) BOOL canZoom;
@property (readonly) double maxZoom;
@property (readonly) double minZoom;
- (void)scroll:(WUXAScrollAmount)horizontalAmount verticalAmount:(WUXAScrollAmount)verticalAmount;
- (void)setScrollPercent:(double)horizontalPercent verticalPercent:(double)verticalPercent;
- (void)zoom:(double)zoom;
- (void)zoomByUnit:(WUXAZoomUnit)zoomUnit;
- (void)move:(double)x y:(double)y;
- (void)resize:(double)width height:(double)height;
- (void)rotate:(double)degrees;
@end

#endif // __WUXAPMapControlAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemDataAutomationPeer
#ifndef __WUXAPLoopingSelectorItemDataAutomationPeer_DEFINED__
#define __WUXAPLoopingSelectorItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPLoopingSelectorItemDataAutomationPeer : WUXAPAutomationPeer <WUXAPIVirtualizedItemProvider>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (void)realize;
@end

#endif // __WUXAPLoopingSelectorItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.DatePickerFlyoutPresenterAutomationPeer
#ifndef __WUXAPDatePickerFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPDatePickerFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPDatePickerFlyoutPresenterAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPDatePickerFlyoutPresenterAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.ListPickerFlyoutPresenterAutomationPeer
#ifndef __WUXAPListPickerFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPListPickerFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPListPickerFlyoutPresenterAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPListPickerFlyoutPresenterAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.LoopingSelectorAutomationPeer
#ifndef __WUXAPLoopingSelectorAutomationPeer_DEFINED__
#define __WUXAPLoopingSelectorAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPLoopingSelectorAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIExpandCollapseProvider, WUXAPIItemContainerProvider, WUXAPIScrollProvider, WUXAPISelectionProvider>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WUXAExpandCollapseState expandCollapseState;
@property (readonly) double horizontalScrollPercent;
@property (readonly) double horizontalViewSize;
@property (readonly) BOOL horizontallyScrollable;
@property (readonly) double verticalScrollPercent;
@property (readonly) double verticalViewSize;
@property (readonly) BOOL verticallyScrollable;
@property (readonly) BOOL canSelectMultiple;
@property (readonly) BOOL isSelectionRequired;
- (void)collapse;
- (void)expand;
- (WUXAPIRawElementProviderSimple*)findItemByProperty:(WUXAPIRawElementProviderSimple*)startAfter automationProperty:(WUXAAutomationProperty*)automationProperty value:(RTObject*)value;
- (void)scroll:(WUXAScrollAmount)horizontalAmount verticalAmount:(WUXAScrollAmount)verticalAmount;
- (void)setScrollPercent:(double)horizontalPercent verticalPercent:(double)verticalPercent;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getSelection;
@end

#endif // __WUXAPLoopingSelectorAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemAutomationPeer
#ifndef __WUXAPLoopingSelectorItemAutomationPeer_DEFINED__
#define __WUXAPLoopingSelectorItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPLoopingSelectorItemAutomationPeer : WUXAPFrameworkElementAutomationPeer <WUXAPIScrollItemProvider, WUXAPISelectionItemProvider>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isSelected;
@property (readonly) WUXAPIRawElementProviderSimple* selectionContainer;
- (void)scrollIntoView;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)select;
@end

#endif // __WUXAPLoopingSelectorItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PickerFlyoutPresenterAutomationPeer
#ifndef __WUXAPPickerFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPPickerFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPickerFlyoutPresenterAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPPickerFlyoutPresenterAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PivotItemAutomationPeer
#ifndef __WUXAPPivotItemAutomationPeer_DEFINED__
#define __WUXAPPivotItemAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPivotItemAutomationPeer : WUXAPFrameworkElementAutomationPeer
+ (WUXAPPivotItemAutomationPeer*)makeInstanceWithOwner:(WXCPivotItem*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPPivotItemAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PivotItemDataAutomationPeer
#ifndef __WUXAPPivotItemDataAutomationPeer_DEFINED__
#define __WUXAPPivotItemDataAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPivotItemDataAutomationPeer : WUXAPItemAutomationPeer <WUXAPIScrollItemProvider, WUXAPISelectionItemProvider, WUXAPIVirtualizedItemProvider>
+ (WUXAPPivotItemDataAutomationPeer*)makeInstanceWithParentAndItem:(RTObject*)item parent:(WUXAPPivotAutomationPeer*)parent ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL isSelected;
@property (readonly) WUXAPIRawElementProviderSimple* selectionContainer;
- (void)scrollIntoView;
- (void)addToSelection;
- (void)removeFromSelection;
- (void)select;
- (void)realize;
@end

#endif // __WUXAPPivotItemDataAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.TimePickerFlyoutPresenterAutomationPeer
#ifndef __WUXAPTimePickerFlyoutPresenterAutomationPeer_DEFINED__
#define __WUXAPTimePickerFlyoutPresenterAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPTimePickerFlyoutPresenterAutomationPeer : WUXAPFrameworkElementAutomationPeer
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAPTimePickerFlyoutPresenterAutomationPeer_DEFINED__

// Windows.UI.Xaml.Automation.Peers.PivotAutomationPeer
#ifndef __WUXAPPivotAutomationPeer_DEFINED__
#define __WUXAPPivotAutomationPeer_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAPPivotAutomationPeer : WUXAPItemsControlAutomationPeer <WUXAPIScrollProvider, WUXAPISelectionProvider>
+ (WUXAPPivotAutomationPeer*)makeInstanceWithOwner:(WXCPivot*)owner ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double horizontalScrollPercent;
@property (readonly) double horizontalViewSize;
@property (readonly) BOOL horizontallyScrollable;
@property (readonly) double verticalScrollPercent;
@property (readonly) double verticalViewSize;
@property (readonly) BOOL verticallyScrollable;
@property (readonly) BOOL canSelectMultiple;
@property (readonly) BOOL isSelectionRequired;
- (void)scroll:(WUXAScrollAmount)horizontalAmount verticalAmount:(WUXAScrollAmount)verticalAmount;
- (void)setScrollPercent:(double)horizontalPercent verticalPercent:(double)verticalPercent;
- (NSArray* /* WUXAPIRawElementProviderSimple* */)getSelection;
@end

#endif // __WUXAPPivotAutomationPeer_DEFINED__

