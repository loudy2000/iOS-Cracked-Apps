//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMPostAuctionBidNormalUserTipsView, FMPostCellView, FMPostViewModel;

@interface FMPostAuctionBidNormalUserView : UIView
{
    FMPostCellView *_categoryCell;
    FMPostCellView *_priceCell;
    FMPostViewModel *_viewModel;
    FMPostAuctionBidNormalUserTipsView *_tipsView;
}

@property(retain, nonatomic) FMPostAuctionBidNormalUserTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) FMPostViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) FMPostCellView *priceCell; // @synthesize priceCell=_priceCell;
@property(retain, nonatomic) FMPostCellView *categoryCell; // @synthesize categoryCell=_categoryCell;
- (void).cxx_destruct;
- (void)categoryHandler;
- (void)priceHandler;
- (void)showTips;
- (void)bind;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

@end

