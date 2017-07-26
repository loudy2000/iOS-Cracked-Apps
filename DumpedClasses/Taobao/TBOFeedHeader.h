//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ITBOModel.h"

@class NSString, TBFollowSDKModule, TBOAvatarImage, TBOFeed, TBOListView, UIButton, UIImageView, UILabel;

@interface TBOFeedHeader : UIView <ITBOModel>
{
    id _model;
    id _owner;
    TBOAvatarImage *_feedAuthorAvatar;
    UILabel *_feedAuthorNameLabel;
    UILabel *_publishedAt;
    UILabel *_topicName;
    UILabel *_createdTime;
    UIImageView *_voteImage;
    UILabel *_voteText;
    TBOListView *_userTagIconViewList;
    TBOFeed *_localFeedData;
    UIButton *_darenBtn;
    TBFollowSDKModule *_module;
}

@property(retain, nonatomic) TBFollowSDKModule *module; // @synthesize module=_module;
@property(retain, nonatomic) UIButton *darenBtn; // @synthesize darenBtn=_darenBtn;
@property(retain, nonatomic) TBOFeed *localFeedData; // @synthesize localFeedData=_localFeedData;
@property(retain, nonatomic) TBOListView *userTagIconViewList; // @synthesize userTagIconViewList=_userTagIconViewList;
@property(retain, nonatomic) UILabel *voteText; // @synthesize voteText=_voteText;
@property(retain, nonatomic) UIImageView *voteImage; // @synthesize voteImage=_voteImage;
@property(retain, nonatomic) UILabel *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) UILabel *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) UILabel *publishedAt; // @synthesize publishedAt=_publishedAt;
@property(retain, nonatomic) UILabel *feedAuthorNameLabel; // @synthesize feedAuthorNameLabel=_feedAuthorNameLabel;
@property(retain, nonatomic) TBOAvatarImage *feedAuthorAvatar; // @synthesize feedAuthorAvatar=_feedAuthorAvatar;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
