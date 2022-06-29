//
//  Person.h
//  lookin_runtime
//
//  Created by lihaoze on 2022/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) int age;
- (void)say;
- (void)unHandleFunction;
@end

NS_ASSUME_NONNULL_END
