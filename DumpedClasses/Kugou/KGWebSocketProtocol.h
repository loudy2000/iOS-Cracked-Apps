//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGProtocolHttp.h"

@class KGWebSocketMessage;

@interface KGWebSocketProtocol : KGProtocolHttp
{
    KGWebSocketMessage *_receiveNewMesssage;
}

@property(copy, nonatomic) KGWebSocketMessage *receiveNewMesssage; // @synthesize receiveNewMesssage=_receiveNewMesssage;
- (void).cxx_destruct;
- (id)getCompleteEncryptUrl;
- (_Bool)synAccessService:(int *)arg1;
- (id)initWithPage:(id)arg1 userId:(id)arg2 token:(id)arg3;

@end

