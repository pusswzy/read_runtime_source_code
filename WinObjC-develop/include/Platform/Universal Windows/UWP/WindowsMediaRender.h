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

// WindowsMediaRender.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWPWINDOWSMEDIARENDEREXPORT
#define OBJCUWPWINDOWSMEDIARENDEREXPORT __declspec(dllimport)
#ifndef IN_WinObjC_Frameworks_UWP_BUILD
#pragma comment(lib, "ObjCUWPWindowsMediaRender.lib")
#endif
#endif
#include <UWP/interopBase.h>

// Windows.Media.Render.AudioRenderCategory
enum _WMRAudioRenderCategory {
    WMRAudioRenderCategoryOther = 0,
    WMRAudioRenderCategoryForegroundOnlyMedia = 1,
    WMRAudioRenderCategoryBackgroundCapableMedia = 2,
    WMRAudioRenderCategoryCommunications = 3,
    WMRAudioRenderCategoryAlerts = 4,
    WMRAudioRenderCategorySoundEffects = 5,
    WMRAudioRenderCategoryGameEffects = 6,
    WMRAudioRenderCategoryGameMedia = 7,
    WMRAudioRenderCategoryGameChat = 8,
    WMRAudioRenderCategorySpeech = 9,
    WMRAudioRenderCategoryMovie = 10,
    WMRAudioRenderCategoryMedia = 11,
};
typedef unsigned WMRAudioRenderCategory;

#import <Foundation/Foundation.h>

