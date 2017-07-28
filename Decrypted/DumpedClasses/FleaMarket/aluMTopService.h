//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MtopExtRequestDelegate.h"

@class MtopExtRequest, NSString;

@interface aluMTopService : NSObject <MtopExtRequestDelegate>
{
    _Bool _rpcCanclled;
    MtopExtRequest *_request;
    CDUnknownBlockType _callback;
    Class _returnClass;
}

+ (id)doAsyncRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) Class returnClass; // @synthesize returnClass=_returnClass;
@property(nonatomic) _Bool rpcCanclled; // @synthesize rpcCanclled=_rpcCanclled;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_parseResponse:(id)arg1;
- (void)_handleResponse:(id)arg1;
- (void)failed:(id)arg1;
- (void)succeed:(id)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (void)_initMTopRequest:(id)arg1;
- (void)doAsyncRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
