//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACDSTQueryOption.h"

@class NSString;

@interface ACDSTQueryOpOrderbyItem : ACDSTQueryOption
{
    NSString *_key;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)toJson:(id)arg1;
- (id)toString;

@end

