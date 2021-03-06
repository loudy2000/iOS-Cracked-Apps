//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, TrackerNavigationControllerUpdateAction;

@interface TrackerCenter : NSObject
{
    TrackerNavigationControllerUpdateAction *_updateNavigationControllerAction;
    long long _seq;
    unsigned long long _maxEventCount;
    int _xo;
    NSMutableArray *_eventQueue;
    NSMutableDictionary *_fastLogRecorder;
    NSMutableArray *_javaScriptErrorEvents;
    NSObject<OS_dispatch_queue> *_recorderSerialQueue;
}

+ (void)setOutPutPerEventObjectBlock:(CDUnknownBlockType)arg1;
+ (void)setOutPutPerEventLogBlock:(CDUnknownBlockType)arg1;
+ (id)shareInstance;
@property(nonatomic) unsigned long long maxEventCount; // @synthesize maxEventCount=_maxEventCount;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) TrackerNavigationControllerUpdateAction *updateNavigationControllerAction; // @synthesize updateNavigationControllerAction=_updateNavigationControllerAction;
- (void).cxx_destruct;
- (void)addJavaScriptErrorEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)addAppEventWithName:(id)arg1 description:(id)arg2;
- (void)updateNavigationControllerAction:(id)arg1;
- (void)addKeyEvenToQueue:(id)arg1;
- (id)getInserEvent:(id)arg1;
- (_Bool)isKeyboardTouchEvent:(id)arg1;
- (void)recordText:(id)arg1 key:(id)arg2;
- (void)recordIntege:(long long)arg1 key:(id)arg2;
- (id)eventQueuLog;
- (id)fullLog;
- (id)logbuilder;
@property(readonly, nonatomic) NSMutableArray *javaScriptErrorEvents;
@property(readonly, nonatomic) NSMutableDictionary *fastLogRecorder;
@property(readonly, nonatomic) NSMutableArray *eventQueue;
- (id)init;
- (void)start;
- (void)addEventObservers;
- (void)addUIApplicationNotificationWithName:(id)arg1;
- (void)applicatioNotification:(id)arg1;

@end

