//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString;

@interface NRMActivityZone : NVMModel
{
    NSString *_zoneId;
    NSString *_zoneName;
    NSString *_zoneImageHash;
    NSArray *_goods;
}

+ (id)goodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *goods; // @synthesize goods=_goods;
@property(retain, nonatomic) NSString *zoneImageHash; // @synthesize zoneImageHash=_zoneImageHash;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
- (void).cxx_destruct;

@end

