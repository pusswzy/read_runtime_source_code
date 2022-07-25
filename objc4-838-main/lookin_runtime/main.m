//
//  main.m
//  lookin_runtime
//
//  Created by lihaoze on 2022/6/29.
//

#import <Foundation/Foundation.h>
#import "Person.h"
struct LGStruct {
    int  a; // 偏移：0， 占4字节
    char b; // 偏移：4， 占1字节
    int  c; // 偏移：8， 占4字节
    long d; // 偏移：16，占8字节(成员变量的开始位置为当前成员变量所占内存的整数倍)
};


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        struct LGStruct s;
        s.a = 10;
        s.b = 'a';
        s.c = 30;
        s.d = 522;
    
        
        NSLog(@"%p_%@", [Person class], [Person class]);
        Person *pp = [[Person alloc] init];
        NSLog(@"%p_%@", pp, pp);
//        pp.name = @"rlookin";
        [pp say];
        [pp instanceMethod];
        pp = [NSString new];
        [pp unHandleFunction];
        NSLog(@"Hello, World!");
    }
    return 0;
}
