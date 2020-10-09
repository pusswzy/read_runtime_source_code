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

// WindowsDevicesGeolocation.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
#define OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesGeolocation.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDGGeopoint, WDGGeopath, WDGGeoboundingBox, WDGGeocoordinateSatelliteData, WDGVenueData, WDGGeocoordinate, WDGCivicAddress, WDGGeoposition, WDGPositionChangedEventArgs, WDGStatusChangedEventArgs, WDGGeolocator, WDGGeocircle, WDGGeovisit, WDGGeovisitStateChangedEventArgs, WDGGeovisitMonitor, WDGGeovisitTriggerDetails;
@class WDGBasicGeoposition;
@protocol WDGIGeoshape, WDGIGeopoint, WDGIGeopointFactory, WDGIGeopath, WDGIGeopathFactory, WDGIGeoboundingBox, WDGIGeoboundingBoxFactory, WDGIGeoboundingBoxStatics, WDGIGeocoordinateSatelliteData, WDGIVenueData, WDGIGeocoordinate, WDGIGeocoordinateWithPositionData, WDGIGeocoordinateWithPoint, WDGIGeocoordinateWithPositionSourceTimestamp, WDGIGeoposition, WDGIGeoposition2, WDGICivicAddress, WDGIPositionChangedEventArgs, WDGIStatusChangedEventArgs, WDGIGeolocator, WDGIGeolocatorWithScalarAccuracy, WDGIGeolocator2, WDGIGeolocatorStatics, WDGIGeolocatorStatics2, WDGIGeocircle, WDGIGeocircleFactory, WDGIGeovisit, WDGIGeovisitStateChangedEventArgs, WDGIGeovisitMonitor, WDGIGeovisitMonitorStatics, WDGIGeovisitTriggerDetails;

// Windows.Devices.Geolocation.PositionAccuracy
enum _WDGPositionAccuracy {
    WDGPositionAccuracyDefault = 0,
    WDGPositionAccuracyHigh = 1,
};
typedef unsigned WDGPositionAccuracy;

// Windows.Devices.Geolocation.PositionStatus
enum _WDGPositionStatus {
    WDGPositionStatusReady = 0,
    WDGPositionStatusInitializing = 1,
    WDGPositionStatusNoData = 2,
    WDGPositionStatusDisabled = 3,
    WDGPositionStatusNotInitialized = 4,
    WDGPositionStatusNotAvailable = 5,
};
typedef unsigned WDGPositionStatus;

// Windows.Devices.Geolocation.PositionSource
enum _WDGPositionSource {
    WDGPositionSourceCellular = 0,
    WDGPositionSourceSatellite = 1,
    WDGPositionSourceWiFi = 2,
    WDGPositionSourceIPAddress = 3,
    WDGPositionSourceUnknown = 4,
    WDGPositionSourceDefault = 5,
    WDGPositionSourceObfuscated = 6,
};
typedef unsigned WDGPositionSource;

// Windows.Devices.Geolocation.GeoshapeType
enum _WDGGeoshapeType {
    WDGGeoshapeTypeGeopoint = 0,
    WDGGeoshapeTypeGeocircle = 1,
    WDGGeoshapeTypeGeopath = 2,
    WDGGeoshapeTypeGeoboundingBox = 3,
};
typedef unsigned WDGGeoshapeType;

// Windows.Devices.Geolocation.AltitudeReferenceSystem
enum _WDGAltitudeReferenceSystem {
    WDGAltitudeReferenceSystemUnspecified = 0,
    WDGAltitudeReferenceSystemTerrain = 1,
    WDGAltitudeReferenceSystemEllipsoid = 2,
    WDGAltitudeReferenceSystemGeoid = 3,
    WDGAltitudeReferenceSystemSurface = 4,
};
typedef unsigned WDGAltitudeReferenceSystem;

// Windows.Devices.Geolocation.GeolocationAccessStatus
enum _WDGGeolocationAccessStatus {
    WDGGeolocationAccessStatusUnspecified = 0,
    WDGGeolocationAccessStatusAllowed = 1,
    WDGGeolocationAccessStatusDenied = 2,
};
typedef unsigned WDGGeolocationAccessStatus;

// Windows.Devices.Geolocation.VisitMonitoringScope
enum _WDGVisitMonitoringScope {
    WDGVisitMonitoringScopeVenue = 0,
    WDGVisitMonitoringScopeCity = 1,
};
typedef unsigned WDGVisitMonitoringScope;

// Windows.Devices.Geolocation.VisitStateChange
enum _WDGVisitStateChange {
    WDGVisitStateChangeTrackingLost = 0,
    WDGVisitStateChangeArrived = 1,
    WDGVisitStateChangeDeparted = 2,
    WDGVisitStateChangeOtherMovement = 3,
};
typedef unsigned WDGVisitStateChange;

#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// [struct] Windows.Devices.Geolocation.BasicGeoposition
OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGBasicGeoposition : NSObject
+ (instancetype)new;
@property double latitude;
@property double longitude;
@property double altitude;
@end

// Windows.Devices.Geolocation.IGeoshape
#ifndef __WDGIGeoshape_DEFINED__
#define __WDGIGeoshape_DEFINED__

@protocol WDGIGeoshape
@property (readonly) WDGAltitudeReferenceSystem altitudeReferenceSystem;
@property (readonly) WDGGeoshapeType geoshapeType;
@property (readonly) unsigned int spatialReferenceId;
@end

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGIGeoshape : RTObject <WDGIGeoshape>
@end

#endif // __WDGIGeoshape_DEFINED__

// Windows.Devices.Geolocation.Geopoint
#ifndef __WDGGeopoint_DEFINED__
#define __WDGGeopoint_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeopoint : RTObject <WDGIGeoshape>
+ (WDGGeopoint*)make:(WDGBasicGeoposition*)position ACTIVATOR;
+ (WDGGeopoint*)makeWithAltitudeReferenceSystem:(WDGBasicGeoposition*)position altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem ACTIVATOR;
+ (WDGGeopoint*)makeWithAltitudeReferenceSystemAndSpatialReferenceId:(WDGBasicGeoposition*)position altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem spatialReferenceId:(unsigned int)spatialReferenceId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGBasicGeoposition* position;
@property (readonly) WDGAltitudeReferenceSystem altitudeReferenceSystem;
@property (readonly) WDGGeoshapeType geoshapeType;
@property (readonly) unsigned int spatialReferenceId;
@end

#endif // __WDGGeopoint_DEFINED__

// Windows.Devices.Geolocation.Geopath
#ifndef __WDGGeopath_DEFINED__
#define __WDGGeopath_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeopath : RTObject <WDGIGeoshape>
+ (WDGGeopath*)make:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions ACTIVATOR;
+ (WDGGeopath*)makeWithAltitudeReference:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem ACTIVATOR;
+ (WDGGeopath*)makeWithAltitudeReferenceAndSpatialReference:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem spatialReferenceId:(unsigned int)spatialReferenceId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSArray* /* WDGBasicGeoposition* */ positions;
@property (readonly) WDGAltitudeReferenceSystem altitudeReferenceSystem;
@property (readonly) WDGGeoshapeType geoshapeType;
@property (readonly) unsigned int spatialReferenceId;
@end

#endif // __WDGGeopath_DEFINED__

// Windows.Devices.Geolocation.GeoboundingBox
#ifndef __WDGGeoboundingBox_DEFINED__
#define __WDGGeoboundingBox_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeoboundingBox : RTObject <WDGIGeoshape>
+ (WDGGeoboundingBox*)tryCompute:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions;
+ (WDGGeoboundingBox*)tryComputeWithAltitudeReference:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions altitudeRefSystem:(WDGAltitudeReferenceSystem)altitudeRefSystem;
+ (WDGGeoboundingBox*)tryComputeWithAltitudeReferenceAndSpatialReference:(id<NSFastEnumeration> /* WDGBasicGeoposition* */)positions altitudeRefSystem:(WDGAltitudeReferenceSystem)altitudeRefSystem spatialReferenceId:(unsigned int)spatialReferenceId;
+ (WDGGeoboundingBox*)make:(WDGBasicGeoposition*)northwestCorner southeastCorner:(WDGBasicGeoposition*)southeastCorner ACTIVATOR;
+ (WDGGeoboundingBox*)makeWithAltitudeReference:(WDGBasicGeoposition*)northwestCorner southeastCorner:(WDGBasicGeoposition*)southeastCorner altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem ACTIVATOR;
+ (WDGGeoboundingBox*)makeWithAltitudeReferenceAndSpatialReference:(WDGBasicGeoposition*)northwestCorner southeastCorner:(WDGBasicGeoposition*)southeastCorner altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem spatialReferenceId:(unsigned int)spatialReferenceId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGBasicGeoposition* center;
@property (readonly) double maxAltitude;
@property (readonly) double minAltitude;
@property (readonly) WDGBasicGeoposition* northwestCorner;
@property (readonly) WDGBasicGeoposition* southeastCorner;
@property (readonly) WDGAltitudeReferenceSystem altitudeReferenceSystem;
@property (readonly) WDGGeoshapeType geoshapeType;
@property (readonly) unsigned int spatialReferenceId;
@end

#endif // __WDGGeoboundingBox_DEFINED__

// Windows.Devices.Geolocation.GeocoordinateSatelliteData
#ifndef __WDGGeocoordinateSatelliteData_DEFINED__
#define __WDGGeocoordinateSatelliteData_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeocoordinateSatelliteData : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) id /* double */ horizontalDilutionOfPrecision;
@property (readonly) id /* double */ positionDilutionOfPrecision;
@property (readonly) id /* double */ verticalDilutionOfPrecision;
@end

#endif // __WDGGeocoordinateSatelliteData_DEFINED__

// Windows.Devices.Geolocation.VenueData
#ifndef __WDGVenueData_DEFINED__
#define __WDGVenueData_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGVenueData : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * id;
@property (readonly) NSString * level;
@end

#endif // __WDGVenueData_DEFINED__

// Windows.Devices.Geolocation.Geocoordinate
#ifndef __WDGGeocoordinate_DEFINED__
#define __WDGGeocoordinate_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeocoordinate : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) double accuracy;
@property (readonly) id /* double */ altitude;
@property (readonly) id /* double */ altitudeAccuracy;
@property (readonly) id /* double */ heading;
@property (readonly) double latitude;
@property (readonly) double longitude;
@property (readonly) id /* double */ speed;
@property (readonly) WFDateTime* timestamp;
@property (readonly) WDGGeopoint* point;
@property (readonly) WDGPositionSource positionSource;
@property (readonly) WDGGeocoordinateSatelliteData* satelliteData;
@property (readonly) id /* WFDateTime* */ positionSourceTimestamp;
@end

#endif // __WDGGeocoordinate_DEFINED__

// Windows.Devices.Geolocation.CivicAddress
#ifndef __WDGCivicAddress_DEFINED__
#define __WDGCivicAddress_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGCivicAddress : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * city;
@property (readonly) NSString * country;
@property (readonly) NSString * postalCode;
@property (readonly) NSString * state;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDGCivicAddress_DEFINED__

// Windows.Devices.Geolocation.Geoposition
#ifndef __WDGGeoposition_DEFINED__
#define __WDGGeoposition_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeoposition : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGCivicAddress* civicAddress;
@property (readonly) WDGGeocoordinate* coordinate;
@property (readonly) WDGVenueData* venueData;
@end

#endif // __WDGGeoposition_DEFINED__

// Windows.Devices.Geolocation.PositionChangedEventArgs
#ifndef __WDGPositionChangedEventArgs_DEFINED__
#define __WDGPositionChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGPositionChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGGeoposition* position;
@end

#endif // __WDGPositionChangedEventArgs_DEFINED__

// Windows.Devices.Geolocation.StatusChangedEventArgs
#ifndef __WDGStatusChangedEventArgs_DEFINED__
#define __WDGStatusChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGStatusChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGPositionStatus status;
@end

#endif // __WDGStatusChangedEventArgs_DEFINED__

// Windows.Devices.Geolocation.Geolocator
#ifndef __WDGGeolocator_DEFINED__
#define __WDGGeolocator_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeolocator : RTObject
+ (void)requestAccessAsyncWithSuccess:(void (^)(WDGGeolocationAccessStatus))success failure:(void (^)(NSError*))failure;
+ (void)getGeopositionHistoryAsync:(WFDateTime*)startTime success:(void (^)(NSArray* /* WDGGeoposition* */))success failure:(void (^)(NSError*))failure;
+ (void)getGeopositionHistoryWithDurationAsync:(WFDateTime*)startTime duration:(WFTimeSpan*)duration success:(void (^)(NSArray* /* WDGGeoposition* */))success failure:(void (^)(NSError*))failure;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property unsigned int reportInterval;
@property double movementThreshold;
@property WDGPositionAccuracy desiredAccuracy;
@property (readonly) WDGPositionStatus locationStatus;
@property (retain) id /* unsigned int */ desiredAccuracyInMeters;
+ (id /* WDGBasicGeoposition* */)defaultGeoposition;
+ (void)setDefaultGeoposition:(id /* WDGBasicGeoposition* */)value;
+ (BOOL)isDefaultGeopositionRecommended;
- (EventRegistrationToken)addPositionChangedEvent:(void(^)(WDGGeolocator*, WDGPositionChangedEventArgs*))del;
- (void)removePositionChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStatusChangedEvent:(void(^)(WDGGeolocator*, WDGStatusChangedEventArgs*))del;
- (void)removeStatusChangedEvent:(EventRegistrationToken)tok;
- (void)getGeopositionAsyncWithSuccess:(void (^)(WDGGeoposition*))success failure:(void (^)(NSError*))failure;
- (void)getGeopositionAsyncWithAgeAndTimeout:(WFTimeSpan*)maximumAge timeout:(WFTimeSpan*)timeout success:(void (^)(WDGGeoposition*))success failure:(void (^)(NSError*))failure;
- (void)allowFallbackToConsentlessPositions;
@end

#endif // __WDGGeolocator_DEFINED__

// Windows.Devices.Geolocation.Geocircle
#ifndef __WDGGeocircle_DEFINED__
#define __WDGGeocircle_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeocircle : RTObject <WDGIGeoshape>
+ (WDGGeocircle*)make:(WDGBasicGeoposition*)position radius:(double)radius ACTIVATOR;
+ (WDGGeocircle*)makeWithAltitudeReferenceSystem:(WDGBasicGeoposition*)position radius:(double)radius altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem ACTIVATOR;
+ (WDGGeocircle*)makeWithAltitudeReferenceSystemAndSpatialReferenceId:(WDGBasicGeoposition*)position radius:(double)radius altitudeReferenceSystem:(WDGAltitudeReferenceSystem)altitudeReferenceSystem spatialReferenceId:(unsigned int)spatialReferenceId ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGBasicGeoposition* center;
@property (readonly) double radius;
@property (readonly) WDGAltitudeReferenceSystem altitudeReferenceSystem;
@property (readonly) WDGGeoshapeType geoshapeType;
@property (readonly) unsigned int spatialReferenceId;
@end

#endif // __WDGGeocircle_DEFINED__

// Windows.Devices.Geolocation.Geovisit
#ifndef __WDGGeovisit_DEFINED__
#define __WDGGeovisit_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeovisit : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGGeoposition* position;
@property (readonly) WDGVisitStateChange stateChange;
@property (readonly) WFDateTime* timestamp;
@end

#endif // __WDGGeovisit_DEFINED__

// Windows.Devices.Geolocation.GeovisitStateChangedEventArgs
#ifndef __WDGGeovisitStateChangedEventArgs_DEFINED__
#define __WDGGeovisitStateChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeovisitStateChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGGeovisit* visit;
@end

#endif // __WDGGeovisitStateChangedEventArgs_DEFINED__

// Windows.Devices.Geolocation.GeovisitMonitor
#ifndef __WDGGeovisitMonitor_DEFINED__
#define __WDGGeovisitMonitor_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeovisitMonitor : RTObject
+ (void)getLastReportAsyncWithSuccess:(void (^)(WDGGeovisit*))success failure:(void (^)(NSError*))failure;
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGVisitMonitoringScope monitoringScope;
- (EventRegistrationToken)addVisitStateChangedEvent:(void(^)(WDGGeovisitMonitor*, WDGGeovisitStateChangedEventArgs*))del;
- (void)removeVisitStateChangedEvent:(EventRegistrationToken)tok;
- (void)start:(WDGVisitMonitoringScope)value;
- (void)stop;
@end

#endif // __WDGGeovisitMonitor_DEFINED__

// Windows.Devices.Geolocation.GeovisitTriggerDetails
#ifndef __WDGGeovisitTriggerDetails_DEFINED__
#define __WDGGeovisitTriggerDetails_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONEXPORT
@interface WDGGeovisitTriggerDetails : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
- (NSArray* /* WDGGeovisit* */)readReports;
@end

#endif // __WDGGeovisitTriggerDetails_DEFINED__

