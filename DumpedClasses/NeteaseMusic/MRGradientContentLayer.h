//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CAGradientLayer;

@interface MRGradientContentLayer : CALayer
{
    _Bool _lowSide;
    CAGradientLayer *_shadowCover;
}

+ (id)layerWithLowerSide:(_Bool)arg1;
@property(retain, nonatomic) CAGradientLayer *shadowCover; // @synthesize shadowCover=_shadowCover;
@property(nonatomic) _Bool lowSide; // @synthesize lowSide=_lowSide;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)layoutSublayers;
- (id)initWithLowerSide:(_Bool)arg1;

@end

