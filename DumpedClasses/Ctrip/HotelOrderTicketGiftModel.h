//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface HotelOrderTicketGiftModel : CTBusinessBean
{
    int _ticketGiftType;
    int _property;
    PriceType *_amount;
    NSString *_code;
    NSString *_tikcetID;
}

@property(copy, nonatomic) NSString *tikcetID; // @synthesize tikcetID=_tikcetID;
@property(nonatomic) int property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(nonatomic) int ticketGiftType; // @synthesize ticketGiftType=_ticketGiftType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

