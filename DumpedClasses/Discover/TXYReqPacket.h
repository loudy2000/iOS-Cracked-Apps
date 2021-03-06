//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYUploadTraceString.h"

#import "NSCoding.h"

@class NSString, TXYTask;

@interface TXYReqPacket : TXYUploadTraceString <NSCoding>
{
    long long _fileSize;
    _Bool _isMultiSegment;
    _Bool _needControlPacket;
    long long _estimatedTotalSize;
    long long _taskId;
    NSString *_flowId;
    TXYTask *_inputTask;
    long long _state;
    long long _contentOffset;
    long long _networkType;
    NSString *_session;
    NSString *_tempSign;
    long long _hasSend;
    long long _cloudType;
}

+ (id)encodeUniAttribute:(UniAttribute_bd4bb1cc *)arg1;
+ (id)encodeUniPacket:(UniPacket_690cfacd *)arg1;
+ (id)descState:(long long)arg1;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(nonatomic) long long hasSend; // @synthesize hasSend=_hasSend;
@property(retain, nonatomic) NSString *tempSign; // @synthesize tempSign=_tempSign;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) _Bool needControlPacket; // @synthesize needControlPacket=_needControlPacket;
@property(nonatomic) _Bool isMultiSegment; // @synthesize isMultiSegment=_isMultiSegment;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) TXYTask *inputTask; // @synthesize inputTask=_inputTask;
@property(retain, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long estimatedTotalSize; // @synthesize estimatedTotalSize=_estimatedTotalSize;
- (void).cxx_destruct;
- (id)description;
- (void)setCommonUniPacket:(void *)arg1 funcName:(const char *)arg2;
- (void)packEnvironment:(struct stEnvironment *)arg1;
- (void)packAuth:(struct stAuth *)arg1;
- (void)resetParams;
- (int)packetIndentity;
- (id)getFilePacket:(int)arg1;
- (id)getControlPacket;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1;

@end

