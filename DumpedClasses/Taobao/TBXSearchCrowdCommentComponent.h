//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchViewComponent.h"

#import "TBXSearchFloatViewDelegate.h"

@class NSString, TBXSearchService, UIButton, UIImageView;

@interface TBXSearchCrowdCommentComponent : TBSearchViewComponent <TBXSearchFloatViewDelegate>
{
    UIButton *_button;
    TBXSearchService *_searchService;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (long long)getItemMaxNumber;
- (id)getP4pIds;
- (id)getIds;
- (_Bool)checkShow;
- (void)openCrowdComment:(id)arg1;
- (id)getRealView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

