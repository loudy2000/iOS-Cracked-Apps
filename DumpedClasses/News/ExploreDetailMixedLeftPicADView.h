//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreDetailBaseADView.h"

@class SSThemedLabel, TTImageView, TTLabel;

@interface ExploreDetailMixedLeftPicADView : ExploreDetailBaseADView
{
    TTImageView *_imageView;
    TTLabel *_titleLabel;
    SSThemedLabel *_adLabel;
    SSThemedLabel *_sourceLabel;
}

+ (void)updateADLabel:(id)arg1 withADModel:(id)arg2;
+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) SSThemedLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) SSThemedLabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) TTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)dislikeImageName;
- (void)layout;
- (void)setAdModel:(id)arg1;
- (void)buildView;
- (id)initWithWidth:(double)arg1;

@end

