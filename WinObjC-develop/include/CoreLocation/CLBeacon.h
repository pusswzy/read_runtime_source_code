//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
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

#import <CoreLocation/CoreLocationExport.h>
#import <Foundation/NSObject.h>
#import <CoreLocation/CoreLocationDataTypes.h>

@class NSUUID;
@class NSNumber;

typedef NS_ENUM(NSUInteger, CLProximity) { CLProximityUnknown, CLProximityImmediate, CLProximityNear, CLProximityFar };

CORELOCATION_EXPORT_CLASS
@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>
@property (readonly, nonatomic, strong) NSUUID* proximityUUID STUB_PROPERTY;
@property (readonly, nonatomic, strong) NSNumber* major STUB_PROPERTY;
@property (readonly, nonatomic, strong) NSNumber* minor STUB_PROPERTY;
@property (readonly, nonatomic) CLProximity proximity STUB_PROPERTY;
@property (readonly, nonatomic) CLLocationAccuracy accuracy STUB_PROPERTY;
@property (readonly, nonatomic) NSInteger rssi STUB_PROPERTY;
@end
