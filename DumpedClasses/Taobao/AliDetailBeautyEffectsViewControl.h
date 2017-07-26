//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliDetailMultimediaViewControlProtocol.h"
#import "TBMagicCubeLifeCycleProtocol.h"

@class AliDetailBeautyEffectsDisplayView, AliDetailBeautyEffectsModel, AliDetailMultimediaBrowserViewController, NSString;

@interface AliDetailBeautyEffectsViewControl : NSObject <AliDetailMultimediaViewControlProtocol, TBMagicCubeLifeCycleProtocol>
{
    _Bool _isAppearing;
    AliDetailBeautyEffectsModel *_beautyEffectsModel;
    AliDetailBeautyEffectsDisplayView *_beautyContainerView;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
    CDUnknownBlockType _beautyEffectsDownloadCompletion;
    CDUnknownBlockType _dataSourceDownloadCompletion;
}

@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(copy, nonatomic) CDUnknownBlockType dataSourceDownloadCompletion; // @synthesize dataSourceDownloadCompletion=_dataSourceDownloadCompletion;
@property(copy, nonatomic) CDUnknownBlockType beautyEffectsDownloadCompletion; // @synthesize beautyEffectsDownloadCompletion=_beautyEffectsDownloadCompletion;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailBeautyEffectsDisplayView *beautyContainerView; // @synthesize beautyContainerView=_beautyContainerView;
@property(retain, nonatomic) AliDetailBeautyEffectsModel *beautyEffectsModel; // @synthesize beautyEffectsModel=_beautyEffectsModel;
- (void).cxx_destruct;
- (void)exposureClickUserTrack;
- (id)getMaskImageViewForBigPhotoBrowser;
- (void)downloadFailedWithError:(id)arg1;
- (void)downloadFinished:(id)arg1;
- (void)downloadDataSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetForMultiMediaFromBigBrowser;
- (void)reuseForBigBrowserFromMultiMedia;
- (void)setupContent;
- (void)dealloc;
- (void)viewDidUnload:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (id)getComponentView;
- (void)bindData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
