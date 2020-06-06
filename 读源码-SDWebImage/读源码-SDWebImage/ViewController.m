//
//  ViewController.m
//  读源码-SDWebImage
//
//  Created by wangze on 2018/9/17.
//  Copyright © 2018年 wangze. All rights reserved.
//

#import "ViewController.h"
#import "Person.h"
#import <SDWebImage/UIImageView+WebCache.h>
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *fullImageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self.fullImageView sd_setImageWithURL:@"http://b31.photo.store.qq.com/psu?/58f3eb9b-d155-4636-aa98-45f0e53b40cc/VOIQLgSNvyBqUv9WwKCrDuHqQUTau73fTadkY5Ezh10!/b/Yaz5GxNZQwAAYtyokhKhQwAA&a=32&b=31&bo=ngL2AQAAAAABAEw!&rf=viewer_4"];
    
    NSLog(@"start");

}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.fullImageView sd_setImageWithURL:@"http://b31.photo.store.qq.com/psu?/58f3eb9b-d155-4636-aa98-45f0e53b40cc/VOIQLgSNvyBqUv9WwKCrDuHqQUTau73fTadkY5Ezh10!/b/Yaz5GxNZQwAAYtyokhKhQwAA&a=32&b=31&bo=ngL2AQAAAAABAEw!&rf=viewer_4"];
}


@end
