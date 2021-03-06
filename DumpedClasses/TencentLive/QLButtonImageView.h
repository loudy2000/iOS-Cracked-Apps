//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLJCEActionBarInfo, QLSImageView, UIImageView, UILabel;

@interface QLButtonImageView : UIView
{
    _Bool _isFeedbackPreviewStyle;
    id _correspondingObj;
    long long _compareIndex;
    UIImageView *_bgImg;
    QLSImageView *_headerImgView;
    UILabel *_countLabel;
    QLJCEActionBarInfo *_barInfo;
}

@property(nonatomic) _Bool isFeedbackPreviewStyle; // @synthesize isFeedbackPreviewStyle=_isFeedbackPreviewStyle;
@property(retain, nonatomic) QLJCEActionBarInfo *barInfo; // @synthesize barInfo=_barInfo;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) QLSImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIImageView *bgImg; // @synthesize bgImg=_bgImg;
@property(nonatomic) long long compareIndex; // @synthesize compareIndex=_compareIndex;
@property(retain, nonatomic) id correspondingObj; // @synthesize correspondingObj=_correspondingObj;
- (void).cxx_destruct;
- (void)setFeedbackPreviewStyle:(_Bool)arg1;
- (void)setLiveStyle:(_Bool)arg1;
- (void)layoutSubviews;
- (id)getData;
- (void)setData:(id)arg1;
- (void)EntryClicked:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIMageUrl:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

