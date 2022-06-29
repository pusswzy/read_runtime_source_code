//
//  Person.h
//  test
//
//  Created by lihaoze on 2021/12/25.
//  Copyright © 2021 wangze. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject <NSCoding>
@property (nonatomic, strong) NSString *name;
@end

NS_ASSUME_NONNULL_END
