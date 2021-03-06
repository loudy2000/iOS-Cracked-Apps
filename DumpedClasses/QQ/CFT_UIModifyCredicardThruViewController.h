//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "UIExpirationDatePickerDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_F374133, CFT_UIFormatField, CFT_UIGroupStyleView, CFT_UITLTextField, NSDictionary, NSString, NSTimer, UIButton, UILabel;

@interface CFT_UIModifyCredicardThruViewController : CFT_UICustomNaviBarViewController <UIExpirationDatePickerDelegate, UITextFieldDelegate>
{
    int cardType;
    CFT_UIGroupStyleView *group1;
    CFT_UIGroupStyleView *group2;
    NSDictionary *selectBank;
    CFT_F374133 *password;
    CFT_UIFormatField *pValidDate;
    CFT_UITLTextField *pCVV;
    NSTimer *pTimer;
    UIButton *_nextButton;
    UILabel *_pLabWarn;
    unsigned char _isTouchPay;
    NSString *_tokenId;
}

@property(copy, nonatomic) NSString *tokenId; // @synthesize tokenId=_tokenId;
@property(nonatomic) unsigned char isTouchPay; // @synthesize isTouchPay=_isTouchPay;
@property(retain, nonatomic) CFT_F374133 *password; // @synthesize password;
@property(retain, nonatomic) NSDictionary *selectBank; // @synthesize selectBank;
- (void)expirationDatePicker:(id)arg1 didSelectMonth:(unsigned long long)arg2 inYear:(unsigned long long)arg3;
- (void)timeseed;
- (void)showSendSmsWithTips:(id)arg1 modifyMobileCheckCvv:(_Bool)arg2 animate:(_Bool)arg3;
- (void)qpay_ydt;
- (id)getTouchPayParams;
- (void)checkInput:(id)arg1;
- (void)nextButtonClick:(id)arg1;
- (void)onRightButtonClick:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

