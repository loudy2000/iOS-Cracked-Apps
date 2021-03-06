//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "QLActionDelegate.h"
#import "QLShareDataSource.h"

@class NSString, QLJCELoadingConfig, QLJCEVideoAttentItem, QLMovieItem;

@protocol KKMediaPlayerDataSource <NSObject, QLShareDataSource, QLActionDelegate>
- (_Bool)enableAddListBtn;
- (QLJCEVideoAttentItem *)getCurrentAttentionItem;

@optional
- (_Bool)isNeedJumpForeAdsWithVid:(NSString *)arg1;
- (double)getHistoryRecordTimeForCid:(NSString *)arg1 Vid:(NSString *)arg2 Index:(long long)arg3;
- (_Bool)dataSourceLoadFinished;
- (long long)getCurrentPlayLiveStatus;
- (QLMovieItem *)getMovieItem;
- (NSString *)getPropsDatakey;
- (long long)getLiveType;
- (void)playerWillAutoJumpAD;
- (NSString *)getCacheDataKey;
- (QLJCELoadingConfig *)getCurrentLoadingConfig;
@end

