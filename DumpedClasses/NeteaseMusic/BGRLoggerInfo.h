//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface BGRLoggerInfo : NSObject
{
    id <NTESBugrptBGRLoggerDelegate> _logger;
    unsigned long long _printLevel;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

+ (id)infoWithLogger:(id)arg1 level:(unsigned long long)arg2 queue:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(readonly, nonatomic) unsigned long long printLevel; // @synthesize printLevel=_printLevel;
@property(readonly, nonatomic) id <NTESBugrptBGRLoggerDelegate> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1 level:(unsigned long long)arg2 queue:(id)arg3;

@end

