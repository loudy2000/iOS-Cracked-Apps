//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CFT_InterfCacheManager : NSObject
{
}

+ (void)cacheDataInOrderInfoWithParam:(id)arg1 scene:(int)arg2;
+ (id)nameForType:(int)arg1;
+ (id)localPathForType:(int)arg1;
+ (id)cacheBasePath;
+ (_Bool)removeDataForType:(int)arg1;
+ (id)getDataForType:(int)arg1 version:(id)arg2;
+ (_Bool)saveData:(id)arg1 cacheType:(int)arg2 version:(id)arg3;

@end

