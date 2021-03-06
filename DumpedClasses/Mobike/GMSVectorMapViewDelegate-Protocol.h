//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSCallout, GMSIndoorBuilding, GMSIndoorLevel, GMSVectorMapSharedResourceCache, GMSVectorMapView, NSSet;

@protocol GMSVectorMapViewDelegate <NSObject>
- (void)vectorMapView:(GMSVectorMapView *)arg1 didUpdateFocusedBuilding:(GMSIndoorBuilding *)arg2 fromBuilding:(GMSIndoorBuilding *)arg3 activeLevel:(GMSIndoorLevel *)arg4;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didUpdateVisibleCopyrights:(NSSet *)arg2 imageryCopyrights:(NSSet *)arg3 copyrightYear:(int)arg4;
- (void)vectorMapViewCameraMovementDidEnd:(GMSVectorMapView *)arg1 type:(long long)arg2 aggregatedMovementTypes:(long long)arg3;
- (void)vectorMapViewCameraMovementWillStart:(GMSVectorMapView *)arg1 type:(long long)arg2 aggregatedMovementTypes:(long long)arg3;
- (void)vectorMapViewGesturesDidEnd:(GMSVectorMapView *)arg1;
- (void)vectorMapViewGesturesWillStart:(GMSVectorMapView *)arg1;
- (void)updateFrameRateToCurrentModeWithView:(GMSVectorMapView *)arg1;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didTilt:(double)arg2;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didZoom:(float)arg2;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didRotate:(double)arg2;
- (void)vectorMapViewMapSettled:(GMSVectorMapView *)arg1;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didLongPressCoordinate:(struct GMSCoordinate)arg2 longPressRadius:(double)arg3;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didTapCoordinate:(struct GMSCoordinate)arg2 tapRadius:(double)arg3;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didMoveFromCameraPosition:(const struct CameraPosition *)arg2 toCameraPosition:(const struct CameraPosition *)arg3 reason:(unsigned long long)arg4;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didTapCallout:(GMSCallout *)arg2;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didTapFeature:(id <GMSFeatureWithServerID>)arg2;

@optional
- (void)vectorMapView:(GMSVectorMapView *)arg1 didCreateRenderer:(id <GMSAbstractRenderer>)arg2;
- (void)vectorMapView:(GMSVectorMapView *)arg1 willTapAt:(struct CGPoint)arg2;
- (void)vectorMapViewDidFinishLoadingTiles:(GMSVectorMapView *)arg1;
- (void)vectorMapViewDidStartLoadingTiles:(GMSVectorMapView *)arg1;
- (GMSVectorMapSharedResourceCache *)vectorMapViewDeferredSharedCache:(GMSVectorMapView *)arg1;
- (void)vectorMapViewDidTapMyLocation:(GMSVectorMapView *)arg1 screenCoordinate:(struct CGPoint)arg2 location:(struct GMSCoordinate)arg3;
- (void)vectorMapViewLabelingStable:(GMSVectorMapView *)arg1;
- (void)vectorMapView:(GMSVectorMapView *)arg1 didShowNewLabels:(const set_d4c3d469 *)arg2;
- (void)vectorMapViewCameraMovementWillContinue:(GMSVectorMapView *)arg1 type:(long long)arg2 aggregatedMovementTypes:(long long)arg3;
@end

