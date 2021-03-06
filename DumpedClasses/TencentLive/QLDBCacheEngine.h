//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QLDBCache;

@interface QLDBCacheEngine : NSObject
{
    QLDBCache *_dbCache;
    NSMutableDictionary *_cacheDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(retain, nonatomic) QLDBCache *dbCache; // @synthesize dbCache=_dbCache;
- (void).cxx_destruct;
- (void)clear;
- (id)saveItems:(id)arg1 withMessageId:(id)arg2 withUserFlag:(id)arg3 withSaveMode:(int)arg4;
- (id)getCacheWith:(id)arg1 withUserFlag:(id)arg2 withReadMode:(int)arg3;
- (id)getItemListWithTableName:(id)arg1 withStartId:(id)arg2 withCount:(long long)arg3;
- (id)getItemList:(id)arg1 withUserFlag:(id)arg2 withStartId:(id)arg3 withCount:(long long)arg4;
- (id)getTableName:(id)arg1 withUserFlag:(id)arg2;
- (id)init;

@end

