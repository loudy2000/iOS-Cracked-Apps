//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel;

@interface CTTourSearchFilterButton : UIButton
{
    int _contentAlignment;
    UIImageView *_iconImage;
    UIImageView *_downImage;
    UILabel *_titLabel;
    NSString *_titleStr;
    NSString *_nomalImageStr;
    NSString *_selectedImageStr;
    NSString *_nomalDownImageStr;
    NSString *_selectedDownImageStr;
}

@property(nonatomic) int contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(copy, nonatomic) NSString *selectedDownImageStr; // @synthesize selectedDownImageStr=_selectedDownImageStr;
@property(copy, nonatomic) NSString *nomalDownImageStr; // @synthesize nomalDownImageStr=_nomalDownImageStr;
@property(copy, nonatomic) NSString *selectedImageStr; // @synthesize selectedImageStr=_selectedImageStr;
@property(copy, nonatomic) NSString *nomalImageStr; // @synthesize nomalImageStr=_nomalImageStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) UILabel *titLabel; // @synthesize titLabel=_titLabel;
@property(retain, nonatomic) UIImageView *downImage; // @synthesize downImage=_downImage;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)resetSubViewsLayout;
- (id)initWithTitle:(id)arg1 withImage:(id)arg2 selectedImage:(id)arg3 nomalDownImage:(id)arg4 selectedDownImage:(id)arg5 withFrame:(struct CGRect)arg6;

@end

