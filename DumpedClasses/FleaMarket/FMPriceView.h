//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface FMPriceView : UIView
{
    NSString *_currencySymbol;
    NSString *_priceInfo;
    UILabel *_currencySymbolLabel;
    UILabel *_priceInfoLabel;
}

@property(retain, nonatomic) UILabel *priceInfoLabel; // @synthesize priceInfoLabel=_priceInfoLabel;
@property(retain, nonatomic) UILabel *currencySymbolLabel; // @synthesize currencySymbolLabel=_currencySymbolLabel;
@property(retain, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(retain, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

