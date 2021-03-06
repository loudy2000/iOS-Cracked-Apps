//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"

@class HPGrowingTextView, UIButton;

@interface TBIMAreetingCardInputView : UIView <HPGrowingTextViewDelegate>
{
    UIView *_growingTextViewBackgroundView;
    HPGrowingTextView *_growingTextView;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) HPGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
@property(retain, nonatomic) UIView *growingTextViewBackgroundView; // @synthesize growingTextViewBackgroundView=_growingTextViewBackgroundView;
- (void).cxx_destruct;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)clickedShareButton:(id)arg1;
- (void)setText:(id)arg1;
- (id)currentText;
- (void)clearText;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)init;

@end

