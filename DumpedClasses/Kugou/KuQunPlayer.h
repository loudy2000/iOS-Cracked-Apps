//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGKTVManager, KGTingPlayerManager, NSConditionLock;

@interface KuQunPlayer : NSObject
{
    KGTingPlayerManager *_tingPlayer;
    KGKTVManager *_livePlayer;
    float _convertDuration;
    NSConditionLock *_playLock;
    NSConditionLock *_indexLock;
    int _curIndex;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (float)recordCurrentTime;
- (_Bool)isRecording;
- (void)stopRecord;
- (void)startRecordWithPath:(id)arg1 formatType:(long long)arg2;
- (void)setPlayVolumeForRtmp:(int)arg1;
- (id)currentKuqunSong;
- (long long)playingVoiceType;
- (_Bool)isPlayingVoiceMeeage;
- (void)playVoiceMessage;
- (void)stopVoiceMessage;
- (void)pauseVoiceMessage;
- (void)setVoiceMessageVolume:(double)arg1;
- (double)voiceMessageVolume;
- (long long)playVoiceMessageStream:(void *)arg1 andType:(int)arg2;
- (int)makeindex;
- (long long)playPath:(id)arg1 userData:(id)arg2;
@property(readonly, nonatomic) CDStruct_51d7d1dc voiceMessagePlayState;
- (id)init;

@end

