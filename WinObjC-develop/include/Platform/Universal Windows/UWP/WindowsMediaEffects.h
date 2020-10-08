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

// WindowsMediaEffects.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
#define OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaEditingEffects.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMEVideoCompositorDefinition, WMECompositeVideoFrameContext, WMEAudioEffect, WMEAudioRenderEffectsManager, WMEAudioCaptureEffectsManager, WMEAudioEffectsManager, WMEVideoEffectDefinition, WMEAudioEffectDefinition, WMEProcessVideoFrameContext, WMEProcessAudioFrameContext, WMEVideoTransformEffectDefinition;
@protocol WMEIVideoCompositorDefinition, WMEIVideoCompositorDefinitionFactory, WMEICompositeVideoFrameContext, WMEIAudioEffect, WMEIAudioEffectsManagerStatics, WMEIAudioRenderEffectsManager, WMEIAudioRenderEffectsManager2, WMEIAudioCaptureEffectsManager, WMEIVideoCompositor, WMEIVideoEffectDefinition, WMEIVideoEffectDefinitionFactory, WMEIAudioEffectDefinition, WMEIAudioEffectDefinitionFactory, WMEIProcessVideoFrameContext, WMEIBasicVideoEffect, WMEIProcessAudioFrameContext, WMEIBasicAudioEffect, WMEIVideoTransformEffectDefinition;

// Windows.Media.Effects.AudioEffectType
enum _WMEAudioEffectType {
    WMEAudioEffectTypeOther = 0,
    WMEAudioEffectTypeAcousticEchoCancellation = 1,
    WMEAudioEffectTypeNoiseSuppression = 2,
    WMEAudioEffectTypeAutomaticGainControl = 3,
    WMEAudioEffectTypeBeamForming = 4,
    WMEAudioEffectTypeConstantToneRemoval = 5,
    WMEAudioEffectTypeEqualizer = 6,
    WMEAudioEffectTypeLoudnessEqualizer = 7,
    WMEAudioEffectTypeBassBoost = 8,
    WMEAudioEffectTypeVirtualSurround = 9,
    WMEAudioEffectTypeVirtualHeadphones = 10,
    WMEAudioEffectTypeSpeakerFill = 11,
    WMEAudioEffectTypeRoomCorrection = 12,
    WMEAudioEffectTypeBassManagement = 13,
    WMEAudioEffectTypeEnvironmentalEffects = 14,
    WMEAudioEffectTypeSpeakerProtection = 15,
    WMEAudioEffectTypeSpeakerCompensation = 16,
    WMEAudioEffectTypeDynamicRangeCompression = 17,
};
typedef unsigned WMEAudioEffectType;

// Windows.Media.Effects.MediaMemoryTypes
enum _WMEMediaMemoryTypes {
    WMEMediaMemoryTypesGpu = 0,
    WMEMediaMemoryTypesCpu = 1,
    WMEMediaMemoryTypesGpuAndCpu = 2,
};
typedef unsigned WMEMediaMemoryTypes;

// Windows.Media.Effects.MediaEffectClosedReason
enum _WMEMediaEffectClosedReason {
    WMEMediaEffectClosedReasonDone = 0,
    WMEMediaEffectClosedReasonUnknownError = 1,
    WMEMediaEffectClosedReasonUnsupportedEncodingFormat = 2,
    WMEMediaEffectClosedReasonEffectCurrentlyUnloaded = 3,
};
typedef unsigned WMEMediaEffectClosedReason;

#include "WindowsMediaEditing.h"
#include "WindowsMediaCapture.h"
#include "WindowsMediaTranscoding.h"
#include "WindowsStorageStreams.h"
#include "WindowsMediaRender.h"
#include "WindowsFoundationCollections.h"
#include "WindowsGraphicsDirectXDirect3D11.h"
#include "WindowsMedia.h"
#include "WindowsFoundation.h"
#include "WindowsMediaMediaProperties.h"
#include "WindowsUI.h"

#import <Foundation/Foundation.h>

// Windows.Media.Effects.IVideoCompositorDefinition
#ifndef __WMEIVideoCompositorDefinition_DEFINED__
#define __WMEIVideoCompositorDefinition_DEFINED__

@protocol WMEIVideoCompositorDefinition
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIVideoCompositorDefinition : RTObject <WMEIVideoCompositorDefinition>
@end

#endif // __WMEIVideoCompositorDefinition_DEFINED__

// Windows.Media.IMediaExtension
#ifndef __WMIMediaExtension_DEFINED__
#define __WMIMediaExtension_DEFINED__

@protocol WMIMediaExtension
- (void)setProperties:(RTObject<WFCIPropertySet>*)configuration;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMIMediaExtension : RTObject <WMIMediaExtension>
@end

#endif // __WMIMediaExtension_DEFINED__

// Windows.Media.Effects.IVideoCompositor
#ifndef __WMEIVideoCompositor_DEFINED__
#define __WMEIVideoCompositor_DEFINED__

@protocol WMEIVideoCompositor <WMIMediaExtension>
@property (readonly) BOOL timeIndependent;
- (void)setEncodingProperties:(WMMVideoEncodingProperties*)backgroundProperties device:(RTObject<WGDDIDirect3DDevice>*)device;
- (void)compositeFrame:(WMECompositeVideoFrameContext*)context;
- (void)close:(WMEMediaEffectClosedReason)reason;
- (void)discardQueuedFrames;
- (void)setProperties:(RTObject<WFCIPropertySet>*)configuration;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIVideoCompositor : RTObject <WMEIVideoCompositor>
@end

#endif // __WMEIVideoCompositor_DEFINED__

// Windows.Media.Effects.IVideoEffectDefinition
#ifndef __WMEIVideoEffectDefinition_DEFINED__
#define __WMEIVideoEffectDefinition_DEFINED__

@protocol WMEIVideoEffectDefinition
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIVideoEffectDefinition : RTObject <WMEIVideoEffectDefinition>
@end

#endif // __WMEIVideoEffectDefinition_DEFINED__

// Windows.Media.Effects.IAudioEffectDefinition
#ifndef __WMEIAudioEffectDefinition_DEFINED__
#define __WMEIAudioEffectDefinition_DEFINED__

@protocol WMEIAudioEffectDefinition
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIAudioEffectDefinition : RTObject <WMEIAudioEffectDefinition>
@end

#endif // __WMEIAudioEffectDefinition_DEFINED__

// Windows.Media.Effects.IBasicVideoEffect
#ifndef __WMEIBasicVideoEffect_DEFINED__
#define __WMEIBasicVideoEffect_DEFINED__

@protocol WMEIBasicVideoEffect <WMIMediaExtension>
@property (readonly) BOOL isReadOnly;
@property (readonly) NSArray* /* WMMVideoEncodingProperties* */ supportedEncodingProperties;
@property (readonly) WMEMediaMemoryTypes supportedMemoryTypes;
@property (readonly) BOOL timeIndependent;
- (void)setEncodingProperties:(WMMVideoEncodingProperties*)encodingProperties device:(RTObject<WGDDIDirect3DDevice>*)device;
- (void)processFrame:(WMEProcessVideoFrameContext*)context;
- (void)close:(WMEMediaEffectClosedReason)reason;
- (void)discardQueuedFrames;
- (void)setProperties:(RTObject<WFCIPropertySet>*)configuration;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIBasicVideoEffect : RTObject <WMEIBasicVideoEffect>
@end

#endif // __WMEIBasicVideoEffect_DEFINED__

// Windows.Media.Effects.IBasicAudioEffect
#ifndef __WMEIBasicAudioEffect_DEFINED__
#define __WMEIBasicAudioEffect_DEFINED__

@protocol WMEIBasicAudioEffect <WMIMediaExtension>
@property (readonly) NSArray* /* WMMAudioEncodingProperties* */ supportedEncodingProperties;
@property (readonly) BOOL useInputFrameForOutput;
- (void)setEncodingProperties:(WMMAudioEncodingProperties*)encodingProperties;
- (void)processFrame:(WMEProcessAudioFrameContext*)context;
- (void)close:(WMEMediaEffectClosedReason)reason;
- (void)discardQueuedFrames;
- (void)setProperties:(RTObject<WFCIPropertySet>*)configuration;
@end

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEIBasicAudioEffect : RTObject <WMEIBasicAudioEffect>
@end

#endif // __WMEIBasicAudioEffect_DEFINED__

// Windows.Media.Effects.VideoCompositorDefinition
#ifndef __WMEVideoCompositorDefinition_DEFINED__
#define __WMEVideoCompositorDefinition_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEVideoCompositorDefinition : RTObject <WMEIVideoCompositorDefinition>
+ (WMEVideoCompositorDefinition*)make:(NSString *)activatableClassId ACTIVATOR;
+ (WMEVideoCompositorDefinition*)makeWithProperties:(NSString *)activatableClassId props:(RTObject<WFCIPropertySet>*)props ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

#endif // __WMEVideoCompositorDefinition_DEFINED__

// Windows.Media.Effects.CompositeVideoFrameContext
#ifndef __WMECompositeVideoFrameContext_DEFINED__
#define __WMECompositeVideoFrameContext_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMECompositeVideoFrameContext : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMVideoFrame* backgroundFrame;
@property (readonly) WMVideoFrame* outputFrame;
@property (readonly) NSArray* /* RTObject<WGDDIDirect3DSurface>* */ surfacesToOverlay;
- (WMEMediaOverlay*)getOverlayForSurface:(RTObject<WGDDIDirect3DSurface>*)surfaceToOverlay;
@end

#endif // __WMECompositeVideoFrameContext_DEFINED__

// Windows.Media.Effects.AudioEffect
#ifndef __WMEAudioEffect_DEFINED__
#define __WMEAudioEffect_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEAudioEffect : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMEAudioEffectType audioEffectType;
@end

#endif // __WMEAudioEffect_DEFINED__

// Windows.Media.Effects.AudioRenderEffectsManager
#ifndef __WMEAudioRenderEffectsManager_DEFINED__
#define __WMEAudioRenderEffectsManager_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEAudioRenderEffectsManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * effectsProviderSettingsLabel;
@property (readonly) RTObject<WSSIRandomAccessStreamWithContentType>* effectsProviderThumbnail;
- (EventRegistrationToken)addAudioRenderEffectsChangedEvent:(void(^)(WMEAudioRenderEffectsManager*, RTObject*))del;
- (void)removeAudioRenderEffectsChangedEvent:(EventRegistrationToken)tok;
- (NSArray* /* WMEAudioEffect* */)getAudioRenderEffects;
- (void)showSettingsUI;
@end

#endif // __WMEAudioRenderEffectsManager_DEFINED__

// Windows.Media.Effects.AudioCaptureEffectsManager
#ifndef __WMEAudioCaptureEffectsManager_DEFINED__
#define __WMEAudioCaptureEffectsManager_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEAudioCaptureEffectsManager : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (EventRegistrationToken)addAudioCaptureEffectsChangedEvent:(void(^)(WMEAudioCaptureEffectsManager*, RTObject*))del;
- (void)removeAudioCaptureEffectsChangedEvent:(EventRegistrationToken)tok;
- (NSArray* /* WMEAudioEffect* */)getAudioCaptureEffects;
@end

#endif // __WMEAudioCaptureEffectsManager_DEFINED__

// Windows.Media.Effects.AudioEffectsManager
#ifndef __WMEAudioEffectsManager_DEFINED__
#define __WMEAudioEffectsManager_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEAudioEffectsManager : RTObject
+ (WMEAudioRenderEffectsManager*)createAudioRenderEffectsManager:(NSString *)deviceId category:(WMRAudioRenderCategory)category;
+ (WMEAudioRenderEffectsManager*)createAudioRenderEffectsManagerWithMode:(NSString *)deviceId category:(WMRAudioRenderCategory)category mode:(WMAudioProcessing)mode;
+ (WMEAudioCaptureEffectsManager*)createAudioCaptureEffectsManager:(NSString *)deviceId category:(WMCMediaCategory)category;
+ (WMEAudioCaptureEffectsManager*)createAudioCaptureEffectsManagerWithMode:(NSString *)deviceId category:(WMCMediaCategory)category mode:(WMAudioProcessing)mode;
@end

#endif // __WMEAudioEffectsManager_DEFINED__

// Windows.Media.Effects.VideoEffectDefinition
#ifndef __WMEVideoEffectDefinition_DEFINED__
#define __WMEVideoEffectDefinition_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEVideoEffectDefinition : RTObject <WMEIVideoEffectDefinition>
+ (WMEVideoEffectDefinition*)make:(NSString *)activatableClassId ACTIVATOR;
+ (WMEVideoEffectDefinition*)makeWithProperties:(NSString *)activatableClassId props:(RTObject<WFCIPropertySet>*)props ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

#endif // __WMEVideoEffectDefinition_DEFINED__

// Windows.Media.Effects.AudioEffectDefinition
#ifndef __WMEAudioEffectDefinition_DEFINED__
#define __WMEAudioEffectDefinition_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEAudioEffectDefinition : RTObject <WMEIAudioEffectDefinition>
+ (WMEAudioEffectDefinition*)make:(NSString *)activatableClassId ACTIVATOR;
+ (WMEAudioEffectDefinition*)makeWithProperties:(NSString *)activatableClassId props:(RTObject<WFCIPropertySet>*)props ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@end

#endif // __WMEAudioEffectDefinition_DEFINED__

// Windows.Media.Effects.ProcessVideoFrameContext
#ifndef __WMEProcessVideoFrameContext_DEFINED__
#define __WMEProcessVideoFrameContext_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEProcessVideoFrameContext : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMVideoFrame* inputFrame;
@property (readonly) WMVideoFrame* outputFrame;
@end

#endif // __WMEProcessVideoFrameContext_DEFINED__

// Windows.Media.Effects.ProcessAudioFrameContext
#ifndef __WMEProcessAudioFrameContext_DEFINED__
#define __WMEProcessAudioFrameContext_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEProcessAudioFrameContext : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMAudioFrame* inputFrame;
@property (readonly) WMAudioFrame* outputFrame;
@end

#endif // __WMEProcessAudioFrameContext_DEFINED__

// Windows.Media.Effects.VideoTransformEffectDefinition
#ifndef __WMEVideoTransformEffectDefinition_DEFINED__
#define __WMEVideoTransformEffectDefinition_DEFINED__

OBJCUWPWINDOWSMEDIAEDITINGEFFECTSEXPORT
@interface WMEVideoTransformEffectDefinition : RTObject <WMEIVideoEffectDefinition>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * activatableClassId;
@property (readonly) RTObject<WFCIPropertySet>* properties;
@property WMMMediaRotation rotation;
@property WMTMediaVideoProcessingAlgorithm processingAlgorithm;
@property (retain) WUColor* paddingColor;
@property (retain) WFSize* outputSize;
@property WMMMediaMirroringOptions mirror;
@property (retain) WFRect* cropRectangle;
@end

#endif // __WMEVideoTransformEffectDefinition_DEFINED__

