//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPrivateMessage.h"

@class NSMutableDictionary, NSString, UIImage;

@interface NMLocalPrivateMessage : NMPrivateMessage
{
    NSString *_localID;
    UIImage *_thumbImage;
    NSString *_localThumbImageName;
    NSString *_localImageName;
    NSString *_localMessage;
    NSMutableDictionary *_additionalDic;
}

+ (id)thumbImagePathForImageFilePath:(id)arg1;
+ (id)generateLocalMessageID;
@property(retain, nonatomic) NSMutableDictionary *additionalDic; // @synthesize additionalDic=_additionalDic;
@property(retain, nonatomic) NSString *localMessage; // @synthesize localMessage=_localMessage;
@property(retain, nonatomic) NSString *localImageName; // @synthesize localImageName=_localImageName;
@property(readonly, nonatomic) NSString *localThumbImageName; // @synthesize localThumbImageName=_localThumbImageName;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localImageNameDisplayInCell;
- (void)parseMessageBody:(id)arg1 messageType:(unsigned long long)arg2;
- (id)initWithLocalMessageId:(id)arg1 time:(long long)arg2 type:(unsigned long long)arg3 localMessage:(id)arg4 fromUserId:(id)arg5 toUserId:(id)arg6 additionalDic:(id)arg7;
- (id)initWithLocalMessageId:(id)arg1;

@end

