//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, QQLockDictionary;

@interface QQAIOFlashChatArkAppManager : NSObject <ISCBusinessCallback, ISCListenerCallback>
{
    NSObject<OS_dispatch_queue> *_queue;
    QQLockDictionary *_appInfos;
    NSMutableDictionary *_appPathCache;
}

+ (id)appPath:(id)arg1;
+ (id)appDirByResID:(int)arg1 appName:(id)arg2;
+ (id)appInfoPathForUin:(id)arg1;
+ (id)rootPath;
+ (id)scidForResID:(int)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *appPathCache; // @synthesize appPathCache=_appPathCache;
@property(retain, nonatomic) QQLockDictionary *appInfos; // @synthesize appInfos=_appInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)isScribeMsgShouldShowQIMTail;
- (_Bool)isHighBoomMsgShouldShowQIMTail;
- (_Bool)isFlashChatMsgShouldShowQIMTail;
- (id)getMsgResourceInfo;
- (_Bool)entranceVisible;
- (void)createFlashChatDirIfNeeded;
- (int)resIDFromScid:(id)arg1;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)downloadAppByResID:(int)arg1;
- (id)getAppInfoInCacheByResID:(unsigned long long)arg1 forUin:(id)arg2;
- (void)getAppPathByResID:(int)arg1 appName:(id)arg2 minVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getFlashChatSwitchValue;
- (void)userDidLogin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

