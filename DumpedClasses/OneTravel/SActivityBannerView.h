//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPicturesPage.h"

@class NSArray;

@interface SActivityBannerView : SPicturesPage
{
    NSArray *_activityConfs;
    id <SActivityBannerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SActivityBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *activityConfs; // @synthesize activityConfs=_activityConfs;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectPage:(long long)arg1;
- (void)configActivityConfs:(id)arg1;

@end

