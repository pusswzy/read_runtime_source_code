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

// WindowsUIXamlAutomation.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLEXPORT
#define OBJCUWPWINDOWSUIXAMLEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXaml.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXAAutomationProperty, WUXAAnnotationPatternIdentifiers, WUXAAutomationElementIdentifiers, WUXAAutomationProperties, WUXADockPatternIdentifiers, WUXADragPatternIdentifiers, WUXADropTargetPatternIdentifiers, WUXAExpandCollapsePatternIdentifiers, WUXAGridItemPatternIdentifiers, WUXAGridPatternIdentifiers, WUXAMultipleViewPatternIdentifiers, WUXARangeValuePatternIdentifiers, WUXAScrollPatternIdentifiers, WUXASelectionItemPatternIdentifiers, WUXASelectionPatternIdentifiers, WUXASpreadsheetItemPatternIdentifiers, WUXAStylesPatternIdentifiers, WUXATableItemPatternIdentifiers, WUXATablePatternIdentifiers, WUXATogglePatternIdentifiers, WUXATransformPattern2Identifiers, WUXATransformPatternIdentifiers, WUXAValuePatternIdentifiers, WUXAWindowPatternIdentifiers, WUXAAutomationAnnotation;
@protocol WUXAIAnnotationPatternIdentifiers, WUXAIAnnotationPatternIdentifiersStatics, WUXAIAutomationElementIdentifiers, WUXAIAutomationElementIdentifiersStatics, WUXAIAutomationElementIdentifiersStatics2, WUXAIAutomationElementIdentifiersStatics3, WUXAIAutomationElementIdentifiersStatics4, WUXAIAutomationElementIdentifiersStatics5, WUXAIAutomationElementIdentifiersStatics6, WUXAIAutomationProperties, WUXAIAutomationPropertiesStatics, WUXAIAutomationPropertiesStatics2, WUXAIAutomationPropertiesStatics3, WUXAIAutomationPropertiesStatics4, WUXAIAutomationPropertiesStatics5, WUXAIAutomationPropertiesStatics6, WUXAIAutomationProperty, WUXAIDockPatternIdentifiers, WUXAIDockPatternIdentifiersStatics, WUXAIDragPatternIdentifiers, WUXAIDragPatternIdentifiersStatics, WUXAIDropTargetPatternIdentifiers, WUXAIDropTargetPatternIdentifiersStatics, WUXAIExpandCollapsePatternIdentifiers, WUXAIExpandCollapsePatternIdentifiersStatics, WUXAIGridItemPatternIdentifiers, WUXAIGridItemPatternIdentifiersStatics, WUXAIGridPatternIdentifiers, WUXAIGridPatternIdentifiersStatics, WUXAIMultipleViewPatternIdentifiers, WUXAIMultipleViewPatternIdentifiersStatics, WUXAIRangeValuePatternIdentifiers, WUXAIRangeValuePatternIdentifiersStatics, WUXAIScrollPatternIdentifiers, WUXAIScrollPatternIdentifiersStatics, WUXAISelectionItemPatternIdentifiers, WUXAISelectionItemPatternIdentifiersStatics, WUXAISelectionPatternIdentifiers, WUXAISelectionPatternIdentifiersStatics, WUXAISpreadsheetItemPatternIdentifiers, WUXAISpreadsheetItemPatternIdentifiersStatics, WUXAIStylesPatternIdentifiers, WUXAIStylesPatternIdentifiersStatics, WUXAITableItemPatternIdentifiers, WUXAITableItemPatternIdentifiersStatics, WUXAITablePatternIdentifiers, WUXAITablePatternIdentifiersStatics, WUXAITogglePatternIdentifiers, WUXAITogglePatternIdentifiersStatics, WUXAITransformPattern2Identifiers, WUXAITransformPattern2IdentifiersStatics, WUXAITransformPatternIdentifiers, WUXAITransformPatternIdentifiersStatics, WUXAIValuePatternIdentifiers, WUXAIValuePatternIdentifiersStatics, WUXAIWindowPatternIdentifiers, WUXAIWindowPatternIdentifiersStatics, WUXAIAutomationAnnotation, WUXAIAutomationAnnotationStatics, WUXAIAutomationAnnotationFactory;

// Windows.UI.Xaml.Automation.AnnotationType
enum _WUXAAnnotationType {
    WUXAAnnotationTypeUnknown = 60000,
    WUXAAnnotationTypeSpellingError = 60001,
    WUXAAnnotationTypeGrammarError = 60002,
    WUXAAnnotationTypeComment = 60003,
    WUXAAnnotationTypeFormulaError = 60004,
    WUXAAnnotationTypeTrackChanges = 60005,
    WUXAAnnotationTypeHeader = 60006,
    WUXAAnnotationTypeFooter = 60007,
    WUXAAnnotationTypeHighlighted = 60008,
    WUXAAnnotationTypeEndnote = 60009,
    WUXAAnnotationTypeFootnote = 60010,
    WUXAAnnotationTypeInsertionChange = 60011,
    WUXAAnnotationTypeDeletionChange = 60012,
    WUXAAnnotationTypeMoveChange = 60013,
    WUXAAnnotationTypeFormatChange = 60014,
    WUXAAnnotationTypeUnsyncedChange = 60015,
    WUXAAnnotationTypeEditingLockedChange = 60016,
    WUXAAnnotationTypeExternalChange = 60017,
    WUXAAnnotationTypeConflictingChange = 60018,
    WUXAAnnotationTypeAuthor = 60019,
    WUXAAnnotationTypeAdvancedProofingIssue = 60020,
    WUXAAnnotationTypeDataValidationError = 60021,
    WUXAAnnotationTypeCircularReferenceError = 60022,
};
typedef unsigned WUXAAnnotationType;

// Windows.UI.Xaml.Automation.AutomationTextEditChangeType
enum _WUXAAutomationTextEditChangeType {
    WUXAAutomationTextEditChangeTypeNone = 0,
    WUXAAutomationTextEditChangeTypeAutoCorrect = 1,
    WUXAAutomationTextEditChangeTypeComposition = 2,
    WUXAAutomationTextEditChangeTypeCompositionFinalized = 3,
};
typedef unsigned WUXAAutomationTextEditChangeType;

// Windows.UI.Xaml.Automation.DockPosition
enum _WUXADockPosition {
    WUXADockPositionTop = 0,
    WUXADockPositionLeft = 1,
    WUXADockPositionBottom = 2,
    WUXADockPositionRight = 3,
    WUXADockPositionFill = 4,
    WUXADockPositionNone = 5,
};
typedef unsigned WUXADockPosition;

// Windows.UI.Xaml.Automation.ExpandCollapseState
enum _WUXAExpandCollapseState {
    WUXAExpandCollapseStateCollapsed = 0,
    WUXAExpandCollapseStateExpanded = 1,
    WUXAExpandCollapseStatePartiallyExpanded = 2,
    WUXAExpandCollapseStateLeafNode = 3,
};
typedef unsigned WUXAExpandCollapseState;

// Windows.UI.Xaml.Automation.RowOrColumnMajor
enum _WUXARowOrColumnMajor {
    WUXARowOrColumnMajorRowMajor = 0,
    WUXARowOrColumnMajorColumnMajor = 1,
    WUXARowOrColumnMajorIndeterminate = 2,
};
typedef unsigned WUXARowOrColumnMajor;

// Windows.UI.Xaml.Automation.ScrollAmount
enum _WUXAScrollAmount {
    WUXAScrollAmountLargeDecrement = 0,
    WUXAScrollAmountSmallDecrement = 1,
    WUXAScrollAmountNoAmount = 2,
    WUXAScrollAmountLargeIncrement = 3,
    WUXAScrollAmountSmallIncrement = 4,
};
typedef unsigned WUXAScrollAmount;

// Windows.UI.Xaml.Automation.SupportedTextSelection
enum _WUXASupportedTextSelection {
    WUXASupportedTextSelectionNone = 0,
    WUXASupportedTextSelectionSingle = 1,
    WUXASupportedTextSelectionMultiple = 2,
};
typedef unsigned WUXASupportedTextSelection;

// Windows.UI.Xaml.Automation.SynchronizedInputType
enum _WUXASynchronizedInputType {
    WUXASynchronizedInputTypeKeyUp = 1,
    WUXASynchronizedInputTypeKeyDown = 2,
    WUXASynchronizedInputTypeLeftMouseUp = 4,
    WUXASynchronizedInputTypeLeftMouseDown = 8,
    WUXASynchronizedInputTypeRightMouseUp = 16,
    WUXASynchronizedInputTypeRightMouseDown = 32,
};
typedef unsigned WUXASynchronizedInputType;

// Windows.UI.Xaml.Automation.ToggleState
enum _WUXAToggleState {
    WUXAToggleStateOff = 0,
    WUXAToggleStateOn = 1,
    WUXAToggleStateIndeterminate = 2,
};
typedef unsigned WUXAToggleState;

// Windows.UI.Xaml.Automation.WindowInteractionState
enum _WUXAWindowInteractionState {
    WUXAWindowInteractionStateRunning = 0,
    WUXAWindowInteractionStateClosing = 1,
    WUXAWindowInteractionStateReadyForUserInteraction = 2,
    WUXAWindowInteractionStateBlockedByModalWindow = 3,
    WUXAWindowInteractionStateNotResponding = 4,
};
typedef unsigned WUXAWindowInteractionState;

// Windows.UI.Xaml.Automation.WindowVisualState
enum _WUXAWindowVisualState {
    WUXAWindowVisualStateNormal = 0,
    WUXAWindowVisualStateMaximized = 1,
    WUXAWindowVisualStateMinimized = 2,
};
typedef unsigned WUXAWindowVisualState;

// Windows.UI.Xaml.Automation.ZoomUnit
enum _WUXAZoomUnit {
    WUXAZoomUnitNoAmount = 0,
    WUXAZoomUnitLargeDecrement = 1,
    WUXAZoomUnitSmallDecrement = 2,
    WUXAZoomUnitLargeIncrement = 3,
    WUXAZoomUnitSmallIncrement = 4,
};
typedef unsigned WUXAZoomUnit;

// Windows.UI.Xaml.Automation.AutomationActiveEnd
enum _WUXAAutomationActiveEnd {
    WUXAAutomationActiveEndNone = 0,
    WUXAAutomationActiveEndStart = 1,
    WUXAAutomationActiveEndEnd = 2,
};
typedef unsigned WUXAAutomationActiveEnd;

// Windows.UI.Xaml.Automation.AutomationAnimationStyle
enum _WUXAAutomationAnimationStyle {
    WUXAAutomationAnimationStyleNone = 0,
    WUXAAutomationAnimationStyleLasVegasLights = 1,
    WUXAAutomationAnimationStyleBlinkingBackground = 2,
    WUXAAutomationAnimationStyleSparkleText = 3,
    WUXAAutomationAnimationStyleMarchingBlackAnts = 4,
    WUXAAutomationAnimationStyleMarchingRedAnts = 5,
    WUXAAutomationAnimationStyleShimmer = 6,
    WUXAAutomationAnimationStyleOther = 7,
};
typedef unsigned WUXAAutomationAnimationStyle;

// Windows.UI.Xaml.Automation.AutomationBulletStyle
enum _WUXAAutomationBulletStyle {
    WUXAAutomationBulletStyleNone = 0,
    WUXAAutomationBulletStyleHollowRoundBullet = 1,
    WUXAAutomationBulletStyleFilledRoundBullet = 2,
    WUXAAutomationBulletStyleHollowSquareBullet = 3,
    WUXAAutomationBulletStyleFilledSquareBullet = 4,
    WUXAAutomationBulletStyleDashBullet = 5,
    WUXAAutomationBulletStyleOther = 6,
};
typedef unsigned WUXAAutomationBulletStyle;

// Windows.UI.Xaml.Automation.AutomationCaretBidiMode
enum _WUXAAutomationCaretBidiMode {
    WUXAAutomationCaretBidiModeLTR = 0,
    WUXAAutomationCaretBidiModeRTL = 1,
};
typedef unsigned WUXAAutomationCaretBidiMode;

// Windows.UI.Xaml.Automation.AutomationCaretPosition
enum _WUXAAutomationCaretPosition {
    WUXAAutomationCaretPositionUnknown = 0,
    WUXAAutomationCaretPositionEndOfLine = 1,
    WUXAAutomationCaretPositionBeginningOfLine = 2,
};
typedef unsigned WUXAAutomationCaretPosition;

// Windows.UI.Xaml.Automation.AutomationFlowDirections
enum _WUXAAutomationFlowDirections {
    WUXAAutomationFlowDirectionsDefault = 0,
    WUXAAutomationFlowDirectionsRightToLeft = 1,
    WUXAAutomationFlowDirectionsBottomToTop = 2,
    WUXAAutomationFlowDirectionsVertical = 3,
};
typedef unsigned WUXAAutomationFlowDirections;

// Windows.UI.Xaml.Automation.AutomationOutlineStyles
enum _WUXAAutomationOutlineStyles {
    WUXAAutomationOutlineStylesNone = 0,
    WUXAAutomationOutlineStylesOutline = 1,
    WUXAAutomationOutlineStylesShadow = 2,
    WUXAAutomationOutlineStylesEngraved = 3,
    WUXAAutomationOutlineStylesEmbossed = 4,
};
typedef unsigned WUXAAutomationOutlineStyles;

// Windows.UI.Xaml.Automation.AutomationStyleId
enum _WUXAAutomationStyleId {
    WUXAAutomationStyleIdHeading1 = 70001,
    WUXAAutomationStyleIdHeading2 = 70002,
    WUXAAutomationStyleIdHeading3 = 70003,
    WUXAAutomationStyleIdHeading4 = 70004,
    WUXAAutomationStyleIdHeading5 = 70005,
    WUXAAutomationStyleIdHeading6 = 70006,
    WUXAAutomationStyleIdHeading7 = 70007,
    WUXAAutomationStyleIdHeading8 = 70008,
    WUXAAutomationStyleIdHeading9 = 70009,
    WUXAAutomationStyleIdTitle = 70010,
    WUXAAutomationStyleIdSubtitle = 70011,
    WUXAAutomationStyleIdNormal = 70012,
    WUXAAutomationStyleIdEmphasis = 70013,
    WUXAAutomationStyleIdQuote = 70014,
    WUXAAutomationStyleIdBulletedList = 70015,
};
typedef unsigned WUXAAutomationStyleId;

// Windows.UI.Xaml.Automation.AutomationTextDecorationLineStyle
enum _WUXAAutomationTextDecorationLineStyle {
    WUXAAutomationTextDecorationLineStyleNone = 0,
    WUXAAutomationTextDecorationLineStyleSingle = 1,
    WUXAAutomationTextDecorationLineStyleWordsOnly = 2,
    WUXAAutomationTextDecorationLineStyleDouble = 3,
    WUXAAutomationTextDecorationLineStyleDot = 4,
    WUXAAutomationTextDecorationLineStyleDash = 5,
    WUXAAutomationTextDecorationLineStyleDashDot = 6,
    WUXAAutomationTextDecorationLineStyleDashDotDot = 7,
    WUXAAutomationTextDecorationLineStyleWavy = 8,
    WUXAAutomationTextDecorationLineStyleThickSingle = 9,
    WUXAAutomationTextDecorationLineStyleDoubleWavy = 10,
    WUXAAutomationTextDecorationLineStyleThickWavy = 11,
    WUXAAutomationTextDecorationLineStyleLongDash = 12,
    WUXAAutomationTextDecorationLineStyleThickDash = 13,
    WUXAAutomationTextDecorationLineStyleThickDashDot = 14,
    WUXAAutomationTextDecorationLineStyleThickDashDotDot = 15,
    WUXAAutomationTextDecorationLineStyleThickDot = 16,
    WUXAAutomationTextDecorationLineStyleThickLongDash = 17,
    WUXAAutomationTextDecorationLineStyleOther = 18,
};
typedef unsigned WUXAAutomationTextDecorationLineStyle;

#include "WindowsUIXaml.h"
#include "WindowsUIXamlAutomationPeers.h"
#include "WindowsUICore.h"
// Windows.UI.Xaml.DependencyPropertyChangedCallback
#ifndef __WXDependencyPropertyChangedCallback__DEFINED
#define __WXDependencyPropertyChangedCallback__DEFINED
typedef void(^WXDependencyPropertyChangedCallback)(WXDependencyObject* sender, WXDependencyProperty* dp);
#endif // __WXDependencyPropertyChangedCallback__DEFINED


#import <Foundation/Foundation.h>

// Windows.UI.Xaml.Automation.AutomationProperty
#ifndef __WUXAAutomationProperty_DEFINED__
#define __WUXAAutomationProperty_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAAutomationProperty : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXAAutomationProperty_DEFINED__

// Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
#ifndef __WUXAAnnotationPatternIdentifiers_DEFINED__
#define __WUXAAnnotationPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAAnnotationPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)annotationTypeIdProperty;
+ (WUXAAutomationProperty*)annotationTypeNameProperty;
+ (WUXAAutomationProperty*)authorProperty;
+ (WUXAAutomationProperty*)dateTimeProperty;
+ (WUXAAutomationProperty*)targetProperty;
@end

#endif // __WUXAAnnotationPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.AutomationElementIdentifiers
#ifndef __WUXAAutomationElementIdentifiers_DEFINED__
#define __WUXAAutomationElementIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAAutomationElementIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)isOffscreenProperty;
+ (WUXAAutomationProperty*)acceleratorKeyProperty;
+ (WUXAAutomationProperty*)accessKeyProperty;
+ (WUXAAutomationProperty*)automationIdProperty;
+ (WUXAAutomationProperty*)boundingRectangleProperty;
+ (WUXAAutomationProperty*)classNameProperty;
+ (WUXAAutomationProperty*)clickablePointProperty;
+ (WUXAAutomationProperty*)controlTypeProperty;
+ (WUXAAutomationProperty*)hasKeyboardFocusProperty;
+ (WUXAAutomationProperty*)helpTextProperty;
+ (WUXAAutomationProperty*)isContentElementProperty;
+ (WUXAAutomationProperty*)isControlElementProperty;
+ (WUXAAutomationProperty*)isEnabledProperty;
+ (WUXAAutomationProperty*)isKeyboardFocusableProperty;
+ (WUXAAutomationProperty*)isPasswordProperty;
+ (WUXAAutomationProperty*)isRequiredForFormProperty;
+ (WUXAAutomationProperty*)itemStatusProperty;
+ (WUXAAutomationProperty*)itemTypeProperty;
+ (WUXAAutomationProperty*)labeledByProperty;
+ (WUXAAutomationProperty*)liveSettingProperty;
+ (WUXAAutomationProperty*)localizedControlTypeProperty;
+ (WUXAAutomationProperty*)nameProperty;
+ (WUXAAutomationProperty*)orientationProperty;
+ (WUXAAutomationProperty*)controlledPeersProperty;
+ (WUXAAutomationProperty*)annotationsProperty;
+ (WUXAAutomationProperty*)sizeOfSetProperty;
+ (WUXAAutomationProperty*)positionInSetProperty;
+ (WUXAAutomationProperty*)levelProperty;
+ (WUXAAutomationProperty*)localizedLandmarkTypeProperty;
+ (WUXAAutomationProperty*)landmarkTypeProperty;
+ (WUXAAutomationProperty*)describedByProperty;
+ (WUXAAutomationProperty*)flowsFromProperty;
+ (WUXAAutomationProperty*)flowsToProperty;
+ (WUXAAutomationProperty*)isPeripheralProperty;
+ (WUXAAutomationProperty*)isDataValidForFormProperty;
+ (WUXAAutomationProperty*)fullDescriptionProperty;
+ (WUXAAutomationProperty*)cultureProperty;
@end

#endif // __WUXAAutomationElementIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.AutomationProperties
#ifndef __WUXAAutomationProperties_DEFINED__
#define __WUXAAutomationProperties_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAAutomationProperties : RTObject
+ (WUXAPAccessibilityView)getAccessibilityView:(WXDependencyObject*)element;
+ (void)setAccessibilityView:(WXDependencyObject*)element value:(WUXAPAccessibilityView)value;
+ (NSMutableArray* /* WXUIElement* */)getControlledPeers:(WXDependencyObject*)element;
+ (BOOL)getIsPeripheral:(WXDependencyObject*)element;
+ (void)setIsPeripheral:(WXDependencyObject*)element value:(BOOL)value;
+ (BOOL)getIsDataValidForForm:(WXDependencyObject*)element;
+ (void)setIsDataValidForForm:(WXDependencyObject*)element value:(BOOL)value;
+ (NSString *)getFullDescription:(WXDependencyObject*)element;
+ (void)setFullDescription:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getLocalizedControlType:(WXDependencyObject*)element;
+ (void)setLocalizedControlType:(WXDependencyObject*)element value:(NSString *)value;
+ (NSMutableArray* /* WXDependencyObject* */)getDescribedBy:(WXDependencyObject*)element;
+ (NSMutableArray* /* WXDependencyObject* */)getFlowsTo:(WXDependencyObject*)element;
+ (NSMutableArray* /* WXDependencyObject* */)getFlowsFrom:(WXDependencyObject*)element;
+ (WUXAPAutomationLandmarkType)getLandmarkType:(WXDependencyObject*)element;
+ (void)setLandmarkType:(WXDependencyObject*)element value:(WUXAPAutomationLandmarkType)value;
+ (NSString *)getLocalizedLandmarkType:(WXDependencyObject*)element;
+ (void)setLocalizedLandmarkType:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getAcceleratorKey:(WXDependencyObject*)element;
+ (void)setAcceleratorKey:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getAccessKey:(WXDependencyObject*)element;
+ (void)setAccessKey:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getAutomationId:(WXDependencyObject*)element;
+ (void)setAutomationId:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getHelpText:(WXDependencyObject*)element;
+ (void)setHelpText:(WXDependencyObject*)element value:(NSString *)value;
+ (BOOL)getIsRequiredForForm:(WXDependencyObject*)element;
+ (void)setIsRequiredForForm:(WXDependencyObject*)element value:(BOOL)value;
+ (NSString *)getItemStatus:(WXDependencyObject*)element;
+ (void)setItemStatus:(WXDependencyObject*)element value:(NSString *)value;
+ (NSString *)getItemType:(WXDependencyObject*)element;
+ (void)setItemType:(WXDependencyObject*)element value:(NSString *)value;
+ (WXUIElement*)getLabeledBy:(WXDependencyObject*)element;
+ (void)setLabeledBy:(WXDependencyObject*)element value:(WXUIElement*)value;
+ (NSString *)getName:(WXDependencyObject*)element;
+ (void)setName:(WXDependencyObject*)element value:(NSString *)value;
+ (WUXAPAutomationLiveSetting)getLiveSetting:(WXDependencyObject*)element;
+ (void)setLiveSetting:(WXDependencyObject*)element value:(WUXAPAutomationLiveSetting)value;
+ (int)getPositionInSet:(WXDependencyObject*)element;
+ (void)setPositionInSet:(WXDependencyObject*)element value:(int)value;
+ (int)getSizeOfSet:(WXDependencyObject*)element;
+ (void)setSizeOfSet:(WXDependencyObject*)element value:(int)value;
+ (int)getLevel:(WXDependencyObject*)element;
+ (void)setLevel:(WXDependencyObject*)element value:(int)value;
+ (NSMutableArray* /* WUXAAutomationAnnotation* */)getAnnotations:(WXDependencyObject*)element;
+ (int)getCulture:(WXDependencyObject*)element;
+ (void)setCulture:(WXDependencyObject*)element value:(int)value;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WXDependencyProperty*)nameProperty;
+ (WXDependencyProperty*)liveSettingProperty;
+ (WXDependencyProperty*)labeledByProperty;
+ (WXDependencyProperty*)itemTypeProperty;
+ (WXDependencyProperty*)itemStatusProperty;
+ (WXDependencyProperty*)isRequiredForFormProperty;
+ (WXDependencyProperty*)helpTextProperty;
+ (WXDependencyProperty*)automationIdProperty;
+ (WXDependencyProperty*)accessKeyProperty;
+ (WXDependencyProperty*)acceleratorKeyProperty;
+ (WXDependencyProperty*)controlledPeersProperty;
+ (WXDependencyProperty*)accessibilityViewProperty;
+ (WXDependencyProperty*)annotationsProperty;
+ (WXDependencyProperty*)levelProperty;
+ (WXDependencyProperty*)positionInSetProperty;
+ (WXDependencyProperty*)sizeOfSetProperty;
+ (WXDependencyProperty*)localizedLandmarkTypeProperty;
+ (WXDependencyProperty*)landmarkTypeProperty;
+ (WXDependencyProperty*)isPeripheralProperty;
+ (WXDependencyProperty*)isDataValidForFormProperty;
+ (WXDependencyProperty*)fullDescriptionProperty;
+ (WXDependencyProperty*)flowsToProperty;
+ (WXDependencyProperty*)flowsFromProperty;
+ (WXDependencyProperty*)describedByProperty;
+ (WXDependencyProperty*)localizedControlTypeProperty;
+ (WXDependencyProperty*)cultureProperty;
@end

#endif // __WUXAAutomationProperties_DEFINED__

// Windows.UI.Xaml.Automation.DockPatternIdentifiers
#ifndef __WUXADockPatternIdentifiers_DEFINED__
#define __WUXADockPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXADockPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)dockPositionProperty;
@end

#endif // __WUXADockPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.DragPatternIdentifiers
#ifndef __WUXADragPatternIdentifiers_DEFINED__
#define __WUXADragPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXADragPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)dropEffectProperty;
+ (WUXAAutomationProperty*)dropEffectsProperty;
+ (WUXAAutomationProperty*)grabbedItemsProperty;
+ (WUXAAutomationProperty*)isGrabbedProperty;
@end

#endif // __WUXADragPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
#ifndef __WUXADropTargetPatternIdentifiers_DEFINED__
#define __WUXADropTargetPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXADropTargetPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)dropTargetEffectProperty;
+ (WUXAAutomationProperty*)dropTargetEffectsProperty;
@end

#endif // __WUXADropTargetPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
#ifndef __WUXAExpandCollapsePatternIdentifiers_DEFINED__
#define __WUXAExpandCollapsePatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAExpandCollapsePatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)expandCollapseStateProperty;
@end

#endif // __WUXAExpandCollapsePatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
#ifndef __WUXAGridItemPatternIdentifiers_DEFINED__
#define __WUXAGridItemPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAGridItemPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)columnProperty;
+ (WUXAAutomationProperty*)columnSpanProperty;
+ (WUXAAutomationProperty*)containingGridProperty;
+ (WUXAAutomationProperty*)rowProperty;
+ (WUXAAutomationProperty*)rowSpanProperty;
@end

#endif // __WUXAGridItemPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.GridPatternIdentifiers
#ifndef __WUXAGridPatternIdentifiers_DEFINED__
#define __WUXAGridPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAGridPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)columnCountProperty;
+ (WUXAAutomationProperty*)rowCountProperty;
@end

#endif // __WUXAGridPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
#ifndef __WUXAMultipleViewPatternIdentifiers_DEFINED__
#define __WUXAMultipleViewPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAMultipleViewPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)currentViewProperty;
+ (WUXAAutomationProperty*)supportedViewsProperty;
@end

#endif // __WUXAMultipleViewPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
#ifndef __WUXARangeValuePatternIdentifiers_DEFINED__
#define __WUXARangeValuePatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXARangeValuePatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)isReadOnlyProperty;
+ (WUXAAutomationProperty*)largeChangeProperty;
+ (WUXAAutomationProperty*)maximumProperty;
+ (WUXAAutomationProperty*)minimumProperty;
+ (WUXAAutomationProperty*)smallChangeProperty;
+ (WUXAAutomationProperty*)valueProperty;
@end

#endif // __WUXARangeValuePatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
#ifndef __WUXAScrollPatternIdentifiers_DEFINED__
#define __WUXAScrollPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAScrollPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)horizontalScrollPercentProperty;
+ (WUXAAutomationProperty*)horizontalViewSizeProperty;
+ (WUXAAutomationProperty*)horizontallyScrollableProperty;
+ (double)noScroll;
+ (WUXAAutomationProperty*)verticalScrollPercentProperty;
+ (WUXAAutomationProperty*)verticalViewSizeProperty;
+ (WUXAAutomationProperty*)verticallyScrollableProperty;
@end

#endif // __WUXAScrollPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
#ifndef __WUXASelectionItemPatternIdentifiers_DEFINED__
#define __WUXASelectionItemPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXASelectionItemPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)isSelectedProperty;
+ (WUXAAutomationProperty*)selectionContainerProperty;
@end

#endif // __WUXASelectionItemPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
#ifndef __WUXASelectionPatternIdentifiers_DEFINED__
#define __WUXASelectionPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXASelectionPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)canSelectMultipleProperty;
+ (WUXAAutomationProperty*)isSelectionRequiredProperty;
+ (WUXAAutomationProperty*)selectionProperty;
@end

#endif // __WUXASelectionPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
#ifndef __WUXASpreadsheetItemPatternIdentifiers_DEFINED__
#define __WUXASpreadsheetItemPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXASpreadsheetItemPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)formulaProperty;
@end

#endif // __WUXASpreadsheetItemPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.StylesPatternIdentifiers
#ifndef __WUXAStylesPatternIdentifiers_DEFINED__
#define __WUXAStylesPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAStylesPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)extendedPropertiesProperty;
+ (WUXAAutomationProperty*)fillColorProperty;
+ (WUXAAutomationProperty*)fillPatternColorProperty;
+ (WUXAAutomationProperty*)fillPatternStyleProperty;
+ (WUXAAutomationProperty*)shapeProperty;
+ (WUXAAutomationProperty*)styleIdProperty;
+ (WUXAAutomationProperty*)styleNameProperty;
@end

#endif // __WUXAStylesPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
#ifndef __WUXATableItemPatternIdentifiers_DEFINED__
#define __WUXATableItemPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXATableItemPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)columnHeaderItemsProperty;
+ (WUXAAutomationProperty*)rowHeaderItemsProperty;
@end

#endif // __WUXATableItemPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.TablePatternIdentifiers
#ifndef __WUXATablePatternIdentifiers_DEFINED__
#define __WUXATablePatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXATablePatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)columnHeadersProperty;
+ (WUXAAutomationProperty*)rowHeadersProperty;
+ (WUXAAutomationProperty*)rowOrColumnMajorProperty;
@end

#endif // __WUXATablePatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.TogglePatternIdentifiers
#ifndef __WUXATogglePatternIdentifiers_DEFINED__
#define __WUXATogglePatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXATogglePatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)toggleStateProperty;
@end

#endif // __WUXATogglePatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.TransformPattern2Identifiers
#ifndef __WUXATransformPattern2Identifiers_DEFINED__
#define __WUXATransformPattern2Identifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXATransformPattern2Identifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)canZoomProperty;
+ (WUXAAutomationProperty*)maxZoomProperty;
+ (WUXAAutomationProperty*)minZoomProperty;
+ (WUXAAutomationProperty*)zoomLevelProperty;
@end

#endif // __WUXATransformPattern2Identifiers_DEFINED__

// Windows.UI.Xaml.Automation.TransformPatternIdentifiers
#ifndef __WUXATransformPatternIdentifiers_DEFINED__
#define __WUXATransformPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXATransformPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)canMoveProperty;
+ (WUXAAutomationProperty*)canResizeProperty;
+ (WUXAAutomationProperty*)canRotateProperty;
@end

#endif // __WUXATransformPatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.ValuePatternIdentifiers
#ifndef __WUXAValuePatternIdentifiers_DEFINED__
#define __WUXAValuePatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAValuePatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)isReadOnlyProperty;
+ (WUXAAutomationProperty*)valueProperty;
@end

#endif // __WUXAValuePatternIdentifiers_DEFINED__

// Windows.UI.Xaml.Automation.WindowPatternIdentifiers
#ifndef __WUXAWindowPatternIdentifiers_DEFINED__
#define __WUXAWindowPatternIdentifiers_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAWindowPatternIdentifiers : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WUXAAutomationProperty*)canMaximizeProperty;
+ (WUXAAutomationProperty*)canMinimizeProperty;
+ (WUXAAutomationProperty*)isModalProperty;
+ (WUXAAutomationProperty*)isTopmostProperty;
+ (WUXAAutomationProperty*)windowInteractionStateProperty;
+ (WUXAAutomationProperty*)windowVisualStateProperty;
@end

#endif // __WUXAWindowPatternIdentifiers_DEFINED__

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

// Windows.UI.Xaml.Automation.AutomationAnnotation
#ifndef __WUXAAutomationAnnotation_DEFINED__
#define __WUXAAutomationAnnotation_DEFINED__

OBJCUWPWINDOWSUIXAMLEXPORT
@interface WUXAAutomationAnnotation : WXDependencyObject
+ (WUXAAutomationAnnotation*)makeInstance:(WUXAAnnotationType)type ACTIVATOR;
+ (WUXAAutomationAnnotation*)makeWithElementParameter:(WUXAAnnotationType)type element:(WXUIElement*)element ACTIVATOR;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property WUXAAnnotationType type;
@property (retain) WXUIElement* element;
+ (WXDependencyProperty*)elementProperty;
+ (WXDependencyProperty*)typeProperty;
@end

#endif // __WUXAAutomationAnnotation_DEFINED__

