//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBSNSILInteractionModel, UIImageView, UILabel;

@interface TBSNSILInteractionView : UIView
{
    UILabel *_label;
    UIImageView *_icon;
    TBSNSILInteractionModel *_model;
}

@property(retain, nonatomic) TBSNSILInteractionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)blendImage:(id)arg1 withTintColor:(id)arg2 andBlendMode:(int)arg3 size:(struct CGSize)arg4;
- (void)onClickSelf;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end
