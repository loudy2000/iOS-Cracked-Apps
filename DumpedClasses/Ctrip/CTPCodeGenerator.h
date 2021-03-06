//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTPCodeGeneratorProtocol.h"

@class NSString, UIColor;

@interface CTPCodeGenerator : NSObject <CTPCodeGeneratorProtocol>
{
    UIColor *_strokeColor;
    UIColor *_fillColor;
}

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (id)genCodeWithMachineReadableCodeObject:(id)arg1;
- (id)genCodeWithContents:(id)arg1 machineReadableCodeObjectType:(id)arg2;
- (id)drawCompleteBarcode:(id)arg1;
- (id)completeBarcode:(id)arg1;
- (id)barcode:(id)arg1;
- (id)terminator;
- (id)initiator;
- (_Bool)isContentsValid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

