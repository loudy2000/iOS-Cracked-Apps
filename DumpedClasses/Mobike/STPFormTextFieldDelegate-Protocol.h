//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextFieldDelegate.h"

@class NSAttributedString, STPFormTextField;

@protocol STPFormTextFieldDelegate <UITextFieldDelegate>

@optional
- (void)formTextFieldTextDidChange:(STPFormTextField *)arg1;
- (NSAttributedString *)formTextField:(STPFormTextField *)arg1 modifyIncomingTextChange:(NSAttributedString *)arg2;
- (void)formTextFieldDidBackspaceOnEmpty:(STPFormTextField *)arg1;
@end

