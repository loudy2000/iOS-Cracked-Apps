//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APGTabConfig, NSDictionary;

@protocol APGSegmentItemsContentViewDelegate <NSObject>
- (void)didSelectedButton:(APGTabConfig *)arg1 originY:(double)arg2 completion:(void (^)(NSDictionary *))arg3;
- (void)clearSelectedInfos;
- (void)hideSubMenuView;
- (void)didSelectedSubButtonAtIndex:(long long)arg1 extInfo:(NSDictionary *)arg2;
- (void)didSelectedSubButtonAtIndex:(long long)arg1 menuIndex:(long long)arg2;
- (void)didSelectedButtonAtIndex:(long long)arg1;
@end

