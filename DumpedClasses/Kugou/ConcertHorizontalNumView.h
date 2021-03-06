//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UIButton, UICollectionView;

@interface ConcertHorizontalNumView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <ConcertHorizontalNumViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_numArray;
    UIButton *_cancleBtn;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) NSArray *numArray; // @synthesize numArray=_numArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ConcertHorizontalNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)installCollection;
- (void)cancelBtnClick:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)hideBtnClicked:(id)arg1;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

