//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMHouseScanInfoItemDO>, NSString;

@interface FMHouseScanInfoDO : NSObject
{
    _Bool _houseArRated;
    _Bool _onlyArDIDI;
    _Bool _valid;
    NSString *_itemId;
    NSString *_orderId;
    NSString *_serverTime;
    NSString *_sellerId;
    NSString *_errorMsg;
    NSArray<FMHouseScanInfoItemDO> *_imgList;
}

@property(retain, nonatomic) NSArray<FMHouseScanInfoItemDO> *imgList; // @synthesize imgList=_imgList;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool onlyArDIDI; // @synthesize onlyArDIDI=_onlyArDIDI;
@property(nonatomic) _Bool houseArRated; // @synthesize houseArRated=_houseArRated;
- (void).cxx_destruct;

@end

