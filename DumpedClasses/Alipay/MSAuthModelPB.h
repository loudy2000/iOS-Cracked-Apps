//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface MSAuthModelPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *authModels; // @dynamic authModels;
@property(nonatomic) int currentPageNum; // @dynamic currentPageNum;
@property(readonly) _Bool hasCurrentPageNum; // @dynamic hasCurrentPageNum;
@property(readonly) _Bool hasPageTitle; // @dynamic hasPageTitle;
@property(readonly) _Bool hasPb_hasNext; // @dynamic hasPb_hasNext;
@property(retain, nonatomic) NSString *pageTitle; // @dynamic pageTitle;
@property(nonatomic) _Bool pb_hasNext; // @dynamic pb_hasNext;

@end

