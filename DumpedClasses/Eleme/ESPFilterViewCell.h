//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class UIImageView, UILabel;

@interface ESPFilterViewCell : NVMTableViewCell
{
    UILabel *_label;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)loadSubviews;
- (void)nvm_setChosen:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setText:(id)arg1 iconImage:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

