//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface MPTransition : NSObject
{
    _Bool _dismissing;
    _Bool _presentedControllerIncludesStatusBarInFrame;
    int _completionAction;
    float _m34;
    UIView *_sourceView;
    UIView *_destinationView;
    double _duration;
    long long _timingCurve;
    struct CGRect _rect;
}

+ (double)defaultDuration;
@property(nonatomic) _Bool presentedControllerIncludesStatusBarInFrame; // @synthesize presentedControllerIncludesStatusBarInFrame=_presentedControllerIncludesStatusBarInFrame;
@property(nonatomic) float m34; // @synthesize m34=_m34;
@property(nonatomic, getter=isDimissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) long long timingCurve; // @synthesize timingCurve=_timingCurve;
@property(nonatomic) int completionAction; // @synthesize completionAction=_completionAction;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (struct CGRect)calculateRect;
- (void)setPresentedController:(id)arg1;
- (void)setPresentingController:(id)arg1;
- (void)transitionDidComplete;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)perform;
- (id)timingCurveFunctionName;
- (id)initWithSourceView:(id)arg1 destinationView:(id)arg2 duration:(double)arg3 timingCurve:(long long)arg4 completionAction:(int)arg5;

@end

