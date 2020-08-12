//
//  ViewController.m
//  动画学习
//
//  Created by lihaoze on 2020/8/12.
//  Copyright © 2020 Goplay. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) UIView *redView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self.view addSubview:self.redView];
    self.redView.frame = CGRectMake(0, 100, 100, 100);
    self.redView.layer.anchorPoint = CGPointMake(0, 0);
    
    NSLog(@"%f", CACurrentMediaTime());
    NSLog(@"%f", [self.redView.layer convertTime:CACurrentMediaTime() fromLayer:nil]);
    NSLog(@"%f", [self.redView.layer convertTime:CACurrentMediaTime() fromLayer:self.view.layer]);
}

- (void)addAnimateToTargetView:(UIView *)targetView {
    CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:@"position.x"];
    animation.fromValue = @20;
    animation.toValue = @280;
    animation.duration = 5.0f;
    animation.repeatCount = 100000000000;
    animation.beginTime = 3.0f; /// 这行代码很重要 t = (tp - beginTime) * speed + timeOffset;
    [targetView.layer addAnimation:animation forKey:@"123"];
    [animation setValue:targetView forKey:@"targetView"];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self addAnimateToTargetView:self.redView];
}

#pragma mark - action
- (IBAction)timeOffsetSliderChange:(UISlider *)sender {
    CGFloat curValue = sender.value;
    CAAnimation *anim = [self.redView.layer animationForKey:@"123"];
//    self.redView.layer.speed = 0;
    self.redView.layer.timeOffset = curValue * anim.duration;
}

- (IBAction)slow:(id)sender {
    self.redView.layer.timeOffset = [self.redView.layer convertTime:CACurrentMediaTime() fromLayer:nil];
    self.redView.layer.beginTime = CACurrentMediaTime();
    self.redView.layer.speed -= 0.2;
    NSLog(@"speed:%f", self.redView.layer.speed);
}

- (IBAction)quick:(id)sender {
    NSLog(@"%f---%f", [self.redView.layer convertTime:CACurrentMediaTime() fromLayer:nil], CACurrentMediaTime());
//    self.redView.layer.timeOffset = [self.redView.layer convertTime:CACurrentMediaTime() fromLayer:nil];
//    self.redView.layer.beginTime = CACurrentMediaTime();
//    self.redView.layer.speed += 0.2;
//    NSLog(@"speed:%f", self.redView.layer.speed);
}

#pragma mark - getter method
- (UIView *)redView {
    if (!_redView) {
        _redView = [[UIView alloc] init];
        _redView.backgroundColor = [UIColor redColor];
    }
    return _redView;
}

@end
