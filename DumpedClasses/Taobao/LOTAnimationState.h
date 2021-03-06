//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, CALayer, NSNumber;

@interface LOTAnimationState : NSObject
{
    _Bool _needsAnimationUpdate;
    _Bool _animationIsPlaying;
    _Bool _playFromBeginning;
    double _previousLocalTime;
    double _animatedProgress;
    NSNumber *_framerate;
    _Bool _onscreen;
    CADisplayLink *_displayLink;
    _Bool _loopAnimation;
    _Bool _reverseAnimation;
    double _animationDuration;
    double _animationSpeed;
    CALayer *_layer;
}

@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) double animationSpeed; // @synthesize animationSpeed=_animationSpeed;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) _Bool reverseAnimation; // @synthesize reverseAnimation=_reverseAnimation;
@property(readonly, nonatomic) _Bool loopAnimation; // @synthesize loopAnimation=_loopAnimation;
- (void).cxx_destruct;
- (void)logStats:(id)arg1;
@property(readonly, nonatomic) _Bool animationIsPlaying;
@property(readonly, nonatomic) double animatedProgress;
- (void)setAnimationSpeed:(double)arg1;
- (void)setAnimatedProgress:(double)arg1;
- (void)setAnimationIsPlaying:(_Bool)arg1;
- (void)setAnimationDoesRerverse:(_Bool)arg1;
- (void)setAnimationDoesLoop:(_Bool)arg1;
- (void)setNeedsAnimationUpdate;
- (void)updateAnimationState;
- (void)updateAnimationLayerWithTimeOffset:(double)arg1;
- (id)initWithDuration:(double)arg1 layer:(id)arg2 frameRate:(id)arg3;

@end

