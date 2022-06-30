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
        NSLog(@"%p_%@", [Person class], [Person class]);
        Person *pp = [[Person alloc] init];
        NSLog(@"%p_%@", pp, pp);
//        pp.name = @"rlookin";
        [pp say];
        [pp unHandleFunction];
        NSLog(@"Hello, World!");
    }
    return 0;
}
