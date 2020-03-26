//
//  main.m
//  212
//
//  Created by lihaoze on 2020/3/26.
//  Copyright © 2020 Goplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Man.h"
#import "NSObject+Test.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        Man *mm = [[Man alloc] init];
//        [mm performSelector:@selector(wocao)];
        [Man performSelector:@selector(wocao)];
//        [Man wocao];
    }
    return 0;
}
