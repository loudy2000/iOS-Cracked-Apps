//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface PayCodeSetStatusResponse : CTBusinessBean
{
    int resultCode;
    NSString *resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int resultCode; // @synthesize resultCode;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

