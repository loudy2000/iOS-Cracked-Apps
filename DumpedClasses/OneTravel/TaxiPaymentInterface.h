//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEAppDelegateStoreDelegate.h"
#import "WXApiDelegate.h"

@class NSString;

@interface TaxiPaymentInterface : NSObject <ONEAppDelegateStoreDelegate, WXApiDelegate>
{
}

- (id)queryStringDictionary:(id)arg1;
- (_Bool)application_delegate:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

