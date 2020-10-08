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

#ifndef LOCALAUTHENTICATION_IMPEXP
#define LOCALAUTHENTICATION_IMPEXP __declspec(dllimport)
#endif

#ifndef LOCALAUTHENTICATION_EXPORT
#ifdef __cplusplus
#define LOCALAUTHENTICATION_EXPORT LOCALAUTHENTICATION_IMPEXP extern "C"
#define LOCALAUTHENTICATION_EXPORT_CLASS LOCALAUTHENTICATION_IMPEXP
#else
#define LOCALAUTHENTICATION_EXPORT LOCALAUTHENTICATION_IMPEXP extern
#define LOCALAUTHENTICATION_EXPORT_CLASS LOCALAUTHENTICATION_IMPEXP
#endif
#endif

#ifndef LOCALAUTHENTICATION_EXTERNC_BEGIN
#if defined(__cplusplus)
#define LOCALAUTHENTICATION_EXTERNC_BEGIN extern "C" {
#define LOCALAUTHENTICATION_EXTERNC_END }
#else
#define LOCALAUTHENTICATION_EXTERNC_BEGIN
#define LOCALAUTHENTICATION_EXTERNC_END
#endif
#endif
