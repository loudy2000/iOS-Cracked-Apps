//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FXSGetUserInfo, KGThemeLabel, UIImageView, UILabel;

@interface UserGradeTipView : UIView
{
    UIImageView *_backgroundImageView;
    UILabel *_richTipLabel;
    UILabel *_starTipLabel;
    FXSGetUserInfo *_fxUserInfo;
    UILabel *_starTipTitleU;
    KGThemeLabel *_secondPartSubLabel;
    UILabel *_richTipTitleU;
    KGThemeLabel *_secondPartSubLabel2;
}

+ (id)showInView:(id)arg1 PointY:(double)arg2;
@property(retain, nonatomic) KGThemeLabel *secondPartSubLabel2; // @synthesize secondPartSubLabel2=_secondPartSubLabel2;
@property(retain, nonatomic) UILabel *richTipTitleU; // @synthesize richTipTitleU=_richTipTitleU;
@property(retain, nonatomic) KGThemeLabel *secondPartSubLabel; // @synthesize secondPartSubLabel=_secondPartSubLabel;
@property(retain, nonatomic) UILabel *starTipTitleU; // @synthesize starTipTitleU=_starTipTitleU;
@property(retain, nonatomic) FXSGetUserInfo *fxUserInfo; // @synthesize fxUserInfo=_fxUserInfo;
@property(retain, nonatomic) UILabel *starTipLabel; // @synthesize starTipLabel=_starTipLabel;
@property(retain, nonatomic) UILabel *richTipLabel; // @synthesize richTipLabel=_richTipLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)changeColorForUserView;
- (id)createSubNumLabel;
- (id)createSubLabel;
- (id)createNormalLabel;
- (void)initViewWithUserInfo:(id)arg1;
- (void)initViewsInPersonalCenterVC;
- (id)initWithFrame:(struct CGRect)arg1;

@end

