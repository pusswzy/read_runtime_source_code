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

// WindowsMediaSpeechRecognition.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
#define OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaSpeechRecognition.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WMSSpeechRecognitionSemanticInterpretation, WMSSpeechRecognitionResult, WMSSpeechRecognitionTopicConstraint, WMSSpeechRecognitionListConstraint, WMSSpeechRecognitionGrammarFileConstraint, WMSSpeechRecognizerTimeouts, WMSSpeechRecognizerUIOptions, WMSSpeechRecognitionCompilationResult, WMSSpeechRecognizer, WMSSpeechRecognitionQualityDegradingEventArgs, WMSSpeechRecognizerStateChangedEventArgs, WMSSpeechRecognitionVoiceCommandDefinitionConstraint, WMSSpeechContinuousRecognitionSession, WMSSpeechRecognitionHypothesisGeneratedEventArgs, WMSSpeechRecognitionHypothesis, WMSSpeechContinuousRecognitionCompletedEventArgs, WMSSpeechContinuousRecognitionResultGeneratedEventArgs;
@protocol WMSISpeechRecognitionCompilationResult, WMSISpeechRecognizerTimeouts, WMSISpeechRecognizerUIOptions, WMSISpeechRecognitionResult, WMSISpeechRecognitionConstraint, WMSISpeechRecognitionResult2, WMSISpeechRecognitionSemanticInterpretation, WMSISpeechRecognitionTopicConstraint, WMSISpeechRecognitionTopicConstraintFactory, WMSISpeechRecognitionListConstraint, WMSISpeechRecognitionListConstraintFactory, WMSISpeechRecognitionGrammarFileConstraint, WMSISpeechRecognitionGrammarFileConstraintFactory, WMSISpeechRecognitionVoiceCommandDefinitionConstraint, WMSISpeechRecognitionQualityDegradingEventArgs, WMSISpeechRecognizerStateChangedEventArgs, WMSISpeechRecognizer, WMSISpeechRecognizerFactory, WMSISpeechRecognizerStatics, WMSISpeechRecognizerStatics2, WMSISpeechRecognizer2, WMSISpeechRecognitionHypothesis, WMSISpeechRecognitionHypothesisGeneratedEventArgs, WMSISpeechContinuousRecognitionSession, WMSISpeechContinuousRecognitionCompletedEventArgs, WMSISpeechContinuousRecognitionResultGeneratedEventArgs;

// Windows.Media.SpeechRecognition.SpeechRecognitionConstraintProbability
enum _WMSSpeechRecognitionConstraintProbability {
    WMSSpeechRecognitionConstraintProbabilityDefault = 0,
    WMSSpeechRecognitionConstraintProbabilityMin = 1,
    WMSSpeechRecognitionConstraintProbabilityMax = 2,
};
typedef unsigned WMSSpeechRecognitionConstraintProbability;

// Windows.Media.SpeechRecognition.SpeechRecognitionConfidence
enum _WMSSpeechRecognitionConfidence {
    WMSSpeechRecognitionConfidenceHigh = 0,
    WMSSpeechRecognitionConfidenceMedium = 1,
    WMSSpeechRecognitionConfidenceLow = 2,
    WMSSpeechRecognitionConfidenceRejected = 3,
};
typedef unsigned WMSSpeechRecognitionConfidence;

// Windows.Media.SpeechRecognition.SpeechRecognitionScenario
enum _WMSSpeechRecognitionScenario {
    WMSSpeechRecognitionScenarioWebSearch = 0,
    WMSSpeechRecognitionScenarioDictation = 1,
    WMSSpeechRecognitionScenarioFormFilling = 2,
};
typedef unsigned WMSSpeechRecognitionScenario;

// Windows.Media.SpeechRecognition.SpeechRecognitionConstraintType
enum _WMSSpeechRecognitionConstraintType {
    WMSSpeechRecognitionConstraintTypeTopic = 0,
    WMSSpeechRecognitionConstraintTypeList = 1,
    WMSSpeechRecognitionConstraintTypeGrammar = 2,
    WMSSpeechRecognitionConstraintTypeVoiceCommandDefinition = 3,
};
typedef unsigned WMSSpeechRecognitionConstraintType;

// Windows.Media.SpeechRecognition.SpeechRecognizerState
enum _WMSSpeechRecognizerState {
    WMSSpeechRecognizerStateIdle = 0,
    WMSSpeechRecognizerStateCapturing = 1,
    WMSSpeechRecognizerStateProcessing = 2,
    WMSSpeechRecognizerStateSoundStarted = 3,
    WMSSpeechRecognizerStateSoundEnded = 4,
    WMSSpeechRecognizerStateSpeechDetected = 5,
    WMSSpeechRecognizerStatePaused = 6,
};
typedef unsigned WMSSpeechRecognizerState;

// Windows.Media.SpeechRecognition.SpeechRecognitionAudioProblem
enum _WMSSpeechRecognitionAudioProblem {
    WMSSpeechRecognitionAudioProblemNone = 0,
    WMSSpeechRecognitionAudioProblemTooNoisy = 1,
    WMSSpeechRecognitionAudioProblemNoSignal = 2,
    WMSSpeechRecognitionAudioProblemTooLoud = 3,
    WMSSpeechRecognitionAudioProblemTooQuiet = 4,
    WMSSpeechRecognitionAudioProblemTooFast = 5,
    WMSSpeechRecognitionAudioProblemTooSlow = 6,
};
typedef unsigned WMSSpeechRecognitionAudioProblem;

// Windows.Media.SpeechRecognition.SpeechRecognitionResultStatus
enum _WMSSpeechRecognitionResultStatus {
    WMSSpeechRecognitionResultStatusSuccess = 0,
    WMSSpeechRecognitionResultStatusTopicLanguageNotSupported = 1,
    WMSSpeechRecognitionResultStatusGrammarLanguageMismatch = 2,
    WMSSpeechRecognitionResultStatusGrammarCompilationFailure = 3,
    WMSSpeechRecognitionResultStatusAudioQualityFailure = 4,
    WMSSpeechRecognitionResultStatusUserCanceled = 5,
    WMSSpeechRecognitionResultStatusUnknown = 6,
    WMSSpeechRecognitionResultStatusTimeoutExceeded = 7,
    WMSSpeechRecognitionResultStatusPauseLimitExceeded = 8,
    WMSSpeechRecognitionResultStatusNetworkFailure = 9,
    WMSSpeechRecognitionResultStatusMicrophoneUnavailable = 10,
};
typedef unsigned WMSSpeechRecognitionResultStatus;

// Windows.Media.SpeechRecognition.SpeechContinuousRecognitionMode
enum _WMSSpeechContinuousRecognitionMode {
    WMSSpeechContinuousRecognitionModeDefault = 0,
    WMSSpeechContinuousRecognitionModePauseOnRecognition = 1,
};
typedef unsigned WMSSpeechContinuousRecognitionMode;

#include "WindowsGlobalization.h"
#include "WindowsFoundation.h"
#include "WindowsStorage.h"

#import <Foundation/Foundation.h>

// Windows.Media.SpeechRecognition.ISpeechRecognitionConstraint
#ifndef __WMSISpeechRecognitionConstraint_DEFINED__
#define __WMSISpeechRecognitionConstraint_DEFINED__

@protocol WMSISpeechRecognitionConstraint
@property BOOL isEnabled;
@property WMSSpeechRecognitionConstraintProbability probability;
@property (retain) NSString * tag;
@property (readonly) WMSSpeechRecognitionConstraintType type;
@end

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSISpeechRecognitionConstraint : RTObject <WMSISpeechRecognitionConstraint>
@end

#endif // __WMSISpeechRecognitionConstraint_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionSemanticInterpretation
#ifndef __WMSSpeechRecognitionSemanticInterpretation_DEFINED__
#define __WMSSpeechRecognitionSemanticInterpretation_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionSemanticInterpretation : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSDictionary* /* NSString *, NSArray* < NSString * > */ properties;
@end

#endif // __WMSSpeechRecognitionSemanticInterpretation_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionResult
#ifndef __WMSSpeechRecognitionResult_DEFINED__
#define __WMSSpeechRecognitionResult_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionConfidence confidence;
@property (readonly) RTObject<WMSISpeechRecognitionConstraint>* constraint;
@property (readonly) double rawConfidence;
@property (readonly) NSArray* /* NSString * */ rulePath;
@property (readonly) WMSSpeechRecognitionSemanticInterpretation* semanticInterpretation;
@property (readonly) WMSSpeechRecognitionResultStatus status;
@property (readonly) NSString * text;
@property (readonly) WFTimeSpan* phraseDuration;
@property (readonly) WFDateTime* phraseStartTime;
- (NSArray* /* WMSSpeechRecognitionResult* */)getAlternates:(unsigned int)maxAlternates;
@end

#endif // __WMSSpeechRecognitionResult_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionTopicConstraint
#ifndef __WMSSpeechRecognitionTopicConstraint_DEFINED__
#define __WMSSpeechRecognitionTopicConstraint_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionTopicConstraint : RTObject <WMSISpeechRecognitionConstraint>
+ (WMSSpeechRecognitionTopicConstraint*)make:(WMSSpeechRecognitionScenario)scenario topicHint:(NSString *)topicHint ACTIVATOR;
+ (WMSSpeechRecognitionTopicConstraint*)makeWithTag:(WMSSpeechRecognitionScenario)scenario topicHint:(NSString *)topicHint tag:(NSString *)tag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * tag;
@property WMSSpeechRecognitionConstraintProbability probability;
@property BOOL isEnabled;
@property (readonly) WMSSpeechRecognitionConstraintType type;
@property (readonly) WMSSpeechRecognitionScenario scenario;
@property (readonly) NSString * topicHint;
@end

#endif // __WMSSpeechRecognitionTopicConstraint_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionListConstraint
#ifndef __WMSSpeechRecognitionListConstraint_DEFINED__
#define __WMSSpeechRecognitionListConstraint_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionListConstraint : RTObject <WMSISpeechRecognitionConstraint>
+ (WMSSpeechRecognitionListConstraint*)make:(id<NSFastEnumeration> /* NSString * */)commands ACTIVATOR;
+ (WMSSpeechRecognitionListConstraint*)makeWithTag:(id<NSFastEnumeration> /* NSString * */)commands tag:(NSString *)tag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * tag;
@property WMSSpeechRecognitionConstraintProbability probability;
@property BOOL isEnabled;
@property (readonly) WMSSpeechRecognitionConstraintType type;
@property (readonly) NSMutableArray* /* NSString * */ commands;
@end

#endif // __WMSSpeechRecognitionListConstraint_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionGrammarFileConstraint
#ifndef __WMSSpeechRecognitionGrammarFileConstraint_DEFINED__
#define __WMSSpeechRecognitionGrammarFileConstraint_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionGrammarFileConstraint : RTObject <WMSISpeechRecognitionConstraint>
+ (WMSSpeechRecognitionGrammarFileConstraint*)make:(WSStorageFile*)file ACTIVATOR;
+ (WMSSpeechRecognitionGrammarFileConstraint*)makeWithTag:(WSStorageFile*)file tag:(NSString *)tag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * tag;
@property WMSSpeechRecognitionConstraintProbability probability;
@property BOOL isEnabled;
@property (readonly) WMSSpeechRecognitionConstraintType type;
@property (readonly) WSStorageFile* grammarFile;
@end

#endif // __WMSSpeechRecognitionGrammarFileConstraint_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognizerTimeouts
#ifndef __WMSSpeechRecognizerTimeouts_DEFINED__
#define __WMSSpeechRecognizerTimeouts_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognizerTimeouts : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFTimeSpan* initialSilenceTimeout;
@property (retain) WFTimeSpan* endSilenceTimeout;
@property (retain) WFTimeSpan* babbleTimeout;
@end

#endif // __WMSSpeechRecognizerTimeouts_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognizerUIOptions
#ifndef __WMSSpeechRecognizerUIOptions_DEFINED__
#define __WMSSpeechRecognizerUIOptions_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognizerUIOptions : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL showConfirmation;
@property BOOL isReadBackEnabled;
@property (retain) NSString * exampleText;
@property (retain) NSString * audiblePrompt;
@end

#endif // __WMSSpeechRecognizerUIOptions_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionCompilationResult
#ifndef __WMSSpeechRecognitionCompilationResult_DEFINED__
#define __WMSSpeechRecognitionCompilationResult_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionCompilationResult : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionResultStatus status;
@end

#endif // __WMSSpeechRecognitionCompilationResult_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognizer
#ifndef __WMSSpeechRecognizer_DEFINED__
#define __WMSSpeechRecognizer_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognizer : RTObject <WFIClosable>
+ (void)trySetSystemSpeechLanguageAsync:(WGLanguage*)speechLanguage success:(void (^)(BOOL))success failure:(void (^)(NSError*))failure;
+ (instancetype)make __attribute__ ((ns_returns_retained));
+ (WMSSpeechRecognizer*)make:(WGLanguage*)language ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* RTObject<WMSISpeechRecognitionConstraint>* */ constraints;
@property (readonly) WGLanguage* currentLanguage;
@property (readonly) WMSSpeechRecognizerTimeouts* timeouts;
@property (readonly) WMSSpeechRecognizerUIOptions* uIOptions;
@property (readonly) WMSSpeechContinuousRecognitionSession* continuousRecognitionSession;
@property (readonly) WMSSpeechRecognizerState state;
+ (NSArray* /* WGLanguage* */)supportedGrammarLanguages;
+ (NSArray* /* WGLanguage* */)supportedTopicLanguages;
+ (WGLanguage*)systemSpeechLanguage;
- (EventRegistrationToken)addRecognitionQualityDegradingEvent:(void(^)(WMSSpeechRecognizer*, WMSSpeechRecognitionQualityDegradingEventArgs*))del;
- (void)removeRecognitionQualityDegradingEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStateChangedEvent:(void(^)(WMSSpeechRecognizer*, WMSSpeechRecognizerStateChangedEventArgs*))del;
- (void)removeStateChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addHypothesisGeneratedEvent:(void(^)(WMSSpeechRecognizer*, WMSSpeechRecognitionHypothesisGeneratedEventArgs*))del;
- (void)removeHypothesisGeneratedEvent:(EventRegistrationToken)tok;
- (void)compileConstraintsAsyncWithSuccess:(void (^)(WMSSpeechRecognitionCompilationResult*))success failure:(void (^)(NSError*))failure;
- (void)recognizeAsyncWithSuccess:(void (^)(WMSSpeechRecognitionResult*))success failure:(void (^)(NSError*))failure;
- (void)recognizeWithUIAsyncWithSuccess:(void (^)(WMSSpeechRecognitionResult*))success failure:(void (^)(NSError*))failure;
- (void)close;
- (RTObject<WFIAsyncAction>*)stopRecognitionAsync;
@end

#endif // __WMSSpeechRecognizer_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionQualityDegradingEventArgs
#ifndef __WMSSpeechRecognitionQualityDegradingEventArgs_DEFINED__
#define __WMSSpeechRecognitionQualityDegradingEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionQualityDegradingEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionAudioProblem problem;
@end

#endif // __WMSSpeechRecognitionQualityDegradingEventArgs_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognizerStateChangedEventArgs
#ifndef __WMSSpeechRecognizerStateChangedEventArgs_DEFINED__
#define __WMSSpeechRecognizerStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognizerStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognizerState state;
@end

#endif // __WMSSpeechRecognizerStateChangedEventArgs_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionVoiceCommandDefinitionConstraint
#ifndef __WMSSpeechRecognitionVoiceCommandDefinitionConstraint_DEFINED__
#define __WMSSpeechRecognitionVoiceCommandDefinitionConstraint_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionVoiceCommandDefinitionConstraint : RTObject <WMSISpeechRecognitionConstraint>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * tag;
@property WMSSpeechRecognitionConstraintProbability probability;
@property BOOL isEnabled;
@property (readonly) WMSSpeechRecognitionConstraintType type;
@end

#endif // __WMSSpeechRecognitionVoiceCommandDefinitionConstraint_DEFINED__

// Windows.Media.SpeechRecognition.SpeechContinuousRecognitionSession
#ifndef __WMSSpeechContinuousRecognitionSession_DEFINED__
#define __WMSSpeechContinuousRecognitionSession_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechContinuousRecognitionSession : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) WFTimeSpan* autoStopSilenceTimeout;
- (EventRegistrationToken)addCompletedEvent:(void(^)(WMSSpeechContinuousRecognitionSession*, WMSSpeechContinuousRecognitionCompletedEventArgs*))del;
- (void)removeCompletedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addResultGeneratedEvent:(void(^)(WMSSpeechContinuousRecognitionSession*, WMSSpeechContinuousRecognitionResultGeneratedEventArgs*))del;
- (void)removeResultGeneratedEvent:(EventRegistrationToken)tok;
- (RTObject<WFIAsyncAction>*)startAsync;
- (RTObject<WFIAsyncAction>*)startWithModeAsync:(WMSSpeechContinuousRecognitionMode)mode;
- (RTObject<WFIAsyncAction>*)stopAsync;
- (RTObject<WFIAsyncAction>*)cancelAsync;
- (RTObject<WFIAsyncAction>*)pauseAsync;
- (void)resume;
@end

#endif // __WMSSpeechContinuousRecognitionSession_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionHypothesisGeneratedEventArgs
#ifndef __WMSSpeechRecognitionHypothesisGeneratedEventArgs_DEFINED__
#define __WMSSpeechRecognitionHypothesisGeneratedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionHypothesisGeneratedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionHypothesis* hypothesis;
@end

#endif // __WMSSpeechRecognitionHypothesisGeneratedEventArgs_DEFINED__

// Windows.Media.SpeechRecognition.SpeechRecognitionHypothesis
#ifndef __WMSSpeechRecognitionHypothesis_DEFINED__
#define __WMSSpeechRecognitionHypothesis_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechRecognitionHypothesis : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * text;
@end

#endif // __WMSSpeechRecognitionHypothesis_DEFINED__

// Windows.Media.SpeechRecognition.SpeechContinuousRecognitionCompletedEventArgs
#ifndef __WMSSpeechContinuousRecognitionCompletedEventArgs_DEFINED__
#define __WMSSpeechContinuousRecognitionCompletedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechContinuousRecognitionCompletedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionResultStatus status;
@end

#endif // __WMSSpeechContinuousRecognitionCompletedEventArgs_DEFINED__

// Windows.Media.SpeechRecognition.SpeechContinuousRecognitionResultGeneratedEventArgs
#ifndef __WMSSpeechContinuousRecognitionResultGeneratedEventArgs_DEFINED__
#define __WMSSpeechContinuousRecognitionResultGeneratedEventArgs_DEFINED__

OBJCUWPWINDOWSMEDIASPEECHRECOGNITIONEXPORT
@interface WMSSpeechContinuousRecognitionResultGeneratedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WMSSpeechRecognitionResult* result;
@end

#endif // __WMSSpeechContinuousRecognitionResultGeneratedEventArgs_DEFINED__

