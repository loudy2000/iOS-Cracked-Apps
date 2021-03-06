//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HLColumnBar, TBHLAnimationLabel, UIButton, UILabel;

@interface TBHLTopBarContain : UIView
{
    HLColumnBar *_topBar;
    UIButton *_subscibeButton;
    CDUnknownBlockType _subscibeClickHandle;
    UIButton *_editButton;
    CDUnknownBlockType _editClickHandle;
    TBHLAnimationLabel *_waringLabel;
    UIView *_line;
    UIView *_menubar;
    UILabel *_menuLabel;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UILabel *menuLabel; // @synthesize menuLabel=_menuLabel;
@property(retain, nonatomic) UIView *menubar; // @synthesize menubar=_menubar;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) TBHLAnimationLabel *waringLabel; // @synthesize waringLabel=_waringLabel;
@property(copy, nonatomic) CDUnknownBlockType editClickHandle; // @synthesize editClickHandle=_editClickHandle;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(copy, nonatomic) CDUnknownBlockType subscibeClickHandle; // @synthesize subscibeClickHandle=_subscibeClickHandle;
@property(retain, nonatomic) UIButton *subscibeButton; // @synthesize subscibeButton=_subscibeButton;
@property(retain, nonatomic) HLColumnBar *topBar; // @synthesize topBar=_topBar;
- (void).cxx_destruct;
- (void)subscibeClick;
- (void)selectAnimation;
- (void)insertColumnBarBelowMenu;
- (void)editButtonClick;
- (void)editButtonStyle;
- (void)addShadow:(id)arg1;
- (void)setup;
- (void)addViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

