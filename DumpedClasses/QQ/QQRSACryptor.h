//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQRSACryptor : NSObject
{
}

+ (id)publicKeyIdentifierWithTag:(id)arg1;
+ (id)publicKeyIdentifier;
+ (id)PKCS1PublicFooter;
+ (id)PKCS1PublicHeader;
+ (id)X509PublicFooter;
+ (id)X509PublicHeader;
+ (id)keyQueryDictionary:(id)arg1;
+ (struct __SecKey *)keyRefWithTag:(id)arg1;
+ (void)removeKey:(id)arg1;
+ (id)strippedPublicKey:(id)arg1;
+ (void)setPublicKey:(id)arg1 tag:(id)arg2;
+ (int)verify:(id)arg1 key:(id)arg2 sig:(id)arg3;
+ (id)getHashBytes:(id)arg1;
+ (id)hashValueForFile:(id)arg1;

@end
