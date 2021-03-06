//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIPickerView, UIToolbar;

@interface ALPDatePicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_pickerView;
    UIToolbar *_toolBar;
    NSMutableArray *_dataArray;
    NSMutableArray *_numArray;
    NSMutableDictionary *_rowsIndex;
    UILabel *_titleLabel;
    int _datePickerType;
    _Bool _isHidden;
    long long _yearCount;
    NSArray *_indTypeArray;
    id <ALPDatePickerDelegate> _delegate;
    long long _selectIndex;
}

+ (double)componentHeight;
@property(readonly, nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) int datePickerType; // @synthesize datePickerType=_datePickerType;
@property(nonatomic) __weak id <ALPDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *indTypeArray; // @synthesize indTypeArray=_indTypeArray;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *dataAry;
- (void)_finish;
- (void)_cancel;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)hideDatePicker;
- (void)showDatePicker;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 datePickerType:(int)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

