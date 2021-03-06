//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMDiscoveryContentViewProtocol.h"

@class NMContentTagView, NMDiscoveryContent, NMEssenceTipView, NMPlayCountView, NSString, UIButton, UIImageView, UILabel;

@interface NMDiscoveryContentView : UIView <NMDiscoveryContentViewProtocol>
{
    double _coverSide;
    NMDiscoveryContent *_content;
    UIButton *_coverButton;
    UIImageView *_maskImageView;
    NMPlayCountView *_playCountView;
    NMEssenceTipView *_essenceTipImageView;
    UILabel *_firstNameLabel;
    UILabel *_nextNameLabel;
    NMContentTagView *_tagView;
}

+ (struct CGSize)sizeForContent:(id)arg1;
+ (id)tagForContent:(id)arg1;
+ (double)coverSide;
@property(readonly, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) NMDiscoveryContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

