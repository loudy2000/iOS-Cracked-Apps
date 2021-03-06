//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPWeatherInfo, UIImageView, UILabel;

@interface ESPHomeWeatherView : UIView
{
    ESPWeatherInfo *_weatherInfo;
    UILabel *_temperatureLabel;
    UILabel *_temperatureDescriptionLabel;
    UIImageView *_tempertureIconView;
}

@property(retain, nonatomic) UIImageView *tempertureIconView; // @synthesize tempertureIconView=_tempertureIconView;
@property(retain, nonatomic) UILabel *temperatureDescriptionLabel; // @synthesize temperatureDescriptionLabel=_temperatureDescriptionLabel;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) ESPWeatherInfo *weatherInfo; // @synthesize weatherInfo=_weatherInfo;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

