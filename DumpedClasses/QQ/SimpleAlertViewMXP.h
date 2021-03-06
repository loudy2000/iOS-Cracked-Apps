//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleAlertView.h"

#import "FavAudioPlayManagerDelegate.h"
#import "UITextFieldDelegate.h"

@class FavAudioButton, NSString, QQAvatarView, UILabel, UITextField;

@interface SimpleAlertViewMXP : SimpleAlertView <FavAudioPlayManagerDelegate, UITextFieldDelegate>
{
    UILabel *_boxTitle;
    QQAvatarView *_headView;
    FavAudioButton *_audioBtn;
    UITextField *_addtionalMsgView;
    double _keyboardHeight;
    double _orignalTop;
}

@property(nonatomic) double orignalTop; // @synthesize orignalTop=_orignalTop;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UITextField *addtionalMsgView; // @synthesize addtionalMsgView=_addtionalMsgView;
@property(retain, nonatomic) FavAudioButton *audioBtn; // @synthesize audioBtn=_audioBtn;
@property(retain, nonatomic) QQAvatarView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UILabel *boxTitle; // @synthesize boxTitle=_boxTitle;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)cancelButtonClick:(id)arg1;
- (void)onDownloadAudioEnd:(_Bool)arg1 localid:(unsigned long long)arg2;
- (void)onDownloadAudioBegin;
- (id)getParentView;
- (void)onPlayEnd:(id)arg1;
- (void)onPlayBegin:(id)arg1;
- (void)onForceOffline:(id)arg1;
- (void)moveDown;
- (void)moveUp;
- (void)keyBoardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)dismiss;
- (id)initWithQQVoiceCellModel2Favorite:(id)arg1 uin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

