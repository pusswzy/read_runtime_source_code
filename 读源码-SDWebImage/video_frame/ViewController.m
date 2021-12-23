//
//  ViewController.m
//  video_frame
//
//  Created by lihaoze on 2021/12/23.
//  Copyright © 2021 wangze. All rights reserved.
//

#import "ViewController.h"
#import <SDWebImage/SDImageCache.h>
#import <AFNetworking/AFNetworking.h>
#import <AVFoundation/AVFoundation.h>
#import "TestCell.h"


@interface ViewController () <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) NSString *videoPath;
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) NSMutableArray <UIImage *>*dataSource;
@property (nonatomic, strong) SDImageCache *cache;
@property (nonatomic, strong) UIButton *button;
@property (nonatomic, strong) UIImageView *imageView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
#warning 只有头文件 没有导入对应的静态库 就会报❌"未定义的符号"
    /*
    AFNetworkReachabilityStatus status;
    AFNetworkReachabilityManager *manager = [AFNetworkReachabilityManager sharedManager];
    [manager startMonitoring];
     */
    self.dataSource = [NSMutableArray array];
    NSString *path = [[NSBundle mainBundle] pathForResource:@"IMG_0538" ofType:@"MOV"];
    self.videoPath = path;
    [self readVideoFrame];
    
    [self.view addSubview:self.collectionView];
    
    self.button = [UIButton buttonWithType:UIButtonTypeCustom];
    [self.button setTitle:@"清理内存" forState:UIControlStateNormal];
    [self.button addTarget:self action:@selector(testReleaseAnything) forControlEvents:UIControlEventTouchUpInside];
    self.button.frame = CGRectMake(0, 300, 100, 100);
    [self.view addSubview:self.button];
    
    self.button = [UIButton buttonWithType:UIButtonTypeCustom];
    [self.button setTitle:@"s刷新" forState:UIControlStateNormal];
    [self.button addTarget:self action:@selector(reloadxxxx) forControlEvents:UIControlEventTouchUpInside];
    self.button.frame = CGRectMake(120, 300, 100, 100);
    [self.view addSubview:self.button];
    
    self.imageView = [[UIImageView alloc] init];
    self.imageView.frame = CGRectMake(0, 400, 100, 100);
}

- (void)testReleaseAnything {
#warning 要先清理cache再去释放cgimage
    [self.cache clearMemory];
    [self.dataSource enumerateObjectsUsingBlock:^(UIImage * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        CFRelease(obj.CGImage);
    }];
    [self.dataSource removeAllObjects];
    //    [self.collectionView reloadData];
}

- (void)reloadxxxx {
    [self.collectionView reloadData];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self readVideoFrame];
}

- (void)readVideoFrame {
    AVURLAsset *asset = [[AVURLAsset alloc] initWithURL:[NSURL fileURLWithPath:self.videoPath] options:nil];
    CGSize videoSize = [asset tracksWithMediaType:AVMediaTypeVideo].firstObject.naturalSize;
    CMTime duration = asset.duration;
    NSLog(@"%f---%@", CMTimeGetSeconds(duration), NSStringFromCGSize(videoSize));
    
    NSInteger totalFrames = 50;
    NSMutableArray *timeArray = [NSMutableArray arrayWithCapacity:totalFrames];
    for (int i = 0; i <= totalFrames; i++) {
        [timeArray addObject:[NSValue valueWithCMTime:CMTimeMake(i, 30)]];
    }
    
    
    AVAssetImageGenerator *gen = [[AVAssetImageGenerator alloc] initWithAsset:asset];
    gen.appliesPreferredTrackTransform = YES;
    gen.requestedTimeToleranceBefore = kCMTimeZero;
    gen.requestedTimeToleranceAfter = kCMTimeZero;
    
    if (!self.cache) {
        self.cache = [[SDImageCache alloc] initWithNamespace:@"leehaoze_project"];
    }
    @synchronized (self) {
        NSLog(@"%@", self.dataSource);
        [self.dataSource enumerateObjectsUsingBlock:^(UIImage * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            NSLog(@"%@", obj.CGImage);
        }];
        [self.dataSource removeAllObjects];
    }
    SDImageCache *imageCache = self.cache;
    __block NSInteger curIndex = 0;
    [timeArray enumerateObjectsUsingBlock:^(NSValue*  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSString *key = [self fetchKeyWithTime:[obj CMTimeValue]];
        UIImage *image = [imageCache imageFromCacheForKey:key];
        if (!image) {
            CMTime actualTime;
            CGImageRef cgimage = [gen copyCGImageAtTime:CMTimeMake(0, 30) actualTime:&actualTime error:nil];
            UIImage *iii = [[UIImage alloc] initWithCGImage:cgimage];
            [self.dataSource addObject:iii];
            CGImageRelease(cgimage);
//            [gen generateCGImagesAsynchronouslyForTimes:@[obj] completionHandler:^(CMTime requestedTime, CGImageRef  _Nullable image, CMTime actualTime, AVAssetImageGeneratorResult result, NSError * _Nullable error) {
//                if (image) {
//                    UIImage *ui_image = [[UIImage alloc] initWithCGImage:image];
//
//                    if (ui_image) {
//                        //                        [imageCache storeImage:mage forKey:key toDisk:YES completion:^{
//                        //
//                        //                                                    CFRelease(image);
//                        //                        }];
//#warning 释放image的节点十分重要 因为缓存是异步的 内部会对图片进行编解码 如果cgIMage已经释放了,就会导致崩溃 [保存到磁盘]
//#warning 时间轴的图片完全不需要写入到磁盘中 这点事非常重要的, 只用到内存缓存即可.
//#warning 注意CGImage释放了 对应的image也就释放了么?
//#warning 如果只用内存缓存的话 是否会导致很大的问题? CGImage的内存泄漏呢??
//                        //                        [imageCache storeImage:mage forKey:key completion:^{
//                        //
//                        //                        }];
//
//                            [self.dataSource addObject:ui_image];
//                            CGImageRelease(image);
//                            dispatch_async(dispatch_get_main_queue(), ^{
//                                self.imageView.image = ui_image;
//                            });
//
//                        NSLog(@"genergate缓存---%zd--%@--%@--%@", curIndex, ui_image, key, image);
//                    } else {
//                        NSLog(@"神奇");
//                        CFRelease(image);
//                    }
//                }
//            }];
        } else {
            NSLog(@"有缓存--%zd", curIndex);
            @synchronized (self) {
                [self.dataSource addObject:image];
            }
            
        }
        curIndex += 1;
    }];
    
    @synchronized (self) {
        NSLog(@"%@", self.dataSource);
        
        [self.collectionView reloadData];
    }
    
    
   
}

- (NSString *)fetchKeyWithTime:(CMTime)time {
    return [NSString stringWithFormat:@"%lld--%d", time.value, time.timescale];
}

#pragma mark -
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    NSLog(@"%s--%zd", __func__, self.dataSource.count);
    return self.dataSource.count;
}

- (__kindof UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    NSLog(@"%s--%@", __func__, indexPath);
    TestCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"ttt" forIndexPath:indexPath];
    cell.image = self.dataSource[indexPath.row];
    return cell;
}

#pragma mark -
- (UICollectionView *)collectionView {
    if (!_collectionView) {
        UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc] init];
        flowLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
        flowLayout.itemSize = CGSizeMake(100, 100);
        flowLayout.minimumLineSpacing = CGFLOAT_MIN;
        flowLayout.minimumInteritemSpacing = CGFLOAT_MIN;
        
        _collectionView = [[UICollectionView alloc] initWithFrame:CGRectMake(0, 200, 425, 100) collectionViewLayout:flowLayout];
        _collectionView.backgroundColor = [UIColor redColor];
        [_collectionView registerClass:[TestCell class] forCellWithReuseIdentifier:@"ttt"];
        _collectionView.delegate = self;
        _collectionView.dataSource = self;
    }
    return _collectionView;
}

@end
