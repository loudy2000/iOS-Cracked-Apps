//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOSPresenter.h"

@class MOSQuickChatNavigationPresenter, UIView, UIViewController;

@protocol MOSChatComponetPresenterProtocol <MOSPresenter>
@property(retain, nonatomic) UIView *view;
@property(nonatomic) __weak UIViewController *baseViewController;
@property(nonatomic) __weak id <MOSChatComponetPresenterDelegate> delgate;
@property(retain, nonatomic) MOSQuickChatNavigationPresenter *navigation;
- (void)loadMessage;
@end

