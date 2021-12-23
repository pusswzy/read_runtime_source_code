//
//  ViewController.m
//  读源码-SDWebImage
//
//  Created by wangze on 2018/9/17.
//  Copyright © 2018年 wangze. All rights reserved.
//

#import "ViewController.h"
#import "Person.h"
#import <AFNetworking/AFNetworking.h>
#import <SDWebImage/UIImageView+WebCache.h>
@interface ViewController () <NSURLSessionDataDelegate> {
    AFHTTPSessionManager *_maneger;
}
@property (weak, nonatomic) IBOutlet UIImageView *fullImageView;
@property (nonatomic, strong) NSMutableData *mutableData;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self.fullImageView sd_setImageWithURL:@"http://b31.photo.store.qq.com/psu?/58f3eb9b-d155-4636-aa98-45f0e53b40cc/VOIQLgSNvyBqUv9WwKCrDuHqQUTau73fTadkY5Ezh10!/b/Yaz5GxNZQwAAYtyokhKhQwAA&a=32&b=31&bo=ngL2AQAAAAABAEw!&rf=viewer_4"];
    
    NSLog(@"start");
    
    self.mutableData = [NSMutableData data];

    AFHTTPSessionManager *maneger = [AFHTTPSessionManager manager];
    _maneger = maneger;
}
- (IBAction)releaseAll:(id)sender {
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
//    [self.fullImageView sd_setImageWithURL:@"http://b31.photo.store.qq.com/psu?/58f3eb9b-d155-4636-aa98-45f0e53b40cc/VOIQLgSNvyBqUv9WwKCrDuHqQUTau73fTadkY5Ezh10!/b/Yaz5GxNZQwAAYtyokhKhQwAA&a=32&b=31&bo=ngL2AQAAAAABAEw!&rf=viewer_4"];
    
//    [self testURLSession];
    [self testAFN];
    
}

- (void)testAFN {
    
    _maneger.responseSerializer = [AFImageResponseSerializer serializer];
    
    [_maneger GET:@"https://api.66mz8.com/api/rand.tbimg.php?format=jpg" parameters:nil headers:nil progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"%@", responseObject);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        
    }];
}
- (IBAction)tre:(id)sender {
    _maneger.requestSerializer.timeoutInterval = 1;
}


- (void)testURLSession {
    NSURLSessionConfiguration *config = [NSURLSessionConfiguration defaultSessionConfiguration];
    NSURLSession *session = [NSURLSession sessionWithConfiguration:config delegate:self delegateQueue:[NSOperationQueue mainQueue]];
    
    /*
     https://api.66mz8.com/api/rand.tbimg.php?format=jpg
     https://api.66mz8.com/api/sweet.php?format=json"
     */
    
    NSURL *URL = [NSURL URLWithString:@"https://api.66mz8.com/api/rand.tbimg.php?format=jpg"];
    NSURLRequest *request = [NSURLRequest requestWithURL:URL];
    /*
    NSURLSessionDataTask *task = [session dataTaskWithRequest:request completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        UIImage *image = [UIImage imageWithData: data];
        dispatch_async(dispatch_get_main_queue(), ^{
            self.fullImageView.image = image;
        });
        NSString *receiveStr = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@---%@", receiveStr, error);
    }];
    */
    NSURLSessionDataTask *task = [session dataTaskWithRequest:request];
    [task resume];
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error {
    UIImage *image = [UIImage imageWithData: self.mutableData];
    dispatch_async(dispatch_get_main_queue(), ^{
        self.fullImageView.image = image;
        [self.mutableData setData:nil];
    });

}
/*
 This delegate method may be called more than once, and each call provides only data received since the previous call. The app is responsible for accumulating this data if needed.
 此委托方法可以被多次调用，每次调用只提供自上一次调用以来接收到的数据。如果需要，应用程序负责积累这些数据。
 */
-(void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveData:(NSData *)data
{
    static NSInteger count = 0;
    count += 1;
    NSLog(@"%zd次", count);
    [self.mutableData appendData:data];
    
    //拼接数据
//    [self.fileData appendData:data];
}


@end
