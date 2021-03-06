//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FAThemeButton, FAThemeTextField, NSString, UIButton;

@interface FASearchTopView : UIView <UITextFieldDelegate>
{
    id <FASearchTopViewDelegate> _delegate;
    CDUnknownBlockType _clearBlock;
    FAThemeTextField *_inputTextField;
    UIView *_backView;
    FAThemeButton *_cancleBtn;
    UIButton *_cleanBtn;
}

@property(retain, nonatomic) UIButton *cleanBtn; // @synthesize cleanBtn=_cleanBtn;
@property(retain, nonatomic) FAThemeButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) FAThemeTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(copy, nonatomic) CDUnknownBlockType clearBlock; // @synthesize clearBlock=_clearBlock;
@property(nonatomic) __weak id <FASearchTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearBtnClick;
- (void)cancleBtnClick;
- (void)setPlaceholder;
- (void)valueChanged:(id)arg1;
- (void)createSubViews;
- (void)setTextField:(id)arg1;
- (void)inputTextFieldResignFirstResponder;
- (void)clearInputTextField;
- (void)search;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (void)setInputColor;
- (void)onChangeTheme:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

