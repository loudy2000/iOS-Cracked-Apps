//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelButtonAdapter.h"

#import "CAAnimationDelegate.h"

@class CTHotelInquireMainCacheBean, NSString;

@interface CTHotelRedPacketAdapter : CTHotelButtonAdapter <CAAnimationDelegate>
{
    NSString *_imgUrl;
    CTHotelInquireMainCacheBean *_mCacheBean;
}

@property(nonatomic) __weak CTHotelInquireMainCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (void)doButtonEvent:(id)arg1;
- (id)getView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

