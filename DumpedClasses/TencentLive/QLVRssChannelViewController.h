//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChannelRecmdViewCtl.h"

@interface QLVRssChannelViewController : QLChannelRecmdViewCtl
{
    unsigned long long _fromType;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
- (void)searchButtonClicked:(id)arg1;
- (void)loadDataForSubscribe;
- (void)vRssSubscribeEngineFinishSubscribe:(id)arg1;
- (void)vRssSubscribeEngineDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)updateNavBarTranslucentStatus:(id)arg1;
- (Class)thumbsMgrClass;
- (void)endDoNotResponseScroll;
- (void)beginDoNotResponseScroll;
- (_Bool)hideTabBarWhenPushed;
- (_Bool)navigationBarHidden;
- (id)pageIdentifier;
- (id)pageDescription;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
