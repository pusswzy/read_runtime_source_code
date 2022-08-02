//
//  LXDAppFluecyMonitor.m
//  LXDAppFluecyMonitor
//
//  Created by linxinda on 2017/3/22.
//  Copyright © 2017年 Jolimark. All rights reserved.
//

#import "LXDAppFluecyMonitor.h"
#import "LXDBacktraceLogger.h"


#define LXD_DEPRECATED_POLLUTE_MAIN_QUEUE


@interface LXDAppFluecyMonitor ()

@property (nonatomic, assign) int timeOut;
@property (nonatomic, assign) BOOL isMonitoring;

@property (nonatomic, assign) CFRunLoopObserverRef observer;
@property (nonatomic, assign) CFRunLoopActivity currentActivity;

@property (nonatomic, strong) dispatch_semaphore_t semphore;
@property (nonatomic, strong) dispatch_semaphore_t eventSemphore;

@end


#define LXD_SEMPHORE_SUCCESS 0
static NSTimeInterval lxd_restore_interval = 5;
static NSTimeInterval lxd_time_out_interval = 1;
static int64_t lxd_wait_interval = 200 * NSEC_PER_MSEC;


/*!
 *  @brief  监听runloop状态为before waiting状态下是否卡顿
 */
static inline dispatch_queue_t lxd_event_monitor_queue() {
    static dispatch_queue_t lxd_event_monitor_queue;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        lxd_event_monitor_queue = dispatch_queue_create("com.sindrilin.lxd_event_monitor_queue", NULL);
    });
    return lxd_event_monitor_queue;
}

/*!
 *  @brief  监听runloop状态在after waiting和before sources之间
 */
static inline dispatch_queue_t lxd_fluecy_monitor_queue() {
    static dispatch_queue_t lxd_fluecy_monitor_queue;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        lxd_fluecy_monitor_queue = dispatch_queue_create("com.sindrilin.lxd_monitor_queue", NULL);
    });
    return lxd_fluecy_monitor_queue;
}

#define LOG_RUNLOOP_ACTIVITY 0
static void lxdRunLoopObserverCallback(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void * info) {
    SHAREDMONITOR.currentActivity = activity;
    dispatch_semaphore_signal(SHAREDMONITOR.semphore);
#if LOG_RUNLOOP_ACTIVITY
    switch (activity) {
        case kCFRunLoopEntry:
            NSLog(@"runloop entry");
            break;
            
        case kCFRunLoopExit:
            NSLog(@"runloop exit");
            break;
            
        case kCFRunLoopAfterWaiting:
            NSLog(@"runloop after waiting");
            break;
            
        case kCFRunLoopBeforeTimers:
            NSLog(@"runloop before timers");
            break;
            
        case kCFRunLoopBeforeSources:
            NSLog(@"runloop before sources");
            break;
            
        case kCFRunLoopBeforeWaiting:
            NSLog(@"runloop before waiting");
            break;
            
        default:
            break;
    }
#endif
};




@implementation LXDAppFluecyMonitor


#pragma mark - Singleton override
+ (instancetype)sharedMonitor {
    static LXDAppFluecyMonitor * sharedMonitor;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        sharedMonitor = [[super allocWithZone: NSDefaultMallocZone()] init];
        [sharedMonitor commonInit];
    });
    return sharedMonitor;
}

+ (instancetype)allocWithZone: (struct _NSZone *)zone {
    return [self sharedMonitor];
}

- (void)dealloc {
    [self stopMonitoring];
}

- (void)commonInit {
    self.semphore = dispatch_semaphore_create(0);
    self.eventSemphore = dispatch_semaphore_create(0);
}


#pragma mark - Public
- (void)startMonitoring {
    if (_isMonitoring) { return; }
    _isMonitoring = YES;
    CFRunLoopObserverContext context = {
        0,
        (__bridge void *)self,
        NULL,
        NULL
    };
    _observer = CFRunLoopObserverCreate(kCFAllocatorDefault, kCFRunLoopAllActivities, YES, 0, &lxdRunLoopObserverCallback, &context);
    CFRunLoopAddObserver(CFRunLoopGetMain(), _observer, kCFRunLoopCommonModes);
    /*
     与UI卡顿不同的事，事件处理往往是处在kCFRunLoopBeforeWaiting的状态下收到了Sources事件源，最开始笔者尝试同样以多个时间片段查询的方式处理。但是由于主线程的RunLoop在闲置时基本处于Before Waiting状态，这就导致了即便没有发生任何卡顿，这种检测方式也总能认定主线程处在卡顿状态。

     就在这时候寒神(南栀倾寒)推荐给我一套Swift的卡顿检测第三方ANREye，这套卡顿监控方案大致思路为：创建一个子线程进行循环检测，每次检测时设置标记位为YES，然后派发任务到主线程中将标记位设置为NO。接着子线程沉睡超时阙值时长，判断标志位是否成功设置成NO。如果没有说明主线程发生了卡顿，无法处理派发任务：


     */
    dispatch_async(lxd_event_monitor_queue(), ^{
        NSLog(@"123123123");
        while (SHAREDMONITOR.isMonitoring) {
            if (SHAREDMONITOR.currentActivity == kCFRunLoopBeforeWaiting) {
                __block BOOL timeOut = YES;
                dispatch_async(dispatch_get_main_queue(), ^{
                    timeOut = NO;
                    dispatch_semaphore_signal(SHAREDMONITOR.eventSemphore);
                });
                [NSThread sleepForTimeInterval: lxd_time_out_interval];
                if (timeOut) {
                    [LXDBacktraceLogger lxd_logMain];
                }
                dispatch_wait(SHAREDMONITOR.eventSemphore, DISPATCH_TIME_FOREVER);
            }
        }
        NSLog(@"zzzzzzz");
    });
    
    dispatch_async(lxd_fluecy_monitor_queue(), ^{
        while (SHAREDMONITOR.isMonitoring) {
            long waitTime = dispatch_semaphore_wait(self.semphore, dispatch_time(DISPATCH_TIME_NOW, lxd_wait_interval));
            if (waitTime != LXD_SEMPHORE_SUCCESS) {
                if (!SHAREDMONITOR.observer) {
                    SHAREDMONITOR.timeOut = 0;
                    [SHAREDMONITOR stopMonitoring];
                    continue;
                }
                if (SHAREDMONITOR.currentActivity == kCFRunLoopBeforeSources || SHAREDMONITOR.currentActivity == kCFRunLoopAfterWaiting) {
                    if (++SHAREDMONITOR.timeOut < 5) {
                        continue;
                    }
                    [LXDBacktraceLogger lxd_logMain];
                    [NSThread sleepForTimeInterval: lxd_restore_interval];
                }
            }
            SHAREDMONITOR.timeOut = 0;
        }
    });
}

- (void)stopMonitoring {
    if (!_isMonitoring) { return; }
    _isMonitoring = NO;
    
    CFRunLoopRemoveObserver(CFRunLoopGetMain(), _observer, kCFRunLoopCommonModes);
    CFRelease(_observer);
    _observer = nil;
}


@end
