//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXStackVoipDialog : NSObject
{
    NSString *_dialogInfo;
    long long _msgid;
    NSString *_from;
    NSString *_to;
    double _msgTime;
}

@property(nonatomic) double msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) NSString *to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) long long msgid; // @synthesize msgid=_msgid;
@property(retain, nonatomic) NSString *dialogInfo; // @synthesize dialogInfo=_dialogInfo;
- (void).cxx_destruct;

@end

