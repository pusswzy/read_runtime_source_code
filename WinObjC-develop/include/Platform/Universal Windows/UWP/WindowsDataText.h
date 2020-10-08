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

// WindowsDataText.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDATATEXTEXPORT
#define OBJCUWPWINDOWSDATATEXTEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDataText.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDTSemanticTextQuery, WDTUnicodeCharacters, WDTAlternateWordForm, WDTWordSegment, WDTWordsSegmenter, WDTSelectableWordSegment, WDTSelectableWordsSegmenter, WDTTextPredictionGenerator, WDTTextConversionGenerator, WDTTextReverseConversionGenerator, WDTTextPhoneme;
@class WDTTextSegment;
@protocol WDTISemanticTextQueryFactory, WDTISemanticTextQuery, WDTIUnicodeCharactersStatics, WDTIAlternateWordForm, WDTISelectableWordSegment, WDTIWordSegment, WDTIWordsSegmenter, WDTIWordsSegmenterFactory, WDTISelectableWordsSegmenter, WDTISelectableWordsSegmenterFactory, WDTITextPredictionGenerator, WDTITextPredictionGeneratorFactory, WDTITextConversionGenerator, WDTITextConversionGeneratorFactory, WDTITextReverseConversionGenerator, WDTITextReverseConversionGeneratorFactory, WDTITextPhoneme, WDTITextReverseConversionGenerator2;

// Windows.Data.Text.UnicodeGeneralCategory
enum _WDTUnicodeGeneralCategory {
    WDTUnicodeGeneralCategoryUppercaseLetter = 0,
    WDTUnicodeGeneralCategoryLowercaseLetter = 1,
    WDTUnicodeGeneralCategoryTitlecaseLetter = 2,
    WDTUnicodeGeneralCategoryModifierLetter = 3,
    WDTUnicodeGeneralCategoryOtherLetter = 4,
    WDTUnicodeGeneralCategoryNonspacingMark = 5,
    WDTUnicodeGeneralCategorySpacingCombiningMark = 6,
    WDTUnicodeGeneralCategoryEnclosingMark = 7,
    WDTUnicodeGeneralCategoryDecimalDigitNumber = 8,
    WDTUnicodeGeneralCategoryLetterNumber = 9,
    WDTUnicodeGeneralCategoryOtherNumber = 10,
    WDTUnicodeGeneralCategorySpaceSeparator = 11,
    WDTUnicodeGeneralCategoryLineSeparator = 12,
    WDTUnicodeGeneralCategoryParagraphSeparator = 13,
    WDTUnicodeGeneralCategoryControl = 14,
    WDTUnicodeGeneralCategoryFormat = 15,
    WDTUnicodeGeneralCategorySurrogate = 16,
    WDTUnicodeGeneralCategoryPrivateUse = 17,
    WDTUnicodeGeneralCategoryConnectorPunctuation = 18,
    WDTUnicodeGeneralCategoryDashPunctuation = 19,
    WDTUnicodeGeneralCategoryOpenPunctuation = 20,
    WDTUnicodeGeneralCategoryClosePunctuation = 21,
    WDTUnicodeGeneralCategoryInitialQuotePunctuation = 22,
    WDTUnicodeGeneralCategoryFinalQuotePunctuation = 23,
    WDTUnicodeGeneralCategoryOtherPunctuation = 24,
    WDTUnicodeGeneralCategoryMathSymbol = 25,
    WDTUnicodeGeneralCategoryCurrencySymbol = 26,
    WDTUnicodeGeneralCategoryModifierSymbol = 27,
    WDTUnicodeGeneralCategoryOtherSymbol = 28,
    WDTUnicodeGeneralCategoryNotAssigned = 29,
};
typedef unsigned WDTUnicodeGeneralCategory;

// Windows.Data.Text.UnicodeNumericType
enum _WDTUnicodeNumericType {
    WDTUnicodeNumericTypeNone = 0,
    WDTUnicodeNumericTypeDecimal = 1,
    WDTUnicodeNumericTypeDigit = 2,
    WDTUnicodeNumericTypeNumeric = 3,
};
typedef unsigned WDTUnicodeNumericType;

// Windows.Data.Text.AlternateNormalizationFormat
enum _WDTAlternateNormalizationFormat {
    WDTAlternateNormalizationFormatNotNormalized = 0,
    WDTAlternateNormalizationFormatNumber = 1,
    WDTAlternateNormalizationFormatCurrency = 3,
    WDTAlternateNormalizationFormatDate = 4,
    WDTAlternateNormalizationFormatTime = 5,
};
typedef unsigned WDTAlternateNormalizationFormat;

// Windows.Data.Text.SelectableWordSegmentsTokenizingHandler
#ifndef __WDTSelectableWordSegmentsTokenizingHandler__DEFINED
#define __WDTSelectableWordSegmentsTokenizingHandler__DEFINED
typedef void(^WDTSelectableWordSegmentsTokenizingHandler)(id<NSFastEnumeration> /* WDTSelectableWordSegment* */ precedingWords, id<NSFastEnumeration> /* WDTSelectableWordSegment* */ words);
#endif // __WDTSelectableWordSegmentsTokenizingHandler__DEFINED

// Windows.Data.Text.WordSegmentsTokenizingHandler
#ifndef __WDTWordSegmentsTokenizingHandler__DEFINED
#define __WDTWordSegmentsTokenizingHandler__DEFINED
typedef void(^WDTWordSegmentsTokenizingHandler)(id<NSFastEnumeration> /* WDTWordSegment* */ precedingWords, id<NSFastEnumeration> /* WDTWordSegment* */ words);
#endif // __WDTWordSegmentsTokenizingHandler__DEFINED


#import <Foundation/Foundation.h>

// [struct] Windows.Data.Text.TextSegment
OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTTextSegment : NSObject
+ (instancetype)new;
@property unsigned int startPosition;
@property unsigned int length;
@end

// Windows.Data.Text.WordSegmentsTokenizingHandler
#ifndef __WDTWordSegmentsTokenizingHandler__DEFINED
#define __WDTWordSegmentsTokenizingHandler__DEFINED
typedef void(^WDTWordSegmentsTokenizingHandler)(id<NSFastEnumeration> /* WDTWordSegment* */ precedingWords, id<NSFastEnumeration> /* WDTWordSegment* */ words);
#endif // __WDTWordSegmentsTokenizingHandler__DEFINED

// Windows.Data.Text.SelectableWordSegmentsTokenizingHandler
#ifndef __WDTSelectableWordSegmentsTokenizingHandler__DEFINED
#define __WDTSelectableWordSegmentsTokenizingHandler__DEFINED
typedef void(^WDTSelectableWordSegmentsTokenizingHandler)(id<NSFastEnumeration> /* WDTSelectableWordSegment* */ precedingWords, id<NSFastEnumeration> /* WDTSelectableWordSegment* */ words);
#endif // __WDTSelectableWordSegmentsTokenizingHandler__DEFINED

// Windows.Data.Text.SemanticTextQuery
#ifndef __WDTSemanticTextQuery_DEFINED__
#define __WDTSemanticTextQuery_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTSemanticTextQuery : RTObject
+ (WDTSemanticTextQuery*)make:(NSString *)aqsFilter ACTIVATOR;
+ (WDTSemanticTextQuery*)makeWithLanguage:(NSString *)aqsFilter filterLanguage:(NSString *)filterLanguage ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (NSArray* /* WDTTextSegment* */)find:(NSString *)content;
- (NSArray* /* WDTTextSegment* */)findInProperty:(NSString *)propertyContent propertyName:(NSString *)propertyName;
@end

#endif // __WDTSemanticTextQuery_DEFINED__

// Windows.Data.Text.UnicodeCharacters
#ifndef __WDTUnicodeCharacters_DEFINED__
#define __WDTUnicodeCharacters_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTUnicodeCharacters : RTObject
+ (unsigned int)getCodepointFromSurrogatePair:(unsigned int)highSurrogate lowSurrogate:(unsigned int)lowSurrogate;
+ (void)getSurrogatePairFromCodepoint:(unsigned int)codepoint highSurrogate:(wchar_t*)highSurrogate lowSurrogate:(wchar_t*)lowSurrogate;
+ (BOOL)isHighSurrogate:(unsigned int)codepoint;
+ (BOOL)isLowSurrogate:(unsigned int)codepoint;
+ (BOOL)isSupplementary:(unsigned int)codepoint;
+ (BOOL)isNoncharacter:(unsigned int)codepoint;
+ (BOOL)isWhitespace:(unsigned int)codepoint;
+ (BOOL)isAlphabetic:(unsigned int)codepoint;
+ (BOOL)isCased:(unsigned int)codepoint;
+ (BOOL)isUppercase:(unsigned int)codepoint;
+ (BOOL)isLowercase:(unsigned int)codepoint;
+ (BOOL)isIdStart:(unsigned int)codepoint;
+ (BOOL)isIdContinue:(unsigned int)codepoint;
+ (BOOL)isGraphemeBase:(unsigned int)codepoint;
+ (BOOL)isGraphemeExtend:(unsigned int)codepoint;
+ (WDTUnicodeNumericType)getNumericType:(unsigned int)codepoint;
+ (WDTUnicodeGeneralCategory)getGeneralCategory:(unsigned int)codepoint;
@end

#endif // __WDTUnicodeCharacters_DEFINED__

// Windows.Data.Text.AlternateWordForm
#ifndef __WDTAlternateWordForm_DEFINED__
#define __WDTAlternateWordForm_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTAlternateWordForm : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * alternateText;
@property (readonly) WDTAlternateNormalizationFormat normalizationFormat;
@property (readonly) WDTTextSegment* sourceTextSegment;
@end

#endif // __WDTAlternateWordForm_DEFINED__

// Windows.Data.Text.WordSegment
#ifndef __WDTWordSegment_DEFINED__
#define __WDTWordSegment_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTWordSegment : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WDTAlternateWordForm* */ alternateForms;
@property (readonly) WDTTextSegment* sourceTextSegment;
@property (readonly) NSString * text;
@end

#endif // __WDTWordSegment_DEFINED__

// Windows.Data.Text.WordsSegmenter
#ifndef __WDTWordsSegmenter_DEFINED__
#define __WDTWordsSegmenter_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTWordsSegmenter : RTObject
+ (WDTWordsSegmenter*)makeWithLanguage:(NSString *)language ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * resolvedLanguage;
- (WDTWordSegment*)getTokenAt:(NSString *)text startIndex:(unsigned int)startIndex;
- (NSArray* /* WDTWordSegment* */)getTokens:(NSString *)text;
- (void)tokenize:(NSString *)text startIndex:(unsigned int)startIndex handler:(WDTWordSegmentsTokenizingHandler)handler;
@end

#endif // __WDTWordsSegmenter_DEFINED__

// Windows.Data.Text.SelectableWordSegment
#ifndef __WDTSelectableWordSegment_DEFINED__
#define __WDTSelectableWordSegment_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTSelectableWordSegment : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDTTextSegment* sourceTextSegment;
@property (readonly) NSString * text;
@end

#endif // __WDTSelectableWordSegment_DEFINED__

// Windows.Data.Text.SelectableWordsSegmenter
#ifndef __WDTSelectableWordsSegmenter_DEFINED__
#define __WDTSelectableWordsSegmenter_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTSelectableWordsSegmenter : RTObject
+ (WDTSelectableWordsSegmenter*)makeWithLanguage:(NSString *)language ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * resolvedLanguage;
- (WDTSelectableWordSegment*)getTokenAt:(NSString *)text startIndex:(unsigned int)startIndex;
- (NSArray* /* WDTSelectableWordSegment* */)getTokens:(NSString *)text;
- (void)tokenize:(NSString *)text startIndex:(unsigned int)startIndex handler:(WDTSelectableWordSegmentsTokenizingHandler)handler;
@end

#endif // __WDTSelectableWordsSegmenter_DEFINED__

// Windows.Data.Text.TextPredictionGenerator
#ifndef __WDTTextPredictionGenerator_DEFINED__
#define __WDTTextPredictionGenerator_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTTextPredictionGenerator : RTObject
+ (WDTTextPredictionGenerator*)make:(NSString *)languageTag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL languageAvailableButNotInstalled;
@property (readonly) NSString * resolvedLanguage;
- (void)getCandidatesAsync:(NSString *)input success:(void (^)(NSArray* /* NSString * */))success failure:(void (^)(NSError*))failure;
- (void)getCandidatesWithMaxCountAsync:(NSString *)input maxCandidates:(unsigned int)maxCandidates success:(void (^)(NSArray* /* NSString * */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDTTextPredictionGenerator_DEFINED__

// Windows.Data.Text.TextConversionGenerator
#ifndef __WDTTextConversionGenerator_DEFINED__
#define __WDTTextConversionGenerator_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTTextConversionGenerator : RTObject
+ (WDTTextConversionGenerator*)make:(NSString *)languageTag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL languageAvailableButNotInstalled;
@property (readonly) NSString * resolvedLanguage;
- (void)getCandidatesAsync:(NSString *)input success:(void (^)(NSArray* /* NSString * */))success failure:(void (^)(NSError*))failure;
- (void)getCandidatesWithMaxCountAsync:(NSString *)input maxCandidates:(unsigned int)maxCandidates success:(void (^)(NSArray* /* NSString * */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDTTextConversionGenerator_DEFINED__

// Windows.Data.Text.TextReverseConversionGenerator
#ifndef __WDTTextReverseConversionGenerator_DEFINED__
#define __WDTTextReverseConversionGenerator_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTTextReverseConversionGenerator : RTObject
+ (WDTTextReverseConversionGenerator*)make:(NSString *)languageTag ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) BOOL languageAvailableButNotInstalled;
@property (readonly) NSString * resolvedLanguage;
- (void)convertBackAsync:(NSString *)input success:(void (^)(NSString *))success failure:(void (^)(NSError*))failure;
- (void)getPhonemesAsync:(NSString *)input success:(void (^)(NSArray* /* WDTTextPhoneme* */))success failure:(void (^)(NSError*))failure;
@end

#endif // __WDTTextReverseConversionGenerator_DEFINED__

// Windows.Data.Text.TextPhoneme
#ifndef __WDTTextPhoneme_DEFINED__
#define __WDTTextPhoneme_DEFINED__

OBJCUWPWINDOWSDATATEXTEXPORT
@interface WDTTextPhoneme : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * displayText;
@property (readonly) NSString * readingText;
@end

#endif // __WDTTextPhoneme_DEFINED__

