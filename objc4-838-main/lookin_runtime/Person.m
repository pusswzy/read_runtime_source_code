//
//  Person.m
//  lookin_runtime
//
//  Created by lihaoze on 2022/6/29.
//

#import "Person.h"
#import <objc/runtime.h>
#import <objc/message.h>

@implementation Person

+ (void)load {
    Method originalMethon = class_getInstanceMethod([self class], @selector(hookObjcForward));
    char *types = method_getTypeEncoding(originalMethon);
    IMP forward = _objc_msgForward;
    class_replaceMethod([self class], @selector(hookObjcForward), forward, types);
}

- (void)say {
    NSLog(@"123");
}

- (void)instanceMethod {
    NSLog(@"%s", __func__);
}

- (id)forwardingTargetForSelector:(SEL)aSelector {
    NSLog(@"%s", __func__);
    return nil;
}

//- (void)forwardInvocation:(NSInvocation *)anInvocation {
//    NSLog(@"%s_%@", __func__, self);
//}

+ (IMP)instanceMethodForSelector:(SEL)aSelector {
    NSLog(@"%s", __func__);
    return nil;
}

- (void)hookObjcForward {
    NSLog(@"不可能执行的方法");
}

@end
