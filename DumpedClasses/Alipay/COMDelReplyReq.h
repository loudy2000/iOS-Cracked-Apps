//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMDelReplyReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *blackReason; // @dynamic blackReason;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *feedId; // @dynamic feedId;
@property(readonly) _Bool hasBlackReason; // @dynamic hasBlackReason;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasFeedId; // @dynamic hasFeedId;
@property(readonly) _Bool hasPullToBlack; // @dynamic hasPullToBlack;
@property(readonly) _Bool hasReplyId; // @dynamic hasReplyId;
@property(nonatomic) _Bool pullToBlack; // @dynamic pullToBlack;
@property(retain, nonatomic) NSString *replyId; // @dynamic replyId;

@end

