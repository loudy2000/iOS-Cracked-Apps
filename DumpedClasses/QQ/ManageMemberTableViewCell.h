//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GroupAudioChatMemberModel, NSArray, NSMutableArray, QQAvatarView, UIButton, UIImageView;

@interface ManageMemberTableViewCell : UITableViewCell
{
    _Bool _isSpeaking;
    _Bool _isMicOff;
    QQAvatarView *_avatarView;
    UIImageView *_speakingImageView;
    UIButton *_micButton;
    NSMutableArray *_accessibleElements;
    id <ManageMemberTableViewCellDelegate> _delegate;
    GroupAudioChatMemberModel *_memberModel;
    int _xo;
}

@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)setupAccessibilityFrameForElement:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)onButtonClick:(id)arg1;
@property(nonatomic) _Bool isMicOff; // @dynamic isMicOff;
@property(nonatomic) _Bool isSpeaking; // @dynamic isSpeaking;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) QQAvatarView *avatarView; // @dynamic avatarView;
@property(nonatomic) id <ManageMemberTableViewCellDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GroupAudioChatMemberModel *memberModel; // @dynamic memberModel;
@property(retain, nonatomic) UIButton *micButton; // @dynamic micButton;
@property(retain, nonatomic) UIImageView *speakingImageView; // @dynamic speakingImageView;

@end

