//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSNSVideoFeedCountModel : TBJSONModel
{
    unsigned long long _playCount;
    unsigned long long _commentCount;
    unsigned long long _praiseCount;
}

+ (id)modelKeyMapper;
@property(nonatomic) unsigned long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;

@end

