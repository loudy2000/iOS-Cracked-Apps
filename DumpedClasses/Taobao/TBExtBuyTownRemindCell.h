//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeTownRemindModel, UIButton, UILabel;

@interface TBExtBuyTownRemindCell : TBExtBuyBaseCell
{
    TBTradeTownRemindModel *_model;
    UILabel *_tipLabel;
    UIButton *_confirmButton;
    UIButton *_goEditButton;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIButton *goEditButton; // @synthesize goEditButton=_goEditButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) TBTradeTownRemindModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)goEditButtonClicked;
- (void)confirmButtonClicked;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

