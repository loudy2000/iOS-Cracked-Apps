//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassTextureSamplingFilter.h"

@interface GPUImageGaussianBlurPositionFilter : GPUImageTwoPassTextureSamplingFilter
{
    int blurCenterUniform;
    int blurRadiusUniform;
    int aspectRatioUniform;
    double _blurSize;
    double _aspectRatio;
    double _blurRadius;
    struct CGPoint _blurCenter;
}

@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) struct CGPoint blurCenter; // @synthesize blurCenter=_blurCenter;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)adjustAspectRatio;
- (id)init;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

