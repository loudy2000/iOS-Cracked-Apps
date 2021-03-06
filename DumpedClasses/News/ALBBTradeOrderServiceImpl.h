//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBTradeServiceImpl.h"

#import "ALBBOrderService.h"

@class NSString;

@interface ALBBTradeOrderServiceImpl : ALBBTradeServiceImpl <ALBBOrderService>
{
}

+ (id)checkUpOrderItems:(id)arg1;
+ (id)checkUpOrderItem:(id)arg1;
- (void)showTaoKeOrderWithSku:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 params:(id)arg5 taoKeParams:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (void)showOrderWithSku:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 params:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showTaoKeOrder:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 orderItem:(id)arg4 taoKeParams:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showOrder:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 orderItems:(id)arg4 tradeProcessSuccessCallback:(CDUnknownBlockType)arg5 tradeProcessFailedCallback:(CDUnknownBlockType)arg6;
- (id)orderURLWithOrderItems:(id)arg1;
- (id)orderUrlService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

