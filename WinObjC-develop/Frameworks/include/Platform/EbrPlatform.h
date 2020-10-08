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

#pragma once

#include <sys/types.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __OBJC__
#include <MacTypes.h>
#endif

#include <StarboardExport.h>

struct EbrTimeval {
    unsigned __int64 tv_sec; /* seconds since Jan. 1, 1970 */
    unsigned int tv_usec; /* and microseconds */
};

struct stat;

SB_EXPORT int EbrStat(const char* filename, struct stat* ret);
SB_EXPORT int EbrStat64i32(const char* filename, struct _stat64i32* st);
SB_EXPORT int EbrAccess(const char* file, int mode);
SB_EXPORT int EbrFflush(int fd);

SB_EXPORT int EbrOpen(const char* file, int mode, int share);
SB_EXPORT int EbrOpenWithPermission(const char* file, int mode, int share, int pmode);
SB_EXPORT int EbrClose(int fd);
SB_EXPORT int EbrFstat(int fd, struct stat* ret);
SB_EXPORT int EbrFstat64i32(int fd, struct _stat64i32* ret);
SB_EXPORT int EbrRead(int fd, void* dest, size_t count);
SB_EXPORT int EbrWrite(int fd, const void* src, size_t count);
SB_EXPORT __int64 EbrLseek(int fd, __int64 pos, int whence);
SB_EXPORT __int64 EbrTell(int fd);
SB_EXPORT intptr_t EbrGetOSFHandle(int fd);
SB_EXPORT int EbrTruncate64(int fd, __int64 size);

SB_EXPORT bool EbrRename(const char* path1, const char* path2);
SB_EXPORT bool EbrUnlink(const char* path);
SB_EXPORT bool EbrMkdir(const char* path);

SB_EXPORT int EbrChmod(const char* path, int mode);

// Remove an item at this path, be it a file or directory:
SB_EXPORT bool EbrRemove(const char* path);
SB_EXPORT bool EbrRemoveEmptyDir(const char* path);

struct _EbrDirEnt {
    char fileName[4096];
    bool isDir;
};

typedef struct _EbrDirEnt EbrDirEnt;

struct EbrDir;

class EbrDirReader {
public:
    virtual bool readNext(EbrDir* curDir, EbrDirEnt* end) = 0;
    virtual ~EbrDirReader() {
    }
};

SB_EXPORT bool EbrIsDir(const char* path);
SB_EXPORT EbrDir* EbrOpenDir(const char* path);
SB_EXPORT bool EbrReadDir(EbrDir* pDir, EbrDirEnt* ent);
SB_EXPORT void EbrCloseDir(EbrDir* pDir);

SB_EXPORT int EbrGetTimeOfDay(struct EbrTimeval* curtime);
SB_EXPORT double EbrGetMediaTime();
SB_EXPORT int EbrGetWantedOrientation();

SB_EXPORT const wchar_t* IwGetWritableFolder();
SB_EXPORT void IwSetWritableFolder(const wchar_t* folder);

SB_EXPORT void EbrBlockIfBackground();

typedef void* EbrEvent;

SB_EXPORT void EbrEventInit(EbrEvent* pEvent);
SB_EXPORT void EbrEventSignal(EbrEvent event);
SB_EXPORT void EbrEventWait(EbrEvent event);
SB_EXPORT bool EbrEventTryWait(EbrEvent event);
SB_EXPORT bool EbrEventTimedWait(EbrEvent event, double seconds);

typedef struct {
    int WakeupSocketRead, WakeupSocketWrite;
    void *fdread, *fdwrite, *fderror;
    int max, result;
} SocketWait;

SB_EXPORT int EbrEventTimedMultipleWait(EbrEvent* events, int numEvents, double timeout, SocketWait* sockets);
SB_EXPORT void EbrEventDestroy(EbrEvent event);
