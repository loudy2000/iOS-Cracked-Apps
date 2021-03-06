//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol GMSObjectDataCache <NSObject>
+ (void)deleteObjectDataCaches;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (void)deleteObjectDataCacheWithCompletionHandler:(void (^)(void))arg1;
- (void)findObjectDataPassingTest:(_Bool (^)(NSString *, NSDate *, unsigned int, unsigned long long, unsigned long long))arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)deleteObjectDataWithName:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)deleteObjectDataWithNames:(NSArray *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)loadObjectDataWithName:(NSString *)arg1 completionHandler:(void (^)(NSData *, int, NSDate *))arg2;
- (void)storeObjectDataWithName:(NSString *)arg1 version:(int)arg2 data:(NSData *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)storeObjectNamesAndData:(NSDictionary *)arg1 version:(int)arg2 completionHandler:(void (^)(_Bool))arg3;
@end

