//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableHeaderView.h"

@class NSArray, NVMSegmentView;

@interface NVMOrderFavoriteHeaderView : NVMTableHeaderView
{
    CDUnknownBlockType _segmentSelectedIndexChenged;
    unsigned long long _selectedPage;
    NSArray *_titles;
    NVMSegmentView *_segment;
}

@property(retain, nonatomic) NVMSegmentView *segment; // @synthesize segment=_segment;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) unsigned long long selectedPage; // @synthesize selectedPage=_selectedPage;
@property(copy, nonatomic) CDUnknownBlockType segmentSelectedIndexChenged; // @synthesize segmentSelectedIndexChenged=_segmentSelectedIndexChenged;
- (void).cxx_destruct;
- (void)setProgressWithIndex:(unsigned long long)arg1;
- (double)headerHeight;
- (double)segmentWidth;
- (void)clickSegmentWithIndex:(unsigned long long)arg1;
- (void)configViews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

