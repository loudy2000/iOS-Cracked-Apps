//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MirrorMaterialManager.h"

#import "MirrorDownloaderDelegate.h"

@class MirrorDownload, MirrorNetworkAdapter, NSMutableArray, NSString, SDWebImageManager;

@interface MirrorMaterialUnUseCacheManager : MirrorMaterialManager <MirrorDownloaderDelegate>
{
    MirrorNetworkAdapter *_netWorkManager;
    MirrorDownload *_downloadManager;
    NSMutableArray *_makeupModelArray;
    unsigned long long _makeUpArrayCount;
    NSString *_osVersion;
    SDWebImageManager *_imageManager;
}

@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) unsigned long long makeUpArrayCount; // @synthesize makeUpArrayCount=_makeUpArrayCount;
@property(retain, nonatomic) NSMutableArray *makeupModelArray; // @synthesize makeupModelArray=_makeupModelArray;
@property(retain, nonatomic) MirrorDownload *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) MirrorNetworkAdapter *netWorkManager; // @synthesize netWorkManager=_netWorkManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)MirrorDownloadFail:(id)arg1 MirrorDownload:(id)arg2;
- (void)cacheModel:(id)arg1;
- (void)MirrorDownloadFinished:(id)arg1 MirrorDownload:(id)arg2;
- (void)MirrorDownloadProgress:(float)arg1 Percentage:(long long)arg2 MirrorDownload:(id)arg3;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
- (id)modelCacheKeyWithCspuId:(id)arg1 cspuVersion:(id)arg2;
- (id)modelCacheKeyWithCspuId:(id)arg1;
- (void)downloadFileWithModels:(id)arg1;
- (void)downloadFileWithModel:(id)arg1;
- (void)downLoadGlassBgImgWithMakeUpModel:(id)arg1;
- (id)isNeedDownLoadGlassBgImgWithModelArray:(id)arg1;
- (void)processBatFileRequestSuccessData:(id)arg1 RequstModelArray:(id)arg2;
- (void)requestBatFilePathWithRequstModelArray:(id)arg1;
- (void)getMaterialWithMakeUpModelArray:(id)arg1 osVersion:(id)arg2;
- (void)getMaterialWithMakeUpArrayData:(id)arg1 osVersion:(id)arg2;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

