//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface KFRoyalBoxView : UIView
{
    NSMutableArray *_royalViews;
    long long _maxRoyalNumber;
}

@property(nonatomic) long long maxRoyalNumber; // @synthesize maxRoyalNumber=_maxRoyalNumber;
@property(retain, nonatomic) NSMutableArray *royalViews; // @synthesize royalViews=_royalViews;
- (void).cxx_destruct;
- (void)clearBox;
- (void)addRoyal:(id)arg1;
- (void)showRoyals:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

