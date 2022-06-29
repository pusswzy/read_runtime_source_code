//
//  main.m
//  lookin_runtime
//
//  Created by lihaoze on 2022/6/29.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Person *pp = [[Person alloc] init];
//        pp.name = @"rlookin";
        [pp say];
        [pp unHandleFunction];
        NSLog(@"Hello, World!");
    }
    return 0;
}
