//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCPreCalcPriceModel, DCRichLabel, UIButton, UILabel;

@interface DCORPriceCostCell : UIView
{
    _Bool _selected;
    CDUnknownBlockType _onClick;
    DCPreCalcPriceModel *_model;
    DCRichLabel *_titleLabel;
    UILabel *_priceLabel;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) DCRichLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak DCPreCalcPriceModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onButtonClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

