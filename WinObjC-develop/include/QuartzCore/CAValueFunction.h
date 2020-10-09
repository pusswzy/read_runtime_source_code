//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
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
#pragma once

#import <QuartzCore/CoreAnimationExport.h>
#import <Foundation/NSObject.h>

@class NSString;

CA_EXPORT NSString* const kCAValueFunctionRotateX;
CA_EXPORT NSString* const kCAValueFunctionRotateY;
CA_EXPORT NSString* const kCAValueFunctionRotateZ;

CA_EXPORT NSString* const kCAValueFunctionScale;
CA_EXPORT NSString* const kCAValueFunctionScaleX;
CA_EXPORT NSString* const kCAValueFunctionScaleY;
CA_EXPORT NSString* const kCAValueFunctionScaleZ;

CA_EXPORT NSString* const kCAValueFunctionTranslate;
CA_EXPORT NSString* const kCAValueFunctionTranslateX;
CA_EXPORT NSString* const kCAValueFunctionTranslateY;
CA_EXPORT NSString* const kCAValueFunctionTranslateZ;

CA_EXPORT_CLASS
@interface CAValueFunction : NSObject <NSCoding>

@property (readonly) NSString* name;
+ (instancetype)functionWithName:(NSString*)name;

@end
