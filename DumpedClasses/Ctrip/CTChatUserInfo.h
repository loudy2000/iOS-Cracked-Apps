//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTChatUserInfo : NSObject
{
    NSString *_userId;
    NSString *_password;
    NSString *_auth;
    NSString *_name;
    NSString *_portraitUri;
    long long _bizType;
    NSString *_extension;
}

@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *portraitUri; // @synthesize portraitUri=_portraitUri;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserId:(id)arg1 auth:(id)arg2 name:(id)arg3 portraitUri:(id)arg4;

@end

