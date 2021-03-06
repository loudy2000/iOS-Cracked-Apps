//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMPostCategoryCellView, FMPostViewModel, UILabel;

@interface FMPostItemAttributesView : UIView
{
    FMPostCategoryCellView *_categoryCell;
    UIView *_priceCell;
    UILabel *_priceLabel;
    UILabel *_descLabel;
    FMPostViewModel *_viewModel;
}

@property(retain, nonatomic) FMPostViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *priceCell; // @synthesize priceCell=_priceCell;
@property(retain, nonatomic) FMPostCategoryCellView *categoryCell; // @synthesize categoryCell=_categoryCell;
- (void).cxx_destruct;
- (void)setPriceText:(id)arg1 subText:(id)arg2;
- (void)setCategoryText:(id)arg1;
- (void)categoryHandler;
- (void)priceHandler;
- (void)bind;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

@end

