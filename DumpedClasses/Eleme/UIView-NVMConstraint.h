//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (NVMConstraint)
- (void)nvm_fixHorizontalContentSize;
- (void)nvm_fixVerticalContentSize;
- (void)nvm_fixContentSize;
@property(nonatomic) float nvm_horizontalContentCompressionResistancePriority;
@property(nonatomic) float nvm_horizontalContentHuggingPriority;
@property(nonatomic) float nvm_verticalContentCompressionResistancePriority;
@property(nonatomic) float nvm_verticalContentHuggingPriority;
- (void)nvm_setConstraintSize:(struct CGSize)arg1 priority:(float)arg2;
- (void)nvm_setConstraintHeight:(double)arg1 priority:(float)arg2;
- (void)nvm_setConstraintWidth:(double)arg1 priority:(float)arg2;
@property(nonatomic) struct CGSize nvm_constraintSize;
@property(nonatomic) double nvm_constraintHeight;
@property(nonatomic) double nvm_constraintWidth;
- (void)nvm_activeConstraint:(id)arg1 forKey:(const void *)arg2;
- (id)nvm_newHeightConstraint;
- (id)nvm_newWidthConstraint;
- (id)nvm_heightConstraint;
- (id)nvm_widthConstraint;
@end

