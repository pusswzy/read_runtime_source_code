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
#import <QuartzCore/CAAction.h>
#import <QuartzCore/CAMediaTiming.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSString;
@class NSArray;

CA_EXPORT NSString* const kCAAnimationRotateAuto;
;
CA_EXPORT NSString* const kCAAnimationRotateAutoReverse;
CA_EXPORT NSString* const kCAAnimationLinear;
CA_EXPORT NSString* const kCAAnimationDiscrete;
CA_EXPORT NSString* const kCAAnimationPaced;
CA_EXPORT NSString* const kCAAnimationCubic;
CA_EXPORT NSString* const kCAAnimationCubicPaced;

CA_EXPORT_CLASS
@interface CAKeyframeAnimation : CAPropertyAnimation <CAAction, CAMediaTiming, NSCoding, NSCopying>

@property (copy) NSArray* values;
@property CGPathRef path;
@property (copy) NSArray* keyTimes;
@property (copy) NSArray* timingFunctions;
@property (copy) NSString* calculationMode;
@property (copy) NSString* rotationMode;
@property (copy) NSArray* tensionValues;
@property (copy) NSArray* continuityValues;
@property (copy) NSArray* biasValues;

@end
