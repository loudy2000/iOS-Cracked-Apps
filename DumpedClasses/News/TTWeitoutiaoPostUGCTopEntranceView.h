//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTHeaderViewProtocol.h"
#import "TTImagePickerControllerDelegate.h"

@class ALAssetsLibrary, NSString, TTAlphaThemedButton, TTImagePickerTrackDelegate;

@interface TTWeitoutiaoPostUGCTopEntranceView : SSThemedView <TTImagePickerControllerDelegate, TTHeaderViewProtocol>
{
    double _minimumHeaderHeight;
    TTAlphaThemedButton *_pureTextEntranceButton;
    TTAlphaThemedButton *_imageEntranceButton;
    TTAlphaThemedButton *_videoEntranceButton;
    SSThemedView *_leftSeparateLine;
    SSThemedView *_rightSeparateLine;
    ALAssetsLibrary *_library;
    TTImagePickerTrackDelegate *_trackDelegate;
}

@property(retain, nonatomic) TTImagePickerTrackDelegate *trackDelegate; // @synthesize trackDelegate=_trackDelegate;
@property(retain, nonatomic) ALAssetsLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) SSThemedView *rightSeparateLine; // @synthesize rightSeparateLine=_rightSeparateLine;
@property(retain, nonatomic) SSThemedView *leftSeparateLine; // @synthesize leftSeparateLine=_leftSeparateLine;
@property(retain, nonatomic) TTAlphaThemedButton *videoEntranceButton; // @synthesize videoEntranceButton=_videoEntranceButton;
@property(retain, nonatomic) TTAlphaThemedButton *imageEntranceButton; // @synthesize imageEntranceButton=_imageEntranceButton;
@property(retain, nonatomic) TTAlphaThemedButton *pureTextEntranceButton; // @synthesize pureTextEntranceButton=_pureTextEntranceButton;
@property(nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
- (void).cxx_destruct;
- (void)showPostView:(id)arg1;
- (void)ttImagePickerControllerDidCancel:(id)arg1;
- (void)ttimagePickerController:(id)arg1 didFinishTakePhoto:(id)arg2 selectedAssets:(id)arg3 withInfo:(id)arg4;
- (void)ttimagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3;
- (void)tapEntrance:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

