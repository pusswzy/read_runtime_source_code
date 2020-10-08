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

#import <MapKit/MapKitExport.h>
#import <Foundation/NSObject.h>

@class MKDirectionsResponse;
@class NSError;
@class MKETAResponse;
@class MKDirectionsRequest;

typedef void (^MKDirectionsHandler)(MKDirectionsResponse* response, NSError* error);
typedef void (^MKETAHandler)(MKETAResponse* response, NSError* error);

MAPKIT_EXPORT_CLASS
@interface MKDirections : NSObject
- (instancetype)initWithRequest:(MKDirectionsRequest*)request STUB_METHOD;
- (void)calculateDirectionsWithCompletionHandler:(MKDirectionsHandler)completionHandler STUB_METHOD;
- (void)calculateETAWithCompletionHandler:(MKETAHandler)completionHandler STUB_METHOD;
- (void)cancel STUB_METHOD;
@property (readonly, getter=isCalculating, nonatomic) BOOL calculating STUB_PROPERTY;
@end
