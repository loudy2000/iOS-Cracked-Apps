//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXArtistsMVBLL : NSObject
{
}

+ (id)getConcernMvListWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (id)getCdnRankMvListWithPage:(int)arg1 withPageSize:(int)arg2 withRankType:(int)arg3 successBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
+ (id)getCdnMvRecommendListWithPage:(int)arg1 withPageSize:(int)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;

@end

