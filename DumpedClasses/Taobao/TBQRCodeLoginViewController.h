//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBSDKServerDelegate.h"

@class MBProgressHUD, NSString, NSTimer, UIButton, UIImageView, UILabel, UIView;

@interface TBQRCodeLoginViewController : TBViewController <TBSDKServerDelegate>
{
    NSString *qrcodeLoginToken;
    int bizType;
    NSString *shortLink;
    NSString *userNick;
    NSTimer *animationTimer;
    int animationCount;
    _Bool needCanceRequest;
    MBProgressHUD *hud;
    _Bool isAutologin;
    UIView *_headerView;
    UIImageView *_leftImgView;
    UIImageView *_centerImgView;
    UIImageView *_rightImgView;
    UILabel *_staticLabel;
    UILabel *_userNameLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UILabel *_loginFowardLabel;
    UILabel *_tipsLabel;
    UIButton *_confirmLoginButton;
    UIButton *_cancelLoginButton;
}

@property(nonatomic) UIButton *cancelLoginButton; // @synthesize cancelLoginButton=_cancelLoginButton;
@property(nonatomic) UIButton *confirmLoginButton; // @synthesize confirmLoginButton=_confirmLoginButton;
@property(nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) UILabel *loginFowardLabel; // @synthesize loginFowardLabel=_loginFowardLabel;
@property(nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) UILabel *staticLabel; // @synthesize staticLabel=_staticLabel;
@property(nonatomic) UIImageView *rightImgView; // @synthesize rightImgView=_rightImgView;
@property(nonatomic) UIImageView *centerImgView; // @synthesize centerImgView=_centerImgView;
@property(nonatomic) UIImageView *leftImgView; // @synthesize leftImgView=_leftImgView;
@property(nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)autoLoginFailed:(id)arg1;
- (void)autoLoginFinished:(id)arg1;
- (void)syncLoginInfoFailed:(id)arg1;
- (void)syncLoginInfoFinished:(id)arg1;
- (void)authorizateCodeRequestFailed:(id)arg1;
- (void)authorizateCodeRequestFinished:(id)arg1;
- (void)cancelButtonAction:(id)arg1;
- (void)confimButtonAction:(id)arg1;
- (void)syncLoginInfoRequestWithState:(int)arg1;
- (void)getAuthorizateCodeRequest;
- (void)backItemClicked:(id)arg1;
- (void)changeTransferImg;
- (void)showDifViewForBizType;
- (void)resizeViewsFrame;
- (void)showViews:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)configToolbarItems;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

