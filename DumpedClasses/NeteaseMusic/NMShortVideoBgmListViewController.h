//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMErrorSectionFooterDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMScrollableTableControllerProtocol.h"
#import "NMShortVideoBgmCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMBaseRequest, NMScrollTableController, NMScrollableTabItem, NMShortVideoBgm, NMShortVideoBgmCell, NMShortVideoBgmListRequest, NMShortVideoBgmRequest, NMShortVideoBgmTag, NMShortVideoRcmdBgmRequest, NSMutableArray, NSString, UITableView;

@interface NMShortVideoBgmListViewController : UIViewController <NMHttpRequestDelegate, UITableViewDelegate, UITableViewDataSource, MCLoadMoreTableFooterViewDelegate, NMShortVideoBgmCellDelegate, NMErrorSectionFooterDelegate, NMScrollableTableControllerProtocol>
{
    _Bool _enableNext;
    _Bool _hasNext;
    long long _offset;
    _Bool _isLoading;
    _Bool _neverLoaded;
    _Bool _failLoading;
    NMBaseRequest *_request;
    NSMutableArray *_bgms;
    NMShortVideoBgm *_bgmPlaying;
    NMShortVideoBgmCell *_bgmPlayingCell;
    _Bool _isSubPage;
    NMScrollableTabItem *scrollableItem;
    NMScrollTableController *scrollTableController;
    NMShortVideoBgmTag *_tag;
    double _duration;
    id <NMShortVideoBgmListDelegate> _delegate;
    unsigned long long _type;
    NSString *_page;
    UITableView *_tableView;
    NMShortVideoBgmRequest *_bgmRequest;
}

@property(retain, nonatomic) NMShortVideoBgmRequest *bgmRequest; // @synthesize bgmRequest=_bgmRequest;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <NMShortVideoBgmListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NMShortVideoBgmTag *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isSubPage; // @synthesize isSubPage=_isSubPage;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)requestFailed:(id)arg1;
- (void)finishLoading:(id)arg1;
- (_Bool)validateBgmUrl:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)dismissed;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (void)logAddWithBgm:(id)arg1;
- (void)logAuditionWithBgm:(id)arg1;
- (void)shortVideoBgmCellDidAdd:(id)arg1;
- (id)_cachedPathFromBgm:(id)arg1;
- (_Bool)_hasCachedBgm:(id)arg1;
- (void)shortVideoBgmCellDidPlay:(id)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)errorSectionFooterDidClick:(id)arg1;
- (id)noContentTitle;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_isSupportedType:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doLoadBgm;
@property(readonly, nonatomic) NMShortVideoRcmdBgmRequest *rcmdRequest;
@property(readonly, nonatomic) NMShortVideoBgmListRequest *listRequest;
- (id)navigationTitle;
- (void)auditionStarted:(id)arg1;
- (void)auditionStopped:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)preferredTableView;
- (void)loadView;
- (void)doBack:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

