//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class NSString;

@interface QLFanTuanMyUserIdReqModel : QLDataRequestModel
{
    NSString *_rUserId;
}

@property(retain, nonatomic) NSString *rUserId; // @synthesize rUserId=_rUserId;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestMyUserIdForFanTuan;

@end
