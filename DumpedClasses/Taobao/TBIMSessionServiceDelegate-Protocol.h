//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol TBIMSessionServiceDelegate <NSObject>

@optional
- (void)SessionUpdateFinish;
- (void)SessionLoadFromNetWork:(NSArray *)arg1;
- (void)SessionChange:(NSArray *)arg1;
- (void)SessionDel:(NSArray *)arg1;
- (void)SessionAdd:(NSArray *)arg1;
@end

