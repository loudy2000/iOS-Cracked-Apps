//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TNodeLoaderCache : NSObject
{
    _Bool _isOptimize;
    int _cacheMode;
    long long _cacheInterval;
    double _firstLoadTimeOut;
}

@property(nonatomic) _Bool isOptimize; // @synthesize isOptimize=_isOptimize;
@property(nonatomic) double firstLoadTimeOut; // @synthesize firstLoadTimeOut=_firstLoadTimeOut;
@property(nonatomic) long long cacheInterval; // @synthesize cacheInterval=_cacheInterval;
@property(nonatomic) int cacheMode; // @synthesize cacheMode=_cacheMode;
- (id)init;

@end

