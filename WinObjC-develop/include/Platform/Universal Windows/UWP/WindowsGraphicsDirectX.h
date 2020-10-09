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

// WindowsGraphicsDirectX.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSGRAPHICSDIRECTXEXPORT
#define OBJCUWPWINDOWSGRAPHICSDIRECTXEXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsGraphicsDirectX.lib")
#endif
#endif
#include <UWP/interopBase.h>

// Windows.Graphics.DirectX.DirectXAlphaMode
enum _WGDDirectXAlphaMode {
    WGDDirectXAlphaModeUnspecified = 0,
    WGDDirectXAlphaModePremultiplied = 1,
    WGDDirectXAlphaModeStraight = 2,
    WGDDirectXAlphaModeIgnore = 3,
};
typedef unsigned WGDDirectXAlphaMode;

// Windows.Graphics.DirectX.DirectXPixelFormat
enum _WGDDirectXPixelFormat {
    WGDDirectXPixelFormatUnknown = 0,
    WGDDirectXPixelFormatR32G32B32A32Typeless = 1,
    WGDDirectXPixelFormatR32G32B32A32Float = 2,
    WGDDirectXPixelFormatR32G32B32A32UInt = 3,
    WGDDirectXPixelFormatR32G32B32A32Int = 4,
    WGDDirectXPixelFormatR32G32B32Typeless = 5,
    WGDDirectXPixelFormatR32G32B32Float = 6,
    WGDDirectXPixelFormatR32G32B32UInt = 7,
    WGDDirectXPixelFormatR32G32B32Int = 8,
    WGDDirectXPixelFormatR16G16B16A16Typeless = 9,
    WGDDirectXPixelFormatR16G16B16A16Float = 10,
    WGDDirectXPixelFormatR16G16B16A16UIntNormalized = 11,
    WGDDirectXPixelFormatR16G16B16A16UInt = 12,
    WGDDirectXPixelFormatR16G16B16A16IntNormalized = 13,
    WGDDirectXPixelFormatR16G16B16A16Int = 14,
    WGDDirectXPixelFormatR32G32Typeless = 15,
    WGDDirectXPixelFormatR32G32Float = 16,
    WGDDirectXPixelFormatR32G32UInt = 17,
    WGDDirectXPixelFormatR32G32Int = 18,
    WGDDirectXPixelFormatR32G8X24Typeless = 19,
    WGDDirectXPixelFormatD32FloatS8X24UInt = 20,
    WGDDirectXPixelFormatR32FloatX8X24Typeless = 21,
    WGDDirectXPixelFormatX32TypelessG8X24UInt = 22,
    WGDDirectXPixelFormatR10G10B10A2Typeless = 23,
    WGDDirectXPixelFormatR10G10B10A2UIntNormalized = 24,
    WGDDirectXPixelFormatR10G10B10A2UInt = 25,
    WGDDirectXPixelFormatR11G11B10Float = 26,
    WGDDirectXPixelFormatR8G8B8A8Typeless = 27,
    WGDDirectXPixelFormatR8G8B8A8UIntNormalized = 28,
    WGDDirectXPixelFormatR8G8B8A8UIntNormalizedSrgb = 29,
    WGDDirectXPixelFormatR8G8B8A8UInt = 30,
    WGDDirectXPixelFormatR8G8B8A8IntNormalized = 31,
    WGDDirectXPixelFormatR8G8B8A8Int = 32,
    WGDDirectXPixelFormatR16G16Typeless = 33,
    WGDDirectXPixelFormatR16G16Float = 34,
    WGDDirectXPixelFormatR16G16UIntNormalized = 35,
    WGDDirectXPixelFormatR16G16UInt = 36,
    WGDDirectXPixelFormatR16G16IntNormalized = 37,
    WGDDirectXPixelFormatR16G16Int = 38,
    WGDDirectXPixelFormatR32Typeless = 39,
    WGDDirectXPixelFormatD32Float = 40,
    WGDDirectXPixelFormatR32Float = 41,
    WGDDirectXPixelFormatR32UInt = 42,
    WGDDirectXPixelFormatR32Int = 43,
    WGDDirectXPixelFormatR24G8Typeless = 44,
    WGDDirectXPixelFormatD24UIntNormalizedS8UInt = 45,
    WGDDirectXPixelFormatR24UIntNormalizedX8Typeless = 46,
    WGDDirectXPixelFormatX24TypelessG8UInt = 47,
    WGDDirectXPixelFormatR8G8Typeless = 48,
    WGDDirectXPixelFormatR8G8UIntNormalized = 49,
    WGDDirectXPixelFormatR8G8UInt = 50,
    WGDDirectXPixelFormatR8G8IntNormalized = 51,
    WGDDirectXPixelFormatR8G8Int = 52,
    WGDDirectXPixelFormatR16Typeless = 53,
    WGDDirectXPixelFormatR16Float = 54,
    WGDDirectXPixelFormatD16UIntNormalized = 55,
    WGDDirectXPixelFormatR16UIntNormalized = 56,
    WGDDirectXPixelFormatR16UInt = 57,
    WGDDirectXPixelFormatR16IntNormalized = 58,
    WGDDirectXPixelFormatR16Int = 59,
    WGDDirectXPixelFormatR8Typeless = 60,
    WGDDirectXPixelFormatR8UIntNormalized = 61,
    WGDDirectXPixelFormatR8UInt = 62,
    WGDDirectXPixelFormatR8IntNormalized = 63,
    WGDDirectXPixelFormatR8Int = 64,
    WGDDirectXPixelFormatA8UIntNormalized = 65,
    WGDDirectXPixelFormatR1UIntNormalized = 66,
    WGDDirectXPixelFormatR9G9B9E5SharedExponent = 67,
    WGDDirectXPixelFormatR8G8B8G8UIntNormalized = 68,
    WGDDirectXPixelFormatG8R8G8B8UIntNormalized = 69,
    WGDDirectXPixelFormatBC1Typeless = 70,
    WGDDirectXPixelFormatBC1UIntNormalized = 71,
    WGDDirectXPixelFormatBC1UIntNormalizedSrgb = 72,
    WGDDirectXPixelFormatBC2Typeless = 73,
    WGDDirectXPixelFormatBC2UIntNormalized = 74,
    WGDDirectXPixelFormatBC2UIntNormalizedSrgb = 75,
    WGDDirectXPixelFormatBC3Typeless = 76,
    WGDDirectXPixelFormatBC3UIntNormalized = 77,
    WGDDirectXPixelFormatBC3UIntNormalizedSrgb = 78,
    WGDDirectXPixelFormatBC4Typeless = 79,
    WGDDirectXPixelFormatBC4UIntNormalized = 80,
    WGDDirectXPixelFormatBC4IntNormalized = 81,
    WGDDirectXPixelFormatBC5Typeless = 82,
    WGDDirectXPixelFormatBC5UIntNormalized = 83,
    WGDDirectXPixelFormatBC5IntNormalized = 84,
    WGDDirectXPixelFormatB5G6R5UIntNormalized = 85,
    WGDDirectXPixelFormatB5G5R5A1UIntNormalized = 86,
    WGDDirectXPixelFormatB8G8R8A8UIntNormalized = 87,
    WGDDirectXPixelFormatB8G8R8X8UIntNormalized = 88,
    WGDDirectXPixelFormatR10G10B10XRBiasA2UIntNormalized = 89,
    WGDDirectXPixelFormatB8G8R8A8Typeless = 90,
    WGDDirectXPixelFormatB8G8R8A8UIntNormalizedSrgb = 91,
    WGDDirectXPixelFormatB8G8R8X8Typeless = 92,
    WGDDirectXPixelFormatB8G8R8X8UIntNormalizedSrgb = 93,
    WGDDirectXPixelFormatBC6HTypeless = 94,
    WGDDirectXPixelFormatBC6H16UnsignedFloat = 95,
    WGDDirectXPixelFormatBC6H16Float = 96,
    WGDDirectXPixelFormatBC7Typeless = 97,
    WGDDirectXPixelFormatBC7UIntNormalized = 98,
    WGDDirectXPixelFormatBC7UIntNormalizedSrgb = 99,
    WGDDirectXPixelFormatAyuv = 100,
    WGDDirectXPixelFormatY410 = 101,
    WGDDirectXPixelFormatY416 = 102,
    WGDDirectXPixelFormatNV12 = 103,
    WGDDirectXPixelFormatP010 = 104,
    WGDDirectXPixelFormatP016 = 105,
    WGDDirectXPixelFormatOpaque420 = 106,
    WGDDirectXPixelFormatYuy2 = 107,
    WGDDirectXPixelFormatY210 = 108,
    WGDDirectXPixelFormatY216 = 109,
    WGDDirectXPixelFormatNV11 = 110,
    WGDDirectXPixelFormatAI44 = 111,
    WGDDirectXPixelFormatIA44 = 112,
    WGDDirectXPixelFormatP8 = 113,
    WGDDirectXPixelFormatA8P8 = 114,
    WGDDirectXPixelFormatB4G4R4A4UIntNormalized = 115,
    WGDDirectXPixelFormatP208 = 130,
    WGDDirectXPixelFormatV208 = 131,
    WGDDirectXPixelFormatV408 = 132,
};
typedef unsigned WGDDirectXPixelFormat;

#import <Foundation/Foundation.h>

