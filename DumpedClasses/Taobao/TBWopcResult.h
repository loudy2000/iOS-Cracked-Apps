//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBWopcError;

@interface TBWopcResult : NSObject
{
    _Bool _isWindvane;
    NSString *_code;
    id _responseData;
    TBWopcError *_responseError;
}

@property(nonatomic) _Bool isWindvane; // @synthesize isWindvane=_isWindvane;
@property(retain, nonatomic) TBWopcError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) id responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

