//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HLFeedCell, HLNegativeFeedbackView, NSMutableArray;

@protocol HLNegativeFeedbackDelegate <NSObject>
- (void)feedbackView:(HLNegativeFeedbackView *)arg1 cell:(HLFeedCell *)arg2 didSelectOptions:(NSMutableArray *)arg3;
@end

