//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMPHeadObject;

@interface AMPPacketObject : NSObject
{
    AMPHeadObject *_head;
    id <AMPBodyObject> _body;
}

@property(retain, nonatomic) id <AMPBodyObject> body; // @synthesize body=_body;
@property(retain, nonatomic) AMPHeadObject *head; // @synthesize head=_head;
- (void).cxx_destruct;

@end

