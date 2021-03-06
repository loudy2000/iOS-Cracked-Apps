//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface TBLiveAdLayerSideBannerView : UIView
{
    NSString *_accountId;
    NSString *_feedId;
    _Bool _isBroadCast;
    UILabel *_mainTitle;
    UILabel *_subTitle;
    UIImageView *_imageView;
    NSString *_jumpUrl;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isBroadCast; // @synthesize isBroadCast=_isBroadCast;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;
- (void)onTapAction:(id)arg1;
- (void)refreshViewWithModel:(id)arg1 accountId:(id)arg2 feedId:(id)arg3;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

