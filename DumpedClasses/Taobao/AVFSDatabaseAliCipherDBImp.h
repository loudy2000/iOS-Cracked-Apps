//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVFSDatabaseProtocol.h"

@class AliDB, NSString;

@interface AVFSDatabaseAliCipherDBImp : NSObject <AVFSDatabaseProtocol>
{
    AliDB *_db;
}

- (void).cxx_destruct;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (void)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 key:(id)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

