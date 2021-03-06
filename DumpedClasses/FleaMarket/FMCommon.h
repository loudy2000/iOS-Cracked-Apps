//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMCommon : NSObject
{
}

+ (id)dictionaryFromQuery:(id)arg1;
+ (void)dispatch_after:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
+ (void)voiceInputAvailable:(CDUnknownBlockType)arg1 showFailAlert:(_Bool)arg2;
+ (id)appendUrl:(id)arg1;
+ (_Bool)isReachableViaWiFi;
+ (float)textLength:(id)arg1;
+ (id)getEmojiToImageDict;
+ (id)getEmojiBigImageName:(id)arg1;
+ (_Bool)stringContainsEmoji:(id)arg1;
+ (id)repaceEmojiWithImagePath:(id)arg1 withFont:(id)arg2;
+ (id)quickRepaceEmojiWithImagePath:(id)arg1 withFont:(id)arg2 isHtml:(_Bool *)arg3;
+ (id)emojiReg;
+ (_Bool)isDigest:(id)arg1;
+ (_Bool)isPrice:(id)arg1;
+ (_Bool)dismissAllKeyBoardInView:(id)arg1;
+ (void)hideKeyboard;
+ (id)rootView;
+ (id)keyWindow;
+ (_Bool)cameraAuthorizationEnabled;
+ (_Bool)checkCameraAuthorization;
+ (void)hideProcess;
+ (void)showProcess:(id)arg1;
+ (void)alert:(id)arg1 message:(id)arg2;
+ (id)seperaterDateString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1;
+ (id)stringWithDate:(id)arg1;
+ (id)nowDateTimeString;
+ (double)postTimeSinceNow:(id)arg1;
+ (id)getDateFormatter;
+ (id)postTimeDateFormatter;
+ (long long)relativeDay:(id)arg1 serverTime:(id)arg2;
+ (id)relativeTime:(id)arg1 serverTime:(id)arg2;
+ (long long)relativeDays:(id)arg1;
+ (id)relativeTime:(id)arg1;
+ (id)descriptionWithTime:(double)arg1;
+ (id)descriptionTimeWithTime:(double)arg1;
+ (id)chineseWeekDay:(long long)arg1;
+ (id)descWithTimeSince1970:(double)arg1 abbreviation:(_Bool)arg2;
+ (id)descWithTimeSince1970:(double)arg1;
+ (id)descriptionWithTimeSince1970:(double)arg1;
+ (id)locationStringbyProvince:(id)arg1 city:(id)arg2 area:(id)arg3 bySeperatedString:(id)arg4;

@end

