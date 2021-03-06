//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseFuncShowRoomInteractViewCtl.h"

#import "QLBaseInputViewDelegate.h"
#import "QLLiveMessageDispatchDelegate.h"
#import "QLRequestModelDelegate.h"
#import "QLShowRoomBusinessConductorProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, QLMessageDispatchManager, QLShowRoomCommtKeyboardCtl, QLShowRoomRankTableFooterView, UIButton, UIImageView, UILabel;

@interface QLShowRoomCommentInteractViewCtl : QLBaseFuncShowRoomInteractViewCtl <QLRequestModelDelegate, QLLiveMessageDispatchDelegate, QLBaseInputViewDelegate, QLShowRoomBusinessConductorProtocol, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool mConductorCanReceiveCMD;
    double mTableWidth;
    _Bool _readyToPolling;
    _Bool _pollingHasFired;
    id <QLShowRoomViewLayerProtocol><QLShowRoomMainPageProtocol> _SRLayerOpDelegate;
    QLMessageDispatchManager *_msgDispatchMgr;
    NSString *_commentKey;
    NSString *_filterKey;
    NSString *_pid;
    UILabel *_commtHeaderLbl;
    QLShowRoomRankTableFooterView *_commtFooterView;
    UIButton *_commtCloseBtn;
    UIImageView *_commtBgView;
    QLShowRoomCommtKeyboardCtl *_showRoomKeyboardCtl;
    QLShowRoomCommentInteractViewCtl *_showRoomCommtCtlFull;
    NSMutableArray *_itemAryForUI;
    NSArray *_initialUIAry;
    double _refreshTimeGap;
    unsigned long long _pageStatus;
    unsigned long long _viewScene;
}

@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(nonatomic) unsigned long long pageStatus; // @synthesize pageStatus=_pageStatus;
@property(nonatomic) double refreshTimeGap; // @synthesize refreshTimeGap=_refreshTimeGap;
@property(nonatomic) _Bool pollingHasFired; // @synthesize pollingHasFired=_pollingHasFired;
@property(nonatomic) _Bool readyToPolling; // @synthesize readyToPolling=_readyToPolling;
@property(copy, nonatomic) NSArray *initialUIAry; // @synthesize initialUIAry=_initialUIAry;
@property(retain, nonatomic) NSMutableArray *itemAryForUI; // @synthesize itemAryForUI=_itemAryForUI;
@property(retain, nonatomic) QLShowRoomCommentInteractViewCtl *showRoomCommtCtlFull; // @synthesize showRoomCommtCtlFull=_showRoomCommtCtlFull;
@property(retain, nonatomic) QLShowRoomCommtKeyboardCtl *showRoomKeyboardCtl; // @synthesize showRoomKeyboardCtl=_showRoomKeyboardCtl;
@property(retain, nonatomic) UIImageView *commtBgView; // @synthesize commtBgView=_commtBgView;
@property(retain, nonatomic) UIButton *commtCloseBtn; // @synthesize commtCloseBtn=_commtCloseBtn;
@property(retain, nonatomic) QLShowRoomRankTableFooterView *commtFooterView; // @synthesize commtFooterView=_commtFooterView;
@property(retain, nonatomic) UILabel *commtHeaderLbl; // @synthesize commtHeaderLbl=_commtHeaderLbl;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(retain, nonatomic) QLMessageDispatchManager *msgDispatchMgr; // @synthesize msgDispatchMgr=_msgDispatchMgr;
@property(nonatomic) __weak id <QLShowRoomViewLayerProtocol><QLShowRoomMainPageProtocol> SRLayerOpDelegate; // @synthesize SRLayerOpDelegate=_SRLayerOpDelegate;
- (void).cxx_destruct;
- (void)sortUIItemsBeforeReloadData;
- (void)replaceUIItemsAryAndReloadDataWithArray:(id)arg1;
- (void)addUIItemsAryToHeadAndReloadDataWithArray:(id)arg1;
- (void)addUIItemsAryToTailAndReloadDataWithArray:(id)arg1;
- (void)mergeTrueFeedAndFakeFeed;
- (unsigned long long)currentShowRoomConductorStatus;
- (void)receiveCommandFromSubBusinessMgr:(id)arg1 commandType:(unsigned long long)arg2;
- (void)onTapShowRoomCommtCloseBtn:(id)arg1;
- (void)onTapShowRoomFooterView:(id)arg1;
- (void)abortDataFetcherPollingServer;
- (void)fireDataFetcherPollingServer;
- (void)requestLatestPageDataAtCurrentMoment;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)didReceiveMessageDispatchData:(id)arg1 dispatcher:(id)arg2;
- (void)momentInputViewDidDismiss:(id)arg1;
- (void)momentInputViewDidPressSendButton:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)showRoomBusinessSupporter:(id)arg1 setChatRoomTabItem:(id)arg2;
- (void)showRoomBusinessSupporterCmdTypeChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollTableToTargetIndexRow:(long long)arg1 animation:(_Bool)arg2;
- (void)executeAutoScrollActionIfNeed:(unsigned long long)arg1 contentHeightBefore:(double)arg2 constentOffesetHeightBefore:(double)arg3 itemCountEnd:(unsigned long long)arg4 pageStatus:(unsigned long long)arg5;
- (void)retryDown:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (_Bool)shouldShowLoading;
- (void)showLoading:(_Bool)arg1;
- (_Bool)shouldShowError:(id)arg1;
- (void)showError:(_Bool)arg1 error:(id)arg2;
- (void)showEmpty:(_Bool)arg1;
- (struct CGRect)frameOfPageStatusView;
- (id)subtitleForError:(id)arg1;
- (id)subtitleForEmpty;
- (id)imageForError:(id)arg1;
- (id)titleForError:(id)arg1;
- (id)imageForEmpty;
- (id)titleForEmpty;
- (void)enterBackground:(id)arg1;
- (void)enterForground:(id)arg1;
- (void)leavePage;
- (void)enterPage;
- (void)setTableBackgroundImage:(id)arg1;
- (void)setBusinessConductor:(id)arg1;
- (void)setInitialUIItemAry:(id)arg1;
- (void)resetCommentKey:(id)arg1 filterKey:(id)arg2 forceFire:(_Bool)arg3 pid:(id)arg4;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCommentKey:(id)arg1 filterKey:(id)arg2 viewScene:(unsigned long long)arg3 pid:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

