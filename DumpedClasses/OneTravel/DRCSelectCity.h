//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DRCSelectCity : JSONModel
{
    NSString *_name;
    NSString *_cityId;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

