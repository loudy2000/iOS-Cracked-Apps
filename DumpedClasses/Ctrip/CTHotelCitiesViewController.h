//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTCityHotelOverlayViewDelegate.h"
#import "CTHotelCitiesSegmentedControlViewControllerDelegate.h"
#import "UISearchBarDelegate.h"

@class CTCityHotelOverlayView, CTCitySearchWidgetCacheBean, CTHotelCitiesSegmentedControlViewController, CTHotelCitiesTableViewController, CityModelForCityList, HotelNearByTourInfo, NSString, UIActivityIndicatorView, UISearchBar, UIView;

@interface CTHotelCitiesViewController : CTRootViewController <CTHotelCitiesSegmentedControlViewControllerDelegate, CTCityHotelOverlayViewDelegate, UISearchBarDelegate>
{
    CTCityHotelOverlayView *overlayView;
    _Bool isSearchBarClearBtn;
    NSString *tempText;
    _Bool _needShowOverlayView;
    int _citiesListLayout;
    UISearchBar *_searchBar;
    UIView *_searchBarView;
    UIActivityIndicatorView *_indicatorView;
    UIView *_textFieldRightView;
    NSString *_lastSearchKeyWord;
    NSString *_senderToken;
    CTCitySearchWidgetCacheBean *_widgetCache;
    CTHotelCitiesTableViewController *_citiesTableVC;
    CTHotelCitiesSegmentedControlViewController *_segmentedController;
    CityModelForCityList *_selectCity;
    CDUnknownBlockType _citySelectedBlock;
    HotelNearByTourInfo *_nearByInfo;
}

@property(nonatomic) _Bool needShowOverlayView; // @synthesize needShowOverlayView=_needShowOverlayView;
@property(retain, nonatomic) HotelNearByTourInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
@property(copy, nonatomic) CDUnknownBlockType citySelectedBlock; // @synthesize citySelectedBlock=_citySelectedBlock;
@property(retain, nonatomic) CityModelForCityList *selectCity; // @synthesize selectCity=_selectCity;
@property(nonatomic) int citiesListLayout; // @synthesize citiesListLayout=_citiesListLayout;
@property(nonatomic) __weak CTHotelCitiesSegmentedControlViewController *segmentedController; // @synthesize segmentedController=_segmentedController;
@property(nonatomic) __weak CTHotelCitiesTableViewController *citiesTableVC; // @synthesize citiesTableVC=_citiesTableVC;
@property(retain, nonatomic) CTCitySearchWidgetCacheBean *widgetCache; // @synthesize widgetCache=_widgetCache;
@property(copy, nonatomic) NSString *senderToken; // @synthesize senderToken=_senderToken;
@property(retain, nonatomic) NSString *lastSearchKeyWord; // @synthesize lastSearchKeyWord=_lastSearchKeyWord;
@property(retain, nonatomic) UIView *textFieldRightView; // @synthesize textFieldRightView=_textFieldRightView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)CT_PageId;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initBaseData;
- (void)cityHotelOverlayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)cityHotelOverlayView:(id)arg1 selectedModel:(id)arg2;
- (void)hideSearchBar:(id)arg1;
- (void)showSearchBar:(id)arg1 isShowHistory:(_Bool)arg2;
- (id)filterCitiesWithKeyword:(id)arg1 atSegmentIndex:(long long)arg2;
- (id)filterGlobalCitiesWithKeyword:(id)arg1;
- (id)filterChinaCitiesWithKeyword:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)saveHistoryCity:(id)arg1;
- (void)selectedCityChanged:(id)arg1;
- (void)segmentedController:(id)arg1 didSelectCountry:(int)arg2;
- (void)createSearchResultView;
- (void)createTableViewWithTopView:(id)arg1;
- (void)createSegmentedButtons;
- (void)createSearchBar;
- (void)initBaseView;
- (void)cancelLoading;
- (void)doSearchRequest;
- (void)doSearchByKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

