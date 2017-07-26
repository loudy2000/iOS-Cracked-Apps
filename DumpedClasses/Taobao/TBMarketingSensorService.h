//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMarketingPublicApi.h"

@class NSString, TBSensorDataContainer;

@interface TBMarketingSensorService : NSObject <TBMarketingPublicApi>
{
    TBSensorDataContainer *_dataContainer;
}

@property(retain, nonatomic) TBSensorDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
- (void).cxx_destruct;
- (void)stop;
- (_Bool)executeServiceWithParams:(struct NSDictionary *)arg1 andCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
