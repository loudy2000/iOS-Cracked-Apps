//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface VoucherInformationModel : CTBusinessBean
{
    NSString *label;
    NSString *summary;
    NSString *jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSString *label; // @synthesize label;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

