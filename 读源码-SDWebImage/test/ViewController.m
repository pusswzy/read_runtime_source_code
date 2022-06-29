//
//  ViewController.m
//  test
//
//  Created by lihaoze on 2021/12/23.
//  Copyright © 2021 wangze. All rights reserved.
//

#import "ViewController.h"
#import <YYCache.h>
#import <NSObject+YYModel.h>
#import "Person.h"

@interface ViewController ()
@property (nonatomic, strong) NSMutableArray *array;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.array = [NSMutableArray array];
    Person *p1 = [Person new];
    p1.name = @"123";
    Person *p2 = [Person new];
    p2.name = @"456";
    [self.array addObject:p1];
    [self.array addObject:p2];
    
//    NSLog(@"%@", [self.array modelToJSONString]);
    
    YYCache *cache = [YYCache cacheWithName:@"test"];
    [cache setObject:self.array forKey:@"123"];
    
    NSLog(@"%@", [cache objectForKey:@"123"]);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    YYCache *cache = [YYCache cacheWithName:@"test"];
    id a = [cache objectForKey:@"123"];
    NSLog(@"%@", a);
}


@end
