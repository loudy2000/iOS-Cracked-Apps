//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPBodyObject.h"

@class NSString;

@interface AMPBodyNotifyGroupUpdate : NSObject <AMPBodyObject>
{
    long long _packTargetId;
    long long _bizId;
    NSString *_ccode;
    unsigned long long _type;
    long long _time;
    NSString *_content;
    long long _operatorUserId;
    NSString *_groupHeadPic;
    NSString *_groupName;
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupHeadPic; // @synthesize groupHeadPic=_groupHeadPic;
@property(nonatomic) long long operatorUserId; // @synthesize operatorUserId=_operatorUserId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)parseFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
