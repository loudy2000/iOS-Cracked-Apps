//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXQRCodeECB : NSObject
{
    int _count;
    int _dataCodewords;
}

+ (id)ecbWithCount:(int)arg1 dataCodewords:(int)arg2;
@property(readonly, nonatomic) int dataCodewords; // @synthesize dataCodewords=_dataCodewords;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
- (id)initWithCount:(int)arg1 dataCodewords:(int)arg2;

@end

