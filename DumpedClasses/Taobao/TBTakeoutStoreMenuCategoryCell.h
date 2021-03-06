//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBBadgeView, TBTakeoutStoreMenuViewModel, TBTextAttachment, TBTextLabel, UIView;

@interface TBTakeoutStoreMenuCategoryCell : UITableViewCell
{
    TBTakeoutStoreMenuViewModel *_viewModel;
    TBTextLabel *_titleLabel;
    TBBadgeView *_badgeView;
    UIView *_bottomLine;
    TBTextAttachment *_imageAttachment;
}

@property(retain, nonatomic) TBTextAttachment *imageAttachment; // @synthesize imageAttachment=_imageAttachment;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TBBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) TBTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TBTakeoutStoreMenuViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)badgeViewUpdate;
- (void)insertImageIcon;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

