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

// WindowsWebHttpHeaders.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
#define OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsConsolidatedNamespace.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WWHHHttpContentHeaderCollection, WWHHHttpRequestHeaderCollection, WWHHHttpResponseHeaderCollection, WWHHHttpContentDispositionHeaderValue, WWHHHttpContentCodingHeaderValueCollection, WWHHHttpLanguageHeaderValueCollection, WWHHHttpContentRangeHeaderValue, WWHHHttpMediaTypeHeaderValue, WWHHHttpMediaTypeWithQualityHeaderValueCollection, WWHHHttpContentCodingWithQualityHeaderValueCollection, WWHHHttpLanguageRangeWithQualityHeaderValueCollection, WWHHHttpCredentialsHeaderValue, WWHHHttpCacheDirectiveHeaderValueCollection, WWHHHttpConnectionOptionHeaderValueCollection, WWHHHttpCookiePairHeaderValueCollection, WWHHHttpExpectationHeaderValueCollection, WWHHHttpTransferCodingHeaderValueCollection, WWHHHttpProductInfoHeaderValueCollection, WWHHHttpMethodHeaderValueCollection, WWHHHttpChallengeHeaderValueCollection, WWHHHttpDateOrDeltaHeaderValue, WWHHHttpNameValueHeaderValue, WWHHHttpChallengeHeaderValue, WWHHHttpConnectionOptionHeaderValue, WWHHHttpContentCodingHeaderValue, WWHHHttpCookiePairHeaderValue, WWHHHttpExpectationHeaderValue, WWHHHttpLanguageRangeWithQualityHeaderValue, WWHHHttpMediaTypeWithQualityHeaderValue, WWHHHttpProductHeaderValue, WWHHHttpProductInfoHeaderValue, WWHHHttpContentCodingWithQualityHeaderValue, WWHHHttpTransferCodingHeaderValue;
@protocol WWHHIHttpContentHeaderCollection, WWHHIHttpRequestHeaderCollection, WWHHIHttpResponseHeaderCollection, WWHHIHttpCacheDirectiveHeaderValueCollection, WWHHIHttpChallengeHeaderValueStatics, WWHHIHttpChallengeHeaderValueFactory, WWHHIHttpChallengeHeaderValue, WWHHIHttpChallengeHeaderValueCollection, WWHHIHttpCredentialsHeaderValueStatics, WWHHIHttpCredentialsHeaderValueFactory, WWHHIHttpCredentialsHeaderValue, WWHHIHttpConnectionOptionHeaderValueStatics, WWHHIHttpConnectionOptionHeaderValueFactory, WWHHIHttpConnectionOptionHeaderValue, WWHHIHttpConnectionOptionHeaderValueCollection, WWHHIHttpContentCodingHeaderValueStatics, WWHHIHttpContentCodingHeaderValueFactory, WWHHIHttpContentCodingHeaderValue, WWHHIHttpContentCodingHeaderValueCollection, WWHHIHttpContentDispositionHeaderValueStatics, WWHHIHttpContentDispositionHeaderValueFactory, WWHHIHttpContentDispositionHeaderValue, WWHHIHttpContentRangeHeaderValueStatics, WWHHIHttpContentRangeHeaderValueFactory, WWHHIHttpContentRangeHeaderValue, WWHHIHttpCookiePairHeaderValueStatics, WWHHIHttpCookiePairHeaderValueFactory, WWHHIHttpCookiePairHeaderValue, WWHHIHttpCookiePairHeaderValueCollection, WWHHIHttpDateOrDeltaHeaderValueStatics, WWHHIHttpDateOrDeltaHeaderValue, WWHHIHttpExpectationHeaderValueStatics, WWHHIHttpExpectationHeaderValueFactory, WWHHIHttpExpectationHeaderValue, WWHHIHttpExpectationHeaderValueCollection, WWHHIHttpLanguageHeaderValueCollection, WWHHIHttpLanguageRangeWithQualityHeaderValueStatics, WWHHIHttpLanguageRangeWithQualityHeaderValueFactory, WWHHIHttpLanguageRangeWithQualityHeaderValue, WWHHIHttpLanguageRangeWithQualityHeaderValueCollection, WWHHIHttpMediaTypeHeaderValueStatics, WWHHIHttpMediaTypeHeaderValueFactory, WWHHIHttpMediaTypeHeaderValue, WWHHIHttpMediaTypeWithQualityHeaderValueStatics, WWHHIHttpMediaTypeWithQualityHeaderValueFactory, WWHHIHttpMediaTypeWithQualityHeaderValue, WWHHIHttpMediaTypeWithQualityHeaderValueCollection, WWHHIHttpMethodHeaderValueCollection, WWHHIHttpNameValueHeaderValueStatics, WWHHIHttpNameValueHeaderValueFactory, WWHHIHttpNameValueHeaderValue, WWHHIHttpProductHeaderValueStatics, WWHHIHttpProductHeaderValueFactory, WWHHIHttpProductHeaderValue, WWHHIHttpProductInfoHeaderValueStatics, WWHHIHttpProductInfoHeaderValueFactory, WWHHIHttpProductInfoHeaderValue, WWHHIHttpProductInfoHeaderValueCollection, WWHHIHttpContentCodingWithQualityHeaderValueStatics, WWHHIHttpContentCodingWithQualityHeaderValueFactory, WWHHIHttpContentCodingWithQualityHeaderValue, WWHHIHttpContentCodingWithQualityHeaderValueCollection, WWHHIHttpTransferCodingHeaderValueStatics, WWHHIHttpTransferCodingHeaderValueFactory, WWHHIHttpTransferCodingHeaderValue, WWHHIHttpTransferCodingHeaderValueCollection;

#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"
#include "WindowsWebHttp.h"
#include "WindowsNetworking.h"
#include "WindowsGlobalization.h"

#import <Foundation/Foundation.h>

// Windows.Foundation.IStringable
#ifndef __WFIStringable_DEFINED__
#define __WFIStringable_DEFINED__

@protocol WFIStringable
- (NSString *)toString;
@end

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WFIStringable : RTObject <WFIStringable>
@end

#endif // __WFIStringable_DEFINED__

// Windows.Web.Http.Headers.HttpContentHeaderCollection
#ifndef __WWHHHttpContentHeaderCollection_DEFINED__
#define __WWHHHttpContentHeaderCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentHeaderCollection : RTObject <WFIStringable>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
@property (retain) id /* uint64_t */ contentLength;
@property (retain) RTObject<WSSIBuffer>* contentMD5;
@property (retain) WFUri* contentLocation;
@property (retain) WWHHHttpContentDispositionHeaderValue* contentDisposition;
@property (retain) id /* WFDateTime* */ lastModified;
@property (retain) id /* WFDateTime* */ expires;
@property (retain) WWHHHttpMediaTypeHeaderValue* contentType;
@property (retain) WWHHHttpContentRangeHeaderValue* contentRange;
@property (readonly) WWHHHttpContentCodingHeaderValueCollection* contentEncoding;
@property (readonly) WWHHHttpLanguageHeaderValueCollection* contentLanguage;
- (id)objectForKey: (id)key;
- (NSArray*)allKeys;
- (NSArray*)allKeysForObject: (id)obj;
- (NSArray*)allValues;
- (id)keyEnumerator;
- (unsigned int)count;

-(void)setObject: (id)obj forKey: (id)key;
-(void)setObject:(id)object forKeyedSubscript:(id)key;
-(void)removeObjectForKey: (id)key;
-(void)removeAllObjects;
-(void)removeObjectsForKeys:(NSArray*)keys;
-(void)addEntriesFromDictionary:(NSDictionary*)otherDict;
-(void)addEntriesFromDictionaryNoReplace:(NSDictionary*)otherDict;
-(void)setDictionary: (NSDictionary*)dict;
- (void)append:(NSString *)name value:(NSString *)value;
- (BOOL)tryAppendWithoutValidation:(NSString *)name value:(NSString *)value;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentHeaderCollection_DEFINED__

// Windows.Web.Http.Headers.HttpRequestHeaderCollection
#ifndef __WWHHHttpRequestHeaderCollection_DEFINED__
#define __WWHHHttpRequestHeaderCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpRequestHeaderCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
@property (retain) WWHHHttpCredentialsHeaderValue* authorization;
@property (retain) WWHHHttpCredentialsHeaderValue* proxyAuthorization;
@property (retain) NSString * from;
@property (retain) WFUri* referer;
@property (retain) id /* WFDateTime* */ ifUnmodifiedSince;
@property (retain) id /* WFDateTime* */ date;
@property (retain) WNHostName* host;
@property (retain) id /* unsigned int */ maxForwards;
@property (retain) id /* WFDateTime* */ ifModifiedSince;
@property (readonly) WWHHHttpCookiePairHeaderValueCollection* cookie;
@property (readonly) WWHHHttpMediaTypeWithQualityHeaderValueCollection* accept;
@property (readonly) WWHHHttpContentCodingWithQualityHeaderValueCollection* acceptEncoding;
@property (readonly) WWHHHttpLanguageRangeWithQualityHeaderValueCollection* acceptLanguage;
@property (readonly) WWHHHttpCacheDirectiveHeaderValueCollection* cacheControl;
@property (readonly) WWHHHttpConnectionOptionHeaderValueCollection* connection;
@property (readonly) WWHHHttpTransferCodingHeaderValueCollection* transferEncoding;
@property (readonly) WWHHHttpProductInfoHeaderValueCollection* userAgent;
@property (readonly) WWHHHttpExpectationHeaderValueCollection* expect;
- (id)objectForKey: (id)key;
- (NSArray*)allKeys;
- (NSArray*)allKeysForObject: (id)obj;
- (NSArray*)allValues;
- (id)keyEnumerator;
- (unsigned int)count;

-(void)setObject: (id)obj forKey: (id)key;
-(void)setObject:(id)object forKeyedSubscript:(id)key;
-(void)removeObjectForKey: (id)key;
-(void)removeAllObjects;
-(void)removeObjectsForKeys:(NSArray*)keys;
-(void)addEntriesFromDictionary:(NSDictionary*)otherDict;
-(void)addEntriesFromDictionaryNoReplace:(NSDictionary*)otherDict;
-(void)setDictionary: (NSDictionary*)dict;
- (void)append:(NSString *)name value:(NSString *)value;
- (BOOL)tryAppendWithoutValidation:(NSString *)name value:(NSString *)value;
- (NSString *)toString;
@end

#endif // __WWHHHttpRequestHeaderCollection_DEFINED__

// Windows.Web.Http.Headers.HttpResponseHeaderCollection
#ifndef __WWHHHttpResponseHeaderCollection_DEFINED__
#define __WWHHHttpResponseHeaderCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpResponseHeaderCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
@property (retain) id /* WFDateTime* */ date;
@property (retain) WFUri* location;
@property (retain) id /* WFTimeSpan* */ age;
@property (retain) WWHHHttpDateOrDeltaHeaderValue* retryAfter;
@property (readonly) WWHHHttpMethodHeaderValueCollection* allow;
@property (readonly) WWHHHttpCacheDirectiveHeaderValueCollection* cacheControl;
@property (readonly) WWHHHttpConnectionOptionHeaderValueCollection* connection;
@property (readonly) WWHHHttpChallengeHeaderValueCollection* proxyAuthenticate;
@property (readonly) WWHHHttpTransferCodingHeaderValueCollection* transferEncoding;
@property (readonly) WWHHHttpChallengeHeaderValueCollection* wwwAuthenticate;
- (id)objectForKey: (id)key;
- (NSArray*)allKeys;
- (NSArray*)allKeysForObject: (id)obj;
- (NSArray*)allValues;
- (id)keyEnumerator;
- (unsigned int)count;

-(void)setObject: (id)obj forKey: (id)key;
-(void)setObject:(id)object forKeyedSubscript:(id)key;
-(void)removeObjectForKey: (id)key;
-(void)removeAllObjects;
-(void)removeObjectsForKeys:(NSArray*)keys;
-(void)addEntriesFromDictionary:(NSDictionary*)otherDict;
-(void)addEntriesFromDictionaryNoReplace:(NSDictionary*)otherDict;
-(void)setDictionary: (NSDictionary*)dict;
- (void)append:(NSString *)name value:(NSString *)value;
- (BOOL)tryAppendWithoutValidation:(NSString *)name value:(NSString *)value;
- (NSString *)toString;
@end

#endif // __WWHHHttpResponseHeaderCollection_DEFINED__

// Windows.Web.Http.Headers.HttpContentDispositionHeaderValue
#ifndef __WWHHHttpContentDispositionHeaderValue_DEFINED__
#define __WWHHHttpContentDispositionHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentDispositionHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpContentDispositionHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input contentDispositionHeaderValue:(WWHHHttpContentDispositionHeaderValue**)contentDispositionHeaderValue;
+ (WWHHHttpContentDispositionHeaderValue*)make:(NSString *)dispositionType ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) id /* uint64_t */ size;
@property (retain) NSString * name;
@property (retain) NSString * fileNameStar;
@property (retain) NSString * fileName;
@property (retain) NSString * dispositionType;
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentDispositionHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpContentCodingHeaderValueCollection
#ifndef __WWHHHttpContentCodingHeaderValueCollection_DEFINED__
#define __WWHHHttpContentCodingHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentCodingHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentCodingHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpLanguageHeaderValueCollection
#ifndef __WWHHHttpLanguageHeaderValueCollection_DEFINED__
#define __WWHHHttpLanguageHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpLanguageHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpLanguageHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpContentRangeHeaderValue
#ifndef __WWHHHttpContentRangeHeaderValue_DEFINED__
#define __WWHHHttpContentRangeHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentRangeHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpContentRangeHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input contentRangeHeaderValue:(WWHHHttpContentRangeHeaderValue**)contentRangeHeaderValue;
+ (WWHHHttpContentRangeHeaderValue*)makeFromLength:(uint64_t)length ACTIVATOR;
+ (WWHHHttpContentRangeHeaderValue*)makeFromRange:(uint64_t)from to:(uint64_t)to ACTIVATOR;
+ (WWHHHttpContentRangeHeaderValue*)makeFromRangeWithLength:(uint64_t)from to:(uint64_t)to length:(uint64_t)length ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * unit;
@property (readonly) id /* uint64_t */ firstBytePosition;
@property (readonly) id /* uint64_t */ lastBytePosition;
@property (readonly) id /* uint64_t */ length;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentRangeHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpMediaTypeHeaderValue
#ifndef __WWHHHttpMediaTypeHeaderValue_DEFINED__
#define __WWHHHttpMediaTypeHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpMediaTypeHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpMediaTypeHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input mediaTypeHeaderValue:(WWHHHttpMediaTypeHeaderValue**)mediaTypeHeaderValue;
+ (WWHHHttpMediaTypeHeaderValue*)make:(NSString *)mediaType ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * mediaType;
@property (retain) NSString * charSet;
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
- (NSString *)toString;
@end

#endif // __WWHHHttpMediaTypeHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValueCollection
#ifndef __WWHHHttpMediaTypeWithQualityHeaderValueCollection_DEFINED__
#define __WWHHHttpMediaTypeWithQualityHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpMediaTypeWithQualityHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpMediaTypeWithQualityHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValueCollection
#ifndef __WWHHHttpContentCodingWithQualityHeaderValueCollection_DEFINED__
#define __WWHHHttpContentCodingWithQualityHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentCodingWithQualityHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentCodingWithQualityHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValueCollection
#ifndef __WWHHHttpLanguageRangeWithQualityHeaderValueCollection_DEFINED__
#define __WWHHHttpLanguageRangeWithQualityHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpLanguageRangeWithQualityHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpLanguageRangeWithQualityHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpCredentialsHeaderValue
#ifndef __WWHHHttpCredentialsHeaderValue_DEFINED__
#define __WWHHHttpCredentialsHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpCredentialsHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpCredentialsHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input credentialsHeaderValue:(WWHHHttpCredentialsHeaderValue**)credentialsHeaderValue;
+ (WWHHHttpCredentialsHeaderValue*)makeFromScheme:(NSString *)scheme ACTIVATOR;
+ (WWHHHttpCredentialsHeaderValue*)makeFromSchemeWithToken:(NSString *)scheme token:(NSString *)token ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
@property (readonly) NSString * scheme;
@property (readonly) NSString * token;
- (NSString *)toString;
@end

#endif // __WWHHHttpCredentialsHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpCacheDirectiveHeaderValueCollection
#ifndef __WWHHHttpCacheDirectiveHeaderValueCollection_DEFINED__
#define __WWHHHttpCacheDirectiveHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpCacheDirectiveHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
@property (retain) id /* WFTimeSpan* */ sharedMaxAge;
@property (retain) id /* WFTimeSpan* */ minFresh;
@property (retain) id /* WFTimeSpan* */ maxStale;
@property (retain) id /* WFTimeSpan* */ maxAge;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpCacheDirectiveHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpConnectionOptionHeaderValueCollection
#ifndef __WWHHHttpConnectionOptionHeaderValueCollection_DEFINED__
#define __WWHHHttpConnectionOptionHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpConnectionOptionHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpConnectionOptionHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpCookiePairHeaderValueCollection
#ifndef __WWHHHttpCookiePairHeaderValueCollection_DEFINED__
#define __WWHHHttpCookiePairHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpCookiePairHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpCookiePairHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpExpectationHeaderValueCollection
#ifndef __WWHHHttpExpectationHeaderValueCollection_DEFINED__
#define __WWHHHttpExpectationHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpExpectationHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpExpectationHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpTransferCodingHeaderValueCollection
#ifndef __WWHHHttpTransferCodingHeaderValueCollection_DEFINED__
#define __WWHHHttpTransferCodingHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpTransferCodingHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpTransferCodingHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpProductInfoHeaderValueCollection
#ifndef __WWHHHttpProductInfoHeaderValueCollection_DEFINED__
#define __WWHHHttpProductInfoHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpProductInfoHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpProductInfoHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpMethodHeaderValueCollection
#ifndef __WWHHHttpMethodHeaderValueCollection_DEFINED__
#define __WWHHHttpMethodHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpMethodHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpMethodHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpChallengeHeaderValueCollection
#ifndef __WWHHHttpChallengeHeaderValueCollection_DEFINED__
#define __WWHHHttpChallengeHeaderValueCollection_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpChallengeHeaderValueCollection : RTObject <WFIStringable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) unsigned int size;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned)idx;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state
                                  objects:(id __unsafe_unretained [])buffer
                                    count:(NSUInteger)len;

- (void)insertObject: (id)obj atIndex: (NSUInteger)idx;
- (void)removeObjectAtIndex: (NSUInteger)idx;
- (void)replaceObjectAtIndex: (NSUInteger)idx withObject: (id)obj;
- (void)addObject: (id)obj;
- (void)removeLastObject;

- (void)parseAdd:(NSString *)input;
- (BOOL)tryParseAdd:(NSString *)input;
- (NSString *)toString;
@end

#endif // __WWHHHttpChallengeHeaderValueCollection_DEFINED__

// Windows.Web.Http.Headers.HttpDateOrDeltaHeaderValue
#ifndef __WWHHHttpDateOrDeltaHeaderValue_DEFINED__
#define __WWHHHttpDateOrDeltaHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpDateOrDeltaHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpDateOrDeltaHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input dateOrDeltaHeaderValue:(WWHHHttpDateOrDeltaHeaderValue**)dateOrDeltaHeaderValue;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* WFDateTime* */ date;
@property (readonly) id /* WFTimeSpan* */ delta;
- (NSString *)toString;
@end

#endif // __WWHHHttpDateOrDeltaHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpNameValueHeaderValue
#ifndef __WWHHHttpNameValueHeaderValue_DEFINED__
#define __WWHHHttpNameValueHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpNameValueHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpNameValueHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input nameValueHeaderValue:(WWHHHttpNameValueHeaderValue**)nameValueHeaderValue;
+ (WWHHHttpNameValueHeaderValue*)makeFromName:(NSString *)name ACTIVATOR;
+ (WWHHHttpNameValueHeaderValue*)makeFromNameWithValue:(NSString *)name value:(NSString *)value ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * value;
@property (readonly) NSString * name;
- (NSString *)toString;
@end

#endif // __WWHHHttpNameValueHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpChallengeHeaderValue
#ifndef __WWHHHttpChallengeHeaderValue_DEFINED__
#define __WWHHHttpChallengeHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpChallengeHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpChallengeHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input challengeHeaderValue:(WWHHHttpChallengeHeaderValue**)challengeHeaderValue;
+ (WWHHHttpChallengeHeaderValue*)makeFromScheme:(NSString *)scheme ACTIVATOR;
+ (WWHHHttpChallengeHeaderValue*)makeFromSchemeWithToken:(NSString *)scheme token:(NSString *)token ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
@property (readonly) NSString * scheme;
@property (readonly) NSString * token;
- (NSString *)toString;
@end

#endif // __WWHHHttpChallengeHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpConnectionOptionHeaderValue
#ifndef __WWHHHttpConnectionOptionHeaderValue_DEFINED__
#define __WWHHHttpConnectionOptionHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpConnectionOptionHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpConnectionOptionHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input connectionOptionHeaderValue:(WWHHHttpConnectionOptionHeaderValue**)connectionOptionHeaderValue;
+ (WWHHHttpConnectionOptionHeaderValue*)make:(NSString *)token ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * token;
- (NSString *)toString;
@end

#endif // __WWHHHttpConnectionOptionHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpContentCodingHeaderValue
#ifndef __WWHHHttpContentCodingHeaderValue_DEFINED__
#define __WWHHHttpContentCodingHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentCodingHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpContentCodingHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input contentCodingHeaderValue:(WWHHHttpContentCodingHeaderValue**)contentCodingHeaderValue;
+ (WWHHHttpContentCodingHeaderValue*)make:(NSString *)contentCoding ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * contentCoding;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentCodingHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpCookiePairHeaderValue
#ifndef __WWHHHttpCookiePairHeaderValue_DEFINED__
#define __WWHHHttpCookiePairHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpCookiePairHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpCookiePairHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input cookiePairHeaderValue:(WWHHHttpCookiePairHeaderValue**)cookiePairHeaderValue;
+ (WWHHHttpCookiePairHeaderValue*)makeFromName:(NSString *)name ACTIVATOR;
+ (WWHHHttpCookiePairHeaderValue*)makeFromNameWithValue:(NSString *)name value:(NSString *)value ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * value;
@property (readonly) NSString * name;
- (NSString *)toString;
@end

#endif // __WWHHHttpCookiePairHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpExpectationHeaderValue
#ifndef __WWHHHttpExpectationHeaderValue_DEFINED__
#define __WWHHHttpExpectationHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpExpectationHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpExpectationHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input expectationHeaderValue:(WWHHHttpExpectationHeaderValue**)expectationHeaderValue;
+ (WWHHHttpExpectationHeaderValue*)makeFromName:(NSString *)name ACTIVATOR;
+ (WWHHHttpExpectationHeaderValue*)makeFromNameWithValue:(NSString *)name value:(NSString *)value ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) NSString * value;
@property (readonly) NSString * name;
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
- (NSString *)toString;
@end

#endif // __WWHHHttpExpectationHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValue
#ifndef __WWHHHttpLanguageRangeWithQualityHeaderValue_DEFINED__
#define __WWHHHttpLanguageRangeWithQualityHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpLanguageRangeWithQualityHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpLanguageRangeWithQualityHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input languageRangeWithQualityHeaderValue:(WWHHHttpLanguageRangeWithQualityHeaderValue**)languageRangeWithQualityHeaderValue;
+ (WWHHHttpLanguageRangeWithQualityHeaderValue*)makeFromLanguageRange:(NSString *)languageRange ACTIVATOR;
+ (WWHHHttpLanguageRangeWithQualityHeaderValue*)makeFromLanguageRangeWithQuality:(NSString *)languageRange quality:(double)quality ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * languageRange;
@property (readonly) id /* double */ quality;
- (NSString *)toString;
@end

#endif // __WWHHHttpLanguageRangeWithQualityHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValue
#ifndef __WWHHHttpMediaTypeWithQualityHeaderValue_DEFINED__
#define __WWHHHttpMediaTypeWithQualityHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpMediaTypeWithQualityHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpMediaTypeWithQualityHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input mediaTypeWithQualityHeaderValue:(WWHHHttpMediaTypeWithQualityHeaderValue**)mediaTypeWithQualityHeaderValue;
+ (WWHHHttpMediaTypeWithQualityHeaderValue*)makeFromMediaType:(NSString *)mediaType ACTIVATOR;
+ (WWHHHttpMediaTypeWithQualityHeaderValue*)makeFromMediaTypeWithQuality:(NSString *)mediaType quality:(double)quality ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (retain) id /* double */ quality;
@property (retain) NSString * mediaType;
@property (retain) NSString * charSet;
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
- (NSString *)toString;
@end

#endif // __WWHHHttpMediaTypeWithQualityHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpProductHeaderValue
#ifndef __WWHHHttpProductHeaderValue_DEFINED__
#define __WWHHHttpProductHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpProductHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpProductHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input productHeaderValue:(WWHHHttpProductHeaderValue**)productHeaderValue;
+ (WWHHHttpProductHeaderValue*)makeFromName:(NSString *)productName ACTIVATOR;
+ (WWHHHttpProductHeaderValue*)makeFromNameWithVersion:(NSString *)productName productVersion:(NSString *)productVersion ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * name;
@property (readonly) NSString * Version;
- (NSString *)toString;
@end

#endif // __WWHHHttpProductHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpProductInfoHeaderValue
#ifndef __WWHHHttpProductInfoHeaderValue_DEFINED__
#define __WWHHHttpProductInfoHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpProductInfoHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpProductInfoHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input productInfoHeaderValue:(WWHHHttpProductInfoHeaderValue**)productInfoHeaderValue;
+ (WWHHHttpProductInfoHeaderValue*)makeFromComment:(NSString *)productComment ACTIVATOR;
+ (WWHHHttpProductInfoHeaderValue*)makeFromNameWithVersion:(NSString *)productName productVersion:(NSString *)productVersion ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * comment;
@property (readonly) WWHHHttpProductHeaderValue* product;
- (NSString *)toString;
@end

#endif // __WWHHHttpProductInfoHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValue
#ifndef __WWHHHttpContentCodingWithQualityHeaderValue_DEFINED__
#define __WWHHHttpContentCodingWithQualityHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpContentCodingWithQualityHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpContentCodingWithQualityHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input contentCodingWithQualityHeaderValue:(WWHHHttpContentCodingWithQualityHeaderValue**)contentCodingWithQualityHeaderValue;
+ (WWHHHttpContentCodingWithQualityHeaderValue*)makeFromValue:(NSString *)contentCoding ACTIVATOR;
+ (WWHHHttpContentCodingWithQualityHeaderValue*)makeFromValueWithQuality:(NSString *)contentCoding quality:(double)quality ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * contentCoding;
@property (readonly) id /* double */ quality;
- (NSString *)toString;
@end

#endif // __WWHHHttpContentCodingWithQualityHeaderValue_DEFINED__

// Windows.Web.Http.Headers.HttpTransferCodingHeaderValue
#ifndef __WWHHHttpTransferCodingHeaderValue_DEFINED__
#define __WWHHHttpTransferCodingHeaderValue_DEFINED__

OBJCUWPWINDOWSCONSOLIDATEDNAMESPACEEXPORT
@interface WWHHHttpTransferCodingHeaderValue : RTObject <WFIStringable>
+ (WWHHHttpTransferCodingHeaderValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input transferCodingHeaderValue:(WWHHHttpTransferCodingHeaderValue**)transferCodingHeaderValue;
+ (WWHHHttpTransferCodingHeaderValue*)make:(NSString *)input ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WWHHHttpNameValueHeaderValue* */ parameters;
@property (readonly) NSString * value;
- (NSString *)toString;
@end

#endif // __WWHHHttpTransferCodingHeaderValue_DEFINED__

