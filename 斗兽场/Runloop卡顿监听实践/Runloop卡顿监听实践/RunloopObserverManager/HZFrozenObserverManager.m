//
//  HZFrozenObserverManager.m
//  Runloop卡顿监听实践
//
//  Created by lihaoze on 2022/7/28.
//

#import "HZFrozenObserverManager.h"
#import "LXDBacktraceLogger.h"

@interface HZFrozenObserverManager ()
@property (nonatomic, assign) BOOL isObserveing;
@property (nonatomic, strong) dispatch_semaphore_t activitySemaphore;
@property (nonatomic, assign) CFRunLoopActivity currentRunloopActivity;
@end

static NSTimeInterval hz_observer_single_intervel = 50 * NSEC_PER_MSEC;
static NSTimeInterval hz_reset_stuck_intevel = 2.0f;

#pragma mark -
/// 监听runloop状态的同步队列
static inline dispatch_queue_t fetchObserveActivityQueue() {
    static dispatch_queue_t observerActivityQueue;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        observerActivityQueue = dispatch_queue_create("com.HZRunloopObserver.observerActivityQueue", DISPATCH_QUEUE_SERIAL);
    });
    return observerActivityQueue;
}


///!!!: 卡顿检测的时长我想要跟60fps上面靠 每一帧大概是0.0167秒 一般可以忍受掉10-15帧帧 那就是200ms左右
/// 同时考虑卡顿间隔太小 容易造成监控卡顿发生太多次, 对服务器压力和真正卡顿的查找造成影响,设置太大又容易漏掉部分卡顿.要找到一个balance.
static double kStandardTimeInterval = 0.0167;
#define HZLogRunloopState 1
static void observerCallOut(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info) {
    HZObserverSharedManager.currentRunloopActivity = activity;
    if (HZObserverSharedManager.isObserveing == YES) {
        dispatch_semaphore_signal(HZObserverSharedManager.activitySemaphore);
    }
    
#if HZLogRunloopState
    static NSTimeInterval preTime;
    if (activity == kCFRunLoopEntry) {
        NSLog(@"✨kCFRunLoopEntry%zd", activity);
    } else if (activity == kCFRunLoopBeforeTimers) {
        NSLog(@"kCFRunLoopBeforeTimers%zd", activity);
    } else if (activity == kCFRunLoopBeforeSources) {
        NSLog(@"kCFRunLoopBeforeSources%zd", activity);
        if (preTime > 0) {
            double delta = [[NSDate date] timeIntervalSince1970] - preTime;
            if (delta > kStandardTimeInterval) {
                NSLog(@"😈这次超时:%f", delta);
            } else {
                NSLog(@"😇这次循环用时:%f", delta);
            }
            
        }
        preTime = [[NSDate date] timeIntervalSince1970];
    } else if (activity == kCFRunLoopBeforeWaiting) {
        NSLog(@"⚠️kCFRunLoopBeforeWaiting%zd", activity);
    } else if (activity == kCFRunLoopAfterWaiting) {
        NSLog(@"⚠️kCFRunLoopAfterWaiting%zd", activity);
    } else if (activity == kCFRunLoopExit) {
        NSLog(@"🍠kCFRunLoopExit%zd", activity);
    }
#endif
}

@implementation HZFrozenObserverManager

#pragma mark - initialize
static HZFrozenObserverManager *manager;
+ (void)load {
    [self sharedManager];
}

+ (instancetype)sharedManager {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[HZFrozenObserverManager alloc] init];
        [manager __initFunc];
    });
    return manager;
}

- (void)__initFunc {
    _activitySemaphore = dispatch_semaphore_create(0);
}

#pragma mark - public method
- (void)startMonitor {
#warning TODO 李昊泽_这个属性不是线程安全的
    if (HZObserverSharedManager.isObserveing == YES) {
        return;
    }
    HZObserverSharedManager.isObserveing = YES;

    // observer
    CFRunLoopObserverRef observer = CFRunLoopObserverCreate(kCFAllocatorDefault, kCFRunLoopAllActivities, true, 10000, &observerCallOut, NULL);
    CFRunLoopAddObserver(CFRunLoopGetMain(), observer, kCFRunLoopCommonModes);
    
    dispatch_async(fetchObserveActivityQueue(), ^{
        NSUInteger sameCount = 0;
        while (HZObserverSharedManager.isObserveing == YES) {
            ///!!!: 感觉这里自己没有想清楚,只要状态变动, 信号量返回值为0, 会将技术清零,不会一直计算的.
            intptr_t semphoreResult = dispatch_semaphore_wait(HZObserverSharedManager.activitySemaphore, dispatch_time(DISPATCH_TIME_NOW, hz_observer_single_intervel));
            if (semphoreResult != 0) {
                if (HZObserverSharedManager.currentRunloopActivity == kCFRunLoopBeforeSources || HZObserverSharedManager.currentRunloopActivity == kCFRunLoopAfterWaiting) {
                    sameCount += 1;
                    if (++sameCount >= 5) {
                        [LXDBacktraceLogger lxd_logMain];
                        sameCount = 0;
                        ///!!!: 防止上报过于频繁 这个时候可以暂停下
                        [NSThread sleepForTimeInterval:hz_reset_stuck_intevel];
                    }
                }
            } else {
                sameCount = 0;
            }
            
        }
    });
}



@end
