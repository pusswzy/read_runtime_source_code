//
//  HZFrozenObserverManager.m
//  Runloop卡顿监听实践
//
//  Created by lihaoze on 2022/7/28.
//

#import "HZFrozenObserverManager.h"

@implementation HZFrozenObserverManager
static HZFrozenObserverManager *manager;
+ (void)load {
    [self sharedManager];
}

+ (instancetype)sharedManager {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[HZFrozenObserverManager alloc] init];
        [manager startMonitor];
    });
    return manager;
}

- (void)startMonitor {
    // observer
    CFRunLoopObserverRef observer = CFRunLoopObserverCreate(kCFAllocatorDefault, kCFRunLoopAllActivities, true, 10000, &observerCallOut, NULL);
    CFRunLoopAddObserver(CFRunLoopGetMain(), observer, kCFRunLoopCommonModes);
}

///!!!: 卡顿检测的时长我想要跟60fps上面靠 每一帧大概是0.0167秒 一般可以忍受掉10-15帧帧 那就是200ms左右
/// 同时考虑卡顿间隔太小 容易造成监控卡顿发生太多次, 对服务器压力和真正卡顿的查找造成影响,设置太大又容易漏掉部分卡顿.要找到一个balance.
static double kStandardTimeInterval = 0.0167;
static void observerCallOut(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info) {
    
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
    
}

@end
