//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMNicknameView, NMSettingHeaderFooterView, UITextField;

@interface NMChangeNickView : UIView
{
    NMNicknameView *_nicknameView;
    NMSettingHeaderFooterView *_bgView;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)getNickname;
- (id)checkNicknameValid;
- (void)layoutSubviews;
@property(readonly, nonatomic) UITextField *nicknameTxt; // @dynamic nicknameTxt;
- (id)initWithFrame:(struct CGRect)arg1;

@end

