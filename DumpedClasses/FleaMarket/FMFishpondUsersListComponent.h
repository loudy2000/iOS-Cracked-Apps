//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class NSString;

@interface FMFishpondUsersListComponent : FMGeneralPageTableComponent
{
    NSString *_fishpondID;
}

@property(retain, nonatomic) NSString *fishpondID; // @synthesize fishpondID=_fishpondID;
- (void).cxx_destruct;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)init;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end

