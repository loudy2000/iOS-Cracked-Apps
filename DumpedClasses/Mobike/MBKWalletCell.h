//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MBKViewProtocol.h"

@class MBKWalletCellModel, Mobike_ViewController, NSString, UILabel;

@interface MBKWalletCell : UITableViewCell <MBKViewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_detaillabel;
    MBKWalletCellModel *_model;
    id _delegate;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKWalletCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *detaillabel; // @synthesize detaillabel=_detaillabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configSubView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
