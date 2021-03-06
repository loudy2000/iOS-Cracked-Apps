//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface DRCCacheHelper : NSObject
{
    NSMutableDictionary *_memoryCacheDictionary;
    NSURL *_cacheURL;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) NSMutableDictionary *memoryCacheDictionary; // @synthesize memoryCacheDictionary=_memoryCacheDictionary;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unlock;
- (void)lock;
- (id)decodedString:(id)arg1;
- (id)encodedString:(id)arg1;
- (id)keyForEncodedFileURL:(id)arg1;
- (id)encodedFileURL:(id)arg1 forKey:(id)arg2;
- (void)emptyTrash;
- (_Bool)moveItemAtURLToTrash:(id)arg1;
- (id)sharedTrashURL;
- (id)sharedTrashQueue;
- (void)transferPINCacheData;
- (void)syncCacheWithKey:(id)arg1 value:(id)arg2;
- (id)getCacheDataWithKey:(id)arg1;
- (_Bool)createCacheFolder;
- (id)init;

@end

