//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelMeetingSubRoom : CTBusinessBean
{
    NSString *_name;
    NSString *_priceInfo;
    NSString *_iscountInfo;
}

@property(copy, nonatomic) NSString *iscountInfo; // @synthesize iscountInfo=_iscountInfo;
@property(copy, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

