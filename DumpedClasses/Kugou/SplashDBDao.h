//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SplashDBDao : NSObject
{
}

+ (id)shareInstance;
- (id)getSplashBySplashId:(id)arg1;
- (_Bool)isSplashExist:(id)arg1;
- (_Bool)updateSplashRemainCount:(id)arg1;
- (_Bool)updateSplashState:(id)arg1;
- (_Bool)addSplash:(id)arg1;
- (_Bool)deleteAllSplash;
- (_Bool)deleteSplash:(id)arg1;
- (_Bool)deleteOldSplash;
- (id)getDeleteSplash;
- (id)getNewUpdateSplash;
- (id)getAllSplash;
- (int)SplashCount;
- (_Bool)isDBExist;
- (id)init;

@end

