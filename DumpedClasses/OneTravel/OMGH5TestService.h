//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OMGH5TestService : NSObject
{
}

+ (void)markH5itemOpened:(long long)arg1 userID:(id)arg2 succeed:(CDUnknownBlockType)arg3;
+ (void)getNumberOfUnOpenedH5itemsForUserID:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (void)getH5itemsFrom:(long long)arg1 userID:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)getAdvertisementForUserID:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (id)checkStringEmpty:(id)arg1;
+ (long long)userType;
+ (id)deviceParams;
+ (void)requestDataWithCmd:(long long)arg1 apiVersion:(id)arg2 params:(id)arg3 succeed:(CDUnknownBlockType)arg4 orErrorWhenFailed:(CDUnknownBlockType)arg5;

@end

