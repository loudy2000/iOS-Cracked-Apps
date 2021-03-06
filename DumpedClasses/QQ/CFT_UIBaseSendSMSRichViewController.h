//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "modifyMobileDelegate.h"

@class CFT_TPIDKeyboardView, CFT_UICustomTextField, CFT_UIGroupStyleView, NSDictionary, NSString, UIButton, UILabel, UIView;

@interface CFT_UIBaseSendSMSRichViewController : CFT_UIBaseRichViewController <UIAlertViewDelegate, UITextFieldDelegate, modifyMobileDelegate>
{
    UIView *titleLineView;
    CFT_UICustomTextField *textVerCode;
    UIView *verCodeLineView;
    UIButton *btnResend;
    UILabel *pLabMobileInfo;
    UIButton *supportBut;
    CFT_UIGroupStyleView *group2;
    NSString *payType;
    NSString *userType;
    int timer_count;
    unsigned char bNeedUpdateTimeStamp;
    UIButton *recvFailLink;
    _Bool _isResetPwd;
    _Bool _dontBindCard;
    _Bool _needNextPwd;
    _Bool _modifyMobileNeedCvv;
    NSString *strResendUrl;
    NSString *sceneType;
    NSString *tokenId;
    NSDictionary *attachInfoDic;
    long long codeFieldMaxLen;
    CFT_TPIDKeyboardView *_numKeyboard;
    long long _supportType;
    UILabel *_pLabWarn;
}

@property(nonatomic) _Bool modifyMobileNeedCvv; // @synthesize modifyMobileNeedCvv=_modifyMobileNeedCvv;
@property(retain, nonatomic) UILabel *pLabWarn; // @synthesize pLabWarn=_pLabWarn;
@property _Bool needNextPwd; // @synthesize needNextPwd=_needNextPwd;
@property(nonatomic) _Bool dontBindCard; // @synthesize dontBindCard=_dontBindCard;
@property(nonatomic) _Bool isResetPwd; // @synthesize isResetPwd=_isResetPwd;
@property(nonatomic) long long supportType; // @synthesize supportType=_supportType;
@property(retain, nonatomic) CFT_TPIDKeyboardView *numKeyboard; // @synthesize numKeyboard=_numKeyboard;
@property(nonatomic) long long codeFieldMaxLen; // @synthesize codeFieldMaxLen;
@property(copy, nonatomic) NSString *payType; // @synthesize payType;
@property(retain, nonatomic) NSDictionary *attachInfoDic; // @synthesize attachInfoDic;
@property(copy, nonatomic) NSString *tokenId; // @synthesize tokenId;
@property(copy, nonatomic) NSString *sceneType; // @synthesize sceneType;
@property(copy, nonatomic) NSString *userType; // @synthesize userType;
@property(copy, nonatomic) NSString *strResendUrl; // @synthesize strResendUrl;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFiledReturnEditing:(id)arg1;
- (void)checkInput:(id)arg1;
- (void)userCardInfo;
- (void)onRecvFailLinkClick:(id)arg1;
- (void)onTimer;
- (void)onDataReady:(id)arg1 DataInfo:(id)arg2;
- (void)ResendMessage;
- (void)clickBtn;
- (void)ModifyMobileNumber;
- (void)modifyMobileResponseFinish:(id)arg1;
- (void)layoutSubviewsOnView;
- (void)checkFirstResponder;
- (void)closeButtonClick:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

