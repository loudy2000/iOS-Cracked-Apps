//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary;

@interface QLBubbleAppearTimes : NSObject <NSCoding>
{
    NSMutableDictionary *_bubbleAppearTimesForVid;
    NSMutableDictionary *_bubbleAppearTimesForCid;
    NSMutableDictionary *_bubbleAppearTimesForDay;
}

@property(retain, nonatomic) NSMutableDictionary *bubbleAppearTimesForDay; // @synthesize bubbleAppearTimesForDay=_bubbleAppearTimesForDay;
@property(retain, nonatomic) NSMutableDictionary *bubbleAppearTimesForCid; // @synthesize bubbleAppearTimesForCid=_bubbleAppearTimesForCid;
@property(retain, nonatomic) NSMutableDictionary *bubbleAppearTimesForVid; // @synthesize bubbleAppearTimesForVid=_bubbleAppearTimesForVid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

