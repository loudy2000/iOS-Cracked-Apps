//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSArray, NSString, UIImage;

@interface Barcode : NSObject <UIWebViewDelegate>
{
    NSArray *encoding;
    NSArray *first;
    NSArray *code128Encoding;
    UIImage *_oneDimBarcode;
    UIImage *_qRBarcode;
    NSString *_oneDimCode;
}

@property(copy, nonatomic) NSString *oneDimCode; // @synthesize oneDimCode=_oneDimCode;
@property(retain, nonatomic) UIImage *qRBarcode; // @synthesize qRBarcode=_qRBarcode;
@property(retain, nonatomic) UIImage *oneDimBarcode; // @synthesize oneDimBarcode=_oneDimBarcode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)digitToBmpRenderer:(id)arg1;
- (id)addQuietZone:(id)arg1;
- (id)compute:(id)arg1 withType:(int)arg2;
- (id)getDigit128:(id)arg1;
- (id)getDigit:(id)arg1 withType:(int)arg2;
- (int)charToInt:(BOOL)arg1;
- (void)setupQRCode:(id)arg1;
- (id)genMarginImage:(id)arg1 margin:(long long)arg2;
- (id)scaleQrImgFromData:(char *)arg1 sWidth:(int)arg2 targetWidth:(int)arg3 marginSize:(int)arg4;
- (void)setupBlueQRCode:(id)arg1 size:(unsigned int)arg2 level:(long long)arg3;
- (void)genResizeQRCode:(id)arg1 level:(long long)arg2 width:(int)arg3;
- (void)genQRCodeWithData:(id)arg1 level:(long long)arg2 width:(int)arg3;
- (void)setupQRCode:(id)arg1 level:(long long)arg2;
- (void)setupOneDimBarcode:(id)arg1 type:(int)arg2;
- (void)setupBarcodes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

