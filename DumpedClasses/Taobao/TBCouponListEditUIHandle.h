//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBBarButtonItem, TBCouponListViewController;

@interface TBCouponListEditUIHandle : NSObject
{
    TBCouponListViewController *_viewcontroller;
    NSString *_originTitle;
    TBBarButtonItem *_originLeftBarItem;
    TBBarButtonItem *_originMoreBarItem;
    TBBarButtonItem *_originRightBarItem;
}

@property(retain, nonatomic) TBBarButtonItem *originRightBarItem; // @synthesize originRightBarItem=_originRightBarItem;
@property(retain, nonatomic) TBBarButtonItem *originMoreBarItem; // @synthesize originMoreBarItem=_originMoreBarItem;
@property(retain, nonatomic) TBBarButtonItem *originLeftBarItem; // @synthesize originLeftBarItem=_originLeftBarItem;
@property(copy, nonatomic) NSString *originTitle; // @synthesize originTitle=_originTitle;
@property(nonatomic) __weak TBCouponListViewController *viewcontroller; // @synthesize viewcontroller=_viewcontroller;
- (void).cxx_destruct;
- (void)endEditedTBNavigation;
- (void)didEditingTBNavigation;
- (void)willEditingTBNavigation;

@end

