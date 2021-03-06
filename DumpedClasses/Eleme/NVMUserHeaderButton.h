//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface NVMUserHeaderButton : UIControl
{
    _Bool _loginState;
    double _number;
    unsigned long long _style;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_titleGuestLabel;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleGuestLabel; // @synthesize titleGuestLabel=_titleGuestLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool loginState; // @synthesize loginState=_loginState;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double number; // @synthesize number=_number;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)loadLabels;
- (void)loadImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

