//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWebView;

@interface AlibcJumpFailedStrategy : NSObject
{
    long long _failedMode;
    UIWebView *_webview;
    id <AlibcJumpFailedStrategyDelegate> _failToH5Delegate;
}

@property(nonatomic) __weak id <AlibcJumpFailedStrategyDelegate> failToH5Delegate; // @synthesize failToH5Delegate=_failToH5Delegate;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) long long failedMode; // @synthesize failedMode=_failedMode;
- (void).cxx_destruct;

@end

