//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMyCtripORBaseModel.h"

@class NSArray, NSString;

@interface CTMyCtripORActivityModel : CTMyCtripORBaseModel
{
    NSString *_OrderTitle;
    NSString *_UsageDate;
    NSString *_TipType;
    NSString *_DateDescription;
    NSArray *_OrderActions;
}

@property(retain, nonatomic) NSArray *OrderActions; // @synthesize OrderActions=_OrderActions;
@property(copy, nonatomic) NSString *DateDescription; // @synthesize DateDescription=_DateDescription;
@property(copy, nonatomic) NSString *TipType; // @synthesize TipType=_TipType;
@property(copy, nonatomic) NSString *UsageDate; // @synthesize UsageDate=_UsageDate;
@property(copy, nonatomic) NSString *OrderTitle; // @synthesize OrderTitle=_OrderTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

