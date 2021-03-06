//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentCellProtocol.h"

@class FMImageView, NSMutableArray, NSString, UIImageView, UILabel;

@interface FMDetailFavorUsersComponentView : UIView <FMComponentCellProtocol>
{
    UIImageView *_scanUpImageView;
    UIView *_favorView;
    UILabel *_favorNumberLabel;
    UILabel *_browseCountLabel;
    UIView *_topLineView;
    long long _maxNum;
    NSMutableArray *_avatarImageViews;
    UIView *_forwardFlowGuideView;
    UILabel *_forwardFlowGuideLabel;
    FMImageView *_forwardFlowGuideImageView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMImageView *forwardFlowGuideImageView; // @synthesize forwardFlowGuideImageView=_forwardFlowGuideImageView;
@property(retain, nonatomic) UILabel *forwardFlowGuideLabel; // @synthesize forwardFlowGuideLabel=_forwardFlowGuideLabel;
@property(retain, nonatomic) UIView *forwardFlowGuideView; // @synthesize forwardFlowGuideView=_forwardFlowGuideView;
@property(retain, nonatomic) NSMutableArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(nonatomic) long long maxNum; // @synthesize maxNum=_maxNum;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *browseCountLabel; // @synthesize browseCountLabel=_browseCountLabel;
@property(retain, nonatomic) UILabel *favorNumberLabel; // @synthesize favorNumberLabel=_favorNumberLabel;
@property(retain, nonatomic) UIView *favorView; // @synthesize favorView=_favorView;
@property(retain, nonatomic) UIImageView *scanUpImageView; // @synthesize scanUpImageView=_scanUpImageView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tappedForwardFlowView;
- (void)showBrowseUpAlertView:(long long)arg1;
- (void)bindComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

