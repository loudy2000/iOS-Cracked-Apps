//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KTVButton;

@interface KtvSkinBackGroudButton : UIView
{
    KTVButton *_forgroundButton;
    KGThemeButton *_backgroundButton;
}

@property(retain, nonatomic) KGThemeButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) KTVButton *forgroundButton; // @synthesize forgroundButton=_forgroundButton;
- (void).cxx_destruct;
- (void)configureWithBounds:(struct CGRect)arg1;
- (void)initlizaSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

