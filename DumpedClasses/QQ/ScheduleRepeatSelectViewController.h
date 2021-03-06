//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface ScheduleRepeatSelectViewController : QQViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    long long _nViewId;
    unsigned long long _nBeginTime;
    unsigned long long _nEndTime;
    unsigned short _nCurrentIndex;
    id <UIControlCallBase> _delegate;
}

@property(nonatomic) unsigned short nCurrentIndex; // @synthesize nCurrentIndex=_nCurrentIndex;
@property(nonatomic) id <UIControlCallBase> delegate; // @synthesize delegate=_delegate;
- (void)leftButtonClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)CreateNormalSelectorCell:(long long)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initData:(long long)arg1 beginTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

