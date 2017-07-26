//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBAddressBookShareInputViewDelegate.h"

@class NSString, TBAddressBookShareInputView, UIButton;

@interface TBAddressBookMessageInputView : UIView <TBAddressBookShareInputViewDelegate>
{
    UIButton *_phraseButton;
    TBAddressBookShareInputView *_textView;
    UIButton *_shareButton;
}

+ (id)messageInputView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TBAddressBookShareInputView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *phraseButton; // @synthesize phraseButton=_phraseButton;
- (void).cxx_destruct;
- (void)addressBookShareInputViewBecomeFirstResponder:(id)arg1;
- (void)addressBookShareInputViewExceededMaxCharNum:(id)arg1;
- (void)addressBookShareInputView:(id)arg1 willChangeToHeight:(double)arg2;
- (void)unenableToResponder;
- (void)enableToResponder;
- (void)setMessageInputViewText:(id)arg1;
- (void)clearText;
- (id)inputViewText;
- (double)heightForOriginTextView;
- (double)heightForOriginView;
- (void)hideKeyBoardIfNeed;
- (_Bool)messageInputViewIsFirstResponder;
- (void)clickedShareButton:(id)arg1;
- (void)clickedPhraseButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
