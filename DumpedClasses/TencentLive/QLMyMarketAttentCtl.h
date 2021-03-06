//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLOperationPageViewController.h"

#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLSMultiSelectToolbarDataSource.h"
#import "QLSMultiSelectToolbarDelegate.h"

@class NSMutableArray, NSString, QLSMultiSelectToolbar, UIButton;

@interface QLMyMarketAttentCtl : QLOperationPageViewController <QLJumpObjectOpenUrlDelegate, QLSMultiSelectToolbarDataSource, QLSMultiSelectToolbarDelegate>
{
    _Bool _isEditingMode;
    UIButton *_editButton;
    QLSMultiSelectToolbar *_toolBar;
    NSMutableArray *_editableCells;
    NSMutableArray *_indexPathsToDelete;
    struct UIEdgeInsets _tableViewContentInset;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) NSMutableArray *indexPathsToDelete; // @synthesize indexPathsToDelete=_indexPathsToDelete;
@property(retain, nonatomic) NSMutableArray *editableCells; // @synthesize editableCells=_editableCells;
@property(nonatomic) struct UIEdgeInsets tableViewContentInset; // @synthesize tableViewContentInset=_tableViewContentInset;
@property(nonatomic) _Bool isEditingMode; // @synthesize isEditingMode=_isEditingMode;
@property(retain, nonatomic) QLSMultiSelectToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (_Bool)shouldShowAlertView;
- (_Bool)isValidEditableData:(id)arg1;
- (void)deleteBatch;
- (void)itemDeselectAll;
- (void)itemSelectAll;
- (_Bool)shouldSelectForIndexPath:(id)arg1;
- (void)updateAryItems;
- (void)updateEditableCells;
- (void)requestModelDidFinishLoad:(id)arg1;
- (long long)getDeleteCount;
- (long long)getAllCount;
- (_Bool)isDataSourceEmpty;
- (_Bool)isSelectAll;
- (long long)numberOfSelectedItem;
- (_Bool)toolBarShouldClickDeleteSelected:(id)arg1;
- (void)toolBarDidClickDeleteSelected:(id)arg1;
- (void)toolBarDidClickSelectAll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateTableView:(_Bool)arg1;
- (void)updateToolBar:(_Bool)arg1;
- (void)showEditButton:(_Bool)arg1;
- (void)updateEditButton:(_Bool)arg1;
- (void)setEditMode:(_Bool)arg1;
- (void)btnEditDown;
- (void)viewDidLoad;
- (id)initWithType:(id)arg1 dataKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

