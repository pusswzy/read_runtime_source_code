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

// WindowsDataJson.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDATAJSONEXPORT
#define OBJCUWPWINDOWSDATAJSONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDataJson.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDJJsonArray, WDJJsonObject, WDJJsonValue, WDJJsonError;
@protocol WDJIJsonValue, WDJIJsonValueStatics, WDJIJsonValueStatics2, WDJIJsonObject, WDJIJsonObjectWithDefaultValues, WDJIJsonObjectStatics, WDJIJsonArray, WDJIJsonArrayStatics, WDJIJsonErrorStatics2;

// Windows.Data.Json.JsonValueType
enum _WDJJsonValueType {
    WDJJsonValueTypeNull = 0,
    WDJJsonValueTypeBoolean = 1,
    WDJJsonValueTypeNumber = 2,
    WDJJsonValueTypeString = 3,
    WDJJsonValueTypeArray = 4,
    WDJJsonValueTypeObject = 5,
};
typedef unsigned WDJJsonValueType;

// Windows.Data.Json.JsonErrorStatus
enum _WDJJsonErrorStatus {
    WDJJsonErrorStatusUnknown = 0,
    WDJJsonErrorStatusInvalidJsonString = 1,
    WDJJsonErrorStatusInvalidJsonNumber = 2,
    WDJJsonErrorStatusJsonValueNotFound = 3,
    WDJJsonErrorStatusImplementationLimit = 4,
};
typedef unsigned WDJJsonErrorStatus;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Data.Json.IJsonValue
#ifndef __WDJIJsonValue_DEFINED__
#define __WDJIJsonValue_DEFINED__

@protocol WDJIJsonValue
@property (readonly) WDJJsonValueType valueType;
- (NSString *)stringify;
- (NSString *)getString;
- (double)getNumber;
- (BOOL)getBoolean;
- (WDJJsonArray*)getArray;
- (WDJJsonObject*)getObject;
@end

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WDJIJsonValue : RTObject <WDJIJsonValue>
@end

#endif // __WDJIJsonValue_DEFINED__

// Windows.Foundation.IStringable
#ifndef __WFIStringable_DEFINED__
#define __WFIStringable_DEFINED__

@protocol WFIStringable
- (NSString *)toString;
@end

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WFIStringable : RTObject <WFIStringable>
@end

#endif // __WFIStringable_DEFINED__

// Windows.Data.Json.JsonArray
#ifndef __WDJJsonArray_DEFINED__
#define __WDJJsonArray_DEFINED__

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WDJJsonArray : RTObject <WDJIJsonValue, WFIStringable>
+ (WDJJsonArray*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input result:(WDJJsonArray**)result;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDJJsonValueType valueType;
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

- (WDJJsonObject*)getObjectAt:(unsigned int)index;
- (WDJJsonArray*)getArrayAt:(unsigned int)index;
- (NSString *)getStringAt:(unsigned int)index;
- (double)getNumberAt:(unsigned int)index;
- (BOOL)getBooleanAt:(unsigned int)index;
- (NSString *)stringify;
- (NSString *)getString;
- (double)getNumber;
- (BOOL)getBoolean;
- (WDJJsonArray*)getArray;
- (WDJJsonObject*)getObject;
- (NSString *)toString;
@end

#endif // __WDJJsonArray_DEFINED__

// Windows.Data.Json.JsonObject
#ifndef __WDJJsonObject_DEFINED__
#define __WDJJsonObject_DEFINED__

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WDJJsonObject : RTObject <WDJIJsonValue, WFIStringable>
+ (WDJJsonObject*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input result:(WDJJsonObject**)result;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDJJsonValueType valueType;
@property (readonly) unsigned int size;
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
- (WDJJsonValue*)getNamedValue:(NSString *)name;
- (void)setNamedValue:(NSString *)name value:(RTObject<WDJIJsonValue>*)value;
- (WDJJsonObject*)getNamedObject:(NSString *)name;
- (WDJJsonArray*)getNamedArray:(NSString *)name;
- (NSString *)getNamedString:(NSString *)name;
- (double)getNamedNumber:(NSString *)name;
- (BOOL)getNamedBoolean:(NSString *)name;
- (NSString *)stringify;
- (NSString *)getString;
- (double)getNumber;
- (BOOL)getBoolean;
- (WDJJsonArray*)getArray;
- (WDJJsonObject*)getObject;
- (WDJJsonValue*)getNamedValueOrDefault:(NSString *)name defaultValue:(WDJJsonValue*)defaultValue;
- (WDJJsonObject*)getNamedObjectOrDefault:(NSString *)name defaultValue:(WDJJsonObject*)defaultValue;
- (NSString *)getNamedStringOrDefault:(NSString *)name defaultValue:(NSString *)defaultValue;
- (WDJJsonArray*)getNamedArrayOrDefault:(NSString *)name defaultValue:(WDJJsonArray*)defaultValue;
- (double)getNamedNumberOrDefault:(NSString *)name defaultValue:(double)defaultValue;
- (BOOL)getNamedBooleanOrDefault:(NSString *)name defaultValue:(BOOL)defaultValue;
- (NSString *)toString;
@end

#endif // __WDJJsonObject_DEFINED__

// Windows.Data.Json.JsonValue
#ifndef __WDJJsonValue_DEFINED__
#define __WDJJsonValue_DEFINED__

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WDJJsonValue : RTObject <WDJIJsonValue, WFIStringable>
+ (WDJJsonValue*)createNullValue;
+ (WDJJsonValue*)parse:(NSString *)input;
+ (BOOL)tryParse:(NSString *)input result:(WDJJsonValue**)result;
+ (WDJJsonValue*)createBooleanValue:(BOOL)input;
+ (WDJJsonValue*)createNumberValue:(double)input;
+ (WDJJsonValue*)createStringValue:(NSString *)input;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDJJsonValueType valueType;
- (NSString *)stringify;
- (NSString *)getString;
- (double)getNumber;
- (BOOL)getBoolean;
- (WDJJsonArray*)getArray;
- (WDJJsonObject*)getObject;
- (NSString *)toString;
@end

#endif // __WDJJsonValue_DEFINED__

// Windows.Data.Json.JsonError
#ifndef __WDJJsonError_DEFINED__
#define __WDJJsonError_DEFINED__

OBJCUWPWINDOWSDATAJSONEXPORT
@interface WDJJsonError : RTObject
+ (WDJJsonErrorStatus)getJsonStatus:(int)hresult;
@end

#endif // __WDJJsonError_DEFINED__

