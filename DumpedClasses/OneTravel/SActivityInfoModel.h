//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface SActivityInfoModel : TRBaseModel
{
    NSNumber<Optional> *_product_id;
    NSString<Optional> *_car_level;
    NSString<Optional> *_verify_status;
    NSString<Optional> *_order_button;
    NSString<Optional> *_order_banner;
    NSString<Optional> *_order_link;
    NSString<Optional> *_rule_ischecked;
    NSString<Optional> *_rule_readtext;
    NSString<Optional> *_rule_readurl;
    NSString<Optional> *_order_saddress;
    NSString<Optional> *_order_eaddress;
}

@property(copy, nonatomic) NSString<Optional> *order_eaddress; // @synthesize order_eaddress=_order_eaddress;
@property(copy, nonatomic) NSString<Optional> *order_saddress; // @synthesize order_saddress=_order_saddress;
@property(copy, nonatomic) NSString<Optional> *rule_readurl; // @synthesize rule_readurl=_rule_readurl;
@property(copy, nonatomic) NSString<Optional> *rule_readtext; // @synthesize rule_readtext=_rule_readtext;
@property(copy, nonatomic) NSString<Optional> *rule_ischecked; // @synthesize rule_ischecked=_rule_ischecked;
@property(copy, nonatomic) NSString<Optional> *order_link; // @synthesize order_link=_order_link;
@property(copy, nonatomic) NSString<Optional> *order_banner; // @synthesize order_banner=_order_banner;
@property(copy, nonatomic) NSString<Optional> *order_button; // @synthesize order_button=_order_button;
@property(copy, nonatomic) NSString<Optional> *verify_status; // @synthesize verify_status=_verify_status;
@property(copy, nonatomic) NSString<Optional> *car_level; // @synthesize car_level=_car_level;
@property(retain, nonatomic) NSNumber<Optional> *product_id; // @synthesize product_id=_product_id;
- (void).cxx_destruct;

@end

