//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JTAPIManager : NSObject
{
}

+ (long long)requstApi:(id)arg1 withData:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (long long)requstUserLogin:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (long long)requstLoginCode:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (long long)requstConfirmOrder:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (long long)requstCaptcha:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (long long)requstFindTrainData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (long long)initRuleBlock:(CDUnknownBlockType)arg1;
+ (long long)initEnvironmentBlock:(CDUnknownBlockType)arg1;

@end

