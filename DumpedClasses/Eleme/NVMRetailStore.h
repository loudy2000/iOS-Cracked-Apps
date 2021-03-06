//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString, NVMRetailCategory, NVMRetailCoupon, NVMRetailPiecewiseAgentFee, NVMRetailWeightFee;

@interface NVMRetailStore : NVMModel
{
    _Bool _isBrand;
    _Bool _isExclusiveWithFoodActivity;
    _Bool _isExceedRange;
    NSString *_storeId;
    NSString *_name;
    NSString *_imageHash;
    NVMRetailCoupon *_coupon;
    NSString *_couponStr;
    NSArray *_activities;
    unsigned long long _openStatus;
    long long _countdown;
    NSString *_nextBuyStr;
    NSString *_bulletin;
    long long _goodsNum;
    NSArray *_goodsItems;
    NVMRetailCategory *_hotCategory;
    NVMRetailCategory *_promotionCategory;
    NSArray *_categories;
    long long _deliverSpent;
    NSString *_areaAgentFeeTips;
    NSString *_attribute;
    unsigned long long _hummingbird;
    NVMRetailPiecewiseAgentFee *_deliveryRule;
    NVMRetailWeightFee *_weightFee;
    long long _maxActivitySkuCount;
    long long _minDeliverAmount;
    NSString *_headerBackgroundColor;
    NSString *_headerBackgroundImageHash;
    NSArray *_activityZones;
}

+ (id)keyPathsForValuesAffectingCanOrderFood;
+ (id)keyPathsForValuesAffectingIsDeliveryValid;
+ (id)activityZonesJSONTransformer;
+ (id)couponJSONTransformer;
+ (id)deliveryRuleJSONTransformer;
+ (id)activitiesJSONTransformer;
+ (id)categoriesJSONTransformer;
+ (id)promotionCategoryJSONTransformer;
+ (id)hotCategoryJSONTransformer;
+ (id)weightFeeJSONTransformer;
+ (id)goodsItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *activityZones; // @synthesize activityZones=_activityZones;
@property(retain, nonatomic) NSString *headerBackgroundImageHash; // @synthesize headerBackgroundImageHash=_headerBackgroundImageHash;
@property(retain, nonatomic) NSString *headerBackgroundColor; // @synthesize headerBackgroundColor=_headerBackgroundColor;
@property(nonatomic) _Bool isExceedRange; // @synthesize isExceedRange=_isExceedRange;
@property(nonatomic) long long minDeliverAmount; // @synthesize minDeliverAmount=_minDeliverAmount;
@property(nonatomic) long long maxActivitySkuCount; // @synthesize maxActivitySkuCount=_maxActivitySkuCount;
@property(nonatomic) _Bool isExclusiveWithFoodActivity; // @synthesize isExclusiveWithFoodActivity=_isExclusiveWithFoodActivity;
@property(retain, nonatomic) NVMRetailWeightFee *weightFee; // @synthesize weightFee=_weightFee;
@property(retain, nonatomic) NVMRetailPiecewiseAgentFee *deliveryRule; // @synthesize deliveryRule=_deliveryRule;
@property(nonatomic) unsigned long long hummingbird; // @synthesize hummingbird=_hummingbird;
@property(copy, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
@property(copy, nonatomic) NSString *areaAgentFeeTips; // @synthesize areaAgentFeeTips=_areaAgentFeeTips;
@property(nonatomic) long long deliverSpent; // @synthesize deliverSpent=_deliverSpent;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NVMRetailCategory *promotionCategory; // @synthesize promotionCategory=_promotionCategory;
@property(retain, nonatomic) NVMRetailCategory *hotCategory; // @synthesize hotCategory=_hotCategory;
@property(retain, nonatomic) NSArray *goodsItems; // @synthesize goodsItems=_goodsItems;
@property(nonatomic) long long goodsNum; // @synthesize goodsNum=_goodsNum;
@property(copy, nonatomic) NSString *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *nextBuyStr; // @synthesize nextBuyStr=_nextBuyStr;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(nonatomic) unsigned long long openStatus; // @synthesize openStatus=_openStatus;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSString *couponStr; // @synthesize couponStr=_couponStr;
@property(retain, nonatomic) NVMRetailCoupon *coupon; // @synthesize coupon=_coupon;
@property(nonatomic) _Bool isBrand; // @synthesize isBrand=_isBrand;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDeliveryValid;
@property(readonly, nonatomic) _Bool canOrderFood;

@end

