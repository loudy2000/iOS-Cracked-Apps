//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXLength : NSObject
{
    float _floatValue;
    int _intValue;
    unsigned long long _type;
    _Bool _isFloat;
}

+ (id)lengthWithInt:(int)arg1 type:(unsigned long long)arg2;
+ (id)lengthWithFloat:(float)arg1 type:(unsigned long long)arg2;
- (_Bool)isNormal;
- (_Bool)isAuto;
- (_Bool)isPercent;
- (_Bool)isFixed;
- (_Bool)isEqualToLength:(id)arg1;
- (float)floatValue;
- (int)intValue;
- (float)valueForMaximum:(float)arg1;

@end

