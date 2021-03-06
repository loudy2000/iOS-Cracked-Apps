//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBTradeService.h"

@class ALBBTradeTaokeParams, NSString, TaeWebViewUISettings, UIViewController;

@protocol ALBBCartService <ALBBTradeService>
- (void)addTaoKeItem2Cart:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSString *)arg4 taoKeParams:(ALBBTradeTaokeParams *)arg5 addCartSuccessCallback:(void (^)(void))arg6 addCartCacelledCallback:(void (^)(void))arg7;
- (void)addItem2Cart:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSString *)arg4 addCartSuccessCallback:(void (^)(void))arg5 addCartCacelledCallback:(void (^)(void))arg6;
- (void)showCart:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg4 tradeProcessFailedCallback:(void (^)(NSError *))arg5;
@end

