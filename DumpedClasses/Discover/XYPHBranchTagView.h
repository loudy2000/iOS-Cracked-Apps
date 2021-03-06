//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIPanGestureRecognizer, XYPHBranchTag, XYPHBranchTagCenterCircleView;

@interface XYPHBranchTagView : UIView
{
    struct CGPoint movePoint;
    _Bool _isBranchTagRemove;
    XYPHBranchTag *_branchTag;
    id <XYPHBranchTagViewDelegate> _delegate;
    XYPHBranchTagCenterCircleView *_centerCircleView;
    NSMutableArray *_singleBranchViews;
    NSMutableArray *_angleLines;
    UIPanGestureRecognizer *_moveGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *moveGesture; // @synthesize moveGesture=_moveGesture;
@property(retain, nonatomic) NSMutableArray *angleLines; // @synthesize angleLines=_angleLines;
@property(retain, nonatomic) NSMutableArray *singleBranchViews; // @synthesize singleBranchViews=_singleBranchViews;
@property(retain, nonatomic) XYPHBranchTagCenterCircleView *centerCircleView; // @synthesize centerCircleView=_centerCircleView;
@property(nonatomic) __weak id <XYPHBranchTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isBranchTagRemove; // @synthesize isBranchTagRemove=_isBranchTagRemove;
@property(retain, nonatomic) XYPHBranchTag *branchTag; // @synthesize branchTag=_branchTag;
- (void).cxx_destruct;
- (void)removeFromSuperview:(_Bool)arg1;
- (void)enableMoveGesture;
- (double)angleToRadian:(double)arg1;
- (void)locationViewTapGesture:(id)arg1;
- (void)priceViewTapGesture:(id)arg1;
- (void)brandGoodViewTapGesture:(id)arg1;
- (void)centerCircleViewTapGestrue:(id)arg1;
- (void)movePanGesture:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updatePosition:(struct CGPoint)arg1;
- (id)addBranchView:(id)arg1 icon:(id)arg2 radian:(float)arg3;
- (id)addBranchWithAngel:(double)arg1 text:(id)arg2 icon:(id)arg3 animated:(_Bool)arg4;
- (double)offsetYForAngle:(double)arg1;
- (double)offsetXForAngle:(double)arg1;
- (void)setup:(_Bool)arg1;
- (double)bigestAbsCosBranchAngle;

@end

