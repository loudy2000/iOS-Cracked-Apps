//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIColor, UIImage;

@interface CTFlightProgressView : UIView
{
    double SYSTEM_VERSION;
    long long progressImgResizeMode;
    long long trackImgResizeMode;
    float currentPercent;
    NSTimer *timer;
    _Bool animation;
    float _progress;
    float _radius;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImage *_progressImage;
    UIImage *_trackImage;
    id <CTFlightProgressViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTFlightProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)dealloc;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (void)setProgressTintColorWithProgressTintImage:(id)arg1;
- (void)setTrackTintColorWithTrackTintImage:(id)arg1;
- (void)animationDraw;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

