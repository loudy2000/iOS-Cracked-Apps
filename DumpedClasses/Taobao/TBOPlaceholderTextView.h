//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface TBOPlaceholderTextView : UITextView
{
    UIColor *_oldTextColor;
    NSString *_placeholder;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didChangedEditing;
- (void)addObserver;
- (void)setText:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

