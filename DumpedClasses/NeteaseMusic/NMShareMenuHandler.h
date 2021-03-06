//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMShareCoverViewDelegate.h"

@class NMShareCoverView, NSString, UIImage;

@interface NMShareMenuHandler : NSObject <NMShareCoverViewDelegate>
{
    CDUnknownBlockType _shareAction;
    NMShareCoverView *_shareCoverView;
    UIImage *_shareCoverImage;
    _Bool _fromPlay;
    NSString *_prefilledText;
    UIImage *_backupShareThumbImage;
    id _resource;
}

+ (id)defaultHandler;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(retain, nonatomic) UIImage *backupShareThumbImage; // @synthesize backupShareThumbImage=_backupShareThumbImage;
@property(nonatomic) _Bool fromPlay; // @synthesize fromPlay=_fromPlay;
@property(retain, nonatomic) NSString *prefilledText; // @synthesize prefilledText=_prefilledText;
- (void).cxx_destruct;
- (void)downloadShareCoverImageCompleted;
- (id)shareThumbImageForShareMenuView:(id)arg1;
- (_Bool)hasInstalledThirdApp:(unsigned long long)arg1;
- (void)_downloadCoverImageCompleted;
- (void)shareToWeibo;
- (void)shareCommentImageToQQ:(unsigned long long)arg1;
- (void)logShareWithTargetID:(id)arg1;
- (id)combineImage:(id)arg1 withBackgroudImage:(id)arg2;
- (id)combinePlayIconWithXinShareScene:(unsigned long long)arg1;
- (void)handlerWithXinShareScene:(unsigned long long)arg1 withSDKType:(unsigned long long)arg2;
- (void)handlerWithQQShareScene:(unsigned long long)arg1;
- (void)shareToQQZone;
- (void)shareToQQSession;
- (void)shareToYixinTimeLine;
- (void)shareToYixinSession;
- (void)shareToWeixinTimeLine;
- (void)shareToWeixinSession;
- (void)_handleBlockedPlatform:(long long)arg1;
- (_Bool)_isCoverImageReady;
- (void)_configShareAction:(SEL)arg1;
- (void)chooseToShareWeiboWithResource:(id)arg1 withPrefilledText:(id)arg2;
- (void)chooseToShareQQZone;
- (void)chooseToShareQQSession;
- (void)chooseToShareYixinTimeLine;
- (void)chooseToShareYixinSession;
- (void)chooseToShareWeixinTimeLine;
- (void)chooseToShareWeixinSession;
- (void)handlerWithResource:(id)arg1 withBackupImage:(id)arg2 withPrefilledText:(id)arg3 fromPlay:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

