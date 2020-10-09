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

// WindowsUICoreAnimationMetrics.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
#define OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUICoreAnimationMetrics.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUCAAnimationDescription, WUCAPropertyAnimation, WUCAScaleAnimation, WUCATranslationAnimation, WUCAOpacityAnimation;
@protocol WUCAIPropertyAnimation, WUCAIScaleAnimation, WUCAIOpacityAnimation, WUCAIAnimationDescription, WUCAIAnimationDescriptionFactory;

// Windows.UI.Core.AnimationMetrics.PropertyAnimationType
enum _WUCAPropertyAnimationType {
    WUCAPropertyAnimationTypeScale = 0,
    WUCAPropertyAnimationTypeTranslation = 1,
    WUCAPropertyAnimationTypeOpacity = 2,
};
typedef unsigned WUCAPropertyAnimationType;

// Windows.UI.Core.AnimationMetrics.AnimationEffect
enum _WUCAAnimationEffect {
    WUCAAnimationEffectExpand = 0,
    WUCAAnimationEffectCollapse = 1,
    WUCAAnimationEffectReposition = 2,
    WUCAAnimationEffectFadeIn = 3,
    WUCAAnimationEffectFadeOut = 4,
    WUCAAnimationEffectAddToList = 5,
    WUCAAnimationEffectDeleteFromList = 6,
    WUCAAnimationEffectAddToGrid = 7,
    WUCAAnimationEffectDeleteFromGrid = 8,
    WUCAAnimationEffectAddToSearchGrid = 9,
    WUCAAnimationEffectDeleteFromSearchGrid = 10,
    WUCAAnimationEffectAddToSearchList = 11,
    WUCAAnimationEffectDeleteFromSearchList = 12,
    WUCAAnimationEffectShowEdgeUI = 13,
    WUCAAnimationEffectShowPanel = 14,
    WUCAAnimationEffectHideEdgeUI = 15,
    WUCAAnimationEffectHidePanel = 16,
    WUCAAnimationEffectShowPopup = 17,
    WUCAAnimationEffectHidePopup = 18,
    WUCAAnimationEffectPointerDown = 19,
    WUCAAnimationEffectPointerUp = 20,
    WUCAAnimationEffectDragSourceStart = 21,
    WUCAAnimationEffectDragSourceEnd = 22,
    WUCAAnimationEffectTransitionContent = 23,
    WUCAAnimationEffectReveal = 24,
    WUCAAnimationEffectHide = 25,
    WUCAAnimationEffectDragBetweenEnter = 26,
    WUCAAnimationEffectDragBetweenLeave = 27,
    WUCAAnimationEffectSwipeSelect = 28,
    WUCAAnimationEffectSwipeDeselect = 29,
    WUCAAnimationEffectSwipeReveal = 30,
    WUCAAnimationEffectEnterPage = 31,
    WUCAAnimationEffectTransitionPage = 32,
    WUCAAnimationEffectCrossFade = 33,
    WUCAAnimationEffectPeek = 34,
    WUCAAnimationEffectUpdateBadge = 35,
};
typedef unsigned WUCAAnimationEffect;

// Windows.UI.Core.AnimationMetrics.AnimationEffectTarget
enum _WUCAAnimationEffectTarget {
    WUCAAnimationEffectTargetPrimary = 0,
    WUCAAnimationEffectTargetAdded = 1,
    WUCAAnimationEffectTargetAffected = 2,
    WUCAAnimationEffectTargetBackground = 3,
    WUCAAnimationEffectTargetContent = 4,
    WUCAAnimationEffectTargetDeleted = 5,
    WUCAAnimationEffectTargetDeselected = 6,
    WUCAAnimationEffectTargetDragSource = 7,
    WUCAAnimationEffectTargetHidden = 8,
    WUCAAnimationEffectTargetIncoming = 9,
    WUCAAnimationEffectTargetOutgoing = 10,
    WUCAAnimationEffectTargetOutline = 11,
    WUCAAnimationEffectTargetRemaining = 12,
    WUCAAnimationEffectTargetRevealed = 13,
    WUCAAnimationEffectTargetRowIn = 14,
    WUCAAnimationEffectTargetRowOut = 15,
    WUCAAnimationEffectTargetSelected = 16,
    WUCAAnimationEffectTargetSelection = 17,
    WUCAAnimationEffectTargetShown = 18,
    WUCAAnimationEffectTargetTapped = 19,
};
typedef unsigned WUCAAnimationEffectTarget;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.UI.Core.AnimationMetrics.IPropertyAnimation
#ifndef __WUCAIPropertyAnimation_DEFINED__
#define __WUCAIPropertyAnimation_DEFINED__

@protocol WUCAIPropertyAnimation
@property (readonly) WFPoint* control1;
@property (readonly) WFPoint* control2;
@property (readonly) WFTimeSpan* delay;
@property (readonly) WFTimeSpan* duration;
@property (readonly) WUCAPropertyAnimationType type;
@end

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCAIPropertyAnimation : RTObject <WUCAIPropertyAnimation>
@end

#endif // __WUCAIPropertyAnimation_DEFINED__

// Windows.UI.Core.AnimationMetrics.AnimationDescription
#ifndef __WUCAAnimationDescription_DEFINED__
#define __WUCAAnimationDescription_DEFINED__

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCAAnimationDescription : RTObject
+ (WUCAAnimationDescription*)makeInstance:(WUCAAnimationEffect)effect target:(WUCAAnimationEffectTarget)target ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* RTObject<WUCAIPropertyAnimation>* */ animations;
@property (readonly) WFTimeSpan* delayLimit;
@property (readonly) WFTimeSpan* staggerDelay;
@property (readonly) float staggerDelayFactor;
@property (readonly) int zOrder;
@end

#endif // __WUCAAnimationDescription_DEFINED__

// Windows.UI.Core.AnimationMetrics.PropertyAnimation
#ifndef __WUCAPropertyAnimation_DEFINED__
#define __WUCAPropertyAnimation_DEFINED__

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCAPropertyAnimation : RTObject <WUCAIPropertyAnimation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFPoint* control1;
@property (readonly) WFPoint* control2;
@property (readonly) WFTimeSpan* delay;
@property (readonly) WFTimeSpan* duration;
@property (readonly) WUCAPropertyAnimationType type;
@end

#endif // __WUCAPropertyAnimation_DEFINED__

// Windows.UI.Core.AnimationMetrics.ScaleAnimation
#ifndef __WUCAScaleAnimation_DEFINED__
#define __WUCAScaleAnimation_DEFINED__

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCAScaleAnimation : RTObject <WUCAIPropertyAnimation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFPoint* control1;
@property (readonly) WFPoint* control2;
@property (readonly) WFTimeSpan* delay;
@property (readonly) WFTimeSpan* duration;
@property (readonly) WUCAPropertyAnimationType type;
@property (readonly) float finalScaleX;
@property (readonly) float finalScaleY;
@property (readonly) id /* float */ initialScaleX;
@property (readonly) id /* float */ initialScaleY;
@property (readonly) WFPoint* normalizedOrigin;
@end

#endif // __WUCAScaleAnimation_DEFINED__

// Windows.UI.Core.AnimationMetrics.TranslationAnimation
#ifndef __WUCATranslationAnimation_DEFINED__
#define __WUCATranslationAnimation_DEFINED__

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCATranslationAnimation : RTObject <WUCAIPropertyAnimation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFPoint* control1;
@property (readonly) WFPoint* control2;
@property (readonly) WFTimeSpan* delay;
@property (readonly) WFTimeSpan* duration;
@property (readonly) WUCAPropertyAnimationType type;
@end

#endif // __WUCATranslationAnimation_DEFINED__

// Windows.UI.Core.AnimationMetrics.OpacityAnimation
#ifndef __WUCAOpacityAnimation_DEFINED__
#define __WUCAOpacityAnimation_DEFINED__

OBJCUWPWINDOWSUICOREANIMATIONMETRICSEXPORT
@interface WUCAOpacityAnimation : RTObject <WUCAIPropertyAnimation>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) float finalOpacity;
@property (readonly) id /* float */ initialOpacity;
@property (readonly) WFPoint* control1;
@property (readonly) WFPoint* control2;
@property (readonly) WFTimeSpan* delay;
@property (readonly) WFTimeSpan* duration;
@property (readonly) WUCAPropertyAnimationType type;
@end

#endif // __WUCAOpacityAnimation_DEFINED__

