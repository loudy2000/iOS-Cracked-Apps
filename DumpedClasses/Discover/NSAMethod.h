//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSAMethod : NSObject
{
    struct objc_method *_method;
}

+ (id)methodWithMethod:(struct objc_method *)arg1;
@property(readonly, nonatomic) struct objc_method *method; // @synthesize method=_method;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMethod:(id)arg1;
- (unsigned long long)hash;
- (void)exchangeImplementationWith:(id)arg1;
@property(readonly, nonatomic) NSString *typeEncoding;
@property(nonatomic) CDUnknownFunctionPointerType implementation;
- (id)initWithMethod:(struct objc_method *)arg1;

@end

