//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction, QLJCEBatchData, QLJCELoadingConfig, QLJCEPoster;

@interface QLJCEVideoDataList : JceObjectV2
{
    _Bool jcev2_p_2_o_isAllData;
    int jcev2_p_3_o_uiType;
    int jcev2_p_5_o_downloadCopyRight;
    int jcev2_p_9_o_priority;
    int jcev2_p_11_o_cacheItemsCount;
    int jcev2_p_16_o_hasPreDownload;
    int jcev2_p_19_o_extraInfoFlag;
    NSArray *jcev2_p_0_r_videoList__b0x9i_VOQLJCEVideoItemData;
    NSString *jcev2_p_1_o_pageContext;
    NSString *jcev2_p_4_o_belongKey;
    NSString *jcev2_p_6_o_cacheDataKey;
    NSString *jcev2_p_7_o_moduleTitle;
    QLJCEBatchData *jcev2_p_8_o_batchData;
    NSString *jcev2_p_10_o_dataType;
    NSString *jcev2_p_12_o_nextVideoKey;
    QLJCEAction *jcev2_p_13_o_nextAction;
    QLJCEPoster *jcev2_p_14_o_nextTipsPoster;
    NSString *jcev2_p_15_o_nextCoverKey;
    QLJCELoadingConfig *jcev2_p_17_o_loadingConfig;
    NSString *jcev2_p_18_o_updateDetail;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_extraInfoFlag, setter=setJce_extraInfoFlag:) int jcev2_p_19_o_extraInfoFlag; // @synthesize jcev2_p_19_o_extraInfoFlag;
@property(retain, nonatomic, getter=jce_updateDetail, setter=setJce_updateDetail:) NSString *jcev2_p_18_o_updateDetail; // @synthesize jcev2_p_18_o_updateDetail;
@property(retain, nonatomic, getter=jce_loadingConfig, setter=setJce_loadingConfig:) QLJCELoadingConfig *jcev2_p_17_o_loadingConfig; // @synthesize jcev2_p_17_o_loadingConfig;
@property(nonatomic, getter=jce_hasPreDownload, setter=setJce_hasPreDownload:) int jcev2_p_16_o_hasPreDownload; // @synthesize jcev2_p_16_o_hasPreDownload;
@property(retain, nonatomic, getter=jce_nextCoverKey, setter=setJce_nextCoverKey:) NSString *jcev2_p_15_o_nextCoverKey; // @synthesize jcev2_p_15_o_nextCoverKey;
@property(retain, nonatomic, getter=jce_nextTipsPoster, setter=setJce_nextTipsPoster:) QLJCEPoster *jcev2_p_14_o_nextTipsPoster; // @synthesize jcev2_p_14_o_nextTipsPoster;
@property(retain, nonatomic, getter=jce_nextAction, setter=setJce_nextAction:) QLJCEAction *jcev2_p_13_o_nextAction; // @synthesize jcev2_p_13_o_nextAction;
@property(retain, nonatomic, getter=jce_nextVideoKey, setter=setJce_nextVideoKey:) NSString *jcev2_p_12_o_nextVideoKey; // @synthesize jcev2_p_12_o_nextVideoKey;
@property(nonatomic, getter=jce_cacheItemsCount, setter=setJce_cacheItemsCount:) int jcev2_p_11_o_cacheItemsCount; // @synthesize jcev2_p_11_o_cacheItemsCount;
@property(retain, nonatomic, getter=jce_dataType, setter=setJce_dataType:) NSString *jcev2_p_10_o_dataType; // @synthesize jcev2_p_10_o_dataType;
@property(nonatomic, getter=jce_priority, setter=setJce_priority:) int jcev2_p_9_o_priority; // @synthesize jcev2_p_9_o_priority;
@property(retain, nonatomic, getter=jce_batchData, setter=setJce_batchData:) QLJCEBatchData *jcev2_p_8_o_batchData; // @synthesize jcev2_p_8_o_batchData;
@property(retain, nonatomic, getter=jce_moduleTitle, setter=setJce_moduleTitle:) NSString *jcev2_p_7_o_moduleTitle; // @synthesize jcev2_p_7_o_moduleTitle;
@property(retain, nonatomic, getter=jce_cacheDataKey, setter=setJce_cacheDataKey:) NSString *jcev2_p_6_o_cacheDataKey; // @synthesize jcev2_p_6_o_cacheDataKey;
@property(nonatomic, getter=jce_downloadCopyRight, setter=setJce_downloadCopyRight:) int jcev2_p_5_o_downloadCopyRight; // @synthesize jcev2_p_5_o_downloadCopyRight;
@property(retain, nonatomic, getter=jce_belongKey, setter=setJce_belongKey:) NSString *jcev2_p_4_o_belongKey; // @synthesize jcev2_p_4_o_belongKey;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) int jcev2_p_3_o_uiType; // @synthesize jcev2_p_3_o_uiType;
@property(nonatomic, getter=jce_isAllData, setter=setJce_isAllData:) _Bool jcev2_p_2_o_isAllData; // @synthesize jcev2_p_2_o_isAllData;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(retain, nonatomic, getter=jce_videoList, setter=setJce_videoList:) NSArray *jcev2_p_0_r_videoList__b0x9i_VOQLJCEVideoItemData; // @synthesize jcev2_p_0_r_videoList__b0x9i_VOQLJCEVideoItemData;
- (void).cxx_destruct;
- (id)init;

@end

