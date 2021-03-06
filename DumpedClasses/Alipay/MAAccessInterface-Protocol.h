//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol MAAccessInterface <NSObject>

@optional
+ (id)shareInstance;
@property(nonatomic) _Bool netCardIpV6Only;
@property(nonatomic) _Bool shortLinkChannelOpen;
- (void)sendThroughHttpHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 forwardIP:(unsigned int)arg6;
- (void)sendData:(NSData *)arg1 channel:(long long)arg2 passSpanner:(_Bool)arg3;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 params:(NSDictionary *)arg8;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 canHttp:(_Bool)arg8 canZstd:(_Bool)arg9;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 canHttp:(_Bool)arg7 canZstd:(_Bool)arg8;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7 canHttp:(_Bool)arg8;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 canHttp:(_Bool)arg7;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6 forwardIP:(unsigned int)arg7;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4 passSpanner:(_Bool)arg5 needRetry:(_Bool)arg6;
- (void)sendHead:(NSDictionary *)arg1 body:(NSData *)arg2 channel:(long long)arg3 dataId:(unsigned long long)arg4;
- (long long)accessStatus;
- (void)addStatusObserver:(id <MAStatusInterface>)arg1;
- (void)addInfoProvider:(id <MAInitInfoInterface>)arg1;
- (void)addErrorObserver:(id <MAErrorInterface>)arg1;
- (void)registerDataObserver:(id <MADataInterface>)arg1 channel:(long long)arg2;
@end

