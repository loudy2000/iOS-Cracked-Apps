//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIImage, UIImageView, UIScrollView, UIView;

@interface XYPHStoreIdentificationCropViewController : XYPHBaseViewController <UIScrollViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    UIImageView *_cropImageView;
    UIImage *_imageToCrop;
    UIScrollView *_cropScrollView;
    UIImageView *_stickerView;
    UIView *_indicatorDimView;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *indicatorDimView; // @synthesize indicatorDimView=_indicatorDimView;
@property(retain, nonatomic) UIImageView *stickerView; // @synthesize stickerView=_stickerView;
@property(retain, nonatomic) UIScrollView *cropScrollView; // @synthesize cropScrollView=_cropScrollView;
@property(retain, nonatomic) UIImage *imageToCrop; // @synthesize imageToCrop=_imageToCrop;
@property(retain, nonatomic) UIImageView *cropImageView; // @synthesize cropImageView=_cropImageView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)centerScrollView;
- (void)addImage;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)doneButtonClicked;
- (void)cancelButtonClicked;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCropImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

