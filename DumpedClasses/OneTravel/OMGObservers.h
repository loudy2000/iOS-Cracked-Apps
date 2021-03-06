//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIViewController;

@interface OMGObservers : NSObject
{
    _Bool _isOmegaEventEnabling;
    _Bool _isEnterBackGround;
    _Bool _isEnableGetPhoto;
    UIViewController *_viewController;
    NSMutableDictionary *_vcDic;
    NSMutableDictionary *_timeDic;
    NSMutableDictionary *_counterDic;
}

+ (id)sharedObservers;
@property(nonatomic) _Bool isEnableGetPhoto; // @synthesize isEnableGetPhoto=_isEnableGetPhoto;
@property(nonatomic) _Bool isEnterBackGround; // @synthesize isEnterBackGround=_isEnterBackGround;
@property(nonatomic) _Bool isOmegaEventEnabling; // @synthesize isOmegaEventEnabling=_isOmegaEventEnabling;
@property(retain, nonatomic) NSMutableDictionary *counterDic; // @synthesize counterDic=_counterDic;
@property(retain, nonatomic) NSMutableDictionary *timeDic; // @synthesize timeDic=_timeDic;
@property(retain, nonatomic) NSMutableDictionary *vcDic; // @synthesize vcDic=_vcDic;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)dealloc;
- (void)saveEventCounter;
- (id)allTrackCounter;
- (void)trackEventCounter:(id)arg1;
- (void)trackAppJumpEvent:(id)arg1;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)didEnterBackground;
- (void)didBecomeActiveActions;
- (void)addHookForOpenUrl;
- (void)addObservers;
- (id)init;

@end

