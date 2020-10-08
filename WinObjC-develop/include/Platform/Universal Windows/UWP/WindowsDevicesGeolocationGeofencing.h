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

// WindowsDevicesGeolocationGeofencing.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESGEOLOCATIONGEOFENCINGEXPORT
#define OBJCUWPWINDOWSDEVICESGEOLOCATIONGEOFENCINGEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesGeolocationGeofencing.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDGGGeofence, WDGGGeofenceMonitor, WDGGGeofenceStateChangeReport;
@protocol WDGGIGeofenceFactory, WDGGIGeofence, WDGGIGeofenceStateChangeReport, WDGGIGeofenceMonitorStatics, WDGGIGeofenceMonitor;

// Windows.Devices.Geolocation.Geofencing.MonitoredGeofenceStates
enum _WDGGMonitoredGeofenceStates {
    WDGGMonitoredGeofenceStatesNone = 0,
    WDGGMonitoredGeofenceStatesEntered = 1,
    WDGGMonitoredGeofenceStatesExited = 2,
    WDGGMonitoredGeofenceStatesRemoved = 4,
};
typedef unsigned WDGGMonitoredGeofenceStates;

// Windows.Devices.Geolocation.Geofencing.GeofenceState
enum _WDGGGeofenceState {
    WDGGGeofenceStateNone = 0,
    WDGGGeofenceStateEntered = 1,
    WDGGGeofenceStateExited = 2,
    WDGGGeofenceStateRemoved = 4,
};
typedef unsigned WDGGGeofenceState;

// Windows.Devices.Geolocation.Geofencing.GeofenceMonitorStatus
enum _WDGGGeofenceMonitorStatus {
    WDGGGeofenceMonitorStatusReady = 0,
    WDGGGeofenceMonitorStatusInitializing = 1,
    WDGGGeofenceMonitorStatusNoData = 2,
    WDGGGeofenceMonitorStatusDisabled = 3,
    WDGGGeofenceMonitorStatusNotInitialized = 4,
    WDGGGeofenceMonitorStatusNotAvailable = 5,
};
typedef unsigned WDGGGeofenceMonitorStatus;

// Windows.Devices.Geolocation.Geofencing.GeofenceRemovalReason
enum _WDGGGeofenceRemovalReason {
    WDGGGeofenceRemovalReasonUsed = 0,
    WDGGGeofenceRemovalReasonExpired = 1,
};
typedef unsigned WDGGGeofenceRemovalReason;

#include "WindowsDevicesGeolocation.h"
#include "WindowsFoundation.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Geolocation.Geofencing.Geofence
#ifndef __WDGGGeofence_DEFINED__
#define __WDGGGeofence_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONGEOFENCINGEXPORT
@interface WDGGGeofence : RTObject
+ (WDGGGeofence*)make:(NSString *)id geoshape:(RTObject<WDGIGeoshape>*)geoshape ACTIVATOR;
+ (WDGGGeofence*)makeWithMonitorStates:(NSString *)id geoshape:(RTObject<WDGIGeoshape>*)geoshape monitoredStates:(WDGGMonitoredGeofenceStates)monitoredStates singleUse:(BOOL)singleUse ACTIVATOR;
+ (WDGGGeofence*)makeWithMonitorStatesAndDwellTime:(NSString *)id geoshape:(RTObject<WDGIGeoshape>*)geoshape monitoredStates:(WDGGMonitoredGeofenceStates)monitoredStates singleUse:(BOOL)singleUse dwellTime:(WFTimeSpan*)dwellTime ACTIVATOR;
+ (WDGGGeofence*)makeWithMonitorStatesDwellTimeStartTimeAndDuration:(NSString *)id geoshape:(RTObject<WDGIGeoshape>*)geoshape monitoredStates:(WDGGMonitoredGeofenceStates)monitoredStates singleUse:(BOOL)singleUse dwellTime:(WFTimeSpan*)dwellTime startTime:(WFDateTime*)startTime duration:(WFTimeSpan*)duration ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WFTimeSpan* duration;
@property (readonly) WFTimeSpan* dwellTime;
@property (readonly) RTObject<WDGIGeoshape>* geoshape;
@property (readonly) NSString * id;
@property (readonly) WDGGMonitoredGeofenceStates monitoredStates;
@property (readonly) BOOL singleUse;
@property (readonly) WFDateTime* startTime;
@end

#endif // __WDGGGeofence_DEFINED__

// Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
#ifndef __WDGGGeofenceMonitor_DEFINED__
#define __WDGGGeofenceMonitor_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONGEOFENCINGEXPORT
@interface WDGGGeofenceMonitor : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSMutableArray* /* WDGGGeofence* */ geofences;
@property (readonly) WDGGeoposition* lastKnownGeoposition;
@property (readonly) WDGGGeofenceMonitorStatus status;
+ (WDGGGeofenceMonitor*)current;
- (EventRegistrationToken)addGeofenceStateChangedEvent:(void(^)(WDGGGeofenceMonitor*, RTObject*))del;
- (void)removeGeofenceStateChangedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addStatusChangedEvent:(void(^)(WDGGGeofenceMonitor*, RTObject*))del;
- (void)removeStatusChangedEvent:(EventRegistrationToken)tok;
- (NSArray* /* WDGGGeofenceStateChangeReport* */)readReports;
@end

#endif // __WDGGGeofenceMonitor_DEFINED__

// Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport
#ifndef __WDGGGeofenceStateChangeReport_DEFINED__
#define __WDGGGeofenceStateChangeReport_DEFINED__

OBJCUWPWINDOWSDEVICESGEOLOCATIONGEOFENCINGEXPORT
@interface WDGGGeofenceStateChangeReport : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDGGGeofence* geofence;
@property (readonly) WDGGeoposition* geoposition;
@property (readonly) WDGGGeofenceState newState;
@property (readonly) WDGGGeofenceRemovalReason removalReason;
@end

#endif // __WDGGGeofenceStateChangeReport_DEFINED__

