//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#include "Starboard.h"

#import <UIKit/UIImage.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIView.h>

class UIImageViewPrivData {
public:
    UIImageViewPrivData() {
        memset(this, 0, sizeof(UIImageViewPrivData));
    }

    id _drawImage;
    idretaintype(UIImage) _image, _highlightedImage;
    idretaintype(NSMutableArray) _animatingImages;
    size_t _curAnimatingImage, _curCycle;
    double _animationDuration;
    size_t _repeatCount;
    id _timer;
    BOOL _isAnimating, _isHighlighted;
};

@implementation UIImageView {
    UIImageViewPrivData* imgPriv;
}

/**
 @Status Interoperable
*/
+ (instancetype)allocWithZone:(NSZone*)zone {
    UIImageView* ret = [super allocWithZone:zone];
    ret->imgPriv = new UIImageViewPrivData();
    ret->imgPriv->_animationDuration = 0;

    return ret;
}

/**
 @Status Caveat
 @Notes May not be fully implemented
*/
- (instancetype)initWithCoder:(NSCoder*)coder {
    id result = [super initWithCoder:coder];
    id image = [coder decodeObjectForKey:@"UIImage"];

    [self setImage:image];

    return result;
}

static void initInternal(UIImageView* self) {
    [self setOpaque:FALSE];
    updateContents(self);
}

/**
 @Status Interoperable
*/
- (instancetype)initWithImage:(UIImage*)image {
    CGRect pos;
    CGSize imgSize = { 0 };

    if (image) {
        imgSize = [image size];
    }

    pos.origin.x = 0;
    pos.origin.y = 0;
    pos.size = imgSize;

    [super initWithFrame:pos];
    initInternal(self);

    [self setImage:image];

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithImage:(UIImage*)image highlightedImage:(UIImage*)highlighted {
    [self initWithImage:image];
    [self setHighlightedImage:highlighted];

    return self;
}

/**
 @Status Interoperable
*/
- (instancetype)initWithFrame:(CGRect)frame {
    [super initWithFrame:frame];

    initInternal(self);

    return self;
}

static void updateContents(UIImageView* self) {
    auto imgPriv = self->imgPriv;
    UIImage* image = nil;

    if (!imgPriv->_isHighlighted || imgPriv->_highlightedImage == nil) {
        if (imgPriv->_animatingImages != nil && imgPriv->_isAnimating) {
            image = [imgPriv->_animatingImages objectAtIndex:imgPriv->_curAnimatingImage];
        } else {
            image = imgPriv->_image;
        }

        if (image != nil) {
            imgPriv->_drawImage = nil;
            UIImageSetLayerContents([self layer], image);
        } else {
            [[self layer] setContents:nil];
            [self setOpaque:FALSE];
        }
    } else {
        image = imgPriv->_highlightedImage;
        if (image != nil) {
            imgPriv->_drawImage = nil;
            UIImageSetLayerContents([self layer], image);
        } else {
            [[self layer] setContents:nil];
            [self setOpaque:FALSE];
        }
    }
}

/**
 @Status Interoperable
*/
- (UIImage*)image {
    return imgPriv->_image;
}

/**
 @Status Interoperable
*/
- (void)setImage:(UIImage*)image {
    imgPriv->_image = image;
    updateContents(self);
}

/**
 @Status Interoperable
*/
- (BOOL)isHighlighted {
    return imgPriv->_isHighlighted;
}

/**
 @Status Interoperable
*/
- (void)setHighlightedImage:(UIImage*)image {
    imgPriv->_highlightedImage = image;
}

/**
 @Status Interoperable
*/
- (void)setHighlighted:(BOOL)isHighlighted {
    imgPriv->_isHighlighted = isHighlighted;
    updateContents(self);
}

/**
 @Status Interoperable
*/
- (UIImage*)highlightedImage {
    return imgPriv->_highlightedImage;
}

/**
 @Status Interoperable
*/
- (void)setAnimationImages:(NSArray*)imagesArray {
    id mainRunLoop = [NSRunLoop mainRunLoop];
    id currentRunLoop = [NSRunLoop currentRunLoop];
    if (mainRunLoop != currentRunLoop) {
        [self performSelectorOnMainThread:@selector(setAnimationImages:) withObject:imagesArray waitUntilDone:FALSE];
        return;
    }
    imgPriv->_animatingImages.attach([imagesArray copy]);
    imgPriv->_curAnimatingImage = 0;
    updateContents(self);
}

/**
 @Status Interoperable
*/
- (NSArray*)animationImages {
    return imgPriv->_animatingImages;
}

/**
 @Status Interoperable
*/
- (void)setAnimationDuration:(double)duration {
    bool changed = duration != imgPriv->_animationDuration;
    imgPriv->_animationDuration = duration;

    NSRunLoop* mainRunLoop = [NSRunLoop mainRunLoop];
    NSRunLoop* currentRunLoop = [NSRunLoop currentRunLoop];
    if (mainRunLoop != currentRunLoop) {
        return;
    }

    if (imgPriv->_timer != nil && imgPriv->_isAnimating && changed) {
        [imgPriv->_timer invalidate];

        double duration = imgPriv->_animationDuration;
        if (imgPriv->_animationDuration == 0.0f) {
            duration = 0.0333f;
        } else {
            duration /= (double)[imgPriv->_animatingImages count];
        }

        imgPriv->_timer =
            [NSTimer scheduledTimerWithTimeInterval:duration target:self selector:@selector(_showNextImage) userInfo:0 repeats:TRUE];
    }
}

/**
 @Status Interoperable
*/
- (double)animationDuration {
    double duration = imgPriv->_animationDuration;
    if (imgPriv->_animationDuration == 0.0f) {
        duration = 0.0333f * ((double)[imgPriv->_animatingImages count]);
    } else {
        duration = imgPriv->_animationDuration;
    }

    return duration;
}

/**
 @Status Interoperable
*/
- (void)setAnimationRepeatCount:(NSInteger)count {
    imgPriv->_repeatCount = count;
}

/**
 @Status Interoperable
*/
- (NSInteger)animationRepeatCount {
    return imgPriv->_repeatCount;
}

/**
 @Status Interoperable
*/
- (BOOL)isAnimating {
    return imgPriv->_isAnimating;
}

/**
 @Status Interoperable
*/
- (void)dealloc {
    imgPriv->_image = nil;
    imgPriv->_animatingImages = nil;
    imgPriv->_highlightedImage = nil;
    [imgPriv->_timer invalidate];
    delete imgPriv;

    [super dealloc];
}

- (void)_showNextImage {
    imgPriv->_curAnimatingImage++;

    if (imgPriv->_curAnimatingImage >= [imgPriv->_animatingImages count]) {
        imgPriv->_curAnimatingImage = 0;
        imgPriv->_curCycle++;
        if (imgPriv->_curCycle >= imgPriv->_repeatCount && imgPriv->_repeatCount != 0) {
            [self stopAnimating];
        }
    }

    updateContents(self);
}

/**
 @Status Interoperable
*/
- (void)startAnimating {
    NSRunLoop* mainRunLoop = [NSRunLoop mainRunLoop];
    NSRunLoop* currentRunLoop = [NSRunLoop currentRunLoop];
    if (mainRunLoop != currentRunLoop) {
        [self performSelectorOnMainThread:@selector(startAnimating) withObject:nil waitUntilDone:FALSE];
        return;
    }

    if (imgPriv->_isAnimating) {
        return;
    }

    imgPriv->_isAnimating = TRUE;

    double duration = imgPriv->_animationDuration;
    if (imgPriv->_animationDuration == 0.0f) {
        duration = 0.0333f;
    } else {
        duration /= (double)[imgPriv->_animatingImages count];
    }

    imgPriv->_curCycle = 0;
    imgPriv->_curAnimatingImage = 0;

    imgPriv->_timer =
        [NSTimer scheduledTimerWithTimeInterval:duration target:self selector:@selector(_showNextImage) userInfo:0 repeats:TRUE];
    [self _showNextImage];
}

/**
 @Status Interoperable
*/
- (void)stopAnimating {
    id mainRunLoop = [NSRunLoop mainRunLoop];
    id currentRunLoop = [NSRunLoop currentRunLoop];
    if (mainRunLoop != currentRunLoop) {
        [self performSelectorOnMainThread:@selector(stopAnimating) withObject:nil waitUntilDone:FALSE];
        return;
    }

    if (!imgPriv->_isAnimating) {
        return;
    }

    imgPriv->_isAnimating = FALSE;
    [imgPriv->_timer invalidate];
    imgPriv->_timer = nil;
    imgPriv->_curAnimatingImage = 0;

    updateContents(self);
}

/**
 @Status Interoperable
*/
- (void)drawRect:(CGRect)rect {
    if (imgPriv->_drawImage != nil) {
        [imgPriv->_drawImage drawInRect:rect];
    }
}

/**
 @Status Interoperable
*/
- (CGSize)sizeThatFits:(CGSize)curSize {
    if (imgPriv->_image != nil) {
        curSize = [imgPriv->_image size];
    } else {
        curSize = CGSizeMake(0, 0);
    }

    return curSize;
}

/**
 @Status Interoperable
*/
- (void)willMoveToWindow:(UIWindow*)newWindow {
    if (newWindow == nil) {
        if (imgPriv->_isAnimating) {
            [imgPriv->_timer invalidate];
            imgPriv->_timer = nil;
        }
    } else {
        if (imgPriv->_isAnimating && imgPriv->_timer == nil) {
            double duration = imgPriv->_animationDuration;
            if (imgPriv->_animationDuration == 0.0f) {
                duration = 0.0333f;
            } else {
                duration /= (double)[imgPriv->_animatingImages count];
            }

            imgPriv->_timer =
                [NSTimer scheduledTimerWithTimeInterval:duration target:self selector:@selector(_showNextImage) userInfo:0 repeats:TRUE];
        }
    }
    [super willMoveToWindow:newWindow];
}

/**
 @Status Interoperable
*/
- (CGSize)intrinsicContentSize {
    CGSize ret;
    if (imgPriv->_image) {
        ret = [imgPriv->_image size];
    } else {
        ret.width = UIViewNoIntrinsicMetric;
        ret.height = UIViewNoIntrinsicMetric;
    }
    return ret;
}

@end
