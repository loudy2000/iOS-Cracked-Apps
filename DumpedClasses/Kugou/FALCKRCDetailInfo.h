//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALCSongKRCInfo, NSArray;

@interface FALCKRCDetailInfo : NSObject
{
    _Bool _needUpdateArray;
    FALCSongKRCInfo *_krcInfo;
    NSArray *_krcArray;
}

@property(nonatomic) _Bool needUpdateArray; // @synthesize needUpdateArray=_needUpdateArray;
@property(retain, nonatomic) NSArray *krcArray; // @synthesize krcArray=_krcArray;
@property(retain, nonatomic) FALCSongKRCInfo *krcInfo; // @synthesize krcInfo=_krcInfo;
- (void).cxx_destruct;

@end

