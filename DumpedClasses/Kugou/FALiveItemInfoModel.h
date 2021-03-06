//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALiveItemInfoModel : FAModel
{
    _Bool _isMobileLive;
    NSString *_activityImg;
    NSString *_activityPic;
    long long _cityId;
    NSString *_cityName;
    NSString *_corner;
    NSString *_cornerImg;
    NSString *_imgPath;
    long long _isHasSubscribe;
    long long _isHifi;
    long long _isInterviewRoom;
    long long _isOriginal;
    long long _kugouId;
    long long _lastOnlineTime;
    long long _liveMode;
    long long _liveStatus;
    long long _status;
    NSString *_nickName;
    long long _rankValue;
    long long _richLevel;
    long long _roomId;
    NSString *_songName;
    long long _starLevel;
    long long _streamType;
    long long _userId;
    NSString *_userLogo;
    long long _viewerNum;
}

@property(nonatomic) long long viewerNum; // @synthesize viewerNum=_viewerNum;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) long long starLevel; // @synthesize starLevel=_starLevel;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(nonatomic) long long rankValue; // @synthesize rankValue=_rankValue;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isMobileLive; // @synthesize isMobileLive=_isMobileLive;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) long long lastOnlineTime; // @synthesize lastOnlineTime=_lastOnlineTime;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long isOriginal; // @synthesize isOriginal=_isOriginal;
@property(nonatomic) long long isInterviewRoom; // @synthesize isInterviewRoom=_isInterviewRoom;
@property(nonatomic) long long isHifi; // @synthesize isHifi=_isHifi;
@property(nonatomic) long long isHasSubscribe; // @synthesize isHasSubscribe=_isHasSubscribe;
@property(copy, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(copy, nonatomic) NSString *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(copy, nonatomic) NSString *corner; // @synthesize corner=_corner;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *activityPic; // @synthesize activityPic=_activityPic;
@property(copy, nonatomic) NSString *activityImg; // @synthesize activityImg=_activityImg;
- (void).cxx_destruct;

@end

