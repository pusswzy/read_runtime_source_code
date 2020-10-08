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

#import <StubReturn.h>
#import "Starboard.h"

#import "CATransactionInternal.h"
#import "CALayerInternal.h"
#import "QuartzCore/CAAnimation.h"
#import "QuartzCore/CALayer.h"
#import "Foundation/NSMutableDictionary.h"
#import "CACompositor.h"

#import "CAAnimationInternal.h"
#import "LoggingNative.h"
#import "UIAnimationNotification.h"

static const wchar_t* TAG = L"CAAnimation";

@implementation CAAnimation {
    idretain _delegate;
    SEL _finishedSelector;
    id _name;
    idretain _undefinedKeys;
    BOOL _wasRemoved;
}

/**
 @Status Interoperable
*/
+ (CAAnimation*)animation {
    CAAnimation* ret = [self alloc];
    ret->_timingProperties._duration = 1.0;
    ret->_timingProperties._speed = 1.0;
    ret->_timingProperties._removedOnCompletion = TRUE;

    return [ret autorelease];
}

/**
 @Status Interoperable
*/
- (instancetype)init {
    if (self = [super init]) {
        _timingProperties._duration = 1.0;
        _timingProperties._speed = 1.0;
        _timingProperties._removedOnCompletion = TRUE;
    }
    return self;
}

/**
 @Status Stub
*/
- (void)setRemovedOnCompletion:(BOOL)remove {
    UNIMPLEMENTED();
    _timingProperties._removedOnCompletion = remove;
}

/**
 @Status Interoperable
*/
- (BOOL)isRemovedOnCompletion {
    return _timingProperties._removedOnCompletion;
}

/**
 @Status Interoperable
*/
- (void)setDelegate:(id)delegate {
    _delegate = delegate;
}

/**
 @Status Interoperable
*/
- (id)delegate {
    return _delegate;
}

/**
 @Status Caveat
 @Notes Only linear, easein, easeout and easeinout are supported
*/
- (void)setTimingFunction:(CAMediaTimingFunction*)timingFunction {
    _timingProperties._timingFunction = [timingFunction retain];
}

/**
 @Status Interoperable
*/
- (CAMediaTimingFunction*)timingFunction {
    return _timingProperties._timingFunction;
}

/**
 @Status Interoperable
*/
- (void)setDuration:(double)duration {
    _timingProperties._duration = duration;
}

/**
 @Status Interoperable
*/
- (double)duration {
    return _timingProperties._duration;
}

/**
 @Status Interoperable
*/
- (void)setBeginTime:(double)time {
    _timingProperties._beginTime = time;
}

/**
 @Status Interoperable
*/
- (double)beginTime {
    return _timingProperties._beginTime;
}

/**
 @Status Interoperable
*/
- (void)setSpeed:(float)speed {
    _timingProperties._speed = speed;
}

/**
 @Status Interoperable
*/
- (float)speed {
    return _timingProperties._speed;
}

/**
 @Status Interoperable
*/
- (void)setTimeOffset:(double)time {
    _timingProperties._timeOffset = time;
}

/**
 @Status Interoperable
*/
- (double)timeOffset {
    return _timingProperties._timeOffset;
}

/**
 @Status Interoperable
*/
- (void)setRepeatCount:(float)repCount {
    _timingProperties._repeatCount = repCount;
}

/**
 @Status Interoperable
*/
- (float)repeatCount {
    return _timingProperties._repeatCount;
}

/**
 @Status Interoperable
*/
- (void)setDelay:(double)delay {
    _timingProperties._delay = delay;
}

/**
 @Status Interoperable
*/
- (void)setRepeatDuration:(double)duration {
    _timingProperties._repeatDuration = duration;
}

/**
 @Status Interoperable
*/
- (double)repeatDuration {
    return _timingProperties._repeatDuration;
}

/**
 @Status Interoperable
*/
- (void)setAutoreverses:(BOOL)autoreverses {
    _timingProperties._autoReverses = autoreverses;
}

/**
 @Status Interoperable
*/
- (BOOL)autoreverses {
    return _timingProperties._autoReverses;
}

/**
 @Status Interoperable
*/
- (void)setFillMode:(NSString*)mode {
    if ([mode isEqualToString:kCAFillModeRemoved]) {
        _timingProperties._fillMode = fillModeRemoved;
    } else if ([mode isEqualToString:kCAFillModeForwards]) {
        _timingProperties._fillMode = fillModeForwards;
    } else if ([mode isEqualToString:kCAFillModeBoth]) {
        _timingProperties._fillMode = fillModeBoth;
    } else {
        UNIMPLEMENTED_WITH_MSG("Unsupported fillMode %hs", [mode UTF8String]);
    }
}

/**
 @Status Interoperable
*/
- (NSString*)fillMode {
    if (_timingProperties._fillMode == fillModeRemoved) {
        return kCAFillModeRemoved;
    } else if (_timingProperties._fillMode == fillModeForwards) {
        return kCAFillModeForwards;
    } else if (_timingProperties._fillMode == fillModeBoth) {
        return kCAFillModeBoth;
    }

    return nil;
}

// I can't figure out where these are supposed to be from but it makes sense that
// a name would be a string right?

- (void)setName:(NSString*)name {
    _name = [name copy];
}

- (NSString*)name {
    return _name;
}

- (void)_setFinishedSelector:(SEL)selector {
    _finishedSelector = selector;
}

- (void)animationDidStart {
    if (_delegate) {
        if ([_delegate respondsToSelector:@selector(animationDidStart:)]) {
            [static_cast<id<CAAnimationDelegate>>(_delegate) animationDidStart:self];
        }
    }
}

- (id)animationHasStarted {
    if (_delegate) {
        if ([_delegate respondsToSelector:@selector(_animationHasStarted:)]) {
            [_delegate _animationHasStarted:self];
        }
    }
    return self;
}

- (void)animationDidStop:(BOOL)finished {
    if (_delegate) {
        if (_finishedSelector == NULL) {
            if ([_delegate respondsToSelector:@selector(animationDidStop:finished:)]) {
                [_delegate animationDidStop:self finished:finished];
            }
        } else {
            [_delegate performSelector:_finishedSelector withObject:self withObject:(id)TRUE];
        }
    }
}

- (void)_removeAnimationsFromLayer {
    assert(_attachedLayer || !_runningAnimation);

    CALayer* layer = _attachedLayer;
    if (_runningAnimation) {
        [CATransaction _removeAnimationFromLayer:layer animation:_runningAnimation];
        _runningAnimation = nullptr;
        [layer _displayChanged];
    }

    // Grab a strong reference to ourselves before removal from the layer, 
    // in case the layer was holding the *only* remaining strong reference.
    StrongId<CAAnimation> strongSelf(self); 
    [_attachedLayer _removeAnimation:strongSelf];
    strongSelf->_attachedLayer = nil;

    //  Make sure we don't create an animation in case we're transacted
    strongSelf->_wasRemoved = TRUE;
}

/**
 @Status Interoperable
 @Public No
*/
- (void)setValue:(id)val forUndefinedKey:(id)key {
    TraceVerbose(TAG, L"CAAnimation setting value for key \"%hs\"", [key UTF8String]);
    if (_undefinedKeys == nil) {
        _undefinedKeys.attach([NSMutableDictionary new]);
    }

    [(NSMutableDictionary*)_undefinedKeys setObject:val forKey:key];
}

/**
 @Status Interoperable
 @Public No
*/
- (id)valueForUndefinedKey:(id)keyPath {
    id ret = [(NSMutableDictionary*)_undefinedKeys objectForKey:keyPath];

    if (ret == nil) {
        TraceVerbose(TAG, L"CAAnimation: no value for undefined key \"%hs\"", [keyPath UTF8String]);
    }
    return ret;
}

/**
 @Status Interoperable
 @Public No
*/
- (id)copyWithZone:(NSZone*)zone {
    CAAnimation* ret = [[self class] alloc];

    ret->_timingProperties = _timingProperties;
    ret->_timingProperties._timingFunction = [_timingProperties._timingFunction retain];
    ret->_name = [_name copy];
    ret->_undefinedKeys = [_undefinedKeys copy];
    ret->_delegate = _delegate;
    ret->_finishedSelector = _finishedSelector;

    return ret;
}

- (void)dealloc {
    _delegate = nil;
    _keyName = nil;
    [_timingProperties._timingFunction release];
    [_undefinedKeys release];
    [_name release];
    _attachedLayer = nil;
    [super dealloc];
}

- (BOOL)wasRemoved {
    return _wasRemoved;
}

/**
 @Status Stub
 @Notes
*/
- (void)runActionForKey:(NSString*)key object:(id)anObject arguments:(NSDictionary*)dict {
    UNIMPLEMENTED();
}

/**
 @Status Stub
 @Notes
*/
- (BOOL)shouldArchiveValueForKey:(NSString*)key {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
+ (id)defaultValueForKey:(NSString*)key {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
- (instancetype)initWithCoder:(NSCoder*)decoder {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
- (void)encodeWithCoder:(NSCoder*)encoder {
    UNIMPLEMENTED();
}

@end
