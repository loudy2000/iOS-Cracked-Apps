//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol FARankingListViewDelegate <NSObject>
- (NSArray *)getDataForCellWithType:(unsigned long long)arg1;
- (void)didRankItemSelectType:(unsigned long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)startRefershData;
@end

