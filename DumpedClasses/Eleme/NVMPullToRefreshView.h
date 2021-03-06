//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, NVMLogoLoadingView, UIScrollView;

@interface NVMPullToRefreshView : UIView
{
    UIView *_pullRefreshBackGroundView;
    CADisplayLink *_backGroundViewDisplayLink;
    _Bool _isObserving;
    _Bool _isLoadingViewHidden;
    _Bool _showsPullToRefresh;
    unsigned long long _state;
    unsigned long long _pullToRefreshViewBackgroundMode;
    CDUnknownBlockType _pullToRefreshActionHandler;
    NVMLogoLoadingView *_logoLoadingView;
    UIScrollView *_scrollView;
    double _originalTopInset;
}

@property(nonatomic) _Bool showsPullToRefresh; // @synthesize showsPullToRefresh=_showsPullToRefresh;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NVMLogoLoadingView *logoLoadingView; // @synthesize logoLoadingView=_logoLoadingView;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshActionHandler; // @synthesize pullToRefreshActionHandler=_pullToRefreshActionHandler;
@property(nonatomic) _Bool isLoadingViewHidden; // @synthesize isLoadingViewHidden=_isLoadingViewHidden;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) unsigned long long pullToRefreshViewBackgroundMode; // @synthesize pullToRefreshViewBackgroundMode=_pullToRefreshViewBackgroundMode;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)resetBackGroundViewFrame;
- (void)didMoveToWindow;
- (void)stopAnimating;
- (void)startAnimating;
- (void)triggerRefresh;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1 contentOffset:(struct CGPoint)arg2;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSloganHidden:(_Bool)arg1;

@end

