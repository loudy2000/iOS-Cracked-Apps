//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WVUserContentController : NSObject
{
    NSArray *_userScripts;
}

+ (void)inject:(id)arg1 toWebView:(id)arg2;
+ (id)globalController;
- (void).cxx_destruct;
- (void)injectToWebView:(id)arg1;
- (void)removeAllUserScripts;
- (void)removeUserScriptByKey:(id)arg1;
- (void)addUserScriptSource:(id)arg1 withKey:(id)arg2;
- (void)addUserScriptSource:(id)arg1;
- (void)addUserScript:(id)arg1;
- (id)userScripts;
- (id)init;

@end
