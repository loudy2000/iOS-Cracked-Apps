//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBStoryVideoWaitModel : NSObject
{
    _Bool _noMoreData;
    unsigned int _memoryCollectionID;
    long long _waitDirection;
    id _waitObject;
}

@property(retain, nonatomic) id waitObject; // @synthesize waitObject=_waitObject;
@property(nonatomic) long long waitDirection; // @synthesize waitDirection=_waitDirection;
@property(nonatomic) unsigned int memoryCollectionID; // @synthesize memoryCollectionID=_memoryCollectionID;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
- (void)dealloc;

@end

