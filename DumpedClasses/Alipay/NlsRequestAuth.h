//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AuthBody, HeadersInfo, NSString;

@interface NlsRequestAuth : NSObject
{
    NSString *_method;
    AuthBody *_body;
    HeadersInfo *_headers;
}

+ (id)hmacMd5text:(id)arg1;
+ (id)hmacSha1:(id)arg1 text:(id)arg2;
@property(retain, nonatomic) HeadersInfo *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) AuthBody *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (void)bodyAddRequest:(id)arg1;
- (id)stringToSign:(id)arg1 withSecret:(id)arg2;
- (id)init;

@end

