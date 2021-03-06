//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeServiceSelectModel, UIButton, UIImageView, UILabel;

@interface TBExtBuyServiceSelectCell : TBExtBuyBaseCell
{
    TBTradeServiceSelectModel *_model;
    UIImageView *_labelIcon;
    UILabel *_dataLabel;
    UILabel *_descLabel;
    UILabel *_valueLabel;
    UIButton *_checkButton;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *dataLabel; // @synthesize dataLabel=_dataLabel;
@property(retain, nonatomic) UIImageView *labelIcon; // @synthesize labelIcon=_labelIcon;
@property(nonatomic) __weak TBTradeServiceSelectModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)checkUnableState;
- (void)check:(id)arg1;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

