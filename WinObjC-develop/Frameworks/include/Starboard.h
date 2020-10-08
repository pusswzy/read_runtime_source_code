//******************************************************************************
//
// Copyright (c) 2016 Intel Corporation. All rights reserved.
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

#include "LoggingNative.h"

#include <StarboardExport.h>

// Interface should not be defined for Objective-C code
#ifdef __OBJC__

#ifdef interface
#undef interface
#endif

#endif

#define fatal_printf(...)
#define EbrShutdownAV()
#define idp(protocol) id<protocol>

#include <assert.h>

#define logPerf(...)

#ifdef __OBJC__

static const float kPi = 3.14159265358979323846f;
static const double kPi_d = 3.14159265358979323846;

#define IS_NEAR(val, comp, amt) (fabs((val) - (comp)) <= (amt))

class IWLazyClassLookup {
private:
    id _clsRef;
    const char* _clsName;

public:
    IWLazyClassLookup(const char* name) {
        _clsName = name;
    }

    operator id();
};

template <typename T>
class IWLazyIvarLookup {
private:
    IWLazyClassLookup& _cls;
    const char* _ivarName;
    ptrdiff_t _offset;
    bool _initialized;

    ptrdiff_t offset(const void* obj) {
        if (!_initialized) {
            Ivar var = class_getInstanceVariable(_cls, _ivarName);
            if (!var) {
                TraceCritical(L"Starboard", L"Couldn't lazy lookup offset of ivar %hs", _ivarName);
                assert(var);
            }
            _offset = ivar_getOffset(var);
            _initialized = true;
        }

        return _offset;
    }

public:
    IWLazyIvarLookup(IWLazyClassLookup& cls, const char* name) : _cls(cls), _ivarName(name), _initialized(false), _offset(0) {
    }

    T& member(const void* obj) {
        void* ret = (((uint8_t*)obj) + offset(obj));

        return *((T*)ret);
    }
};
#else
typedef void* id;
#endif

#include "ErrorHandling.h"

// This has to be after the error handling header since that brings in FAIL_FAST_IF_MSG. The error-handling code uses IWLazyClassLookup
// so this can't be before ErrorHandling's include.
#ifdef __OBJC__
inline IWLazyClassLookup::operator id() {
    if (_clsRef == nil) {
        _clsRef = objc_getClass(_clsName);
        THROW_NS_IF_NULL_MSG(HRESULT_FROM_WIN32(ERROR_NOT_READY), _clsRef, "Couldn't lazy lookup objc class %hs\n", _clsName);
    }

    return _clsRef;
}
#endif // __OBJC__

#ifdef __cplusplus
class EbrFile;
#endif

SB_EXPORT int EbrIncrement(int volatile* var);
SB_EXPORT int EbrDecrement(int volatile* var);
SB_EXPORT int EbrCompareExchange(int volatile* Destination, int Exchange, int Comperand);
SB_EXPORT void EbrSleep(__int64 nanoseconds);

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

enum EbrInputEventType {
    mouseDown = 0x01,
    mouseUp = 0x06,
    mouseMove = 0x02,

    rbuttonDown = 0x08,
    rbuttonUp = 0x09,

    keyPressed = 0x500
};

struct EbrInputEvent {
    int type;
    int subtype;
    int mouseEvent;
    float x, y;
    short int fingerCount;
    char numPoints;
    float velocityX, velocityY;
    double touchTime;
};

#define idt(type) type*

#ifdef __OBJC__
extern "C" BOOL object_isMethodFromClass(id dwObj, SEL pSel, const char* fromClass);
extern "C" BOOL isOSTarget(NSString* versionStr);
#endif

typedef unsigned __int64 uint64_t;
typedef __int64 int64_t;
typedef unsigned long DWORD;
typedef void* HANDLE;
typedef unsigned char BYTE;
typedef unsigned short WORD;

#define USE_GLES2 1
#define U_STATIC_IMPLEMENTATION 1

#include "Platform/EbrPlatform.h"

struct CAPoint3D {
    float x, y, z;

    CAPoint3D() {
        x = 0;
        y = 0;
        z = 0;
    }

    CAPoint3D(const CAPoint3D& copy) {
        x = copy.x;
        y = copy.y;
        z = copy.z;
    }

    CAPoint3D(float init_x, float init_y, float init_z) {
        x = init_x;
        y = init_y;
        z = init_z;
    }

    CAPoint3D operator+(const CAPoint3D& v) const {
        return CAPoint3D(x + v.x, y + v.y, z + v.z);
    }

    CAPoint3D operator-(const CAPoint3D& v) const {
        return CAPoint3D(x - v.x, y - v.y, z - v.z);
    }

    float dot(const CAPoint3D& p2) const {
        return (x * p2.x) + (y * p2.y) + (z * p2.z);
    }
};

inline CAPoint3D operator*(const CAPoint3D& v, float f) {
    return CAPoint3D(v.x * f, v.y * f, v.z * f);
}

inline CAPoint3D operator*(float f, const CAPoint3D& v) {
    return CAPoint3D(v.x * f, v.y * f, v.z * f);
}

#include "Starboard/SmartTypes.h"
