//
//  Person.m
//  test
//
//  Created by lihaoze on 2021/12/25.
//  Copyright © 2021 wangze. All rights reserved.
//

#import "Person.h"
#import <NSObject+YYModel.h>

@implementation Person
- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    return [self yy_modelInitWithCoder:aDecoder];
}

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [self yy_modelEncodeWithCoder:aCoder];
}

@end
