//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGUploadListBaseViewController.h"

@interface KGUploadCollectHistoryViewController : KGUploadListBaseViewController
{
}

- (void)uploadNewUgcInfoWithInfoId:(id)arg1 andType:(unsigned long long)arg2;
- (void)uploadStateSuccessWithInfoLocalId:(id)arg1 andType:(unsigned long long)arg2 AndNetworkId:(id)arg3;
- (void)openCollectDetailInfo:(id)arg1;
- (void)openSelectedInfoDetail:(id)arg1 state:(long long)arg2;
- (void)openReviewCollectInfo:(id)arg1;
- (void)openEditCollectInfo:(id)arg1;
- (void)openReject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (void)viewDidLoad;

@end

