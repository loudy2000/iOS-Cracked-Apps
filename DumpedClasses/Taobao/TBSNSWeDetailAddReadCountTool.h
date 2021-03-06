//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"

@class NSString, TBSNSWeDetailAddReadCountMtopService;

@interface TBSNSWeDetailAddReadCountTool : NSObject <TBSNSBasicServiceDelegate>
{
    CDUnknownBlockType _completeHandler;
    TBSNSWeDetailAddReadCountMtopService *_service;
}

@property(retain, nonatomic) TBSNSWeDetailAddReadCountMtopService *service; // @synthesize service=_service;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)addReadCountWithTargetType:(unsigned long long)arg1 targetId:(unsigned long long)arg2 interactType:(unsigned long long)arg3 subType:(unsigned long long)arg4 completeHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

