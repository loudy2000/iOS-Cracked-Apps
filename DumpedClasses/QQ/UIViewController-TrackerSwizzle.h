//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TrackerSwizzleProtocol.h"

@class NSString;

@interface UIViewController (TrackerSwizzle) <TrackerSwizzleProtocol>
+ (void)swizzle;
- (void)TR_viewDidDisappear:(_Bool)arg1;
- (void)TR_viewDidLoad;
- (void)TR_loadView;
- (void)TR_viewWillAppear:(_Bool)arg1;
- (void)TR_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)TR_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDismissEvent;
- (void)addPresentEvent:(id)arg1;
- (void)TR_setTitle:(id)arg1;
- (void)TR_viewWillDisappear:(_Bool)arg1;
- (void)TR_viewDidAppear:(_Bool)arg1;
- (void)recoreViewcontrollerInfosWithViewcontrollerDisplayPhase:(long long)arg1;
- (void)recordNavigationController:(long long)arg1;
- (_Bool)hasSameNaigavtionInfoRecoreded;
- (void)recordViewControllerInfo:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
