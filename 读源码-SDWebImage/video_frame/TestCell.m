//
//  TestCell.m
//  video_frame
//
//  Created by lihaoze on 2021/12/23.
//  Copyright © 2021 wangze. All rights reserved.
//

#import "TestCell.h"

@interface TestCell ()
@property (nonatomic, strong) UIImageView *imageView;
@end

@implementation TestCell

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.imageView = [[UIImageView alloc] init];
        self.imageView.contentMode = UIViewContentModeScaleToFill;
        self.imageView.layer.masksToBounds = YES;
        
        [self.contentView addSubview:self.imageView];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.imageView.frame = self.contentView.bounds;
}

- (void)setImage:(UIImage *)image {
    _image = image;
    NSLog(@"%@", UIImagePNGRepresentation(image));
    self.imageView.image = image;
}

@end
