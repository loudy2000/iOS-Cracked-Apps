//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGSkinButton, NSString, UIButton;

@interface KTVTipTitleView : UIView
{
    _Bool _showMoreBotton;
    _Bool _tapEnable;
    NSString *_tipImageName;
    NSString *_tipTitle;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _moreBlock;
    KGSkinButton *_tipBtn;
    UIButton *_moreBtn;
    struct CGPoint _startPoint;
    struct UIEdgeInsets _tipImageEdge;
}

@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool tapEnable; // @synthesize tapEnable=_tapEnable;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) KGSkinButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock=_moreBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) struct UIEdgeInsets tipImageEdge; // @synthesize tipImageEdge=_tipImageEdge;
@property(nonatomic) _Bool showMoreBotton; // @synthesize showMoreBotton=_showMoreBotton;
@property(copy, nonatomic) NSString *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(copy, nonatomic) NSString *tipImageName; // @synthesize tipImageName=_tipImageName;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)actionMore:(id)arg1;
- (void)layoutSubviews;
- (void)initlizaSubviews;
- (id)init;

@end

