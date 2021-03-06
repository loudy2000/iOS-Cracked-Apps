//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface O2OHelper : NSObject
{
}

+ (id)safetyConfigServiceValue:(id)arg1;
+ (id)o2oIndexViewController;
+ (_Bool)tabIsIntl;
+ (id)parseCityAndManual:(_Bool *)arg1 fromOptions:(id)arg2;
+ (void)changeTabToIntl:(_Bool)arg1 cityInfo:(id)arg2 isManual:(_Bool)arg3 fromPipeline:(_Bool)arg4;
+ (id)colorFromRGBColor:(id)arg1;
+ (void)downloadImages:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 contentMode:(long long)arg4 completion:(CDUnknownBlockType)arg5 simpleCompletion:(CDUnknownBlockType)arg6;
+ (_Bool)hasCacheWithUrl:(id)arg1 req:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (unsigned long long)imageQualityByNetwork;
+ (void)downloadImageWithRequest:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 contentMode:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)downloadImage:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)o2o_asyncLoadImageCache:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 contentMode:(long long)arg4;
+ (_Bool)isImageExists:(id)arg1 size:(struct CGSize)arg2;
+ (id)gifImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)colorFromHexString:(id)arg1;
+ (unsigned int)intFromHexString:(id)arg1;
+ (id)appVersion;
+ (id)seplineWithWidth:(double)arg1 height:(double)arg2 color:(id)arg3;
+ (id)URLEncodedString:(id)arg1;
+ (id)simpleTagLabel:(struct CGRect)arg1 f:(int)arg2 tc:(id)arg3 t:(id)arg4;
+ (id)simpleLabel:(struct CGRect)arg1 bf:(int)arg2 tc:(id)arg3 t:(id)arg4;
+ (id)simpleLabel:(struct CGRect)arg1 f:(int)arg2 tc:(id)arg3 t:(id)arg4;
+ (id)parseSchemePre:(id)arg1;
+ (_Bool)isO2ONativeURL:(id)arg1;
+ (_Bool)isNativeURL:(id)arg1;
+ (_Bool)isH5URL:(id)arg1;
+ (_Bool)containsCJK:(id)arg1;
+ (void)tryOpen:(id)arg1;
+ (void)openH5Url:(id)arg1 extParameter:(id)arg2;
+ (void)openNativeUrl:(id)arg1;
+ (void)openUrl:(id)arg1 withH5ExtParameter:(id)arg2;
+ (id)convertUrl:(id)arg1 withAppId:(id)arg2;
+ (void)openUrl:(id)arg1;
+ (double)estimateHeight:(id)arg1 font:(id)arg2 lineSpace:(double)arg3 width:(double)arg4;
+ (struct CGSize)estimateSize:(id)arg1 withFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
+ (_Bool)validateTemplate:(id)arg1;
+ (id)bundleResource:(id)arg1;
+ (_Bool)isValidString:(id)arg1;
+ (id)avaliableLocalMaps;
+ (id)dateFromString:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (double)findFitFontSizeForText:(id)arg1 constraintToWidth:(double)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4;
+ (_Bool)updateRPCHeader:(id)arg1;
+ (id)headerParamsForPagets:(id)arg1;
+ (id)appendingParamDic2UrlString:(id)arg1 params:(id)arg2;
+ (id)coverParamDic2UrlString:(id)arg1 params:(id)arg2;
+ (id)coverUrlString2ParamDic:(id)arg1;
+ (void)removeSrcSpmRecordWithVC:(id)arg1;
+ (id)getSrcSpmClickedSpmInfoWithVC:(id)arg1;
+ (void)updateSrcSpmClickedSpm:(id)arg1 vc:(id)arg2;
+ (id)lastSrcSpmClickedSpmId;
+ (void)writeMergerExposureLogWithSpmId:(id)arg1 position:(id)arg2 extParams:(id)arg3 view:(id)arg4;
+ (void)writeMergerExposureLogWithSpmId:(id)arg1 rid:(id)arg2 position:(id)arg3 extParams:(id)arg4 view:(id)arg5;
+ (void)O2OStartApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3 viewController:(id)arg4;
+ (void)initMonitorSwitch;
+ (void)o2oMtbizReportWithBizName:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 page:(id)arg4 reasonCode:(id)arg5 reasonMsg:(id)arg6 params:(id)arg7;
+ (void)spliteSchemaOptions:(id)arg1 viewController:(id)arg2;
+ (void)resetPageMonitorContext;
+ (id)pageIdForIndex:(id)arg1;
+ (id)chInfoForViewController:(id)arg1;
+ (void)logPageEndWithSpmId:(id)arg1 view:(id)arg2 bizType:(id)arg3 param:(id)arg4;
+ (void)logPageEndWithSpmId:(id)arg1 view:(id)arg2 param:(id)arg3;
+ (void)logPageStartWithSpmId:(id)arg1 view:(id)arg2;
+ (void)writeExposureLogWithSeed:(id)arg1 extParams4:(id)arg2 view:(id)arg3;
+ (void)writeSlideLogWithSeed:(id)arg1 extParams4:(id)arg2 view:(id)arg3;
+ (void)writeClickedLogWithSeed:(id)arg1 extParams4:(id)arg2 view:(id)arg3;
+ (void)writeExposureLogWithSeed:(id)arg1 extParams:(id)arg2 view:(id)arg3;
+ (void)writeSlideLogWithSeed:(id)arg1 extParams:(id)arg2 view:(id)arg3;
+ (void)writeClickedLogWithSeed:(id)arg1 extParams:(id)arg2 view:(id)arg3;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3 view:(id)arg4;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5 bizType:(id)arg6 view:(id)arg7;
+ (void)writeSCMLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
+ (void)writePerformanceLogWithSubType:(id)arg1 extraParams:(id)arg2;
+ (id)addParams2Dict:(id)arg1;
+ (id)addParams2Extra:(id)arg1;
+ (id)queryStringFromDic:(id)arg1 encode:(_Bool)arg2;
+ (id)queryDicFromString:(id)arg1 decode:(_Bool)arg2;
+ (id)queryStringFromUrl:(id)arg1;
+ (id)urlComponentsFromString:(id)arg1;
+ (id)extractQueryFromUrl:(id)arg1;
+ (id)encodeValue:(id)arg1;
+ (id)appendQueries:(id)arg1 toUrl:(id)arg2 force:(_Bool)arg3;

@end

