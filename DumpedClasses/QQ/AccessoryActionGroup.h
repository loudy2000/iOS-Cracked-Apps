//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AccessoryActionGroup : NSObject
{
    int _id;
    NSArray *_toPlayActions;
    NSArray *_toStopActions;
    NSArray *_toPauseActions;
}

@property(retain, nonatomic) NSArray *toPauseActions; // @synthesize toPauseActions=_toPauseActions;
@property(retain, nonatomic) NSArray *toStopActions; // @synthesize toStopActions=_toStopActions;
@property(retain, nonatomic) NSArray *toPlayActions; // @synthesize toPlayActions=_toPlayActions;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

