//
//  HZFrozenObserverManager.h
//  Runloop卡顿监听实践
//
//  Created by lihaoze on 2022/7/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define HZObserverSharedManager [HZFrozenObserverManager sharedManager]

@interface HZFrozenObserverManager : NSObject
+ (instancetype)sharedManager;

- (void)startMonitor;
@end

NS_ASSUME_NONNULL_END
