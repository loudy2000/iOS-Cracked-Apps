//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UITextField;

@interface TextInputCustomView : UIView
{
    long long _textInputViewKeyboardType;
    UILabel *_titleLabel;
    UITextField *_inputTextField;
}

@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long textInputViewKeyboardType; // @synthesize textInputViewKeyboardType=_textInputViewKeyboardType;
- (void).cxx_destruct;
- (_Bool)containTextField:(id)arg1;
- (void)ti_resignFirstResponder;
- (id)inputText;
- (void)ti_addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 placeholder:(id)arg2;
- (id)init;

@end

