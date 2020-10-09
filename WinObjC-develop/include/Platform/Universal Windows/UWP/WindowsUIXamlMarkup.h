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

// WindowsUIXamlMarkup.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
#define OBJCUWPWINDOWSUIXAMLMARKUPEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsUIXamlMarkup.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WUXMMarkupExtension, WUXMXamlBinaryWriter, WUXMXamlBindingHelper, WUXMXamlMarkupHelper, WUXMXamlReader;
@class WUXMXamlBinaryWriterErrorInformation, WUXMXmlnsDefinition;
@protocol WUXMIComponentConnector, WUXMIComponentConnector2, WUXMIDataTemplateComponent, WUXMIXamlMember, WUXMIXamlType, WUXMIXamlMetadataProvider, WUXMIMarkupExtension, WUXMIMarkupExtensionOverrides, WUXMIMarkupExtensionFactory, WUXMIXamlBinaryWriter, WUXMIXamlBinaryWriterStatics, WUXMIXamlBindingHelper, WUXMIXamlBindingHelperStatics, WUXMIXamlMarkupHelper, WUXMIXamlMarkupHelperStatics, WUXMIXamlReader, WUXMIXamlReaderStatics;

#include "WindowsUIXamlInterop.h"
#include "WindowsStorageStreams.h"
#include "WindowsUIXaml.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// [struct] Windows.UI.Xaml.Markup.XamlBinaryWriterErrorInformation
OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXamlBinaryWriterErrorInformation : NSObject
+ (instancetype)new;
@property unsigned int inputStreamIndex;
@property unsigned int lineNumber;
@property unsigned int linePosition;
@end

// [struct] Windows.UI.Xaml.Markup.XmlnsDefinition
OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXmlnsDefinition : NSObject
+ (instancetype)new;
@property (retain) NSString * xmlNamespace;
@property (retain) NSString * Namespace;
@end

// Windows.UI.Xaml.Markup.IComponentConnector
#ifndef __WUXMIComponentConnector_DEFINED__
#define __WUXMIComponentConnector_DEFINED__

@protocol WUXMIComponentConnector
- (void)connect:(int)connectionId target:(RTObject*)target;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIComponentConnector : RTObject <WUXMIComponentConnector>
@end

#endif // __WUXMIComponentConnector_DEFINED__

// Windows.UI.Xaml.Markup.IComponentConnector2
#ifndef __WUXMIComponentConnector2_DEFINED__
#define __WUXMIComponentConnector2_DEFINED__

@protocol WUXMIComponentConnector2
- (RTObject<WUXMIComponentConnector>*)getBindingConnector:(int)connectionId target:(RTObject*)target;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIComponentConnector2 : RTObject <WUXMIComponentConnector2>
@end

#endif // __WUXMIComponentConnector2_DEFINED__

// Windows.UI.Xaml.Markup.IDataTemplateComponent
#ifndef __WUXMIDataTemplateComponent_DEFINED__
#define __WUXMIDataTemplateComponent_DEFINED__

@protocol WUXMIDataTemplateComponent
- (void)recycle;
- (void)processBindings:(RTObject*)item itemIndex:(int)itemIndex phase:(int)phase nextPhase:(int*)nextPhase;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIDataTemplateComponent : RTObject <WUXMIDataTemplateComponent>
@end

#endif // __WUXMIDataTemplateComponent_DEFINED__

// Windows.UI.Xaml.Markup.IXamlMember
#ifndef __WUXMIXamlMember_DEFINED__
#define __WUXMIXamlMember_DEFINED__

@protocol WUXMIXamlMember
@property (readonly) BOOL isAttachable;
@property (readonly) BOOL isDependencyProperty;
@property (readonly) BOOL isReadOnly;
@property (readonly) NSString * name;
@property (readonly) RTObject<WUXMIXamlType>* targetType;
@property (readonly) RTObject<WUXMIXamlType>* type;
- (RTObject*)getValue:(RTObject*)instance;
- (void)setValue:(RTObject*)instance value:(RTObject*)value;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIXamlMember : RTObject <WUXMIXamlMember>
@end

#endif // __WUXMIXamlMember_DEFINED__

// Windows.UI.Xaml.Markup.IXamlType
#ifndef __WUXMIXamlType_DEFINED__
#define __WUXMIXamlType_DEFINED__

@protocol WUXMIXamlType
@property (readonly) RTObject<WUXMIXamlType>* baseType;
@property (readonly) RTObject<WUXMIXamlMember>* contentProperty;
@property (readonly) NSString * fullName;
@property (readonly) BOOL isArray;
@property (readonly) BOOL isBindable;
@property (readonly) BOOL isCollection;
@property (readonly) BOOL isConstructible;
@property (readonly) BOOL isDictionary;
@property (readonly) BOOL isMarkupExtension;
@property (readonly) RTObject<WUXMIXamlType>* itemType;
@property (readonly) RTObject<WUXMIXamlType>* keyType;
@property (readonly) WUXITypeName* underlyingType;
- (RTObject*)activateInstance;
- (RTObject*)createFromString:(NSString *)value;
- (RTObject<WUXMIXamlMember>*)getMember:(NSString *)name;
- (void)addToVector:(RTObject*)instance value:(RTObject*)value;
- (void)addToMap:(RTObject*)instance key:(RTObject*)key value:(RTObject*)value;
- (void)runInitializer;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIXamlType : RTObject <WUXMIXamlType>
@end

#endif // __WUXMIXamlType_DEFINED__

// Windows.UI.Xaml.Markup.IXamlMetadataProvider
#ifndef __WUXMIXamlMetadataProvider_DEFINED__
#define __WUXMIXamlMetadataProvider_DEFINED__

@protocol WUXMIXamlMetadataProvider
- (RTObject<WUXMIXamlType>*)getXamlType:(WUXITypeName*)type;
- (RTObject<WUXMIXamlType>*)getXamlTypeByFullName:(NSString *)fullName;
- (NSArray* /* WUXMXmlnsDefinition* */)getXmlnsDefinitions;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIXamlMetadataProvider : RTObject <WUXMIXamlMetadataProvider>
@end

#endif // __WUXMIXamlMetadataProvider_DEFINED__

// Windows.UI.Xaml.Markup.IMarkupExtensionOverrides
#ifndef __WUXMIMarkupExtensionOverrides_DEFINED__
#define __WUXMIMarkupExtensionOverrides_DEFINED__

@protocol WUXMIMarkupExtensionOverrides
- (RTObject*)provideValue;
@end

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMIMarkupExtensionOverrides : RTObject <WUXMIMarkupExtensionOverrides>
@end

#endif // __WUXMIMarkupExtensionOverrides_DEFINED__

// Windows.UI.Xaml.Markup.MarkupExtension
#ifndef __WUXMMarkupExtension_DEFINED__
#define __WUXMMarkupExtension_DEFINED__

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMMarkupExtension : RTObject
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (RTObject*)provideValue;
@end

#endif // __WUXMMarkupExtension_DEFINED__

// Windows.UI.Xaml.Markup.XamlBinaryWriter
#ifndef __WUXMXamlBinaryWriter_DEFINED__
#define __WUXMXamlBinaryWriter_DEFINED__

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXamlBinaryWriter : RTObject
+ (WUXMXamlBinaryWriterErrorInformation*)write:(NSMutableArray* /* RTObject<WSSIRandomAccessStream>* */)inputStreams outputStreams:(NSMutableArray* /* RTObject<WSSIRandomAccessStream>* */)outputStreams xamlMetadataProvider:(RTObject<WUXMIXamlMetadataProvider>*)xamlMetadataProvider;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXMXamlBinaryWriter_DEFINED__

// Windows.UI.Xaml.Markup.XamlBindingHelper
#ifndef __WUXMXamlBindingHelper_DEFINED__
#define __WUXMXamlBindingHelper_DEFINED__

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXamlBindingHelper : RTObject
+ (RTObject<WUXMIDataTemplateComponent>*)getDataTemplateComponent:(WXDependencyObject*)element;
+ (void)setDataTemplateComponent:(WXDependencyObject*)element value:(RTObject<WUXMIDataTemplateComponent>*)value;
+ (void)suspendRendering:(WXUIElement*)target;
+ (void)resumeRendering:(WXUIElement*)target;
+ (RTObject*)convertValue:(WUXITypeName*)type value:(RTObject*)value;
+ (void)setPropertyFromString:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(NSString *)value;
+ (void)setPropertyFromBoolean:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(BOOL)value;
+ (void)setPropertyFromChar16:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(wchar_t)value;
+ (void)setPropertyFromDateTime:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFDateTime*)value;
+ (void)setPropertyFromDouble:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(double)value;
+ (void)setPropertyFromInt32:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(int)value;
+ (void)setPropertyFromUInt32:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(unsigned int)value;
+ (void)setPropertyFromInt64:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(int64_t)value;
+ (void)setPropertyFromUInt64:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(uint64_t)value;
+ (void)setPropertyFromSingle:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(float)value;
+ (void)setPropertyFromPoint:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFPoint*)value;
+ (void)setPropertyFromRect:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFRect*)value;
+ (void)setPropertyFromSize:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFSize*)value;
+ (void)setPropertyFromTimeSpan:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFTimeSpan*)value;
+ (void)setPropertyFromByte:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(uint8_t)value;
+ (void)setPropertyFromUri:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(WFUri*)value;
+ (void)setPropertyFromObject:(RTObject*)dependencyObject propertyToSet:(WXDependencyProperty*)propertyToSet value:(RTObject*)value;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
+ (WXDependencyProperty*)dataTemplateComponentProperty;
@end

#endif // __WUXMXamlBindingHelper_DEFINED__

// Windows.UI.Xaml.Markup.XamlMarkupHelper
#ifndef __WUXMXamlMarkupHelper_DEFINED__
#define __WUXMXamlMarkupHelper_DEFINED__

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXamlMarkupHelper : RTObject
+ (void)unloadObject:(WXDependencyObject*)element;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXMXamlMarkupHelper_DEFINED__

// Windows.UI.Xaml.Markup.XamlReader
#ifndef __WUXMXamlReader_DEFINED__
#define __WUXMXamlReader_DEFINED__

OBJCUWPWINDOWSUIXAMLMARKUPEXPORT
@interface WUXMXamlReader : RTObject
+ (RTObject*)Load:(NSString *)xaml;
+ (RTObject*)loadWithInitialTemplateValidation:(NSString *)xaml;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@end

#endif // __WUXMXamlReader_DEFINED__

