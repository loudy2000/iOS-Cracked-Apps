//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMClientInformation_PixelDensity, GMSx_GMMIosAppFingerprintProto, GMSx_GMMShortbreadTokenProto, GMSx_PBMutableArray, NSString;

@interface GMSx_GMMClientPropertiesRequestProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *androidApiToken; // @dynamic androidApiToken;
@property(retain, nonatomic) NSString *androidLoggingId2; // @dynamic androidLoggingId2;
@property(retain, nonatomic) NSString *androidMapKey; // @dynamic androidMapKey;
@property(retain, nonatomic) NSString *androidSignature; // @dynamic androidSignature;
@property(nonatomic) _Bool androidTablet; // @dynamic androidTablet;
@property(retain, nonatomic) NSString *apiApplicationVersion; // @dynamic apiApplicationVersion;
@property(nonatomic) int apiPlayServicesApkVersion; // @dynamic apiPlayServicesApkVersion;
@property(nonatomic) int apiPlayServicesSdkVersion; // @dynamic apiPlayServicesSdkVersion;
@property(retain, nonatomic) NSString *applicationName; // @dynamic applicationName;
@property(retain, nonatomic) NSString *basedOnGmmVersion; // @dynamic basedOnGmmVersion;
@property(nonatomic) _Bool brotliEnabled; // @dynamic brotliEnabled;
@property(nonatomic) _Bool chinaClient; // @dynamic chinaClient;
@property(retain, nonatomic) NSString *cohort; // @dynamic cohort;
@property(retain, nonatomic) NSString *currentCountryOverride; // @dynamic currentCountryOverride;
@property(nonatomic) _Bool dasherEnabled; // @dynamic dasherEnabled;
@property(nonatomic) _Bool dataCellularDevice; // @dynamic dataCellularDevice;
@property(nonatomic) _Bool debug; // @dynamic debug;
@property(retain, nonatomic) NSString *deviceLegalCountry; // @dynamic deviceLegalCountry;
@property(nonatomic) _Bool enterpriseApi; // @dynamic enterpriseApi;
@property(nonatomic) long long expectedDownThroughputBps; // @dynamic expectedDownThroughputBps;
@property(nonatomic) int expectedLatencyMicros; // @dynamic expectedLatencyMicros;
@property(nonatomic) long long expectedUpThroughputBps; // @dynamic expectedUpThroughputBps;
@property(retain, nonatomic) GMSx_PBMutableArray *experimentIdArray; // @dynamic experimentIdArray;
@property(retain, nonatomic) NSString *gaiaAuthToken; // @dynamic gaiaAuthToken;
@property(retain, nonatomic) NSString *gasCookie; // @dynamic gasCookie;
@property(retain, nonatomic) NSString *gmmApiVersion; // @dynamic gmmApiVersion;
@property(nonatomic) _Bool gzipEnabled; // @dynamic gzipEnabled;
@property(nonatomic) _Bool hasAndroidApiToken; // @dynamic hasAndroidApiToken;
@property(nonatomic) _Bool hasAndroidLoggingId2; // @dynamic hasAndroidLoggingId2;
@property(nonatomic) _Bool hasAndroidMapKey; // @dynamic hasAndroidMapKey;
@property(nonatomic) _Bool hasAndroidSignature; // @dynamic hasAndroidSignature;
@property(nonatomic) _Bool hasAndroidTablet; // @dynamic hasAndroidTablet;
@property(nonatomic) _Bool hasApiApplicationVersion; // @dynamic hasApiApplicationVersion;
@property(nonatomic) _Bool hasApiPlayServicesApkVersion; // @dynamic hasApiPlayServicesApkVersion;
@property(nonatomic) _Bool hasApiPlayServicesSdkVersion; // @dynamic hasApiPlayServicesSdkVersion;
@property(nonatomic) _Bool hasApplicationName; // @dynamic hasApplicationName;
@property(nonatomic) _Bool hasBasedOnGmmVersion; // @dynamic hasBasedOnGmmVersion;
@property(nonatomic) _Bool hasBrotliEnabled; // @dynamic hasBrotliEnabled;
@property(nonatomic) _Bool hasChinaClient; // @dynamic hasChinaClient;
@property(nonatomic) _Bool hasCohort; // @dynamic hasCohort;
@property(nonatomic) _Bool hasCurrentCountryOverride; // @dynamic hasCurrentCountryOverride;
@property(nonatomic) _Bool hasDasherEnabled; // @dynamic hasDasherEnabled;
@property(nonatomic) _Bool hasDataCellularDevice; // @dynamic hasDataCellularDevice;
@property(nonatomic) _Bool hasDebug; // @dynamic hasDebug;
@property(nonatomic) _Bool hasDeviceLegalCountry; // @dynamic hasDeviceLegalCountry;
@property(nonatomic) _Bool hasEnterpriseApi; // @dynamic hasEnterpriseApi;
@property(nonatomic) _Bool hasExpectedDownThroughputBps; // @dynamic hasExpectedDownThroughputBps;
@property(nonatomic) _Bool hasExpectedLatencyMicros; // @dynamic hasExpectedLatencyMicros;
@property(nonatomic) _Bool hasExpectedUpThroughputBps; // @dynamic hasExpectedUpThroughputBps;
@property(nonatomic) _Bool hasExperimentIdArray; // @dynamic hasExperimentIdArray;
@property(nonatomic) _Bool hasGaiaAuthToken; // @dynamic hasGaiaAuthToken;
@property(nonatomic) _Bool hasGasCookie; // @dynamic hasGasCookie;
@property(nonatomic) _Bool hasGmmApiVersion; // @dynamic hasGmmApiVersion;
@property(nonatomic) _Bool hasGzipEnabled; // @dynamic hasGzipEnabled;
@property(nonatomic) _Bool hasHasLocationFix; // @dynamic hasHasLocationFix;
@property(nonatomic) _Bool hasIncludeMfeDebugInfo; // @dynamic hasIncludeMfeDebugInfo;
@property(nonatomic) _Bool hasIosApiAppFingerprint; // @dynamic hasIosApiAppFingerprint;
@property(nonatomic) _Bool hasIsFeatureTest; // @dynamic hasIsFeatureTest;
@property(nonatomic) _Bool hasLabIdArray; // @dynamic hasLabIdArray;
@property(nonatomic) _Bool hasLegalCountry; // @dynamic hasLegalCountry;
@property(nonatomic) _Bool hasLocationFix; // @dynamic hasLocationFix;
@property(nonatomic) _Bool hasMapTileCacheType; // @dynamic hasMapTileCacheType;
@property(nonatomic) _Bool hasMobileCountryCode; // @dynamic hasMobileCountryCode;
@property(nonatomic) _Bool hasNavigationUsage; // @dynamic hasNavigationUsage;
@property(nonatomic) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(nonatomic) _Bool hasPixelDensity; // @dynamic hasPixelDensity;
@property(nonatomic) _Bool hasScreenPixelDensity; // @dynamic hasScreenPixelDensity;
@property(nonatomic) _Bool hasShortbreadToken; // @dynamic hasShortbreadToken;
@property(nonatomic) _Bool hasShortbreadTokenEnabled; // @dynamic hasShortbreadTokenEnabled;
@property(nonatomic) _Bool hasSimCountryCode; // @dynamic hasSimCountryCode;
@property(nonatomic) _Bool hasVoiceCellularDevice; // @dynamic hasVoiceCellularDevice;
@property(nonatomic) _Bool hasVoiceSearchEnabled; // @dynamic hasVoiceSearchEnabled;
@property(nonatomic) _Bool hasZwiebackCookieEnabled; // @dynamic hasZwiebackCookieEnabled;
@property(nonatomic) _Bool hasZwiebackNidCookie; // @dynamic hasZwiebackNidCookie;
@property(nonatomic) _Bool includeMfeDebugInfo; // @dynamic includeMfeDebugInfo;
@property(retain, nonatomic) GMSx_GMMIosAppFingerprintProto *iosApiAppFingerprint; // @dynamic iosApiAppFingerprint;
@property(nonatomic) _Bool isFeatureTest; // @dynamic isFeatureTest;
@property(retain, nonatomic) GMSx_PBMutableArray *labIdArray; // @dynamic labIdArray;
@property(retain, nonatomic) NSString *legalCountry; // @dynamic legalCountry;
@property(nonatomic) int mapTileCacheType; // @dynamic mapTileCacheType;
@property(nonatomic) int mobileCountryCode; // @dynamic mobileCountryCode;
@property(nonatomic) int navigationUsage; // @dynamic navigationUsage;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(retain, nonatomic) GMSx_GMMClientInformation_PixelDensity *pixelDensity; // @dynamic pixelDensity;
@property(nonatomic) int screenPixelDensity; // @dynamic screenPixelDensity;
@property(retain, nonatomic) GMSx_GMMShortbreadTokenProto *shortbreadToken; // @dynamic shortbreadToken;
@property(nonatomic) _Bool shortbreadTokenEnabled; // @dynamic shortbreadTokenEnabled;
@property(retain, nonatomic) NSString *simCountryCode; // @dynamic simCountryCode;
@property(nonatomic) _Bool voiceCellularDevice; // @dynamic voiceCellularDevice;
@property(nonatomic) _Bool voiceSearchEnabled; // @dynamic voiceSearchEnabled;
@property(nonatomic) _Bool zwiebackCookieEnabled; // @dynamic zwiebackCookieEnabled;
@property(retain, nonatomic) NSString *zwiebackNidCookie; // @dynamic zwiebackNidCookie;

@end
