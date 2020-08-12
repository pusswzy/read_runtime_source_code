//
//  main.m
//  3232
//
//  Created by lihaoze on 2020/8/5.
//  Copyright © 2020 Goplay. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        ///!!!: 可变对象调用mutableCopy
        /*
        NSMutableString *string = [[NSMutableString alloc] initWithString:@"李昊泽最帅"];
        NSMutableString *string2 = [string mutableCopy];
        [string2 appendString:@"我也同意"];
        
        NSLog(@"%p---%p", string, string2);
        NSLog(@"%p---%p", &string, &string2);
        NSLog(@"%@--%@", string, string2);
         */
        
        
        ///!!!: 不可变对象调用mutableCopy
        /*
        NSString *string = [[NSString alloc] initWithString:@"李昊泽最帅"];
        NSMutableString *string2 = [string mutableCopy];
        [string2 appendString:@"我也同意"];
        
        NSLog(@"%p---%p", string, string2);
        NSLog(@"%p---%p", &string, &string2);
        NSLog(@"%@--%@", string, string2);
         */
        
        
        ///!!!: 不可变对象调用copy
        /*
        NSString *string = [[NSString alloc] initWithString:@"Test327189378912"];
        NSString * string2 = [string copy];
        
        NSLog(@"%p---%p", string, string2);
        NSLog(@"%p---%p", &string, &string2);
        NSLog(@"%@--%@", string, string2);
        NSLog(@"-----打印引用计数👇");
        NSLog(@"%d---%d", [string retainCount], [string2 retainCount]);
         */
        
        
        ///!!!: 可变对象调用copy
        /*
        NSMutableString *string = [[NSMutableString alloc] initWithString:@"123"];
        NSString * string2 = [string copy];
        
        [string appendFormat:@"可变字符串拼接测试"];
        
        
        NSLog(@"%p---%p", string, string2);
        NSLog(@"%@--%@", string, string2);
        NSLog(@"-----打印引用计数👇");
        NSLog(@"%d---%d", [string retainCount], [string2 retainCount]);
        */
        
        
        
        // 元素可变数组
        NSMutableArray *testArray = [NSMutableArray array];
        NSArray <NSMutableArray *> *array1 = @[testArray];
        NSMutableArray <NSMutableArray *> *array2 = [array1 mutableCopy];
        NSLog(@"%p--%p", array1.firstObject, array2.firstObject);
        [array1.firstObject addObject:@"我只给array1的元素添加东西 会不会影响array2呢______End"];
         NSLog(@"%@--%@", array1.firstObject, array2.firstObject);
    }
    return 0;
}
