//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMPostedItemHeaderCellExposureAction>, NSString;

@interface FMPostedItemHeaderCellDO : NSObject
{
    _Bool _needShowPopLayer;
    _Bool _pressed;
    NSString *_userType;
    long long _beginScore;
    long long _endScore;
    long long _addScore;
    NSString *_exposureLevel;
    NSString *_exposureEndLevel;
    NSArray<FMPostedItemHeaderCellExposureAction> *_exposureActions;
}

@property(retain, nonatomic) NSArray<FMPostedItemHeaderCellExposureAction> *exposureActions; // @synthesize exposureActions=_exposureActions;
@property(copy, nonatomic) NSString *exposureEndLevel; // @synthesize exposureEndLevel=_exposureEndLevel;
@property(copy, nonatomic) NSString *exposureLevel; // @synthesize exposureLevel=_exposureLevel;
@property(nonatomic) long long addScore; // @synthesize addScore=_addScore;
@property(nonatomic) long long endScore; // @synthesize endScore=_endScore;
@property(nonatomic) long long beginScore; // @synthesize beginScore=_beginScore;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(nonatomic) _Bool needShowPopLayer; // @synthesize needShowPopLayer=_needShowPopLayer;
- (void).cxx_destruct;

@end

