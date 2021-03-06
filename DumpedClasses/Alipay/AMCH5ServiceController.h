//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "H5ServiceDelegate.h"

@class H5Service, H5WebViewController, NSDictionary, NSString;

@interface AMCH5ServiceController : NSObject <H5ServiceDelegate>
{
    H5WebViewController *_webviewController;
    NSString *_appId;
    NSDictionary *_params;
    NSString *_urlString;
    H5Service *_h5Service;
}

@property(retain, nonatomic) H5Service *h5Service; // @synthesize h5Service=_h5Service;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) H5WebViewController *webviewController; // @synthesize webviewController=_webviewController;
- (void).cxx_destruct;
- (void)openMcardSuccess;
- (void)getGPS:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)convertDictionaryToURLQueryString:(id)arg1;
- (_Bool)serviceEventDidComeWithController:(id)arg1 event:(int)arg2;
- (id)createUrl:(id)arg1 params:(id)arg2;
- (void)registerHandler;
- (id)initWithUrlString:(id)arg1;
- (id)initWithUrlString:(id)arg1 appId:(id)arg2 defaultTitle:(id)arg3 params:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

