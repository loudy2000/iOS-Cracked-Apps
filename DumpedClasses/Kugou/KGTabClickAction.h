//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KGTabClickAction : UserActionRecord
{
    int _userActionID;
    unsigned long long _errorCode;
    NSString *_functionName;
    NSString *_fromSource;
    NSString *_kw;
    NSString *_ivar1;
}

@property(nonatomic) int userActionID; // @synthesize userActionID=_userActionID;
@property(copy, nonatomic) NSString *ivar1; // @synthesize ivar1=_ivar1;
@property(copy, nonatomic) NSString *kw; // @synthesize kw=_kw;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
- (void)dealloc;
- (void)coding;

@end

