//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPushBannerView.h"

@class NSDictionary, QQAsynUrlImageView, UIButton, UILabel;

@interface QQPushBannerView_FeesBlueBar : QQPushBannerView
{
    NSDictionary *_infoDic;
    UIButton *_goBtn;
    UILabel *_infoLabel;
    int _xo;
    UIButton *_backImgButton;
    QQAsynUrlImageView *_asynRedHairImgView;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)initLayout;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)didPushBannerClicked:(id)arg1;
- (void)didFeesButtonClickHandler:(id)arg1;
- (void)updateFeesViewWithInfoDic;

// Remaining properties
@property(retain, nonatomic) UIButton *goBtn; // @dynamic goBtn;
@property(retain, nonatomic) NSDictionary *infoDic; // @dynamic infoDic;
@property(retain, nonatomic) UILabel *infoLabel; // @dynamic infoLabel;

@end
