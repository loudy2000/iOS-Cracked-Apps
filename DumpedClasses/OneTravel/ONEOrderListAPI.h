//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseAPI.h"

@interface ONEOrderListAPI : ONEBaseAPI
{
}

+ (id)apiWithBlock:(CDUnknownBlockType)arg1 requestSuccess:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)transformResponseData:(id)arg1;
- (unsigned long long)requestType;
- (id)apiName;
- (id)initWithParams:(id)arg1;

@end

