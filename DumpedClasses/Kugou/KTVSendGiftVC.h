//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

@class KGDefaultNetErrorView, KTVEmptyView, UIView;

@interface KTVSendGiftVC : KTVBaseViewController
{
    _Bool isFirstInView;
    KGDefaultNetErrorView *_errorView;
    KTVEmptyView *_noDataView;
    UIView *giftView;
    _Bool isGettingData;
    long long _opusId;
    long long _playerId;
}

@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (long long)showPlayBarWay;
- (void)setGiftsWithArray:(id)arg1;
- (void)refreshData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

