//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPBodyObject.h"

@class NSDate, NSString;

@interface AMPBodyNotifyContent : NSObject <AMPBodyObject>
{
    long long _packTargetId;
    NSString *_ccode;
    NSString *_content;
    NSString *_templateContent;
    NSString *_activeContent;
    NSDate *_time;
}

@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *activeContent; // @synthesize activeContent=_activeContent;
@property(copy, nonatomic) NSString *templateContent; // @synthesize templateContent=_templateContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
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

