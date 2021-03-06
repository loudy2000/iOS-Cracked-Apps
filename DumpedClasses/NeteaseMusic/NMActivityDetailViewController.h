//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "MCRefreshTableHeaderViewDelegate.h"
#import "NMAcitivityInfoViewDelegate.h"
#import "NMEventCellDelegate.h"
#import "NMEventEditMenuDelegate.h"
#import "NMForwardEventViewControllerDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMScreenShotProtocol.h"
#import "NMShareIconMenuDelegate.h"
#import "NMShareMenuDelegate.h"
#import "NMShareToSinglePlatformViewControllerDelegate.h"
#import "OpenPlatformAuthViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCPullTableView, NMActivityBottomView, NMActivityDetailLastedRequest, NMActivityDetailNewEventCheckRequest, NMActivityInfoView, NMActivityTipView, NMBarButtonItem, NMEvent, NMEventDeleteRequest, NMEventEditMenu, NMGetBatchRequest, NMHotEventRejectRequest, NMPraiseRequest, NMRmdActivity, NMRmdActivityEvent, NMRmdActivityRemindCancelRequest, NMRmdActivityRemindRequest, NMRmdActivityRequest, NMSendVideoStatusController, NMShareIconMenu, NMTableViewContainer, NMUnpraiseRequest, NSDictionary, NSMutableArray, NSString, NSTimer, UIImage;

@interface NMActivityDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMEventCellDelegate, NMHttpRequestDelegate, MCLoadMoreTableFooterViewDelegate, MCRefreshTableHeaderViewDelegate, NMShareIconMenuDelegate, OpenPlatformAuthViewControllerDelegate, NMShareToSinglePlatformViewControllerDelegate, NMAcitivityInfoViewDelegate, NMEventEditMenuDelegate, NMForwardEventViewControllerDelegate, NMShareMenuDelegate, NMScreenShotProtocol>
{
    NSMutableArray *_hotEventArray;
    NSMutableArray *_lastedEventArray;
    NSMutableArray *_artistEventArray;
    NMRmdActivityEvent *_rmdActivityEvent;
    NSTimer *_updateTimer;
    long long _lastEventTime;
    _Bool _isLastedEventEnd;
    _Bool _isLoadmore;
    _Bool _isLoading;
    _Bool _hasNewStarEvent;
    _Bool _refreshByTapTipView;
    _Bool _isAutoCreatedIfNeeded;
    double _browserBeginTime;
    NMGetBatchRequest *_batchRequest;
    NMRmdActivityRequest *_activityInfoRequest;
    NMActivityDetailLastedRequest *_lastEventLoadmoreRequest;
    NMEventDeleteRequest *_deleteRequest;
    NSMutableArray *_followRequestArray;
    NMPraiseRequest *_praiseRequest;
    NMUnpraiseRequest *_unpraiseRequest;
    NMHotEventRejectRequest *_hotEventRejectRequest;
    NMActivityDetailNewEventCheckRequest *_eventCheckRequest;
    NMRmdActivityRemindRequest *_remindRequest;
    NMRmdActivityRemindCancelRequest *_remindCancelRequest;
    _Bool _shouldAddSlideBILog;
    _Bool _backToFriendsView;
    id <NMEventViewDelegate> _delegate;
    NSString *_activityID;
    NSString *_activityName;
    NMRmdActivity *_rmdActivity;
    MCPullTableView *_activityDetailTableView;
    NMTableViewContainer *_tableViewContainer;
    NMActivityInfoView *_activityInfoView;
    NMActivityBottomView *_activityBottomView;
    NMActivityTipView *_activityEventTipView;
    NMBarButtonItem *_shareButton;
    NMShareIconMenu *_shareMenu;
    NMSendVideoStatusController *_sendVideoCtrl;
    NSString *_shareText;
    NSString *_shareCopyText;
    NSString *_shareDescription;
    NSString *_shareUrl;
    UIImage *_shareImage;
    NSString *_shareImageUrl;
    NSDictionary *_shareObject;
    NMEventEditMenu *_editMenu;
}

@property(retain, nonatomic) NMEventEditMenu *editMenu; // @synthesize editMenu=_editMenu;
@property(retain, nonatomic) NSDictionary *shareObject; // @synthesize shareObject=_shareObject;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(copy, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *shareCopyText; // @synthesize shareCopyText=_shareCopyText;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) NMSendVideoStatusController *sendVideoCtrl; // @synthesize sendVideoCtrl=_sendVideoCtrl;
@property(retain, nonatomic) NMShareIconMenu *shareMenu; // @synthesize shareMenu=_shareMenu;
@property(retain, nonatomic) NMBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NMActivityTipView *activityEventTipView; // @synthesize activityEventTipView=_activityEventTipView;
@property(retain, nonatomic) NMActivityBottomView *activityBottomView; // @synthesize activityBottomView=_activityBottomView;
@property(retain, nonatomic) NMActivityInfoView *activityInfoView; // @synthesize activityInfoView=_activityInfoView;
@property(retain, nonatomic) NMTableViewContainer *tableViewContainer; // @synthesize tableViewContainer=_tableViewContainer;
@property(retain, nonatomic) MCPullTableView *activityDetailTableView; // @synthesize activityDetailTableView=_activityDetailTableView;
@property(retain, nonatomic) NMRmdActivity *rmdActivity; // @synthesize rmdActivity=_rmdActivity;
@property(retain, nonatomic) NMEvent *rmdActivityEvent; // @synthesize rmdActivityEvent=_rmdActivityEvent;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(copy, nonatomic) NSString *activityID; // @synthesize activityID=_activityID;
@property(nonatomic) _Bool backToFriendsView; // @synthesize backToFriendsView=_backToFriendsView;
@property(nonatomic) id <NMEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)extraBIDescInfo;
- (id)screenShotShareLink;
- (id)screenShotShareWords;
- (id)routeScheme;
- (void)refreshEventCells;
- (void)eventShareExternalIncreaseCount;
- (void)forwardControllerSuccessedForward:(id)arg1;
- (void)shareButtonTouched:(id)arg1 type:(unsigned long long)arg2;
- (void)shareMenuNeedLogin:(id)arg1;
- (void)shareMenuDidDismiss:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (id)resourceObjWithDic:(id)arg1 ForType:(long long)arg2;
- (Class)resourceClass:(long long)arg1;
- (void)finishLoadMoreEvent:(_Bool)arg1;
- (void)finishRefreshEvent:(_Bool)arg1;
- (void)recoverTableViewAfterLoadmore:(id)arg1;
- (void)recoverTableViewAfterRefresh:(id)arg1;
- (long long)getNewEventTime;
- (long long)getLastEventTime;
- (id)eventsArrayWithRawArray:(id)arg1;
- (void)refreshLastEventTimeWithRawEventsArray:(id)arg1;
- (void)refreshEvents;
- (void)loadMoreLastedEvents;
- (void)refreshRequest;
- (void)sendEventRequest;
- (void)sendRmdActivityInfoRequest;
- (void)loadTopicInfo;
- (void)multiImageTouched:(id)arg1 event:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dropMenuButtonTouched:(id)arg1 event:(id)arg2;
- (void)eventEditMenuNeedLogin:(id)arg1;
- (void)eventEditMenuDeleteClicked:(id)arg1;
- (void)showDeleteMenuWithEvent:(id)arg1;
- (void)forwardedEventBackgroundTouched:(id)arg1 forwardedEvent:(id)arg2;
- (void)retryButtonTouched:(id)arg1 event:(id)arg2;
- (void)forwardButtonTouched:(id)arg1 event:(id)arg2;
- (void)commentButtonTouched:(id)arg1 event:(id)arg2;
- (void)praiseButtonTouched:(id)arg1 event:(id)arg2;
- (void)focusButtonTouched:(id)arg1 event:(id)arg2 user:(id)arg3;
- (void)eventObjectTouched:(id)arg1 event:(id)arg2;
- (void)httpLinkTouched:(id)arg1 httpURL:(id)arg2;
- (void)activityLinkTouched:(id)arg1 actID:(id)arg2;
- (void)topicLinkTouched:(id)arg1 topicName:(id)arg2;
- (void)activityLinkClicked:(id)arg1;
- (void)userNameTouched:(id)arg1 userNickName:(id)arg2;
- (void)avatarViewTouched:(id)arg1 userID:(id)arg2;
- (void)sendNotInterestedEventRequestWithEvent:(id)arg1;
- (void)sendDeleteEventRequestWithEvent:(id)arg1;
- (void)deleteMenuItemTouchedInCell:(id)arg1;
- (void)sendRemindCancelRequest;
- (void)sendRemindRequest;
- (void)commodityClicked:(id)arg1 commodity:(id)arg2;
- (void)reminderButtonClicked:(id)arg1 remind:(_Bool)arg2;
- (void)moreDesButtonClicked:(id)arg1 buttonClicked:(_Bool)arg2;
- (void)joinRmdActivity:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)gesturePopBack:(id)arg1;
- (void)backAction:(id)arg1;
- (void)_doBack;
- (_Bool)mcRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)mcRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showEventDetail:(id)arg1 enterCommentStatus:(_Bool)arg2;
- (void)showEventDetail:(id)arg1;
- (void)eventSelected:(id)arg1;
- (id)tipLabelWithTipStr:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)activityEventTipButtonClicked:(id)arg1;
- (void)hideActivityEventTipBtn;
- (void)showActivityEventTipBtn;
- (void)hideActivityReminderButton;
- (void)finishCheckNewEvent:(id)arg1;
- (void)checkNewEvent;
- (void)endUpdateTimer;
- (void)startUpdateTimer;
- (void)endRcordBrowsing;
- (void)startRecordBrowsing;
- (void)triggerRefreshAnimation;
- (void)enableActionButtons:(_Bool)arg1;
- (void)postVideo;
- (void)joinButtonClikced;
- (void)reloadBottomView;
- (void)reloadActivityInfoView;
- (void)setShareContentInfo;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithActivityName:(id)arg1;
- (id)initWithActivityName:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)initWithActivityID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end

