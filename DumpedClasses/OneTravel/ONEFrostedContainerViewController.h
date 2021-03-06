//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REFrostedViewController.h"

#import "DGCSplitSlideAnimationProtocol.h"
#import "ONEUIViewContainerController.h"

@class NSString, UIView, UIViewController;

@interface ONEFrostedContainerViewController : REFrostedViewController <DGCSplitSlideAnimationProtocol, ONEUIViewContainerController>
{
    UIViewController *_putBackVC;
    UIView *_lastSnapShot;
    UIViewController *_statusBarController;
}

- (void).cxx_destruct;
- (void)presentMenuViewControllerWithAnimatedApperance:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (int)pageCount;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)hideMainMenu;
- (void)setMainMenuViewControllerWithNode:(id)arg1;
- (id)takeOffContentViewController;
- (id)p_contentViewController;
- (id)topViewController;
- (void)popToRootAnimated:(_Bool)arg1;
- (void)popPageAnimated:(_Bool)arg1;
- (void)pushPageByRouterNode:(id)arg1 animated:(_Bool)arg2;
- (void)switchToPageByRouterNode:(id)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)slideInWithDuration:(double)arg1;
- (void)slideOutWithDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

