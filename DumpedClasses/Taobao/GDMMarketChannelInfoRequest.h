//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OMKMtopRequest.h"

@class NSArray, NSString, UIColor;

@interface GDMMarketChannelInfoRequest : OMKMtopRequest
{
    NSString *_channelId;
    NSString *_title;
    NSString *_subTitle;
    NSString *_userId;
    NSString *_userNick;
    NSString *_icon;
    NSArray *_channelArray;
    UIColor *_channelColor;
    NSString *_channelSpm;
    NSString *_moduleId;
}

@property(retain) NSString *moduleId; // @synthesize moduleId=_moduleId;
@property(retain) NSString *channelSpm; // @synthesize channelSpm=_channelSpm;
@property(retain) UIColor *channelColor; // @synthesize channelColor=_channelColor;
@property(retain) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property(retain) NSString *icon; // @synthesize icon=_icon;
@property(retain) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)startLoadChannelId:(id)arg1 isPreview:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)methodName;
- (_Bool)procResultDataFromJson:(id)arg1;
- (unsigned long long)styleFromItem:(id)arg1 moduleId:(id)arg2;

@end

