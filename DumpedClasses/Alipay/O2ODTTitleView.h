//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class AULoadingIndicatorView, NSLayoutConstraint;

@interface O2ODTTitleView : UILabel
{
    _Bool w_isUsed;
    NSLayoutConstraint *_leftContstraint;
    AULoadingIndicatorView *_titleLoading;
}

@property(retain, nonatomic) AULoadingIndicatorView *titleLoading; // @synthesize titleLoading=_titleLoading;
@property(retain, nonatomic) NSLayoutConstraint *leftContstraint; // @synthesize leftContstraint=_leftContstraint;
- (void).cxx_destruct;
- (void)stopTitleLoading;
- (void)startTitleLoading;
- (void)setText:(id)arg1;
- (_Bool)isUsed;
- (id)init;

@end

