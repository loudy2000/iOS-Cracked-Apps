//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBKApi.h"

@class NSMutableDictionary, NSString;

@interface MBKLockAdoptionApi : MBKApi
{
    NSString *_message;
    NSString *_errorMessage;
    NSMutableDictionary *_params;
    NSString *_userImage;
}

@property(retain, nonatomic) NSString *userImage; // @synthesize userImage=_userImage;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)clientAuthor;
- (id)author;
- (void)parseError:(id)arg1;
- (void)parseResponse:(id)arg1;
- (unsigned long long)requestType;
- (int)httpMethod;
- (id)relativePath;
- (void)setParamsWithUserId:(id)arg1 userName:(id)arg2 mobileNo:(id)arg3 cityCode:(id)arg4 userImage:(id)arg5 bikeId:(id)arg6 longitude:(id)arg7 latitude:(id)arg8 bikeType:(id)arg9;

@end
