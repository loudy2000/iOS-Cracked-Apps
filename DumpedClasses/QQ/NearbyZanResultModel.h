//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableArray;

@interface NearbyZanResultModel : QQModel
{
    int _level;
    int _canVoteFreeUserCount;
    int _canVoteFreeCount;
    int _remainTotal;
    int _consumeTotal;
    NSMutableArray *_voteResultArray;
    int _xo;
}


// Remaining properties
@property(nonatomic) int canVoteFreeCount; // @dynamic canVoteFreeCount;
@property(nonatomic) int canVoteFreeUserCount; // @dynamic canVoteFreeUserCount;
@property(nonatomic) int consumeTotal; // @dynamic consumeTotal;
@property(nonatomic) int level; // @dynamic level;
@property(nonatomic) int remainTotal; // @dynamic remainTotal;
@property(retain, nonatomic) NSMutableArray *voteResultArray; // @dynamic voteResultArray;
@end

