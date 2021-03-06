//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMEssentialPlaylistRequest : NMBaseRequest
{
    long long _lastTime;
    NSString *_categoryName;
    long long _limitCount;
}

@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
- (void).cxx_destruct;
- (id)initWithCategory:(id)arg1 lastTime:(long long)arg2 limit:(long long)arg3;

@end

