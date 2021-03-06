//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GeneralLRUCache.h"

@interface ConfigIOLRUCache : GeneralLRUCache
{
    unsigned int _memSize;
}

@property(nonatomic) unsigned int memSize; // @synthesize memSize=_memSize;
- (double)evalueate:(id)arg1 lastAccessTime:(double)arg2;
- (void)onItemElimate:(id)arg1;
- (void)onItem:(id)arg1 updateToItem:(id)arg2;
- (void)onItemRemove:(id)arg1;
- (void)onItemInsert:(id)arg1;
- (_Bool)exceedLimit;

@end

