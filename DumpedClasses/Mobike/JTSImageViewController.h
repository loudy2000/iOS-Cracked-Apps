//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class JTSImageInfo, NSString, NSTimer, NSURLSessionDataTask, UIActivityIndicatorView, UIAttachmentBehavior, UIButton, UIDynamicAnimator, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIProgressView, UIScrollView, UITapGestureRecognizer, UITextView, UIView;

@interface JTSImageViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    UILabel *bikeIdLbl;
    UILabel *comentLbl;
    UIButton *disdainBtn;
    UIButton *praiseBtn;
    UIView *bottomView;
    JTSImageInfo *_imageInfo;
    UIImage *_image;
    long long _mode;
    long long _backgroundOptions;
    id <JTSImageViewControllerDismissalDelegate> _dismissalDelegate;
    id <JTSImageViewControllerOptionsDelegate> _optionsDelegate;
    id <JTSImageViewControllerInteractionsDelegate> _interactionsDelegate;
    id <JTSImageViewControllerAccessibilityDelegate> _accessibilityDelegate;
    id <JTSImageViewControllerAnimationDelegate> _animationDelegate;
    long long _transition;
    long long _lastUsedOrientation;
    UIView *_progressContainer;
    UIView *_outerContainerForScrollView;
    UIView *_snapshotView;
    UIView *_blurredSnapshotView;
    UIView *_blackBackdrop;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    UITextView *_textView;
    UIProgressView *_progressView;
    UIActivityIndicatorView *_spinner;
    UITapGestureRecognizer *_singleTapperPhoto;
    UITapGestureRecognizer *_doubleTapperPhoto;
    UITapGestureRecognizer *_singleTapperText;
    UILongPressGestureRecognizer *_longPresserPhoto;
    UIPanGestureRecognizer *_panRecognizer;
    UIDynamicAnimator *_animator;
    UIAttachmentBehavior *_attachmentBehavior;
    NSURLSessionDataTask *_imageDownloadDataTask;
    NSTimer *_downloadProgressTimer;
    CDStruct_1e7ad90c _flags;
    struct CGPoint _imageDragStartingPoint;
    struct UIOffset _imageDragOffsetFromActualTranslation;
    struct UIOffset _imageDragOffsetFromImageCenter;
    struct CGAffineTransform _currentSnapshotRotationTransform;
    CDStruct_f24d28fa _startingInfo;
}

@property(retain, nonatomic) NSTimer *downloadProgressTimer; // @synthesize downloadProgressTimer=_downloadProgressTimer;
@property(retain, nonatomic) NSURLSessionDataTask *imageDownloadDataTask; // @synthesize imageDownloadDataTask=_imageDownloadDataTask;
@property(nonatomic) struct UIOffset imageDragOffsetFromImageCenter; // @synthesize imageDragOffsetFromImageCenter=_imageDragOffsetFromImageCenter;
@property(nonatomic) struct UIOffset imageDragOffsetFromActualTranslation; // @synthesize imageDragOffsetFromActualTranslation=_imageDragOffsetFromActualTranslation;
@property(nonatomic) struct CGPoint imageDragStartingPoint; // @synthesize imageDragStartingPoint=_imageDragStartingPoint;
@property(retain, nonatomic) UIAttachmentBehavior *attachmentBehavior; // @synthesize attachmentBehavior=_attachmentBehavior;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPresserPhoto; // @synthesize longPresserPhoto=_longPresserPhoto;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapperText; // @synthesize singleTapperText=_singleTapperText;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapperPhoto; // @synthesize doubleTapperPhoto=_doubleTapperPhoto;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapperPhoto; // @synthesize singleTapperPhoto=_singleTapperPhoto;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *blackBackdrop; // @synthesize blackBackdrop=_blackBackdrop;
@property(retain, nonatomic) UIView *blurredSnapshotView; // @synthesize blurredSnapshotView=_blurredSnapshotView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *outerContainerForScrollView; // @synthesize outerContainerForScrollView=_outerContainerForScrollView;
@property(retain, nonatomic) UIView *progressContainer; // @synthesize progressContainer=_progressContainer;
@property(nonatomic) struct CGAffineTransform currentSnapshotRotationTransform; // @synthesize currentSnapshotRotationTransform=_currentSnapshotRotationTransform;
@property(nonatomic) long long lastUsedOrientation; // @synthesize lastUsedOrientation=_lastUsedOrientation;
@property(nonatomic) CDStruct_1e7ad90c flags; // @synthesize flags=_flags;
@property(nonatomic) CDStruct_f24d28fa startingInfo; // @synthesize startingInfo=_startingInfo;
@property(nonatomic) long long transition; // @synthesize transition=_transition;
@property(nonatomic) __weak id <JTSImageViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) __weak id <JTSImageViewControllerAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) __weak id <JTSImageViewControllerInteractionsDelegate> interactionsDelegate; // @synthesize interactionsDelegate=_interactionsDelegate;
@property(nonatomic) __weak id <JTSImageViewControllerOptionsDelegate> optionsDelegate; // @synthesize optionsDelegate=_optionsDelegate;
@property(nonatomic) __weak id <JTSImageViewControllerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
@property(nonatomic) long long backgroundOptions; // @synthesize backgroundOptions=_backgroundOptions;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) JTSImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
- (void).cxx_destruct;
- (id)defaultAccessibilityHintForScrollView:(_Bool)arg1;
- (id)defaultAccessibilityLabelForScrollView;
- (id)accessibilityHintZoomedIn;
- (id)accessibilityHintZoomedOut;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)progressTimerFired:(id)arg1;
- (void)cancelProgressTimer;
- (void)startProgressTimer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGPoint)targetDismissalPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (_Bool)imageViewIsOffscreen;
- (double)appropriateDensityForView:(id)arg1;
- (double)appropriateAngularResistanceForView:(id)arg1;
- (void)dismissImageWithFlick:(struct CGPoint)arg1;
- (void)cancelCurrentImageDrag:(_Bool)arg1;
- (void)startImageDragging:(struct CGPoint)arg1 translationOffset:(struct UIOffset)arg2;
- (void)textViewSingleTapped:(id)arg1;
- (void)dismissingPanGestureRecognizerPanned:(id)arg1;
- (void)imageLongPressed:(id)arg1;
- (void)imageSingleTapped:(id)arg1;
- (void)imageDoubleTapped:(id)arg1;
- (void)updateDimmingViewForCurrentZoomScale:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)resizedFrameForAutorotatingImageView:(struct CGSize)arg1;
- (struct UIEdgeInsets)contentInsetForScrollView:(double)arg1;
- (void)verticallyCenterTextInTextView;
- (void)updateScrollViewAndImageViewForCurrentMetrics;
- (void)updateLayoutsForCurrentOrientation;
- (void)updateInterfaceWithImage:(id)arg1;
- (void)removeMotionEffectsFromSnapshotView;
- (void)addMotionEffectsToSnapshotView;
- (id)blurredSnapshotFromParentmostViewController:(id)arg1;
- (id)snapshotFromParentmostViewController:(id)arg1;
- (void)dismissByExpandingAltTextToOffscreenPosition;
- (void)dismissByExpandingImageToOffscreenPosition;
- (void)dismissByCleaningUpAfterImageWasFlickedOffscreen;
- (void)dismissByCollapsingImageBackToOriginalPosition;
- (id)backgroundColorForImageView;
- (double)backgroundBlurRadius;
- (double)alphaForBackgroundDimmingOverlay;
- (void)showAltTextFromViewController:(id)arg1;
- (void)showImageViewerByScalingDownFromOffscreenPositionWithViewController:(id)arg1;
- (void)showImageViewerByExpandingFromOriginalPositionFromViewController:(id)arg1;
- (void)setupTextViewTapGestureRecognizer;
- (void)setupImageModeGestureRecognizers;
- (void)disdainSucc;
- (void)praiseSucc;
- (void)praiseDisdain:(id)arg1;
- (void)viewDidLoadForAltTextMode;
- (void)viewDidLoadForImageMode;
- (void)setupImageAndDownloadIfNecessary:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)dismiss:(_Bool)arg1;
- (void)showFromViewController:(id)arg1 transition:(long long)arg2;
- (id)initWithImageInfo:(id)arg1 mode:(long long)arg2 backgroundStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

