//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIView;

@interface TXTBGridItemView : UIControl
{
    UIView *_selectedView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

