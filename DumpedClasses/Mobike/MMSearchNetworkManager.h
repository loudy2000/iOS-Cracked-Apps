//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface MMSearchNetworkManager : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)manager;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)GETRequest:(id)arg1 suceess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)GET:(id)arg1 suceess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

