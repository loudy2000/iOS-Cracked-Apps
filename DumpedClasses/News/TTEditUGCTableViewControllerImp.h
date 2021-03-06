//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SSAvatarView, TTEditUGCProfileViewModel, UIActivityIndicatorView;

@interface TTEditUGCTableViewControllerImp : NSObject <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    TTEditUGCProfileViewModel *_viewModel;
    SSAvatarView *_avatarView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak TTEditUGCProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)formatterBirthdayWithBirthdayString:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeAreaDidClickCell:(id)arg1;
- (void)changeBirthdayDidClickCell:(id)arg1;
- (void)changeGenderDidClickCell:(id)arg1;
- (void)changeDescriptionDidClickCell:(id)arg1;
- (void)changeUsernameDidClickCell:(id)arg1;
- (void)changeAvatarDidClickCell:(id)arg1;
- (void)changeBackgroundImageDidClickCell:(id)arg1;
- (void)logoutDidClickCell:(id)arg1;
- (id)reuseCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)userProfileItemOfIndexPath:(id)arg1 animation:(_Bool)arg2;
- (id)userProfileItemOfIndexPath:(id)arg1;
- (unsigned long long)cellTypeOfIndexPath:(id)arg1;
- (unsigned long long)sectionTypeOfIndex:(long long)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (unsigned long long)cellPositionInIndexPath:(id)arg1;
- (double)heightOfSectionHeaderView:(unsigned long long)arg1;
- (_Bool)showTableviewSectionOfLogout;
- (_Bool)showTableviewSectionOfThirdAccounts;
- (void)reloadTableView;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

