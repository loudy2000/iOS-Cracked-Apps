//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LeftHeadView, MBKAdoptionStatusModel, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIButton, UITableView, UIView;

@interface PersonalCenterViewController : Mobike_ViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate>
{
    NSMutableArray *dataArr;
    NSMutableDictionary *dictPamas;
    LeftHeadView *headView;
    NSNumber *_timeStamp;
    long long messagesCount;
    UIView *buttomView;
    UIButton *helpButton;
    UIButton *settingButton;
    NSDictionary *adoptionModelDict;
    UITableView *_tableView;
    UIView *_grayCoverView;
    double _tansitionWidth;
    MBKAdoptionStatusModel *_adoptionStatusModel;
}

@property(retain, nonatomic) MBKAdoptionStatusModel *adoptionStatusModel; // @synthesize adoptionStatusModel=_adoptionStatusModel;
@property(nonatomic) double tansitionWidth; // @synthesize tansitionWidth=_tansitionWidth;
@property(retain, nonatomic) UIView *grayCoverView; // @synthesize grayCoverView=_grayCoverView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)refreshHeadUnlogin;
- (void)networkStatusChanged:(long long)arg1;
- (void)headViewLoginAction:(id)arg1 personalType:(long long)arg2;
- (void)requestRidingFailed:(id)arg1;
- (void)requestRidingSucc:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)panBackground:(id)arg1;
- (void)clickBackgroundView;
- (void)settingButtonAction:(id)arg1;
- (void)helpButtonAction:(id)arg1;
- (void)dismissSelf;
- (void)userMenuWithSign:(long long)arg1;
- (void)updatePersonalCeterWith:(id)arg1;
- (void)uploadDeviceInfo;
- (void)newMessage:(long long)arg1;
- (void)setButtomView;
- (void)setHeadView;
- (void)setTableView;
- (void)setSelfView;
- (void)setupView;
- (void)updateAdoptionStatusModel;
- (id)getAdoptionString;
- (void)updateDataArr;
- (void)initData;
- (void)addObserveNotification;
- (double)getTansitionWidth;
- (void)handleNotification:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)getAcountInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

