//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface SSDKError : NSError
{
}

+ (id)httpRequestFailErrorWithStatusCode:(long long)arg1;
+ (id)apiRequestFailErrorWithResponder:(id)arg1;
+ (id)uploadFileNotFoundErrorWithPath:(id)arg1;
+ (id)deniedRequestError;
+ (id)uninitSDKError;
+ (id)unknownError;
+ (id)errorWithJsonObject:(id)arg1;
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;

@end

