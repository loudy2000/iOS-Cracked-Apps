//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBaseMap.h"

#import "GMSMapViewDelegate.h"
#import "MMCLLocationManagerDelegate.h"

@class GMSMapView, MMCLLocationManager, MMGoogleMarker, MMGoogleOfflineManager, MMUserLocation, NSMutableArray, NSString;

@interface MMGoogleMap : MMBaseMap <GMSMapViewDelegate, MMCLLocationManagerDelegate>
{
    _Bool _showsUserLocation;
    _Bool _regionChangedByGesture;
    int _maxOverlayIndex;
    MMUserLocation *_userLocation;
    GMSMapView *_mapView;
    NSMutableArray *_googleAnnotations;
    MMCLLocationManager *_locationManager;
    MMGoogleOfflineManager *_internalOfflineManager;
    MMGoogleMarker *_selectMarker;
}

@property(nonatomic) __weak MMGoogleMarker *selectMarker; // @synthesize selectMarker=_selectMarker;
@property(retain, nonatomic) MMGoogleOfflineManager *internalOfflineManager; // @synthesize internalOfflineManager=_internalOfflineManager;
@property(nonatomic) _Bool regionChangedByGesture; // @synthesize regionChangedByGesture=_regionChangedByGesture;
@property(retain, nonatomic) MMCLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) int maxOverlayIndex; // @synthesize maxOverlayIndex=_maxOverlayIndex;
@property(retain, nonatomic) NSMutableArray *googleAnnotations; // @synthesize googleAnnotations=_googleAnnotations;
@property(retain, nonatomic) GMSMapView *mapView; // @synthesize mapView=_mapView;
- (_Bool)showsUserLocation;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)mapView:(id)arg1 markerInfoWindow:(id)arg2;
- (void)mapView:(id)arg1 didCloseInfoWindowOfMarker:(id)arg2;
- (void)mapView:(id)arg1 didTapInfoWindowOfMarker:(id)arg2;
- (_Bool)mapView:(id)arg1 didTapMarker:(id)arg2;
- (void)mapView:(id)arg1 idleAtCameraPosition:(id)arg2;
- (void)mapView:(id)arg1 willMove:(_Bool)arg2;
- (id)offlineManager;
- (int)indexForNewOverlay;
- (void)onOverlayAdded;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (int)maxMarkerIndex;
- (void)removeMarker:(id)arg1;
- (void)addGoogleMarkerToCollection:(id)arg1;
- (id)markerForStandardAnnotation:(id)arg1;
- (void)bringAnnotationViewToFront:(id)arg1;
- (CDStruct_02837cd9)minixumMapRectForMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)showAnnotations:(id)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)doAddAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)selectedAnnotations;
- (id)annotations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)manager:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)manager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)setDistanceFilter:(double)arg1;
- (double)distanceFilter;
- (void)setDesiredAccuracy:(double)arg1;
- (double)desiredAccuracy;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (_Bool)allowsBackgroundLocationUpdates;
- (void)setHeadingFilter:(double)arg1;
- (double)headingFilter;
@property(retain, nonatomic) MMUserLocation *userLocation; // @synthesize userLocation=_userLocation;
- (void)configureUserLocationPresentation:(id)arg1;
- (void)setShowsUserLocation:(_Bool)arg1;
- (void)setMapStatus:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setMapStatus:(id)arg1;
- (id)mapStatus;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)visibleMapRect;
- (void)setOverlooking:(double)arg1;
- (double)overlooking;
- (void)setRotation:(double)arg1;
- (double)rotation;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)setZoomLevel:(double)arg1;
- (double)zoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)centerCoordinate;
- (void)setIndoorEnabled:(_Bool)arg1;
- (_Bool)indoorEnabled;
- (void)setStayCenteredDuringZoom:(_Bool)arg1;
- (_Bool)stayCenteredDuringZoom;
- (void)setOverlookingGestures:(_Bool)arg1;
- (_Bool)overlookingGestures;
- (void)setRotateGestures:(_Bool)arg1;
- (_Bool)rotateGestures;
- (void)setShowsCompass:(_Bool)arg1;
- (_Bool)showsCompass;
- (void)setShowsScale:(_Bool)arg1;
- (_Bool)showsScale;
- (void)setMapType:(long long)arg1;
- (long long)mapType;
- (id)displayView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)disableLogoAutomaticJumpToGoogleMaps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

