//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CStockData, NSMutableDictionary, NSString;

@interface CSGStockDataParam : NSObject
{
    _Bool _hasHistoryData;
    _Bool _isContainerComment;
    float _pointMaxShownScale;
    float _pointExtractRate;
    CStockData *_stockData;
    NSString *_stockCode;
    NSString *_stockType;
    unsigned long long _lineType;
    NSMutableDictionary *_envParams;
    unsigned long long _convertMode;
    unsigned long long _colorMode;
    unsigned long long _skinMode;
    unsigned long long _indicatorType;
    long long _pointStartIndex;
    unsigned long long _loadingStatus;
    NSMutableDictionary *_converterParams;
    struct CGRect _inFrame;
}

+ (id)_stockDataGetKlineData:(id)arg1;
+ (_Bool)_stockDataIsKlineData:(id)arg1;
+ (_Bool)_stockDataIsIndicatorData:(id)arg1;
+ (_Bool)isJJType:(unsigned long long)arg1;
+ (_Bool)isUSType:(unsigned long long)arg1;
+ (_Bool)isHKType:(unsigned long long)arg1;
+ (_Bool)isHSType:(unsigned long long)arg1;
+ (_Bool)isKlineMonthDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isKlineWeekDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isKlineDayDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isJijinHuobiDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isJijinGuzhiDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isJijinJingzhiDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isKlineDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)is5DayDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (_Bool)isMinuteDataWithLineType:(unsigned long long)arg1 stockData:(id)arg2;
+ (id)sgStockDataParam;
@property(nonatomic) _Bool isContainerComment; // @synthesize isContainerComment=_isContainerComment;
@property(retain, nonatomic) NSMutableDictionary *converterParams; // @synthesize converterParams=_converterParams;
@property(nonatomic) unsigned long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) _Bool hasHistoryData; // @synthesize hasHistoryData=_hasHistoryData;
@property(nonatomic) float pointExtractRate; // @synthesize pointExtractRate=_pointExtractRate;
@property(nonatomic) float pointMaxShownScale; // @synthesize pointMaxShownScale=_pointMaxShownScale;
@property(nonatomic) long long pointStartIndex; // @synthesize pointStartIndex=_pointStartIndex;
@property(nonatomic) unsigned long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(nonatomic) unsigned long long skinMode; // @synthesize skinMode=_skinMode;
@property(nonatomic) unsigned long long colorMode; // @synthesize colorMode=_colorMode;
@property(nonatomic) unsigned long long convertMode; // @synthesize convertMode=_convertMode;
@property(nonatomic) struct CGRect inFrame; // @synthesize inFrame=_inFrame;
@property(retain, nonatomic) NSMutableDictionary *envParams; // @synthesize envParams=_envParams;
@property(nonatomic) unsigned long long lineType; // @synthesize lineType=_lineType;
@property(copy, nonatomic) NSString *stockType; // @synthesize stockType=_stockType;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(retain, nonatomic) CStockData *stockData; // @synthesize stockData=_stockData;
- (void)dealloc;
- (id)getIndicatorSARAtIndex:(long long)arg1;
- (id)getIndicatorRSIAtIndex:(long long)arg1;
- (id)getIndicatorOBVAtIndex:(long long)arg1;
- (id)getIndicatorKDJAtIndex:(long long)arg1;
- (id)getIndicatorBOLLAtIndex:(long long)arg1;
- (id)getIndicatorWRAtIndex:(long long)arg1;
- (id)getIndicatorDMIAtIndex:(long long)arg1;
- (id)getIndicatorMACDAtIndex:(long long)arg1;
- (id)getIndicatorSARData;
- (id)getIndicatorRSIData;
- (id)getIndicatorOBVData;
- (id)getIndicatorKDJData;
- (id)getIndicatorBOLLData;
- (id)getIndicatorWRData;
- (id)getIndicatorDMIData;
- (id)getIndicatorMACDData;
- (id)getIndicatorData:(unsigned long long)arg1;
- (CDStruct_1ed7117a)getFirstItemDate;
- (void)mergeStockData:(id)arg1;
- (void)updateStockDataStatus;
- (void)klineIndicatorMerge;
- (long long)mergeWithStockData:(id)arg1 inputItems:(id)arg2 currItems:(id)arg3 compare:(CDUnknownBlockType)arg4;
- (id)getVolumeUnitStr:(CDStruct_2b56ed6f)arg1;
- (id)getVolumeNumberStr:(CDStruct_2b56ed6f)arg1;
- (unsigned long long)getVolumeUnit2;
- (unsigned long long)getVolumeUnit1;
- (long long)getIndexWithExtractedIndex:(long long)arg1;
- (long long)getExtractedCountWithPointCount:(long long)arg1;
- (long long)getCurrentShownPointsCount:(long long)arg1 dataPointsCount:(long long)arg2;
- (long long)getMinuteDataShownPointsCount;
- (long long)getKlineDataShownPointsCount;
- (long long)getCurrentDataMaxShownPointCount;
- (long long)getJijinHuobiDataMaxShownPointsCount;
- (long long)getJijinGuzhiDataMaxShownPointsCount;
- (long long)getJijinJingzhiDataMaxShownPointsCount;
- (long long)getMinuteDataMaxShownPointsCount;
- (long long)get5DayDataMaxShownPointsCount;
- (long long)get5DayOneDayDataMaxShownPointsCount;
- (long long)getKlineDataMaxShownPointsCount;
- (long long)getCurrentDataPointsCount;
- (unsigned long long)getJijinHuobiDatasCount;
- (unsigned long long)getJijinGuzhiDatasCount;
- (unsigned long long)getJijinJingzhiDatasCount;
- (unsigned long long)getMinuteDatasCount;
- (unsigned long long)get5DayDatasCount;
- (unsigned long long)getKlineDatasCount;
- (id)getMinuteLineAtIndex:(long long)arg1;
- (id)get5DayLineAtIndex:(long long)arg1;
- (id)getKlineItemAtIndex:(long long)arg1;
- (long long)getAbsoluteIndex:(long long)arg1;
- (id)getMinuteData;
- (id)get5DayData;
- (id)getKlineData;
- (_Bool)isZSType;
- (unsigned long long)getQuotMode;
- (_Bool)isJJType;
- (_Bool)isUSType;
- (_Bool)isHKType;
- (_Bool)isHSType;
- (_Bool)isKlineDayData;
- (_Bool)isJijinHuobiData;
- (_Bool)isJijinGuzhiData;
- (_Bool)isJijinJingzhiData;
- (_Bool)isKlineData;
- (_Bool)is5DayData;
- (_Bool)isMinuteData;
- (id)description;
- (id)init;

@end

