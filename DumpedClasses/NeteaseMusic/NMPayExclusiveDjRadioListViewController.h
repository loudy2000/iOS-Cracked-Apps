//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "OHAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCLoadMoreTableView, NMPayExclusiveDjRadioRecommendRequest, NSMutableArray, NSString, OHAttributedLabel, UIView;

@interface NMPayExclusiveDjRadioListViewController : UIViewController <NMHttpRequestDelegate, UITableViewDelegate, UITableViewDataSource, MCLoadMoreTableFooterViewDelegate, OHAttributedLabelDelegate>
{
    UIView *_footerView;
    UIView *_emptyHeadView;
    OHAttributedLabel *_linkLabel;
    MCLoadMoreTableView *_tableView;
    _Bool _isLoading;
    _Bool _isLoadingMore;
    _Bool _hasMore;
    NSMutableArray *_payExclusiveDjRadioList;
    NMPayExclusiveDjRadioRecommendRequest *_payExclusiveDjRadioRecommendRequest;
}

- (void).cxx_destruct;
- (void)logShowPayExclusivePage;
- (void)logDjRadioPayPlanClick;
- (void)logPayExclusiveDjRadioClickWithId:(id)arg1;
- (void)dealloc;
- (void)gotoDjRadioPlan;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)finishLoadMore:(_Bool)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)backAction:(id)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

