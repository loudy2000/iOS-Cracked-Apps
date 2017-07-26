//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPDYHeaderBlockFrame.h"

@class NSURL;

@interface SPDYSynStreamFrame : SPDYHeaderBlockFrame
{
    unsigned char _priority;
    unsigned char _slot;
    _Bool _last;
    _Bool _unidirectional;
    unsigned int _streamId;
    unsigned int _associatedToStreamId;
    NSURL *_reqURL;
}

@property(retain, nonatomic) NSURL *reqURL; // @synthesize reqURL=_reqURL;
@property(nonatomic) _Bool unidirectional; // @synthesize unidirectional=_unidirectional;
@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) unsigned char slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int associatedToStreamId; // @synthesize associatedToStreamId=_associatedToStreamId;
@property(nonatomic) unsigned int streamId; // @synthesize streamId=_streamId;
- (void).cxx_destruct;

@end
