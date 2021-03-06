//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TTFeedCollectionCell <NSObject>
- (_Bool)IsEmptySubscribeList;
- (_Bool)shouldHideRefreshView;
- (_Bool)shouldAnimateRefreshView;
- (void)cellWillEnterBackground;
- (void)cellWillEnterForground;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)refreshIfNeeded;
- (void)refreshDataWithType:(int)arg1;
- (id <TTFeedCategory>)categoryModel;
- (void)setupCellModel:(id <TTFeedCategory>)arg1 isDisplay:(_Bool)arg2;
@end

