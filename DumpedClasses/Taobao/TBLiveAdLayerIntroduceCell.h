//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveAdLayerBaseCell.h"

@class UILabel;

@interface TBLiveAdLayerIntroduceCell : TBLiveAdLayerBaseCell
{
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)addGradientToView:(id)arg1;
- (void)refreshViewWithModel:(id)arg1;
- (id)buildContentView;
- (id)buildEmptyView;
- (id)buildHeaderView;
- (double)minCellHeight;

@end

