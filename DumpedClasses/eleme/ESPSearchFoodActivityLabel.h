//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CAGradientLayer, NSArray;

@interface ESPSearchFoodActivityLabel : UILabel
{
    NSArray *_gradientColors;
    CAGradientLayer *_backGradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *backGradientLayer; // @synthesize backGradientLayer=_backGradientLayer;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
