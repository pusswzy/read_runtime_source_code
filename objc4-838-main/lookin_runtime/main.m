//
//  main.m
//  lookin_runtime
//
//  Created by lihaoze on 2022/6/29.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import <objc/runtime.h>
#import <objc/message.h>

struct LGStruct {
    int  a; // 偏移：0， 占4字节
    char b; // 偏移：4， 占1字节
    int  c; // 偏移：8， 占4字节
    long d; // 偏移：16，占8字节(成员变量的开始位置为当前成员变量所占内存的整数倍)
};


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        struct LGStruct s;
        s.a = 9;
        s.b = 'a';
        s.c = 30;
        s.d = 522;
        /*
         (lldb) p/x &s
         (LGStruct *) $3 = 0x00007ff7bfeff2a8
         // 转成int *指针
         (lldb) p/x (int *)$3
         (int *) $4 = 0x00007ff7bfeff2a8
         // 获取值
         (lldb) p *$4
         (int) $5 = 9
         // 获取下一个地址
         (lldb) p/x (char *)(0x00007ff7bfeff2a8 + 0x4)
         (char *) $6 = 0x00007ff7bfeff2ac "a"
         // p和px的区别咯
         (lldb) p/x *$6
         (char) $7 = 0x61
         (lldb) p *$6
         (char) $8 = 'a'
         */
    
        
        NSLog(@"%p_%@", [Person class], [Person class]);
        Person *pp = [[Person alloc] init];

        // 测试直接使用msgSend调用方法
        ((void(*)(id obj, SEL selector))objc_msgSend)(pp, @selector(say));
        
        NSLog(@"%p_%@", pp, pp);
//        pp.name = @"rlookin";
        [pp say];
        [pp hookObjcForward];
        [pp instanceMethod];
//        [pp unHandleFunction];
        NSLog(@"Hello, World!");
    }
    return 0;
}
