//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest, QQStoryBonusImageView;

@interface QQStoryBonusManager : NSObject
{
    QQStoryBonusImageView *_bounsImageView;
    NSMutableURLRequest *_downloadRequest;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)dettachBonusAnimation;
- (void)attachBonusAnimationToView:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkIfAnimationIsVaildOrNot:(id)arg1;
- (_Bool)canPlayBonusAnimation;
- (void)didDownloadFail;
- (void)unZipPacket:(id)arg1;
- (void)didDownloadSuccess:(id)arg1 dataSavePath:(id)arg2;
- (void)reportDevEventWithResultCode:(long long)arg1;
- (void)startDownloadRes;
- (id)storyBounsAnimationDir;
- (id)storyResDownloadDir;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

