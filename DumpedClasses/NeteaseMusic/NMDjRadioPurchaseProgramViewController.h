//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMDjRadioPurchaseProgramCellDelegate.h"
#import "NMDjRadioPurchaseProgramViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMSelectAllAndOrderCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMDjRadio, NMDjRadioAllChargeProgramRequest, NMSelectAllAndOrderCell, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface NMDjRadioPurchaseProgramViewController : UIViewController <NMHttpRequestDelegate, NMDjRadioPurchaseProgramViewDelegate, NMDjRadioPurchaseProgramCellDelegate, NMSelectAllAndOrderCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NMDjRadioAllChargeProgramRequest *_loadChargeDjProgramRequest;
    NMSelectAllAndOrderCell *_selectAllCell;
    NMDjRadio *_djRadio;
    NSArray *_programArray;
    NSMutableSet *_selectProgramIdSet;
    NSMutableDictionary *_programHeightDic;
    _Bool _isLoading;
    _Bool _isAscned;
    unsigned long long _maxIndex;
    NSString *_targetPorgramId;
}

@property(retain, nonatomic) NSString *targetPorgramId; // @synthesize targetPorgramId=_targetPorgramId;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)parseRadioProgramsResult:(id)arg1;
- (void)gotoTargetProgramIfNeeded;
- (void)requestCompleted:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)selectAllAndOrderCell:(id)arg1 isAscend:(_Bool)arg2;
- (void)selectAllAndOrderCell:(id)arg1 selectAll:(_Bool)arg2;
- (void)_updateSelectAllButton;
- (void)_updateSelectCountAndMoney;
- (void)djRadioPurchaseProgramCell:(id)arg1 isChecked:(_Bool)arg2;
- (void)pocketMoneyPayView:(id)arg1 needChargeWithViewController:(id)arg2;
- (void)djRadioPurchaseProgramViewBuyButtonClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (_Bool)noAvailabelData;
- (void)refreshDataForUMG;
- (void)_loadPrograms;
- (void)viewDidLoad;
- (id)purchaseView;
- (void)loadView;
- (void)dealloc;
- (id)initWithDjRadio:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

