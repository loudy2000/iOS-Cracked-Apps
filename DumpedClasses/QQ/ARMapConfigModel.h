//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class ARMapCheatAppModel, ARMapMapConfigModel, ARMapRightConfigModel, ARMapSKinTreeConfigModel, ARMapSkinConfigModel, ARMapSkinSkyConfigModel, ARMapWealthGodConfigModel, NSArray, NSDictionary, NSString;

@interface ARMapConfigModel : QQModel
{
    int _configVersion;
    ARMapMapConfigModel *_mapConfig;
    ARMapRightConfigModel *_rightConfig;
    ARMapSkinConfigModel *_skinConfig;
    NSArray *_poiConfigs;
    ARMapSkinSkyConfigModel *_skyConfig;
    ARMapSKinTreeConfigModel *_treeConfig;
    NSDictionary *_commonResConfigs;
    ARMapWealthGodConfigModel *_wealthGodConfig;
    ARMapCheatAppModel *_cheatAppConfig;
    NSDictionary *_wordings;
    NSString *_shopScanTips;
}

@property(copy, nonatomic) NSString *shopScanTips; // @synthesize shopScanTips=_shopScanTips;
@property(retain, nonatomic) NSDictionary *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) ARMapCheatAppModel *cheatAppConfig; // @synthesize cheatAppConfig=_cheatAppConfig;
@property(retain, nonatomic) ARMapWealthGodConfigModel *wealthGodConfig; // @synthesize wealthGodConfig=_wealthGodConfig;
@property(copy, nonatomic) NSDictionary *commonResConfigs; // @synthesize commonResConfigs=_commonResConfigs;
@property(retain, nonatomic) ARMapSKinTreeConfigModel *treeConfig; // @synthesize treeConfig=_treeConfig;
@property(retain, nonatomic) ARMapSkinSkyConfigModel *skyConfig; // @synthesize skyConfig=_skyConfig;
@property(copy, nonatomic) NSArray *poiConfigs; // @synthesize poiConfigs=_poiConfigs;
@property(retain, nonatomic) ARMapSkinConfigModel *skinConfig; // @synthesize skinConfig=_skinConfig;
@property(retain, nonatomic) ARMapRightConfigModel *rightConfig; // @synthesize rightConfig=_rightConfig;
@property(retain, nonatomic) ARMapMapConfigModel *mapConfig; // @synthesize mapConfig=_mapConfig;
@property(nonatomic) int configVersion; // @synthesize configVersion=_configVersion;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

