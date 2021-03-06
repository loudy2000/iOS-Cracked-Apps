//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveHomePageBaseListView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBLiveFeedEmptyView, TBLiveMenuChannelModel, UITableView;

@interface TBLiveHomePageListView : TBLiveHomePageBaseListView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    _Bool _needPlayVideo;
    _Bool _needLoadLikeIcon;
    _Bool _hasReceivedOnLookerData;
    long long _tagIndex;
    UITableView *_feedTableView;
    NSMutableArray *_dataSource;
    long long _currentPageNum;
    TBLiveMenuChannelModel *_menuModel;
    TBLiveFeedEmptyView *_emptyView;
    NSString *_fromTBHomePageContentId;
}

+ (id)liveHPPlayer;
@property(nonatomic) _Bool hasReceivedOnLookerData; // @synthesize hasReceivedOnLookerData=_hasReceivedOnLookerData;
@property(nonatomic) _Bool needLoadLikeIcon; // @synthesize needLoadLikeIcon=_needLoadLikeIcon;
@property(nonatomic) _Bool needPlayVideo; // @synthesize needPlayVideo=_needPlayVideo;
@property(retain, nonatomic) NSString *fromTBHomePageContentId; // @synthesize fromTBHomePageContentId=_fromTBHomePageContentId;
@property(retain, nonatomic) TBLiveFeedEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBLiveMenuChannelModel *menuModel; // @synthesize menuModel=_menuModel;
@property(nonatomic) long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *feedTableView; // @synthesize feedTableView=_feedTableView;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
- (void).cxx_destruct;
- (void)setEnablePlayVideo:(_Bool)arg1;
- (_Bool)getEnablePlayVideo;
- (void)scrollViewDidEndScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadLikeIconResourceWithUrl:(id)arg1;
- (void)registeTableViewCell;
- (void)toggleRefresh;
- (void)requestFeedWithModel:(id)arg1 contentId:(id)arg2;
- (void)showEmptyView;
- (void)configScrollsToTop:(_Bool)arg1;
- (void)requestFeedWithModel:(id)arg1 pageNum:(long long)arg2 isPullMode:(_Bool)arg3 contentId:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

