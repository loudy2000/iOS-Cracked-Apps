//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTSEditDistance : NSObject
{
}

+ (_Bool)isYmApproximate:(id)arg1 compare:(id)arg2;
+ (_Bool)isSmApproximate:(id)arg1 compare:(id)arg2;
+ (id)findym:(id)arg1 index:(unsigned long long)arg2 outStr:(id *)arg3;
+ (id)findsm:(id)arg1 outStr:(id *)arg2;
+ (id)trimSpell:(id)arg1;
+ (int)ftsSmYmEditDistance:(id)arg1 dest:(id)arg2;
+ (int)ftsEditDistance:(id)arg1 dest:(id)arg2;

@end

