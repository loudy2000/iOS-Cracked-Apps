//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GovPApprovalStatusReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *aid; // @dynamic aid;
@property(nonatomic) _Bool hasAid; // @dynamic hasAid;
@property(nonatomic) _Bool hasMsg; // @dynamic hasMsg;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasSubids; // @dynamic hasSubids;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *subids; // @dynamic subids;
@property(nonatomic) int type; // @dynamic type;

@end

