//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

@class UIView;

@interface FMPaddingComponent : FMCellComponent
{
    _Bool _bHasShow;
    UIView *_contentView;
    double _subViewHeight;
}

@property(nonatomic) double subViewHeight; // @synthesize subViewHeight=_subViewHeight;
@property(nonatomic) _Bool bHasShow; // @synthesize bHasShow=_bHasShow;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)prepareForShow;
- (id)getHeightCache;
- (Class)viewClass;
- (id)init;

@end

