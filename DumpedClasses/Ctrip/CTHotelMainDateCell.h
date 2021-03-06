//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UIButton, UILabel;

@interface CTHotelMainDateCell : CTHotelBaseCell
{
    CDUnknownBlockType _block;
    UIButton *_checkOutBtn;
    UIButton *_checkInBtn;
    UILabel *_nightLabel;
}

+ (double)getCellHeight;
@property(retain, nonatomic) UILabel *nightLabel; // @synthesize nightLabel=_nightLabel;
@property(retain, nonatomic) UIButton *checkInBtn; // @synthesize checkInBtn=_checkInBtn;
@property(retain, nonatomic) UIButton *checkOutBtn; // @synthesize checkOutBtn=_checkOutBtn;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)didCheckOutClick;
- (void)didCheckInClick;
- (id)getDateAttr:(id)arg1 now:(id)arg2 bCheckout:(_Bool)arg3;
- (id)getDateStrCompareWithToday:(id)arg1 currentDate:(id)arg2;
- (id)getWeek:(id)arg1 now:(id)arg2 bCheckout:(_Bool)arg3;
- (id)getDateString:(id)arg1;
- (void)setData:(id)arg1 now:(id)arg2;
- (void)initView;

@end

