//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TBSeckillDelegate <NSObject>
- (void)seckillSucceed:(id)arg1;

@optional
- (void)loadToolBar:(_Bool)arg1;
- (void)goback2detailvc;
- (void)showLoadingView:(_Bool)arg1;
- (void)showToast:(NSString *)arg1;
@end

