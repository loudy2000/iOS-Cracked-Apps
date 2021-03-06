//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, UIColor, UIFont, UITextField;

@interface KGCustomMenuTextField : UIView
{
    NSArray *_constraint;
    _Bool _secureTextEntry;
    _Bool _canShowKeyboard;
    UITextField *_textField;
    UIView *_contentView;
    NSString *_text;
    UIView *_rightView;
    UIColor *_textColor;
    UIFont *_font;
    NSString *_placeholder;
    long long _returnKeyType;
    long long _keyboardType;
    long long _clearButtonMode;
    long long _contentVerticalAlignment;
    long long _contentHorizontalAlignment;
    id <UITextFieldDelegate> _delegate;
    UIButton *_errorBtn;
    NSString *_tipsText;
    UIView *_showMenuSuperView;
}

@property(retain, nonatomic) UIView *showMenuSuperView; // @synthesize showMenuSuperView=_showMenuSuperView;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) UIButton *errorBtn; // @synthesize errorBtn=_errorBtn;
@property(nonatomic) _Bool canShowKeyboard; // @synthesize canShowKeyboard=_canShowKeyboard;
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long contentHorizontalAlignment; // @synthesize contentHorizontalAlignment=_contentHorizontalAlignment;
@property(nonatomic) long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)errorBtnAction:(id)arg1;
- (void)dismissErrorView;
- (void)dismissErrorTips;
- (void)showErrorView:(id)arg1 withText:(id)arg2;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) _Bool isShowError;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

