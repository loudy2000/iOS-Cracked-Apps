//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITextViewDelegate.h"
#import "WDAddMultiImagesViewDelegate.h"

@class NSString, SSThemedLabel, SSThemedTextView, WDAddMultiImagesView, WDPostQuestionViewModel;

@interface WDPostQuestionInputDescView : SSThemedView <UITextViewDelegate, WDAddMultiImagesViewDelegate>
{
    WDPostQuestionViewModel *_viewModel;
    SSThemedTextView *_textView;
    SSThemedLabel *_titleLabel;
    SSThemedView *_bottomLine;
    SSThemedLabel *_characterNumberLabel;
    WDAddMultiImagesView *_multiImageView;
}

@property(retain, nonatomic) WDAddMultiImagesView *multiImageView; // @synthesize multiImageView=_multiImageView;
@property(retain, nonatomic) SSThemedLabel *characterNumberLabel; // @synthesize characterNumberLabel=_characterNumberLabel;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)imageView:(id)arg1 imagesCountHasChanged:(id)arg2;
- (struct CGRect)frameForMulteImageView;
- (struct CGRect)frameForCharaterLabel;
- (struct CGRect)frameForTextView;
- (struct CGRect)frameForBottomLine;
- (struct CGRect)frameForTitleLabel;
- (void)refreshFrame;
- (void)titleTaped;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (void)resignAllFirstResponder;
- (void)hidekeyboard;
- (void)showPhotoPicker;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

