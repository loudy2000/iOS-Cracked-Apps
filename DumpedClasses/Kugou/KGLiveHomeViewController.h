//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WatchHomePageParentViewController.h"

@class KGDefaultNetErrorView, KGLiveBannerVLL, KGLiveHomeListNewVLL, KGLiveProgramListVLL;

@interface KGLiveHomeViewController : WatchHomePageParentViewController
{
    KGLiveHomeListNewVLL *_homeListVLL;
    KGLiveBannerVLL *_bannerVLL;
    KGDefaultNetErrorView *_bannerErrorView;
    double _scale;
    KGLiveProgramListVLL *_programListVLL;
}

@property(retain, nonatomic) KGLiveProgramListVLL *programListVLL; // @synthesize programListVLL=_programListVLL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) KGDefaultNetErrorView *bannerErrorView; // @synthesize bannerErrorView=_bannerErrorView;
@property(retain, nonatomic) KGLiveBannerVLL *bannerVLL; // @synthesize bannerVLL=_bannerVLL;
@property(retain, nonatomic) KGLiveHomeListNewVLL *homeListVLL; // @synthesize homeListVLL=_homeListVLL;
- (void).cxx_destruct;
- (void)notiWifiAndClickCancel;
- (void)noticloseWifiOnly;
- (_Bool)showWifiOnlyAlertIf;
- (void)reloadListData;
- (void)reloadBannerData;
- (void)reloadWebBtnClicked:(id)arg1;
- (long long)showPlayBarWay;
- (void)configSubView;
- (void)viewManagerChangeState:(int)arg1;
- (void)destory;
- (void)viewDidEnter;
- (void)viewDidLoad;

@end

