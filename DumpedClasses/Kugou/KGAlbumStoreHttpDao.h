//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface KGAlbumStoreHttpDao : BaseHttpDao
{
}

- (id)queryAlbumStoreMonthlyDataWithPage:(long long)arg1 andPageSize:(long long)arg2 languageType:(long long)arg3 sortType:(long long)arg4 andError:(id *)arg5;
- (id)queryAlbumStoreWellSellDataWithPage:(long long)arg1 andPageSize:(long long)arg2 andError:(id *)arg3;
- (id)queryAlbumStoreRecommendWellSellDataWithPage:(long long)arg1 andpageSize:(long long)arg2 andError:(id *)arg3;
- (id)queryRecommendBannerDataWithError:(id *)arg1;

@end

