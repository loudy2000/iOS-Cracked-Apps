//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, XYFollowButton;

@interface XYPHUserFollowingAllUserCell : UICollectionViewCell
{
    XYFollowButton *_followButton;
    UIImageView *_portraitImageView;
    UILabel *_nameLabel;
    UILabel *_numberOfPostsAndFansLabel;
}

@property(retain, nonatomic) UILabel *numberOfPostsAndFansLabel; // @synthesize numberOfPostsAndFansLabel=_numberOfPostsAndFansLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
@property(retain, nonatomic) XYFollowButton *followButton; // @synthesize followButton=_followButton;
- (void).cxx_destruct;
- (void)setCellWithstauts:(id)arg1;
- (void)setCellWithDic:(id)arg1;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

