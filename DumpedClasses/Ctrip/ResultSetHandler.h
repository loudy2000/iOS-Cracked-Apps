//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ResultSetHandler : NSObject
{
}

- (id)handleRow:(struct sqlite3_stmt *)arg1 dbmodelClass:(Class)arg2 classInfo:(id)arg3;
- (id)handleFromStatement:(struct sqlite3_stmt *)arg1 classType:(Class)arg2 classInfo:(id)arg3;

@end

