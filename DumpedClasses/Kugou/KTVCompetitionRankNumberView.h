//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface KTVCompetitionRankNumberView : UIView
{
    long long _number;
    double _viewWidth;
    double _viewHeight;
}

@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void)addNumberImageWithImageString:(id)arg1 withPoint:(struct CGPoint)arg2 withPadding:(double)arg3;
- (void)addNumberImageWithNumber:(int)arg1 withPoint:(struct CGPoint)arg2 withPadding:(double)arg3;
- (id)init;

@end

