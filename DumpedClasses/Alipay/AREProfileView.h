//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APCommonSimpleProfileViewController, NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface AREProfileView : UIView
{
    NSDictionary *_params;
    APCommonSimpleProfileViewController *_profileController;
    UIImageView *_cardView;
    UIButton *_closeButton;
    UIImageView *_headView;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UIButton *_chatButton;
    UIButton *_addButton;
    NSString *_currentUserID;
}

@property(copy, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) APCommonSimpleProfileViewController *profileController; // @synthesize profileController=_profileController;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)closeProfile;
- (void)animateCloseProfile;
- (void)loadUserProfile;
- (void)addAction;
- (void)gotoPrivateChat;
- (void)gotoP2PMessage;
- (void)chatAction;
- (void)doChatAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateViews:(id)arg1;
- (void)setupViews;
- (void)didMoveToSuperview;
- (id)initWithParams:(id)arg1;

@end

