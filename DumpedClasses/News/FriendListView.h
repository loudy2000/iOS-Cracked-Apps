//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "FriendDataManagerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "TTWeChatShareDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserListViewProtocol.h"

@class ArticleEmptyView, ArticleFriend, FriendDataManager, NSMutableArray, NSString, SSListNotifyBarView, UIActivityIndicatorView, UITableView;

@interface FriendListView : SSViewBase <UITableViewDataSource, UITableViewDelegate, FriendDataManagerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, TTWeChatShareDelegate, UserListViewProtocol>
{
    int _type;
    _Bool _isLoading;
    _Bool _isLoadMore;
    _Bool _canLoadMore;
    _Bool _needShowNotify;
    int _offset;
    _Bool noNeedGetDataWhenAuthorityCanceled;
    long long _weixinIndex;
    long long _messageIndex;
    long long _mailIndex;
    _Bool _hasSentScrollEvent;
    _Bool _hasAppear;
    id <FriendListViewDelelgate> delegate;
    ArticleFriend *currentFriend;
    UITableView *friendView;
    SSListNotifyBarView *listNotifyBarView;
    ArticleEmptyView *emptyView;
    NSMutableArray *friends;
    NSMutableArray *inSiteUsers;
    FriendDataManager *friendManager;
    UIActivityIndicatorView *indicator;
    NSString *_umengEventName;
}

@property(nonatomic) _Bool hasAppear; // @synthesize hasAppear=_hasAppear;
@property(retain, nonatomic) NSString *umengEventName; // @synthesize umengEventName=_umengEventName;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator;
@property(retain, nonatomic) FriendDataManager *friendManager; // @synthesize friendManager;
@property(retain, nonatomic) NSMutableArray *inSiteUsers; // @synthesize inSiteUsers;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends;
@property(retain, nonatomic) ArticleEmptyView *emptyView; // @synthesize emptyView;
@property(retain, nonatomic) SSListNotifyBarView *listNotifyBarView; // @synthesize listNotifyBarView;
@property(retain, nonatomic) UITableView *friendView; // @synthesize friendView;
@property(retain, nonatomic) ArticleFriend *currentFriend; // @synthesize currentFriend;
@property(nonatomic) __weak id <FriendListViewDelelgate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)weChatShare:(id)arg1 sharedWithError:(id)arg2 customCallbackUserInfo:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)needInviteSection;
- (void)friendDataManager:(id)arg1 finishGotListWithType:(int)arg2 error:(id)arg3 result:(id)arg4 totalNumber:(unsigned long long)arg5 anonymousNumber:(unsigned long long)arg6 hasMore:(_Bool)arg7 offset:(int)arg8;
- (void)emptyButtonClicked:(id)arg1;
- (void)displayEmptyView:(_Bool)arg1 emptyType:(long long)arg2;
- (void)loadMore;
- (void)loadData;
- (void)stopLoading;
- (void)startLoading;
- (double)inviteSectionHeight;
- (void)initializeInviteSectionRowIndex;
- (void)handleRelationActionSuccessNotification:(id)arg1;
- (void)handleChangeStatusNotification:(id)arg1;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)loadView;
- (void)setScrollsEnable:(_Bool)arg1;
- (void)goToAuthorityView;
- (void)ssLayoutSubviews;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

