//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHStoreSingleAd : XYRKModel
{
    NSString *_categoryId;
    NSString *_adImage;
    NSString *_link;
    NSString *_adId;
    NSString *_couponId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *adImage; // @synthesize adImage=_adImage;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

