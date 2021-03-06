//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView, UIView;

@interface APMidasProductsCtrl : APMidasBaseViewCtrl <UITableViewDataSource, UITableViewDelegate>
{
    long long cell_height;
    long long foot_height;
    UITableView *mTableView;
    UIView *mFooterView;
    UIButton *footLeftBtn;
    UIButton *footRightBtn;
    NSArray *uiModels;
}

@property(retain, nonatomic) NSArray *uiModels; // @synthesize uiModels;
@property(nonatomic) __weak UIButton *footRightBtn; // @synthesize footRightBtn;
@property(nonatomic) __weak UIButton *footLeftBtn; // @synthesize footLeftBtn;
@property(retain, nonatomic) UIView *mFooterView; // @synthesize mFooterView;
@property(nonatomic) __weak UITableView *mTableView; // @synthesize mTableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onOtherNum:(id)arg1;
- (double)getTableViewHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onBack:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

