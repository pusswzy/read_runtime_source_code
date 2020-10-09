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

// WindowsDevicesMidi.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSDEVICESMIDIEXPORT
#define OBJCUWPWINDOWSDEVICESMIDIEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsDevicesMidi.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDMMidiNoteOffMessage, WDMMidiNoteOnMessage, WDMMidiPolyphonicKeyPressureMessage, WDMMidiControlChangeMessage, WDMMidiProgramChangeMessage, WDMMidiChannelPressureMessage, WDMMidiPitchBendChangeMessage, WDMMidiSystemExclusiveMessage, WDMMidiTimeCodeMessage, WDMMidiSongPositionPointerMessage, WDMMidiSongSelectMessage, WDMMidiTuneRequestMessage, WDMMidiTimingClockMessage, WDMMidiStartMessage, WDMMidiContinueMessage, WDMMidiStopMessage, WDMMidiActiveSensingMessage, WDMMidiSystemResetMessage, WDMMidiMessageReceivedEventArgs, WDMMidiInPort, WDMMidiOutPort, WDMMidiSynthesizer;
@protocol WDMIMidiMessage, WDMIMidiNoteOffMessage, WDMIMidiNoteOnMessage, WDMIMidiPolyphonicKeyPressureMessage, WDMIMidiControlChangeMessage, WDMIMidiProgramChangeMessage, WDMIMidiChannelPressureMessage, WDMIMidiPitchBendChangeMessage, WDMIMidiTimeCodeMessage, WDMIMidiSongPositionPointerMessage, WDMIMidiSongSelectMessage, WDMIMidiNoteOffMessageFactory, WDMIMidiNoteOnMessageFactory, WDMIMidiPolyphonicKeyPressureMessageFactory, WDMIMidiControlChangeMessageFactory, WDMIMidiProgramChangeMessageFactory, WDMIMidiChannelPressureMessageFactory, WDMIMidiPitchBendChangeMessageFactory, WDMIMidiSystemExclusiveMessageFactory, WDMIMidiTimeCodeMessageFactory, WDMIMidiSongPositionPointerMessageFactory, WDMIMidiSongSelectMessageFactory, WDMIMidiMessageReceivedEventArgs, WDMIMidiInPortStatics, WDMIMidiOutPortStatics, WDMIMidiOutPort, WDMIMidiInPort, WDMIMidiSynthesizerStatics, WDMIMidiSynthesizer;

// Windows.Devices.Midi.MidiMessageType
enum _WDMMidiMessageType {
    WDMMidiMessageTypeNone = 0,
    WDMMidiMessageTypeNoteOff = 128,
    WDMMidiMessageTypeNoteOn = 144,
    WDMMidiMessageTypePolyphonicKeyPressure = 160,
    WDMMidiMessageTypeControlChange = 176,
    WDMMidiMessageTypeProgramChange = 192,
    WDMMidiMessageTypeChannelPressure = 208,
    WDMMidiMessageTypePitchBendChange = 224,
    WDMMidiMessageTypeSystemExclusive = 240,
    WDMMidiMessageTypeMidiTimeCode = 241,
    WDMMidiMessageTypeSongPositionPointer = 242,
    WDMMidiMessageTypeSongSelect = 243,
    WDMMidiMessageTypeTuneRequest = 246,
    WDMMidiMessageTypeEndSystemExclusive = 247,
    WDMMidiMessageTypeTimingClock = 248,
    WDMMidiMessageTypeStart = 250,
    WDMMidiMessageTypeContinue = 251,
    WDMMidiMessageTypeStop = 252,
    WDMMidiMessageTypeActiveSensing = 254,
    WDMMidiMessageTypeSystemReset = 255,
};
typedef unsigned WDMMidiMessageType;

#include "WindowsDevicesEnumeration.h"
#include "WindowsFoundation.h"
#include "WindowsStorageStreams.h"

#import <Foundation/Foundation.h>

// Windows.Devices.Midi.IMidiMessage
#ifndef __WDMIMidiMessage_DEFINED__
#define __WDMIMidiMessage_DEFINED__

@protocol WDMIMidiMessage
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMIMidiMessage : RTObject <WDMIMidiMessage>
@end

#endif // __WDMIMidiMessage_DEFINED__

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.Midi.IMidiOutPort
#ifndef __WDMIMidiOutPort_DEFINED__
#define __WDMIMidiOutPort_DEFINED__

@protocol WDMIMidiOutPort <WFIClosable>
@property (readonly) NSString * deviceId;
- (void)sendMessage:(RTObject<WDMIMidiMessage>*)midiMessage;
- (void)sendBuffer:(RTObject<WSSIBuffer>*)midiData;
- (void)close;
@end

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMIMidiOutPort : RTObject <WDMIMidiOutPort>
@end

#endif // __WDMIMidiOutPort_DEFINED__

// Windows.Devices.Midi.MidiNoteOffMessage
#ifndef __WDMMidiNoteOffMessage_DEFINED__
#define __WDMMidiNoteOffMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiNoteOffMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiNoteOffMessage*)makeMidiNoteOffMessage:(uint8_t)channel note:(uint8_t)note velocity:(uint8_t)velocity ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t channel;
@property (readonly) uint8_t note;
@property (readonly) uint8_t velocity;
@end

#endif // __WDMMidiNoteOffMessage_DEFINED__

// Windows.Devices.Midi.MidiNoteOnMessage
#ifndef __WDMMidiNoteOnMessage_DEFINED__
#define __WDMMidiNoteOnMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiNoteOnMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiNoteOnMessage*)makeMidiNoteOnMessage:(uint8_t)channel note:(uint8_t)note velocity:(uint8_t)velocity ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t channel;
@property (readonly) uint8_t note;
@property (readonly) uint8_t velocity;
@end

#endif // __WDMMidiNoteOnMessage_DEFINED__

// Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
#ifndef __WDMMidiPolyphonicKeyPressureMessage_DEFINED__
#define __WDMMidiPolyphonicKeyPressureMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiPolyphonicKeyPressureMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiPolyphonicKeyPressureMessage*)makeMidiPolyphonicKeyPressureMessage:(uint8_t)channel note:(uint8_t)note pressure:(uint8_t)pressure ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t channel;
@property (readonly) uint8_t note;
@property (readonly) uint8_t pressure;
@end

#endif // __WDMMidiPolyphonicKeyPressureMessage_DEFINED__

// Windows.Devices.Midi.MidiControlChangeMessage
#ifndef __WDMMidiControlChangeMessage_DEFINED__
#define __WDMMidiControlChangeMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiControlChangeMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiControlChangeMessage*)makeMidiControlChangeMessage:(uint8_t)channel controller:(uint8_t)controller controlValue:(uint8_t)controlValue ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) uint8_t channel;
@property (readonly) uint8_t controlValue;
@property (readonly) uint8_t controller;
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiControlChangeMessage_DEFINED__

// Windows.Devices.Midi.MidiProgramChangeMessage
#ifndef __WDMMidiProgramChangeMessage_DEFINED__
#define __WDMMidiProgramChangeMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiProgramChangeMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiProgramChangeMessage*)makeMidiProgramChangeMessage:(uint8_t)channel program:(uint8_t)program ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t channel;
@property (readonly) uint8_t program;
@end

#endif // __WDMMidiProgramChangeMessage_DEFINED__

// Windows.Devices.Midi.MidiChannelPressureMessage
#ifndef __WDMMidiChannelPressureMessage_DEFINED__
#define __WDMMidiChannelPressureMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiChannelPressureMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiChannelPressureMessage*)makeMidiChannelPressureMessage:(uint8_t)channel pressure:(uint8_t)pressure ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) uint8_t channel;
@property (readonly) uint8_t pressure;
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiChannelPressureMessage_DEFINED__

// Windows.Devices.Midi.MidiPitchBendChangeMessage
#ifndef __WDMMidiPitchBendChangeMessage_DEFINED__
#define __WDMMidiPitchBendChangeMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiPitchBendChangeMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiPitchBendChangeMessage*)makeMidiPitchBendChangeMessage:(uint8_t)channel bend:(unsigned short)bend ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) unsigned short bend;
@property (readonly) uint8_t channel;
@end

#endif // __WDMMidiPitchBendChangeMessage_DEFINED__

// Windows.Devices.Midi.MidiSystemExclusiveMessage
#ifndef __WDMMidiSystemExclusiveMessage_DEFINED__
#define __WDMMidiSystemExclusiveMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiSystemExclusiveMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiSystemExclusiveMessage*)makeMidiSystemExclusiveMessage:(RTObject<WSSIBuffer>*)rawData ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiSystemExclusiveMessage_DEFINED__

// Windows.Devices.Midi.MidiTimeCodeMessage
#ifndef __WDMMidiTimeCodeMessage_DEFINED__
#define __WDMMidiTimeCodeMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiTimeCodeMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiTimeCodeMessage*)makeMidiTimeCodeMessage:(uint8_t)frameType values:(uint8_t)values ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t frameType;
@property (readonly) uint8_t values;
@end

#endif // __WDMMidiTimeCodeMessage_DEFINED__

// Windows.Devices.Midi.MidiSongPositionPointerMessage
#ifndef __WDMMidiSongPositionPointerMessage_DEFINED__
#define __WDMMidiSongPositionPointerMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiSongPositionPointerMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiSongPositionPointerMessage*)makeMidiSongPositionPointerMessage:(unsigned short)beats ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) unsigned short beats;
@end

#endif // __WDMMidiSongPositionPointerMessage_DEFINED__

// Windows.Devices.Midi.MidiSongSelectMessage
#ifndef __WDMMidiSongSelectMessage_DEFINED__
#define __WDMMidiSongSelectMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiSongSelectMessage : RTObject <WDMIMidiMessage>
+ (WDMMidiSongSelectMessage*)makeMidiSongSelectMessage:(uint8_t)song ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@property (readonly) uint8_t song;
@end

#endif // __WDMMidiSongSelectMessage_DEFINED__

// Windows.Devices.Midi.MidiTuneRequestMessage
#ifndef __WDMMidiTuneRequestMessage_DEFINED__
#define __WDMMidiTuneRequestMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiTuneRequestMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiTuneRequestMessage_DEFINED__

// Windows.Devices.Midi.MidiTimingClockMessage
#ifndef __WDMMidiTimingClockMessage_DEFINED__
#define __WDMMidiTimingClockMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiTimingClockMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiTimingClockMessage_DEFINED__

// Windows.Devices.Midi.MidiStartMessage
#ifndef __WDMMidiStartMessage_DEFINED__
#define __WDMMidiStartMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiStartMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiStartMessage_DEFINED__

// Windows.Devices.Midi.MidiContinueMessage
#ifndef __WDMMidiContinueMessage_DEFINED__
#define __WDMMidiContinueMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiContinueMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiContinueMessage_DEFINED__

// Windows.Devices.Midi.MidiStopMessage
#ifndef __WDMMidiStopMessage_DEFINED__
#define __WDMMidiStopMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiStopMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiStopMessage_DEFINED__

// Windows.Devices.Midi.MidiActiveSensingMessage
#ifndef __WDMMidiActiveSensingMessage_DEFINED__
#define __WDMMidiActiveSensingMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiActiveSensingMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiActiveSensingMessage_DEFINED__

// Windows.Devices.Midi.MidiSystemResetMessage
#ifndef __WDMMidiSystemResetMessage_DEFINED__
#define __WDMMidiSystemResetMessage_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiSystemResetMessage : RTObject <WDMIMidiMessage>
+ (instancetype)make __attribute__ ((ns_returns_retained));
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WSSIBuffer>* rawData;
@property (readonly) WFTimeSpan* timestamp;
@property (readonly) WDMMidiMessageType type;
@end

#endif // __WDMMidiSystemResetMessage_DEFINED__

// Windows.Devices.Midi.MidiMessageReceivedEventArgs
#ifndef __WDMMidiMessageReceivedEventArgs_DEFINED__
#define __WDMMidiMessageReceivedEventArgs_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiMessageReceivedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) RTObject<WDMIMidiMessage>* message;
@end

#endif // __WDMMidiMessageReceivedEventArgs_DEFINED__

// Windows.Devices.Midi.MidiInPort
#ifndef __WDMMidiInPort_DEFINED__
#define __WDMMidiInPort_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiInPort : RTObject <WFIClosable>
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDMMidiInPort*))success failure:(void (^)(NSError*))failure;
+ (NSString *)getDeviceSelector;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
- (EventRegistrationToken)addMessageReceivedEvent:(void(^)(WDMMidiInPort*, WDMMidiMessageReceivedEventArgs*))del;
- (void)removeMessageReceivedEvent:(EventRegistrationToken)tok;
- (void)close;
@end

#endif // __WDMMidiInPort_DEFINED__

// Windows.Devices.Midi.MidiOutPort
#ifndef __WDMMidiOutPort_DEFINED__
#define __WDMMidiOutPort_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiOutPort : RTObject <WDMIMidiOutPort, WFIClosable>
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(RTObject<WDMIMidiOutPort>*))success failure:(void (^)(NSError*))failure;
+ (NSString *)getDeviceSelector;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
- (void)sendMessage:(RTObject<WDMIMidiMessage>*)midiMessage;
- (void)sendBuffer:(RTObject<WSSIBuffer>*)midiData;
- (void)close;
@end

#endif // __WDMMidiOutPort_DEFINED__

// Windows.Devices.Midi.MidiSynthesizer
#ifndef __WDMMidiSynthesizer_DEFINED__
#define __WDMMidiSynthesizer_DEFINED__

OBJCUWPWINDOWSDEVICESMIDIEXPORT
@interface WDMMidiSynthesizer : RTObject <WDMIMidiOutPort, WFIClosable>
+ (void)createAsyncWithSuccess:(void (^)(WDMMidiSynthesizer*))success failure:(void (^)(NSError*))failure;
+ (void)createFromAudioDeviceAsync:(WDEDeviceInformation*)audioDevice success:(void (^)(WDMMidiSynthesizer*))success failure:(void (^)(NSError*))failure;
+ (BOOL)isSynthesizer:(WDEDeviceInformation*)midiDevice;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj __attribute__ ((ns_returns_autoreleased));
#endif
@property (readonly) NSString * deviceId;
@property double volume;
@property (readonly) WDEDeviceInformation* audioDevice;
- (void)sendMessage:(RTObject<WDMIMidiMessage>*)midiMessage;
- (void)sendBuffer:(RTObject<WSSIBuffer>*)midiData;
- (void)close;
@end

#endif // __WDMMidiSynthesizer_DEFINED__

