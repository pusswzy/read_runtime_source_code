//
//  ViewController.m
//  test
//
//  Created by lihaoze on 2021/12/23.
//  Copyright © 2021 wangze. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) NSMutableArray *array;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.array = [NSMutableArray array];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    @synchronized ([self class]) {
        [self.array removeAllObjects];
    }
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @synchronized ([self class]) {
            [self.array addObject:[NSObject new]];
            NSLog(@"%@", self.array);
        }
    });
    
    NSLog(@"%@", self.array);
}


@end
