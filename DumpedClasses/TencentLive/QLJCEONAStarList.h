//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEONAStarList : JceObjectV2
{
    BOOL jcev2_p_1_r_showFlag;
    int jcev2_p_4_o_uiStyle;
    NSArray *jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo;
    NSString *jcev2_p_2_o_dataKey;
    NSString *jcev2_p_3_o_reportParams;
    NSString *jcev2_p_5_o_reportKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_5_o_reportKey; // @synthesize jcev2_p_5_o_reportKey;
@property(nonatomic, getter=jce_uiStyle, setter=setJce_uiStyle:) int jcev2_p_4_o_uiStyle; // @synthesize jcev2_p_4_o_uiStyle;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_3_o_reportParams; // @synthesize jcev2_p_3_o_reportParams;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_2_o_dataKey; // @synthesize jcev2_p_2_o_dataKey;
@property(nonatomic, getter=jce_showFlag, setter=setJce_showFlag:) BOOL jcev2_p_1_r_showFlag; // @synthesize jcev2_p_1_r_showFlag;
@property(retain, nonatomic, getter=jce_starList, setter=setJce_starList:) NSArray *jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo;
- (void).cxx_destruct;
- (id)init;

@end

