//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface TBARScanMaskView : UIView
{
    UIImageView *_frame1LView;
    UIImageView *_frame1RView;
    UIImageView *_frame2View;
    UIImageView *_frame3View;
}

@property(retain, nonatomic) UIImageView *frame3View; // @synthesize frame3View=_frame3View;
@property(retain, nonatomic) UIImageView *frame2View; // @synthesize frame2View=_frame2View;
@property(retain, nonatomic) UIImageView *frame1RView; // @synthesize frame1RView=_frame1RView;
@property(retain, nonatomic) UIImageView *frame1LView; // @synthesize frame1LView=_frame1LView;
- (void).cxx_destruct;
- (id)rotateAnimationWithDuration:(double)arg1 clockwise:(_Bool)arg2;
- (void)stopAnimate;
- (void)startAnimate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

