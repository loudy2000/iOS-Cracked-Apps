//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQRegDevLockConfig : NSObject
{
    NSString *_enableVersion;
    _Bool _isEnable;
    _Bool _checkBoxDefStatus;
    NSString *_checkBoxWording;
    NSString *_checkBoxHighlightWording;
    NSString *_introductionTitle;
    NSString *_introductionURL;
}

@property(readonly, nonatomic) NSString *introductionURL; // @synthesize introductionURL=_introductionURL;
@property(readonly, nonatomic) NSString *introductionTitle; // @synthesize introductionTitle=_introductionTitle;
@property(readonly, nonatomic) NSString *checkBoxHighlightWording; // @synthesize checkBoxHighlightWording=_checkBoxHighlightWording;
@property(readonly, nonatomic) NSString *checkBoxWording; // @synthesize checkBoxWording=_checkBoxWording;
@property(readonly, nonatomic) _Bool checkBoxDefStatus; // @synthesize checkBoxDefStatus=_checkBoxDefStatus;
@property(readonly, nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
- (void).cxx_destruct;
- (_Bool)isVersionMatching;
- (_Bool)parseRegDevLockConfig:(id)arg1;
- (id)initWithData:(id)arg1;

@end

