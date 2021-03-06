//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ONECHULetterView, ONEDDLogoAnimationView, ONEDIDILetterView, ONEDIDISlogonView, ONEXINGLetterView;

@interface ONEDIDISplashView : UIView
{
    _Bool _displayLogoViewOnly;
    ONEDDLogoAnimationView *_logoView;
    ONEDIDILetterView *_diLetterView1;
    ONEDIDILetterView *_diLetterView2;
    ONECHULetterView *_chuLetterView;
    ONEXINGLetterView *_xingLetterView;
    ONEDIDISlogonView *_slogonView;
}

@property(retain, nonatomic) ONEDIDISlogonView *slogonView; // @synthesize slogonView=_slogonView;
@property(retain, nonatomic) ONEXINGLetterView *xingLetterView; // @synthesize xingLetterView=_xingLetterView;
@property(retain, nonatomic) ONECHULetterView *chuLetterView; // @synthesize chuLetterView=_chuLetterView;
@property(retain, nonatomic) ONEDIDILetterView *diLetterView2; // @synthesize diLetterView2=_diLetterView2;
@property(retain, nonatomic) ONEDIDILetterView *diLetterView1; // @synthesize diLetterView1=_diLetterView1;
@property(retain, nonatomic) ONEDDLogoAnimationView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) _Bool displayLogoViewOnly; // @synthesize displayLogoViewOnly=_displayLogoViewOnly;
- (void).cxx_destruct;
- (void)stopAnimation:(CDUnknownBlockType)arg1;
- (void)startAnimation;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

