//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface PicShowGoodsRequestModel : QQModel
{
    int _productId;
    int _productPrice;
    unsigned long long _groupCode;
    NSString *_productName;
    NSString *_animationPara;
}

@property(copy, nonatomic) NSString *animationPara; // @synthesize animationPara=_animationPara;
@property(nonatomic) int productPrice; // @synthesize productPrice=_productPrice;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) int productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (void)dealloc;

@end

