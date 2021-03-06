//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMHouseLikeControl, FMSelectTagsView, NSArray, UILabel;

@interface FMHouseMatchCardOperationView : UIView
{
    FMSelectTagsView *_tagsView;
    FMHouseLikeControl *_likeControl;
    UILabel *_opTitleLabel;
    UILabel *_noTagTipLabel;
    UIView *_lineSeperator;
    UIView *_topLine;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *lineSeperator; // @synthesize lineSeperator=_lineSeperator;
@property(retain, nonatomic) UILabel *noTagTipLabel; // @synthesize noTagTipLabel=_noTagTipLabel;
@property(retain, nonatomic) UILabel *opTitleLabel; // @synthesize opTitleLabel=_opTitleLabel;
@property(retain, nonatomic) FMHouseLikeControl *likeControl; // @synthesize likeControl=_likeControl;
@property(retain, nonatomic) FMSelectTagsView *tagsView; // @synthesize tagsView=_tagsView;
- (void).cxx_destruct;
- (void)showTags:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

