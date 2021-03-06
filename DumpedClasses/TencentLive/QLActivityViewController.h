//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "QLImageLoadDelegate.h"

@class NSString, QLSImageView;

@interface QLActivityViewController : QLBaseViewController <QLImageLoadDelegate>
{
    QLSImageView *_loadingImage;
    QLSImageView *_closeButton;
    id <QLActivityViewControllerBaseProcotol> _procotol;
}

@property(nonatomic) __weak id <QLActivityViewControllerBaseProcotol> procotol; // @synthesize procotol=_procotol;
@property(retain, nonatomic) QLSImageView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) QLSImageView *loadingImage; // @synthesize loadingImage=_loadingImage;
- (void).cxx_destruct;
- (id)pageChannelID;
- (_Bool)hideTabBarWhenPushed;
- (_Bool)navigationBarHidden;
- (long long)pageTransitionStyle;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2 imageView:(id)arg3;
- (void)closeH5Game;
- (void)showH5withAnimation;
- (void)buttonClick;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

