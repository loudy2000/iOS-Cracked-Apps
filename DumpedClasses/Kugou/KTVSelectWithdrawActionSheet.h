//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeImageView, KTVSelectButton, NSArray, NSString, UIButton;

@interface KTVSelectWithdrawActionSheet : UIView
{
    long long _selectedButtonIndex;
    NSString *_title;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _dismissBlock;
    UIButton *_maskBtn;
    KGThemeImageView *_bgView;
    NSString *_cancelTitle;
    NSArray *_buttonTitles;
    NSArray *_buttonEnables;
    KTVSelectButton *_selectBtn;
}

+ (id)actionSheetWithTitle:(id)arg1 buttonTitles:(id)arg2 buttonEnable:(id)arg3 cancelTitle:(id)arg4 selectedIndex:(long long)arg5 withBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) KTVSelectButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) NSArray *buttonEnables; // @synthesize buttonEnables=_buttonEnables;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) KGThemeImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *maskBtn; // @synthesize maskBtn=_maskBtn;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)actionCancel:(id)arg1;
- (void)actionSelect:(id)arg1;
- (void)p_init;
- (id)initWithTitle:(id)arg1 buttonTitles:(id)arg2 buttonEnable:(id)arg3 cancelTitle:(id)arg4 selectedIndex:(long long)arg5 withBlock:(CDUnknownBlockType)arg6;

@end

