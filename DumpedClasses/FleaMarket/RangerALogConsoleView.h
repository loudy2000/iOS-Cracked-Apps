//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LBDebugControlPanelViewController, LBLogViewController, LBRangerABTestListViewController, LBRangerStateWatcherViewController, UISegmentedControl, UIViewController;

@interface RangerALogConsoleView : UIView
{
    UISegmentedControl *_segment;
    UIView *_contentView;
    LBDebugControlPanelViewController *_controlPanel;
    LBLogViewController *_log;
    LBRangerStateWatcherViewController *_preformance;
    LBRangerABTestListViewController *_testList;
    UIView *_lastSelectedView;
    UIViewController *_lastSelectedCtr;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layout;
- (void)updateToView;
- (void)onSegmentCallBack:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

