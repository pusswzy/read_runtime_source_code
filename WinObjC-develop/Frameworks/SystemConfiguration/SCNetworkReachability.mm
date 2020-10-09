//******************************************************************************
//
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

#include <winsock2.h>
#include <Ws2tcpip.h>

#include "Starboard.h"
#include <Foundation/NSOperation.h>
#include "SystemConfiguration/SystemConfiguration.h"
#include "SystemConfiguration/SCNetworkReachability.h"
#import "CppWinRTHelpers.h"

#include "NSRunLoopSource.h"
#include "NSRunLoop+Internal.h"

#include "COMIncludes.h"
#import <winrt/Windows.Networking.h>
#import <winrt/Windows.Networking.Connectivity.h>
#import <winrt/Windows.Networking.Sockets.h>
#include "COMIncludes_End.h"

#include <objc/objc-arc.h>
#include <string>

using namespace winrt::Windows::Networking;
using namespace winrt::Windows::Networking::Connectivity;
using namespace winrt::Windows::Networking::Sockets;
namespace WF = winrt::Windows::Foundation;
namespace WFC = winrt::Windows::Foundation::Collections;

static __declspec(thread) int SCLastError = 0;

static SCNetworkReachabilityFlags _globalReachableFlags = 0;
static NSMutableArray* _allReachabilityOperations;
static NSLock* _allReachabilityOperationsLock;

@class SCNetworkReachability;

//  Stores a weak reference to the SCNetworkReachability object
//  so that a global list of all objects can be coherently maintained
@interface SCNetworkReachabilityWeakRef : NSObject {
    SCNetworkReachability* _weakObj;
}
@end

@implementation SCNetworkReachabilityWeakRef
- (instancetype)initWithObject:(SCNetworkReachability*)obj {
    objc_storeWeak(&_weakObj, obj);
    [_allReachabilityOperationsLock lock];
    [_allReachabilityOperations addObject:self];
    [_allReachabilityOperationsLock unlock];

    return self;
}

- (SCNetworkReachability*)getRef {
    return objc_loadWeak(&_weakObj);
}

- (void)dealloc {
    [_allReachabilityOperationsLock lock];
    [_allReachabilityOperations removeObject:self];
    [_allReachabilityOperationsLock unlock];

    [super dealloc];
}

+ (void)initialize {
    _allReachabilityOperations = (NSMutableArray*)CFArrayCreateMutable(NULL, 0, NULL);
    _allReachabilityOperationsLock = [NSLock new];
}
@end

//  Base class for network reachability object
//
//  _performReachabilityTest is called on every SCNetworkReachability object
//  when a network reachability condition is found
@interface SCNetworkReachability : NSObject {
@private
    woc::unique_cf<CFRunLoopSourceRef> _availabilityChangedSource;
    StrongId<NSMutableDictionary> _runLoopsScheduled;

    dispatch_queue_t _callbackQueue;
    BOOL _isPerformingCallback;

    BOOL _hasContext;
    SCNetworkReachabilityCallBack _callBack;
    SCNetworkReachabilityContext _context;
    SCNetworkReachabilityFlags _reachabilityFlags;

    StrongId<NSConditionLock> _reachabilityFlagsValid;

    StrongId<SCNetworkReachabilityWeakRef> _weakRef;
}

- (void)_performReachabilityTest;
@end

@implementation SCNetworkReachability
+ (void)initialize {
    if (self == [SCNetworkReachability class]) {
        NetworkInformation::NetworkStatusChanged(objcwinrt::callback([self](const WF::IInspectable&) { [self _networkStatusChanged]; }));
        [self _checkGlobalReachability];
    }
}

- (void)_performReachabilityTest {
    [NSException raiseWithLogging:@"SCNetworkReachabilityInternal"
                           format:@"_performReachabilityTest not implemented on SCNetworkReachability base class"];
}

+ (void)_testAllReachabilityObjects {
    @autoreleasepool {
        //  Go through every SCNetworkReachability object and instruct it to
        //  check it's reachability status
        [_allReachabilityOperationsLock lock];
        for (SCNetworkReachabilityWeakRef* cur in _allReachabilityOperations) {
            SCNetworkReachability* obj = [cur getRef];
            if (obj != nil) {
                [obj _performReachabilityTest];
            }
        }
        [_allReachabilityOperationsLock unlock];
    }
}

+ (void)_checkGlobalReachability {
    try {
        ConnectionProfile internetConnectionProfile = NetworkInformation::GetInternetConnectionProfile();
        if (internetConnectionProfile &&
            internetConnectionProfile.GetNetworkConnectivityLevel() == NetworkConnectivityLevel::InternetAccess) {
            SCNetworkReachabilityFlags newFlags = kSCNetworkReachabilityFlagsReachable;

            if (internetConnectionProfile.IsWwanConnectionProfile()) {
                newFlags |= kSCNetworkReachabilityFlagsIsWWAN;
            }
            _globalReachableFlags = newFlags;
        } else {
            _globalReachableFlags = 0;
        }
    } catch (...) {
        _globalReachableFlags = 0;
    }
}

+ (void)_networkStatusChanged {
    SCNetworkReachabilityFlags oldState = _globalReachableFlags;
    [self _checkGlobalReachability];

    if (_globalReachableFlags != oldState) {
        [self _testAllReachabilityObjects];
    }
}

- (instancetype)init {
    if (self = [super init]) {
        _runLoopsScheduled.attach([NSMutableDictionary new]);
        _reachabilityFlagsValid.attach([NSConditionLock new]);
        _weakRef.attach([[SCNetworkReachabilityWeakRef alloc] initWithObject:self]);
        _callbackQueue = dispatch_get_main_queue();

        // clang-format off
        CFRunLoopSourceContext ctxt{
                0,
                nullptr,
                CFRetain,
                CFRelease,
                (CFStringRef(*)(const void *))CFCopyDescription,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr
        };
        // clang-format on

        _availabilityChangedSource.reset(CFRunLoopSourceCreate(nullptr, 0, &ctxt));
    }

    return self;
}

- (void)_setReachabilityFlags:(SCNetworkReachabilityFlags)flags {
    [_reachabilityFlagsValid lock];
    _reachabilityFlags = flags;

    //  Flags are now valid
    [_reachabilityFlagsValid unlockWithCondition:TRUE];

    [self _availabilityChanged];
}

- (bool)hasReachabilityFlags {
    bool ret = false;
    [_reachabilityFlagsValid lock];
    if ([_reachabilityFlagsValid condition] == TRUE) {
        ret = true;
    }
    [_reachabilityFlagsValid unlock];

    return ret;
}

- (SCNetworkReachabilityFlags)getReachabilityFlags {
    SCNetworkReachabilityFlags ret;

    //  Wait
    [_reachabilityFlagsValid lockWhenCondition:TRUE];
    ret = _reachabilityFlags;
    [_reachabilityFlagsValid unlock];

    return ret;
}

- (void)_performCallback {
    if (_callBack != NULL) {
        _callBack((SCNetworkReachabilityRef)self, [self getReachabilityFlags], _hasContext ? _context.info : 0);
    }
}

- (void)_availabilityChanged {
    [_reachabilityFlagsValid lock];

    CFRunLoopSourceSignal(_availabilityChangedSource.get());

    for (NSString* curMode in _runLoopsScheduled.get()) {
        NSArray* runLoops = [_runLoopsScheduled objectForKey:curMode];
        for (id curRunLoop in runLoops) {
            CFRunLoopWakeUp((CFRunLoopRef)curRunLoop);
        }
    }

    if (_callbackQueue != NULL && _isPerformingCallback == FALSE) {
        _isPerformingCallback = TRUE;
        [self retain];
        dispatch_async(_callbackQueue, ^void() {
            [self _performCallback];
            [self release];
            _isPerformingCallback = FALSE;
        });
    }

    [_reachabilityFlagsValid unlock];
}

- (void)setCallback:(SCNetworkReachabilityCallBack)callback withContext:(SCNetworkReachabilityContext*)context {
    //  Retain the passed in callback
    if (context->retain != 0) {
        context->retain(_context.info);
    }

    //  Release the current callback
    if (_hasContext) {
        if (_context.release != 0) {
            _context.release(_context.info);
        }
    }

    _callBack = callback;

    if (context) {
        memcpy(&_context, context, sizeof(*context));
        _hasContext = TRUE;
    } else {
        _hasContext = FALSE;
    }
}

- (void)setCallbackQueue:(dispatch_queue_t)queue {
    [_reachabilityFlagsValid lock];

    if (queue != NULL)
        dispatch_retain(queue);
    if (_callbackQueue != NULL)
        dispatch_release(_callbackQueue);
    _callbackQueue = queue;

    if (_callbackQueue != NULL) {
        //  If we have a valid reachability status, signal it to all listeners
        if ([_reachabilityFlagsValid condition] == TRUE) {
            [self _availabilityChanged];
        }
    }
    [_reachabilityFlagsValid unlock];
}

- (void)scheduleInRunLoop:(CFRunLoopRef)runLoop forMode:(CFStringRef)mode {
    [_reachabilityFlagsValid lock];

    NSMutableArray* runLoops = [_runLoopsScheduled objectForKey:static_cast<NSString*>(mode)];
    if (runLoops == nil) {
        StrongId<NSMutableArray> runLoops = [NSMutableArray array];
        [_runLoopsScheduled objectForKey:static_cast<NSString*>(mode)];
        [_runLoopsScheduled setObject:runLoops forKey:static_cast<NSString*>(mode)];
    }

    if (![runLoops containsObject:(id)runLoop]) {
        [runLoops addObject:(id)runLoop];
        CFRunLoopAddSource(runLoop, _availabilityChangedSource.get(), mode);
    }

    //  If we have a valid reachability status, signal it to all listeners
    if ([_reachabilityFlagsValid condition] == TRUE) {
        [self _availabilityChanged];
    }
    [_reachabilityFlagsValid unlock];
}

- (BOOL)unscheduleFromRunLoop:(CFRunLoopRef)runLoop forMode:(CFStringRef)mode {
    BOOL ret = FALSE;
    [_reachabilityFlagsValid lock];

    if (_availabilityChangedSource) {
        NSMutableArray* runLoops = [_runLoopsScheduled objectForKey:static_cast<NSString*>(mode)];
        if (runLoops != nil) {
            if ([runLoops containsObject:(id)runLoop]) {
                [runLoops removeObject:(id)runLoop];
                CFRunLoopRemoveSource(runLoop, _availabilityChangedSource.get(), mode);
                ret = TRUE;
            }
        }
    }

    [_reachabilityFlagsValid unlock];

    return ret;
}

- (void)dealloc {
    if (_hasContext) {
        if (_context.release != 0) {
            _context.release(_context.info);
        }
    }
    if (_availabilityChangedSource) {
        for (NSString* curMode in _runLoopsScheduled.get()) {
            NSArray* runLoops = [_runLoopsScheduled objectForKey:curMode];
            for (id curRunLoop in runLoops) {
                CFRunLoopRemoveSource((CFRunLoopRef)curRunLoop, _availabilityChangedSource.get(), static_cast<CFStringRef>(curMode));
            }
        }
    }

    if (_callbackQueue != NULL) {
        dispatch_release(_callbackQueue);
    }
    [super dealloc];
}
@end

@interface SCNetworkReachabilityAddress : SCNetworkReachability {
    struct sockaddr _address;
}
@end

@interface SCNetworkReachabilityHostName : SCNetworkReachability {
    std::string _hostname;
}
@end

@implementation SCNetworkReachabilityAddress
- (instancetype)initWithAddress:(const struct sockaddr*)addr {
    [super init];
    memcpy(&_address, addr, sizeof(sockaddr));

    return self;
}

- (void)_performReachabilityTest {
    //  If the address is zero, simply check for internet connectivity
    if (((const struct sockaddr_in*)&_address)->sin_addr.s_addr == 0) {
        if (_globalReachableFlags != 0) {
            [self _setReachabilityFlags:_globalReachableFlags | kSCNetworkReachabilityFlagsReachable];
        } else {
            [self _setReachabilityFlags:0];
        }

        return;
    }
    WCHAR addressStr[64];
    DWORD addressStrLen = sizeof(addressStr);
    INT rc = WSAAddressToStringW((LPSOCKADDR)&_address, sizeof(struct sockaddr), NULL, addressStr, &addressStrLen);

    if (rc == 0 && addressStrLen > 0) {
        //  keep ourself around until the reachability test completes
        [self retain];

        HostName hostName(addressStr);
        WF::IAsyncOperation<WFC::IVectorView<EndpointPair>> async = DatagramSocket::GetEndpointPairsAsync(hostName, L"0");

        async.Completed(objcwinrt::callback([self](const WF::IAsyncOperation<WFC::IVectorView<EndpointPair>>& op, WF::AsyncStatus status) {
            if (status == WF::AsyncStatus::Completed) {
                if (op.GetResults().Size() > 0) {
                    [self _setReachabilityFlags:_globalReachableFlags | kSCNetworkReachabilityFlagsReachable];
                }
            } else {
                [self _setReachabilityFlags:0];
            }

            [self release];
        }));
    } else {
        //  Address error, unreachable
        [self _setReachabilityFlags:0];
    }
}
@end

@implementation SCNetworkReachabilityHostName
- (instancetype)initWithHostName:(const char*)hostname {
    [super init];
    _hostname.assign(hostname);

    return self;
}

- (void)dealloc {
    [super dealloc];
}

- (void)_performReachabilityTest {
    //  keep ourself around until the reachability test completes
    [self retain];

    NSString* hostStr = [NSString stringWithCString:_hostname.data()];

    //  To extract just the host name in case we're fed an URL
    NSURL* url = [NSURL URLWithString:hostStr];

    HostName hostName = nullptr;
    if (url.host.length > 0) {
        hostName = HostName(objcwinrt::string(url.host));
    } else {
        hostName = HostName(objcwinrt::string(hostStr));
    }

    WF::IAsyncOperation<WFC::IVectorView<EndpointPair>> async = DatagramSocket::GetEndpointPairsAsync(hostName, L"0");

    async.Completed(objcwinrt::callback([self](const WF::IAsyncOperation<WFC::IVectorView<EndpointPair>>& op, WF::AsyncStatus status) {
        if (status == WF::AsyncStatus::Completed) {
            if (op.GetResults().Size() > 0) {
                [self _setReachabilityFlags:_globalReachableFlags | kSCNetworkReachabilityFlagsReachable];
            }
        } else {
            [self _setReachabilityFlags:0];
        }

        [self release];
    }));
}
@end

/**
 @Status Interoperable
*/
SCNetworkReachabilityRef SCNetworkReachabilityCreateWithAddress(CFAllocatorRef allocator, const sockaddr* address) {
    SCNetworkReachability* ret = [[SCNetworkReachabilityAddress alloc] initWithAddress:address];

    [ret _performReachabilityTest];

    return (SCNetworkReachabilityRef)ret;
}

/**
 @Status Interoperable
*/
SCNetworkReachabilityRef SCNetworkReachabilityCreateWithName(CFAllocatorRef allocator, const char* hostname) {
    SCNetworkReachability* ret = [[SCNetworkReachabilityHostName alloc] initWithHostName:hostname];

    [ret _performReachabilityTest];

    return (SCNetworkReachabilityRef)ret;
}

/**
 @Status Interoperable
*/
Boolean SCNetworkReachabilityGetFlags(SCNetworkReachabilityRef target, SCNetworkReachabilityFlags* retFlags) {
    SCNetworkReachability* scNetwork = (SCNetworkReachability*)target;

    if (![scNetwork hasReachabilityFlags]) {
        return FALSE;
    }

    *retFlags = [scNetwork getReachabilityFlags];

    return TRUE;
}

/**
 @Status Interoperable
*/
Boolean SCNetworkReachabilitySetCallback(SCNetworkReachabilityRef target,
                                         SCNetworkReachabilityCallBack callout,
                                         SCNetworkReachabilityContext* context) {
    SCNetworkReachability* scNetwork = (SCNetworkReachability*)target;
    [scNetwork setCallback:callout withContext:context];

    return TRUE;
}

/**
 @Status Stub
*/
Boolean SCNetworkReachabilitySetDispatchQueue(SCNetworkReachabilityRef target, dispatch_queue_t queue) {
    UNIMPLEMENTED();
    SCNetworkReachability* scNetwork = (SCNetworkReachability*)target;

    [scNetwork setCallbackQueue:queue];

    return TRUE;
}

/**
 @Status Interoperable
*/
Boolean SCNetworkReachabilityScheduleWithRunLoop(SCNetworkReachabilityRef target, CFRunLoopRef runloop, CFStringRef mode) {
    SCNetworkReachability* scNetwork = (SCNetworkReachability*)target;

    [scNetwork scheduleInRunLoop:runloop forMode:mode];

    return TRUE;
}

/**
 @Status Interoperable
*/
Boolean SCNetworkReachabilityUnscheduleFromRunLoop(SCNetworkReachabilityRef target, CFRunLoopRef runloop, CFStringRef mode) {
    SCNetworkReachability* scNetwork = (SCNetworkReachability*)target;

    return [scNetwork unscheduleFromRunLoop:runloop forMode:mode];
}

/**
 @Status Stub
*/
int SCError(void) {
    UNIMPLEMENTED();
    return SCLastError;
}

/**
 @Status Stub
*/
const char* SCErrorString(int status) {
    UNIMPLEMENTED();
    return "Not implemented";
}
