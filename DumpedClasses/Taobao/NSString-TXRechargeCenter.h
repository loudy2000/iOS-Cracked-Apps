//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TXRechargeCenter)
+ (id)tx_URLQueryDictionary:(id)arg1;
+ (id)tx_fiterPoint:(id)arg1;
+ (id)tx_realPayPrice:(id)arg1 promotion:(id)arg2;
+ (id)tx_attributedStringWithPhoneNum:(id)arg1 highlightRange:(id)arg2 highlightColor:(id)arg3 normalColor:(id)arg4 highlightFont:(id)arg5 normalFont:(id)arg6;
+ (struct _NSRange)tx_rangeOfSubStr:(id)arg1 inPhoneNumStr:(id)arg2 isFormatted:(_Bool)arg3;
+ (id)tx_rangesOfDifferenceBetween:(id)arg1 with:(id)arg2 isFormatted:(_Bool)arg3;
+ (id)tx_formatPhoneNumStr:(id)arg1;
- (_Bool)tx_isNotBlank;
- (_Bool)tx_isBlank;
- (id)tx_URLEncoding;
- (long long)tx_longLongValue;
- (long long)tx_longValue;
- (_Bool)tx_containsString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)tx_containsString:(id)arg1;
- (id)tx_trim;
@end

