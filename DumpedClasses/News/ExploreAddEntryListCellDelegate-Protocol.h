//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreAddEntryListCell, ExploreEntry;

@protocol ExploreAddEntryListCellDelegate <NSObject>
- (void)channelListCell:(ExploreAddEntryListCell *)arg1 unsubscribeChannel:(ExploreEntry *)arg2;
- (void)channelListCell:(ExploreAddEntryListCell *)arg1 subscribeChannel:(ExploreEntry *)arg2;
@end

