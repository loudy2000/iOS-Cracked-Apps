//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLThemeMenuListLayout;

@protocol QLThemeMenuSelectLayoutDelegate <NSObject>
- (struct CGSize)themeMenuLayout:(QLThemeMenuListLayout *)arg1 itemSizeForIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)themeMenuLayout:(QLThemeMenuListLayout *)arg1 itemSizeForIndexPath:(NSIndexPath *)arg2 selectStatus:(_Bool)arg3;
- (_Bool)themeMenuLayout:(QLThemeMenuListLayout *)arg1 shouldDelaySelectIndexPath:(NSIndexPath *)arg2;
- (void)themeMenuLayout:(QLThemeMenuListLayout *)arg1 didDeleteIndexPath:(NSIndexPath *)arg2;
- (void)themeMenuLayout:(QLThemeMenuListLayout *)arg1 didInsertIndexPath:(NSIndexPath *)arg2;
- (void)themeMenuLayout:(QLThemeMenuListLayout *)arg1 didSelectIndexPath:(NSIndexPath *)arg2;
@end
