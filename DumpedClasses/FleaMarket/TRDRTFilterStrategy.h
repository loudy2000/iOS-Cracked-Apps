//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TRDRTFilterStrategy : NSObject
{
    NSArray *_module;
    NSArray *_network;
}

@property(retain, nonatomic) NSArray *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)updateFilterStrategy:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)init;

@end

