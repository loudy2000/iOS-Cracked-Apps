//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QRouteOverlayGroup : NSObject
{
    NSMutableArray *_arrOverlay;
    long long _groupIndex;
}

@property(nonatomic) long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(retain, nonatomic) NSMutableArray *arrOverlay; // @synthesize arrOverlay=_arrOverlay;
- (void).cxx_destruct;
- (CDStruct_02837cd9)visibleRect:(id)arg1;
- (CDStruct_02837cd9)frame;
- (void)dealloc;
- (void)addRouteOverlay:(id)arg1;
- (id)initWithArrData:(id)arg1;

@end
