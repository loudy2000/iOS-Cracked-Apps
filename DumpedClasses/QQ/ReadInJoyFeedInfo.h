//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReadInJoyEntityBase.h"

@class NSArray, NSMutableArray, ReadInJoyFeedContent2;

@interface ReadInJoyFeedInfo : ReadInJoyEntityBase
{
    _Bool _syncToQzone;
    unsigned int _likingStatus;
    unsigned long long _feedId;
    unsigned long long _latestUpdateTime;
    ReadInJoyFeedContent2 *_feedContent2;
    NSArray *_commentList;
    NSArray *_likeUinList;
    unsigned long long _sendStatus;
    NSMutableArray *_relatedFeedList;
    unsigned long long _sourceArticleID;
}

+ (id)entityFromDb:(id)arg1;
+ (id)likeUinListFromData:(id)arg1;
+ (id)dataFromLikeUinList:(id)arg1;
@property unsigned long long sourceArticleID; // @synthesize sourceArticleID=_sourceArticleID;
@property(retain) NSMutableArray *relatedFeedList; // @synthesize relatedFeedList=_relatedFeedList;
@property _Bool syncToQzone; // @synthesize syncToQzone=_syncToQzone;
@property unsigned int likingStatus; // @synthesize likingStatus=_likingStatus;
@property unsigned long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(retain) NSArray *likeUinList; // @synthesize likeUinList=_likeUinList;
@property(retain) NSArray *commentList; // @synthesize commentList=_commentList;
@property(retain) ReadInJoyFeedContent2 *feedContent2; // @synthesize feedContent2=_feedContent2;
@property unsigned long long latestUpdateTime; // @synthesize latestUpdateTime=_latestUpdateTime;
@property unsigned long long feedId; // @synthesize feedId=_feedId;
- (_Bool)supportMultiTable;
- (_Bool)updateLikeToDb:(id)arg1;
- (_Bool)saveToDb:(id)arg1;
- (void)dealloc;

@end

