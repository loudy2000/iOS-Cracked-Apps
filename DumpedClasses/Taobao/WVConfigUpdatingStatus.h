//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVConfigUpdatingStatus : NSObject
{
    NSString *_version;
    long long _fromType;
    double _start;
    NSString *_waitingVersion;
    long long _waitingFromType;
}

@property(nonatomic) long long waitingFromType; // @synthesize waitingFromType=_waitingFromType;
@property(retain, nonatomic) NSString *waitingVersion; // @synthesize waitingVersion=_waitingVersion;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (long long)waitingConfigFromType;
- (id)waitingConfigVersion;
- (void)recordConfig:(id)arg1 withFromType:(long long)arg2;
- (id)initWithVersion:(id)arg1 withFromType:(long long)arg2 withStart:(double)arg3;

@end
