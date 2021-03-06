//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMDebugTableViewController.h"

@class NSMutableArray, NVMHostMappingDataSource;

@interface NVMMapHostViewController : NVMDebugTableViewController
{
    NSMutableArray *_data;
    NVMHostMappingDataSource *_dataSource;
}

@property(nonatomic) __weak NVMHostMappingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showInputAlert;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addAddConfigBarButton;
- (void)viewDidLoad;

@end

