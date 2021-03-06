//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMEmoticonPackCellDelegate.h"
#import "TBIMEmoticonServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableSet, NSString, UITableView;

@interface TBIMOnlineEmoticonViewControl : TBViewController <UITableViewDataSource, UITableViewDelegate, TBIMEmoticonServiceDelegate, TBIMEmoticonPackCellDelegate>
{
    id <TBIMEmoticonServiceAdapter> _emoticonService;
    UITableView *_tableView;
    NSMutableArray *_emoticonList;
    NSMutableSet *_installedList;
    NSMutableSet *_installingList;
    NSMutableSet *_downingList;
}

@property(retain, nonatomic) NSMutableSet *downingList; // @synthesize downingList=_downingList;
@property(retain, nonatomic) NSMutableSet *installingList; // @synthesize installingList=_installingList;
@property(retain, nonatomic) NSMutableSet *installedList; // @synthesize installedList=_installedList;
@property(retain, nonatomic) NSMutableArray *emoticonList; // @synthesize emoticonList=_emoticonList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)intsallPack:(id)arg1;
- (void)reFreshCell:(id)arg1;
- (void)emoticonPackCellStatusClick:(id)arg1 status:(unsigned long long)arg2;
- (void)onlinePackListData:(id)arg1;
- (void)emoticonPackRemoved:(id)arg1;
- (void)emoticonPackAdd:(id)arg1;
- (void)emoticonPackChange:(id)arg1;
- (void)emoticonPackInstallStatusChange:(id)arg1 status:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

