//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCChatPageInputBarProtocol.h"

@class HPGrowingTextView, NSString, UIButton, UILabel;

@interface MCChatPageInputBar : UIView <MCChatPageInputBarProtocol>
{
    HPGrowingTextView *_textView;
    UIButton *_functionSwitchButton;
    UIButton *_menuSwitchButton;
    UIButton *_voiceTextSwitchButton;
    UIButton *_emoticonSwitchButton;
    UIView *_textRoundLayer;
    UIView *_recordView;
    id <MCChatPageInputBarDelegate> _inputBarDelegate;
    UILabel *_arrowLabel;
    UIView *_divider;
}

@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(nonatomic) __weak id <MCChatPageInputBarDelegate> inputBarDelegate; // @synthesize inputBarDelegate=_inputBarDelegate;
@property(retain, nonatomic) UIView *recordView; // @synthesize recordView=_recordView;
@property(retain, nonatomic) UIView *textRoundLayer; // @synthesize textRoundLayer=_textRoundLayer;
@property(retain, nonatomic) UIButton *emoticonSwitchButton; // @synthesize emoticonSwitchButton=_emoticonSwitchButton;
@property(retain, nonatomic) UIButton *voiceTextSwitchButton; // @synthesize voiceTextSwitchButton=_voiceTextSwitchButton;
@property(retain, nonatomic) UIButton *menuSwitchButton; // @synthesize menuSwitchButton=_menuSwitchButton;
@property(retain, nonatomic) UIButton *functionSwitchButton; // @synthesize functionSwitchButton=_functionSwitchButton;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)updateFunctionSwitchButton:(id)arg1;
- (void)functionSwitchAction:(id)arg1;
- (void)emoticonSwitchAction:(id)arg1;
- (void)voiceTextAction:(id)arg1;
- (void)menuAction:(id)arg1;
- (void)adjustInputBarFrame:(struct CGRect)arg1;
- (void)refreshInputBarWithInputType:(long long)arg1;
- (void)refreshBarWithInputConfig:(unsigned long long)arg1;
- (id)initWithRecordView:(id)arg1 delegate:(id)arg2 config:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

