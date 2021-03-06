//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSFileHandle, NSLock, NSMutableArray, NSString, NSTimer;

@interface TXYUploadLogger : NSObject
{
    long long _logLevel;
    NSString *_logFile;
    NSFileHandle *_fileHandle;
    NSString *_logDate;
    NSMutableArray *_caches;
    NSTimer *_timer;
    NSLock *_lock;
    _Bool _canSaveLogOpt;
    NSDateFormatter *_dateFormatter;
    _Bool _disableFlush;
}

+ (void)freeSharedQueue;
+ (id)sharedQueue;
+ (id)instance;
+ (void)setupLogPath:(id)arg1;
@property(nonatomic) _Bool disableFlush; // @synthesize disableFlush=_disableFlush;
@property(retain, nonatomic) NSMutableArray *caches; // @synthesize caches=_caches;
@property(retain, nonatomic) NSString *logFile; // @synthesize logFile=_logFile;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;
- (id)logStringBegin:(long long)arg1 end:(long long)arg2;
- (id)curLogString;
- (id)showLogFileOf:(id)arg1;
- (id)showLogFile;
- (void)asynReadFile:(id)arg1;
- (void)logCententOfPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)logPathOfDate:(id)arg1;
- (void)checkLogFile;
- (void)processCheckLogFile;
- (void)enumLogFiles:(CDUnknownBlockType)arg1;
- (void)clearCurLog;
- (void)flush;
- (void)logString:(id)arg1;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 msg:(id)arg5 arguments:(char *)arg6;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 msg:(id)arg7;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 msg:(id)arg5;
- (void)outPutLog:(id)arg1;
- (void)timeToSaveLog;
- (void)asyncSaveLog;
- (void)saveLog:(id)arg1;
- (void)saveLogThread:(id)arg1;
- (void)checkLogSize;
- (void)checkLogSizeOperation;
- (void)openFile;
- (void)dealloc;
- (void)clearFileHandle;
- (void)clearTimer;
- (id)init;
- (void)WillEnterForeground;
- (_Bool)isLogFileExist;
- (void)initLogFile;
- (id)getLogPath;
- (id)dateStringFrom:(id)arg1;
- (id)dateString;

@end

