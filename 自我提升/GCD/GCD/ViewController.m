//
//  ViewController.m
//  GCD
//
//  Created by lihaoze on 2020/9/3.
//  Copyright © 2020 Goplay. All rights reserved.
//

#import "ViewController.h"

@interface ViewController () {
    NSLock *_lock;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    _lock = [[NSLock alloc] init];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
//    [self lockWait1];
    dispatch_sync(dispatch_get_main_queue(), ^{
        
    });
}

#pragma mark - test
- (void)test1 {
    NSLog(@"1");
    
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{ //task1
        NSLog(@"2");
        NSLog(@"5");
        dispatch_async(dispatch_get_main_queue(), ^{ //task2
            sleep(3);
            NSLog(@"3");
        });
        
    });
    
    dispatch_async(dispatch_get_main_queue(), ^{ //task3
        NSLog(@"8");
    });
    
    // 这里后面的所有要看成一个整体
    NSLog(@"4");
    sleep(0.1);
    NSLog(@"6");
    
    /*
     - 因为sync阻塞当前线程main提交task1，所以外部1、4、6共同组成的task要整体执行完的话依赖于task1。
     - 当2和5执行之后，由于async异步提交task2，不阻塞task1的执行线程main，所以task1完成，所以125后直接46，即使sleep main，因为task是最先存在于队列中的，串行队列只能一个一个拿出来执行。
     - 同样task2的提交比task3早，所以先执行task2，再执行task3。
     */
    
    /*
     2020-09-03 10:59:01.332690+0800 GCD[29893:1812897] 1
     2020-09-03 10:59:01.332865+0800 GCD[29893:1812897] 2
     2020-09-03 10:59:01.332991+0800 GCD[29893:1812897] 5
     2020-09-03 10:59:01.333121+0800 GCD[29893:1812897] 4
     2020-09-03 10:59:01.333287+0800 GCD[29893:1812897] 6
     2020-09-03 10:59:04.334676+0800 GCD[29893:1812897] 3
     2020-09-03 10:59:04.335003+0800 GCD[29893:1812897] 8
     */
}

- (void)test2 {
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"1");
    });
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"2");
    });
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"3");
    });
    NSLog(@"4");
    
    /*
     1和2的顺序不固定，2执行完后才执行3和4，3和4的顺序不固定
     */
}

- (void)_test2 {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"3");
    });
    NSLog(@"4");
    for (int i = 0; i < 100; i++) {
        NSLog(@"...");
    }
}

- (void)__test2 {
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"3");
    });
    NSLog(@"4");
    for (int i = 0; i < 100; i++) {
        NSLog(@"...");
    }
}

- (void)test3 {
    NSMutableArray *ayyay = [NSMutableArray array];
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"1");
        [ayyay addObject:@1];
    });
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"2");
        [ayyay addObject:@2];
    });
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"3");
        [ayyay addObject:@3];
    });
    NSLog(@"4");
    [ayyay addObject:@4];
    NSLog(@"%@", ayyay);
    /*
     // 1、2和3的顺序不固定、3肯定在4的前面
     */
    
    /// 这题没看懂
}

- (void)test4 {
    dispatch_queue_t que = dispatch_queue_create(0, nil);
    dispatch_async(que, ^{
        NSLog(@"1");
    });
    NSLog(@"2");
    dispatch_sync(que, ^{
        NSLog(@"3");
    });
    /*
    ✅ 1和2执行不固定，但是3肯定在1和2的后面
     */
}

#pragma mark - lock wait
- (void)lockWait1 {
    dispatch_queue_t que = dispatch_queue_create(0, nil);
    
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"1");
        dispatch_async(que, ^{ //task2 //⚠️：如果用sync
            NSLog(@"2");
            dispatch_sync(dispatch_get_main_queue(), ^{
                NSLog(@"3");
            });
            
            NSLog(@"4");
        });
        
        NSLog(@"5");
        sleep(1.0);
        NSLog(@"6");
        dispatch_async(que, ^{ //task4
            NSLog(@"7");
        });
        NSLog(@"8");
    });
}

- (void)lockWait2 {
    NSLog(@"1");
    dispatch_queue_t que = dispatch_queue_create(0, nil);
    dispatch_async(que, ^{ //task1
        NSLog(@"2");
        dispatch_sync(dispatch_get_main_queue(), ^{
            NSLog(@"3");
            dispatch_sync(que, ^{  //task2
                NSLog(@"4");
            });
            
        });
        
        NSLog(@"5");
    });
    NSLog(@"6");
    dispatch_async(que, ^{ //⚠️：如果这里换成sync
        NSLog(@"7");
    });
    NSLog(@"8");
}

@end
