//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString;

@interface TBHomeDinamicBasedCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <TBHomeDinamicBasedCollectionViewDelegate> _dismissDelegate;
    NSArray *_sectionItems;
}

@property(retain, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(nonatomic) __weak id <TBHomeDinamicBasedCollectionViewDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 marginTopForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)templateDownlaodCompleted:(id)arg1;
- (void)reloadDataWithSectionItems:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

