//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface EODRegularRateEmoji : UIView
{
    UIImageView *_selectedFace;
    UIImageView *_normalFace;
    UILabel *_topLabel;
    _Bool _selected;
    CDUnknownBlockType _animationStopped;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType animationStopped; // @synthesize animationStopped=_animationStopped;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *normalFace; // @synthesize normalFace=_normalFace;
@property(retain, nonatomic) UIImageView *selectedFace; // @synthesize selectedFace=_selectedFace;
- (void).cxx_destruct;
- (id)labelWithText:(id)arg1;
- (id)imageWithName:(id)arg1 fillColor:(id)arg2;
- (id)resizeableImageWithImageName:(id)arg1;
- (void)lastAnimation;
- (void)jump;
- (void)startAnimating;
- (void)configViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

