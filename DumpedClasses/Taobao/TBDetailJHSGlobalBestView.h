//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliDetailPriceJHSModel, UIImageView, UILabel;

@interface TBDetailJHSGlobalBestView : UIView
{
    UIImageView *_nationalFlagView;
    UILabel *_infoLabel;
    AliDetailPriceJHSModel *_priceModel;
}

@property(nonatomic) __weak AliDetailPriceJHSModel *priceModel; // @synthesize priceModel=_priceModel;
- (void).cxx_destruct;
- (void)buildInfoLabel;
- (void)buildNationFlagView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

