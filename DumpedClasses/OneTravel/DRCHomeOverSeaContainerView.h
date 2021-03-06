//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCBannerView, DRCFunctionView, DRCHomeBottomView, DRCOverSeaHomeBasicinfoModel, DRCOverSeaOrderInfoSettingView, UIScrollView;

@interface DRCHomeOverSeaContainerView : UIView
{
    DRCBannerView *_banner;
    DRCOverSeaHomeBasicinfoModel *_basicinfoModel;
    UIScrollView *_scrollView;
    UIView *_scrollViewContent;
    DRCFunctionView *_functionView;
    UIView *_topView;
    UIView *_topShadowBGView;
    UIView *_OrderInfoShadowBGView;
    DRCOverSeaOrderInfoSettingView *_overSeaOrderInfoSettingView;
    DRCHomeBottomView *_bottomView;
}

@property(retain, nonatomic) DRCHomeBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) DRCOverSeaOrderInfoSettingView *overSeaOrderInfoSettingView; // @synthesize overSeaOrderInfoSettingView=_overSeaOrderInfoSettingView;
@property(retain, nonatomic) UIView *OrderInfoShadowBGView; // @synthesize OrderInfoShadowBGView=_OrderInfoShadowBGView;
@property(retain, nonatomic) UIView *topShadowBGView; // @synthesize topShadowBGView=_topShadowBGView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) DRCFunctionView *functionView; // @synthesize functionView=_functionView;
@property(retain, nonatomic) UIView *scrollViewContent; // @synthesize scrollViewContent=_scrollViewContent;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) DRCOverSeaHomeBasicinfoModel *basicinfoModel; // @synthesize basicinfoModel=_basicinfoModel;
@property(retain, nonatomic) DRCBannerView *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (void)makeConstraint;
- (void)addViews;
- (void)getAddressViewShowStatus;
- (id)initWithFrame:(struct CGRect)arg1;

@end

