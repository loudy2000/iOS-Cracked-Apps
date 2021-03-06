//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GTMUMSocialStringEncoding : NSObject
{
    NSData *charMapData_;
    char *charMap_;
    int reverseCharMap_[128];
    int shift_;
    int mask_;
    _Bool doPad_;
    BOOL paddingChar_;
    int padLen_;
}

+ (id)stringEncodingWithString:(id)arg1;
+ (id)rfc4648Base64WebsafeStringEncoding;
+ (id)rfc4648Base64StringEncoding;
+ (id)crockfordBase32StringEncoding;
+ (id)rfc4648Base32HexStringEncoding;
+ (id)rfc4648Base32StringEncoding;
+ (id)hexStringEncoding;
+ (id)binaryStringEncoding;
- (id)stringByDecoding:(id)arg1;
- (id)decode:(id)arg1;
- (id)encodeString:(id)arg1;
- (id)encode:(id)arg1;
- (void)setPaddingChar:(BOOL)arg1;
- (void)setDoPad:(_Bool)arg1;
- (_Bool)doPad;
- (void)ignoreCharacters:(id)arg1;
- (void)addDecodeSynonyms:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

