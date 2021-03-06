//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "ImageLibNetworkDelegateProtocol.h"
#import "NSURLConnectionDelegate.h"

@class NSDictionary, NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface TBWebPURLProtocol : NSURLProtocol <NSURLConnectionDelegate, ImageLibNetworkDelegateProtocol>
{
    NSURLRequest *_adaptRequest;
    NSURLConnection *_connection;
    NSMutableData *_mutableData;
    NSDictionary *_imgDict;
    long long _httpStatus;
}

+ (_Bool)isProxyWebviewImage;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(nonatomic) long long httpStatus; // @synthesize httpStatus=_httpStatus;
@property(retain, nonatomic) NSDictionary *imgDict; // @synthesize imgDict=_imgDict;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURLRequest *adaptRequest; // @synthesize adaptRequest=_adaptRequest;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponseWhenEncounterError:(id)arg2;
- (id)getResponse:(id)arg1 url:(id)arg2;
- (void)didFinishLoading:(id)arg1 error:(id)arg2 cacheType:(long long)arg3 finished:(_Bool)arg4 imageURL:(id)arg5;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

