//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQReuseInterceptor : NSObject
{
    _Bool _isInterceptor;
    id _dispatchTarget;
}

@property(readonly, nonatomic) _Bool isInterceptor; // @synthesize isInterceptor=_isInterceptor;
@property(retain, nonatomic) id dispatchTarget; // @synthesize dispatchTarget=_dispatchTarget;
- (void).cxx_destruct;
- (id)description;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (Class)superclass;
- (Class)class;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)copy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithDelegate:(id)arg1;

@end
