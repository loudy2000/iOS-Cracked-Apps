//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBKViewModelProtocol.h"

@class NSString;

@interface MBKCardInfoCellModel : NSObject <MBKViewModelProtocol>
{
    _Bool _hiddenRechargeButton;
    _Bool _hiddenOriginalPrice;
    _Bool _canShowArrowImage;
    NSString *_cardPriceString;
    NSString *_cardDetialString;
    NSString *_rechargeTitleString;
    NSString *_originalPriceString;
    NSString *_discountString;
}

@property(nonatomic) _Bool canShowArrowImage; // @synthesize canShowArrowImage=_canShowArrowImage;
@property(nonatomic) _Bool hiddenOriginalPrice; // @synthesize hiddenOriginalPrice=_hiddenOriginalPrice;
@property(nonatomic) _Bool hiddenRechargeButton; // @synthesize hiddenRechargeButton=_hiddenRechargeButton;
@property(retain, nonatomic) NSString *discountString; // @synthesize discountString=_discountString;
@property(retain, nonatomic) NSString *originalPriceString; // @synthesize originalPriceString=_originalPriceString;
@property(retain, nonatomic) NSString *rechargeTitleString; // @synthesize rechargeTitleString=_rechargeTitleString;
@property(retain, nonatomic) NSString *cardDetialString; // @synthesize cardDetialString=_cardDetialString;
@property(retain, nonatomic) NSString *cardPriceString; // @synthesize cardPriceString=_cardPriceString;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
