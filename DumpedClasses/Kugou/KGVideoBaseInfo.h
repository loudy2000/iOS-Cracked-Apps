//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSNumber, NSString;

@interface KGVideoBaseInfo : KugouObject
{
    NSNumber *_videoId;
    NSString *_provider;
    NSString *_videoName;
    NSNumber *_videoDuration;
    NSString *_videoHash;
    NSString *_desc;
    NSString *_imageUrl;
    NSString *_mvSDHash;
    NSNumber *_mvSDFileSize;
    NSString *_mvHDHash;
    NSNumber *_mvHDFileSize;
    NSString *_mvSQHash;
    NSNumber *_mvSQFileSize;
    NSString *_mvBDHash;
    NSNumber *_mvBDFileSize;
    unsigned long long _videoType;
}

@property(nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSNumber *mvBDFileSize; // @synthesize mvBDFileSize=_mvBDFileSize;
@property(copy, nonatomic) NSString *mvBDHash; // @synthesize mvBDHash=_mvBDHash;
@property(retain, nonatomic) NSNumber *mvSQFileSize; // @synthesize mvSQFileSize=_mvSQFileSize;
@property(copy, nonatomic) NSString *mvSQHash; // @synthesize mvSQHash=_mvSQHash;
@property(retain, nonatomic) NSNumber *mvHDFileSize; // @synthesize mvHDFileSize=_mvHDFileSize;
@property(copy, nonatomic) NSString *mvHDHash; // @synthesize mvHDHash=_mvHDHash;
@property(retain, nonatomic) NSNumber *mvSDFileSize; // @synthesize mvSDFileSize=_mvSDFileSize;
@property(copy, nonatomic) NSString *mvSDHash; // @synthesize mvSDHash=_mvSDHash;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *videoHash; // @synthesize videoHash=_videoHash;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)changeToMVList;
- (id)generateLocalBaseInfo;

@end

