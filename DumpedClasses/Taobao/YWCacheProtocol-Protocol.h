//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol YWCacheProtocol <NSObject>
- (void)removeAllObjects;
- (void)removeObjectForKeys:(NSArray *)arg1;
- (void)removeObjectForKey:(id <NSCopying>)arg1;
- (id)objectForKey:(id <NSCopying>)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;

@optional
- (void)objectForKey:(id <NSCopying>)arg1 withDidGetCacheBlock:(void (^)(id <NSCopying>, id <NSCoding>))arg2;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2 withDidSetCacheBlock:(void (^)(NSError *))arg3;
@end

