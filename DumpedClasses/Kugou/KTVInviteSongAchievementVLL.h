//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVInviteSongAchievementViewDataSource.h"
#import "KTVInviteSongAchievementViewEventDelegate.h"

@class KTVInviteSongAchievementVM, NSString;

@interface KTVInviteSongAchievementVLL : NSObject <KTVInviteSongAchievementViewEventDelegate, KTVInviteSongAchievementViewDataSource>
{
    KTVInviteSongAchievementVM *_viewModel;
    id <KTVInviteSongAchievementVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVInviteSongAchievementVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVInviteSongAchievementVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)opusInfoOfNum:(long long)arg1;
- (long long)opusIdOfNum:(long long)arg1;
- (_Bool)haveMoreDataInviteAchievementView;
- (id)inviteAchievementItemAtIndex:(long long)arg1;
- (long long)numberOfInviteAchievements;
- (void)invitedListViewShouldLoadMoreData;
- (void)invitedListViewShouldReflashData;
- (void)goToListenPage:(id)arg1;
- (void)goToUserSpace:(long long)arg1;
- (void)invitedListView:(id)arg1 configureCell:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

