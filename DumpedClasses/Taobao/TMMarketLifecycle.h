//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMMarketDataSourceDelegate.h"

@class NSString, TMMarketCartService, TMMarketComponentActionHandler, TMMarketDataSource, TMMarketLocationService, TMMarketPullToRefreshService, TangramBus, TangramFlareHelper;

@interface TMMarketLifecycle : NSObject <TMMarketDataSourceDelegate>
{
    id <TMMarketLifecycleDelegate> _lDelegate;
    TMMarketDataSource *_dataSource;
    TangramBus *_tangramBus;
    TangramFlareHelper *_flareHelper;
    TMMarketCartService *_cartService;
    TMMarketLocationService *_locationService;
    TMMarketPullToRefreshService *_pullToRefreshService;
    TMMarketComponentActionHandler *_componentActionHandler;
}

@property(retain, nonatomic) TMMarketComponentActionHandler *componentActionHandler; // @synthesize componentActionHandler=_componentActionHandler;
@property(retain, nonatomic) TMMarketPullToRefreshService *pullToRefreshService; // @synthesize pullToRefreshService=_pullToRefreshService;
@property(retain, nonatomic) TMMarketLocationService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) TMMarketCartService *cartService; // @synthesize cartService=_cartService;
@property(nonatomic) __weak TangramFlareHelper *flareHelper; // @synthesize flareHelper=_flareHelper;
@property(nonatomic) __weak TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(retain, nonatomic) TMMarketDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TMMarketLifecycleDelegate> lDelegate; // @synthesize lDelegate=_lDelegate;
- (void).cxx_destruct;
- (id)layoutWithId:(id)arg1 fromLayouts:(id)arg2;
- (id)findThemeWithThemeLayoutId:(id)arg1 themeItemId:(id)arg2 originJsonArray:(id)arg3;
- (id)findLayoutInLayouts:(id)arg1 layoutId:(id)arg2;
- (void)processLayoutTheme:(id)arg1 originJsonArray:(id)arg2;
- (void)setSPMForModel:(id)arg1 identifier:(id)arg2;
- (void)processModelLayout:(id)arg1;
- (void)processDataModel:(id)arg1;
- (void)homeRequestFailed:(id)arg1;
- (void)homeRequestFinishedWithData:(id)arg1 isFromCache:(_Bool)arg2;
- (void)updateStatusToNeedforceRefresh;
- (void)processAsyncComponent;
- (void)loadMockData;
- (void)startLoading;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

