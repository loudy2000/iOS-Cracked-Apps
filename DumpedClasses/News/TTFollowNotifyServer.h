//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TTFollowNotifyServer : NSObject
{
    NSMutableArray *_oberverAndSelectorPairs;
}

+ (id)sharedServer;
@property(retain, nonatomic) NSMutableArray *oberverAndSelectorPairs; // @synthesize oberverAndSelectorPairs=_oberverAndSelectorPairs;
- (void).cxx_destruct;
- (void)liveFollowAction:(id)arg1;
- (void)postFollowNotifyWithID:(id)arg1 actionType:(long long)arg2 itemType:(long long)arg3 userInfo:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end

