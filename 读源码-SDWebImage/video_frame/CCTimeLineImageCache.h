//
//  CCTimeLineImageCache.h
//  video_frame
//
//  Created by lihaoze on 2021/12/24.
//  Copyright © 2021 wangze. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^CCImageNoParamsBlock)(void);
typedef void(^CCCacheQueryCompletedBlock)(UIImage * _Nullable image);

NS_ASSUME_NONNULL_BEGIN

@interface CCTimeLineImageCache : NSObject

#pragma mark - Properties
/**
 缓存中图片缓存的最大“总成本”。成本可以看做每一张图片的像素数之和
 */
@property (assign, nonatomic) NSUInteger maxMemoryCost;

#pragma mark - Singleton and initialization
/**
 单例初始化方法
 */
+ (nonnull instancetype)sharedImageCache;

/**
 根据名字初始化一个新的缓存类
 *
 * @param ns 缓存命名空间
 */
- (nonnull instancetype)initWithNamespace:(nonnull NSString *)ns;

#pragma mark - Store Ops

/**
 * 同步的缓存一张图片到内存中
 */
- (void)storeImage:(nullable UIImage *)image
            forKey:(nullable NSString *)key;

/**
 * 异步的缓存一张图片到内存中
 */
- (void)storeImage:(nullable UIImage *)image
            forKey:(nullable NSString *)key
        completion:(nullable CCImageNoParamsBlock)completionBlock;

#pragma mark - Query and Retrieve Ops
/**
 * 从缓存中根据key同步获取图片
 */
- (nullable UIImage *)imageFromMemoryCacheForKey:(nullable NSString *)key;

/**
 * 从缓存中根据key异步获取图片
 */
- (void)queryCacheForKey:(nullable NSString *)key done:(nullable CCCacheQueryCompletedBlock)doneBlock;

#pragma mark - Remove Ops
/**
 * 异步从缓存中删除对应key的图片
 */
- (void)removeImageForKey:(nullable NSString *)key withCompletion:(nullable CCImageNoParamsBlock)completion;


#pragma mark - Cache clean Ops
/**
 * 清除当前缓存内部所有的数据
 */
- (void)clearMemory;

#pragma mark - Cache Info
/**
 * 获取当前的内存消耗
 */
- (NSUInteger)getCost;


@end

NS_ASSUME_NONNULL_END
