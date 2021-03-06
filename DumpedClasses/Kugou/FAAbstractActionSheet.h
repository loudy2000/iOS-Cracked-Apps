//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAThemeImageView, FAThemeLabel, NSString, UIControl, UIPickerView, UIView;

@interface FAAbstractActionSheet : NSObject
{
    UIView *_view;
    FAThemeImageView *_foregroundView;
    NSString *_title;
    double _height;
    UIControl *_maskView;
    UIPickerView *_pickerView;
    FAThemeLabel *_titleLabel;
}

@property(retain, nonatomic) FAThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIControl *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FAThemeImageView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)clickCancel:(id)arg1;
- (void)clickOk:(id)arg1;
- (id)viewForContent;
- (double)durationForAnimation;
- (double)heightForItem;
- (void)dismiss;
- (void)show;
- (id)init;

@end

