//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "P_QLPageItemCellShowUp.h"

@class NSIndexPath, NSString;

@interface QLBaseTabelViewCell : UITableViewCell <P_QLPageItemCellShowUp>
{
    id _itemObj;
    id <QLThumbCreationUserInfo> _uInfo;
    NSIndexPath *_representIndexPath;
}

+ (id)getCellIdentifierWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) NSIndexPath *representIndexPath; // @synthesize representIndexPath=_representIndexPath;
@property(nonatomic) __weak id <QLThumbCreationUserInfo> uInfo; // @synthesize uInfo=_uInfo;
- (void).cxx_destruct;
- (_Bool)shouldRecognizeSimultaneouslyWithGesRecognizer:(id)arg1 atLocation:(struct CGPoint)arg2;
- (_Bool)canSlideMore:(struct CGPoint)arg1;
- (void)loadDataWithCachePolicy:(int)arg1 more:(_Bool)arg2;
- (void)removeCellResouresWhenReused;
- (id)horizontalScrollView;
- (id)horizontalCollectionView;
- (void)itemCellDidInvisible;
- (void)itemCellDidShowUp;
- (void)reportShowUp;
- (void)startLoadModel;
- (void)setObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

