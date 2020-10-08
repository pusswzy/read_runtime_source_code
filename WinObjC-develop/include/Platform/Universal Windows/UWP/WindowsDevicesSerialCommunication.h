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

// WindowsDevicesSerialCommunication.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT
#define OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesSerialCommunication.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDSSerialDevice, WDSErrorReceivedEventArgs, WDSPinChangedEventArgs;
@protocol WDSISerialDeviceStatics, WDSISerialDevice, WDSIErrorReceivedEventArgs, WDSIPinChangedEventArgs;

// Windows.Devices.SerialCommunication.SerialParity
enum _WDSSerialParity {
    WDSSerialParityNone = 0,
    WDSSerialParityOdd = 1,
    WDSSerialParityEven = 2,
    WDSSerialParityMark = 3,
    WDSSerialParitySpace = 4,
};
typedef unsigned WDSSerialParity;

// Windows.Devices.SerialCommunication.SerialHandshake
enum _WDSSerialHandshake {
    WDSSerialHandshakeNone = 0,
    WDSSerialHandshakeRequestToSend = 1,
    WDSSerialHandshakeXOnXOff = 2,
    WDSSerialHandshakeRequestToSendXOnXOff = 3,
};
typedef unsigned WDSSerialHandshake;

// Windows.Devices.SerialCommunication.SerialStopBitCount
enum _WDSSerialStopBitCount {
    WDSSerialStopBitCountOne = 0,
    WDSSerialStopBitCountOnePointFive = 1,
    WDSSerialStopBitCountTwo = 2,
};
typedef unsigned WDSSerialStopBitCount;

// Windows.Devices.SerialCommunication.SerialError
enum _WDSSerialError {
    WDSSerialErrorFrame = 0,
    WDSSerialErrorBufferOverrun = 1,
    WDSSerialErrorReceiveFull = 2,
    WDSSerialErrorReceiveParity = 3,
    WDSSerialErrorTransmitFull = 4,
};
typedef unsigned WDSSerialError;

// Windows.Devices.SerialCommunication.SerialPinChange
enum _WDSSerialPinChange {
    WDSSerialPinChangeBreakSignal = 0,
    WDSSerialPinChangeCarrierDetect = 1,
    WDSSerialPinChangeClearToSend = 2,
    WDSSerialPinChangeDataSetReady = 3,
    WDSSerialPinChangeRingIndicator = 4,
};
typedef unsigned WDSSerialPinChange;

#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.SerialCommunication.SerialDevice
#ifndef __WDSSerialDevice_DEFINED__
#define __WDSSerialDevice_DEFINED__

OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT
@interface WDSSerialDevice : RTObject <WFIClosable>
+ (NSString *)getDeviceSelector;
+ (NSString *)getDeviceSelectorFromPortName:(NSString *)portName;
+ (NSString *)getDeviceSelectorFromUsbVidPid:(unsigned short)vendorId productId:(unsigned short)productId;
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDSSerialDevice*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property BOOL isDataTerminalReadyEnabled;
@property unsigned short dataBits;
@property WDSSerialHandshake handshake;
@property BOOL breakSignalState;
@property unsigned int baudRate;
@property (retain) WFTimeSpan* writeTimeout;
@property WDSSerialStopBitCount stopBits;
@property (retain) WFTimeSpan* readTimeout;
@property WDSSerialParity parity;
@property BOOL isRequestToSendEnabled;
@property (readonly) unsigned int bytesReceived;
@property (readonly) BOOL carrierDetectState;
@property (readonly) BOOL clearToSendState;
@property (readonly) BOOL dataSetReadyState;
@property (readonly) RTObject<WSSIInputStream>* inputStream;
@property (readonly) RTObject<WSSIOutputStream>* outputStream;
@property (readonly) NSString * portName;
@property (readonly) unsigned short usbProductId;
@property (readonly) unsigned short usbVendorId;
- (EventRegistrationToken)addErrorReceivedEvent:(void(^)(WDSSerialDevice*, WDSErrorReceivedEventArgs*))del;
- (void)removeErrorReceivedEvent:(EventRegistrationToken)tok;
- (EventRegistrationToken)addPinChangedEvent:(void(^)(WDSSerialDevice*, WDSPinChangedEventArgs*))del;
- (void)removePinChangedEvent:(EventRegistrationToken)tok;
- (void)close;
@end

#endif // __WDSSerialDevice_DEFINED__

// Windows.Devices.SerialCommunication.ErrorReceivedEventArgs
#ifndef __WDSErrorReceivedEventArgs_DEFINED__
#define __WDSErrorReceivedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT
@interface WDSErrorReceivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDSSerialError error;
@end

#endif // __WDSErrorReceivedEventArgs_DEFINED__

// Windows.Devices.SerialCommunication.PinChangedEventArgs
#ifndef __WDSPinChangedEventArgs_DEFINED__
#define __WDSPinChangedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESSERIALCOMMUNICATIONEXPORT
@interface WDSPinChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) WDSSerialPinChange pinChange;
@end

#endif // __WDSPinChangedEventArgs_DEFINED__

