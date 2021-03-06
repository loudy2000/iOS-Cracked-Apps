//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLImageLoadDelegate.h"

@class NSString, QLJCEMarkLabel, QLSImageView, UILabel;

@interface QLMomentMarkView : UIView <QLImageLoadDelegate>
{
    QLSImageView *_iconView;
    UILabel *_textLabel;
    QLJCEMarkLabel *_markLabel;
}

@property(retain, nonatomic) QLJCEMarkLabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) QLSImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)didFinishDownloadImage:(id)arg1 withIsGif:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

