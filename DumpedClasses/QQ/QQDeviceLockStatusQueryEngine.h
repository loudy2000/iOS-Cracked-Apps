//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQDeviceLockStatusQueryEngine : NSObject <IEngineDispatchDelegate>
{
    _Bool _showLoading;
    unsigned int _deviceLockQueryCmdSeq;
    int _queryResult;
    int _latestQueryTime;
    NSString *_latestQueryUin;
    id <QQDeviceLockStatusQueryDelegate> _delegate;
    NSString *_wording;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) __weak id <QQDeviceLockStatusQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)queryDeviceLockStatusForDelegate:(id)arg1 showLoading:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
