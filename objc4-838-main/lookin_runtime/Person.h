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
@property (nonatomic, strong) NSString *name1;
@property (nonatomic, strong) NSString *name2;
@property (nonatomic, strong) NSString *name3;
- (void)say;
- (void)instanceMethod;
- (void)unHandleFunction;
@end

NS_ASSUME_NONNULL_END
