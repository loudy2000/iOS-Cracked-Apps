//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVBaseViewController.h"

#import "UITableViewDelegate.h"

@class MVTableView, NSString, UIRefreshControl;

@interface MVTableViewController : MVBaseViewController <UITableViewDelegate>
{
    _Bool hasInsetSetted;
    MVTableView *_tableView;
    long long _tableViewStyle;
    UIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(retain, nonatomic) MVTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshControlDidTriggerRefresh;
- (_Bool)shouldTriggerRefreshControl;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadTableView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

