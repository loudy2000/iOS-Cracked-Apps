//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, XYPHSearchFilterCollectionHeaderShowMoreControl;

@interface XYPHSearchFilterCollectionHeaderReusableView : UICollectionReusableView
{
    id <XYPHSearchFilterCollectionHeaderReusableViewDelegate> _delegate;
    UILabel *_nameLabel;
    XYPHSearchFilterCollectionHeaderShowMoreControl *_showMoreControl;
    NSString *_filterGroupType;
}

@property(copy, nonatomic) NSString *filterGroupType; // @synthesize filterGroupType=_filterGroupType;
@property(retain, nonatomic) XYPHSearchFilterCollectionHeaderShowMoreControl *showMoreControl; // @synthesize showMoreControl=_showMoreControl;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <XYPHSearchFilterCollectionHeaderReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showMoreControlTouchUpInside:(id)arg1;
- (void)setToCutStatus;
- (void)setToShowMoreStatus;
- (void)hiddenShowMoreControl;
- (void)config:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

