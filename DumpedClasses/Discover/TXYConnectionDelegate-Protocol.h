//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, TXYUploadConnection;

@protocol TXYConnectionDelegate <NSObject>

@optional
- (void)NotifyDisconnect:(TXYUploadConnection *)arg1;
- (void)Notify:(TXYUploadConnection *)arg1 SendResultState:(int)arg2 length:(int)arg3;
- (void)NotifyWriteDone:(TXYUploadConnection *)arg1;
- (void)Notify:(TXYUploadConnection *)arg1 writeNum:(long long)arg2 totalNum:(long long)arg3;
- (void)Notify:(TXYUploadConnection *)arg1 Data:(NSData *)arg2;
- (void)Notify:(TXYUploadConnection *)arg1 oldState:(int)arg2 newState:(int)arg3 errCode:(int)arg4 msg:(NSString *)arg5;
@end
