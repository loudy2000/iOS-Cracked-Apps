//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MConfigClientAppReplaceResp : NSObject
{
    int _resultCode;
    NSString *_resultMsg;
    long long _delaySeconds;
    NSArray *_needReplaceApps;
    NSArray *_replaceApps;
    NSArray *_operationApps;
}

+ (Class)operationAppsElementClass;
+ (Class)replaceAppsElementClass;
+ (Class)needReplaceAppsElementClass;
@property(retain, nonatomic) NSArray *operationApps; // @synthesize operationApps=_operationApps;
@property(retain, nonatomic) NSArray *replaceApps; // @synthesize replaceApps=_replaceApps;
@property(retain, nonatomic) NSArray *needReplaceApps; // @synthesize needReplaceApps=_needReplaceApps;
@property(nonatomic) long long delaySeconds; // @synthesize delaySeconds=_delaySeconds;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

