//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol ANXStorageProtocol <NSObject>
- (void)removeAllObjecs;
- (NSArray *)fetchAllKeys;
- (void)removeObjectForKey:(NSString *)arg1;
- (id)fetchObjectForKey:(NSString *)arg1;
- (void)saveObject:(id)arg1 forKey:(NSString *)arg2;
- (id)initWithNamespace:(NSString *)arg1;
@end

