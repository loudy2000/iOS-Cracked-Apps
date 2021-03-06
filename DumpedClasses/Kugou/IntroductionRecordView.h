//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, KGThemeButton, KQRecordBLL, NSTimer, UIButton, UIImageView, UILabel;

@interface IntroductionRecordView : UIView
{
    long long _recordStatus;
    UIView *_recordView;
    UILabel *_titleLabel;
    UIImageView *_leftAnimiationImageView;
    UIImageView *_rightAnimiationImageView;
    UILabel *_bottomLabel;
    UIView *_xLineView;
    UIButton *_recordBtn;
    UIView *_yLineView;
    KGThemeButton *_readyCancelBtn;
    KGThemeButton *_smallCancelBtn;
    KGThemeButton *_smallSaveBtn;
    UIView *_shapeView;
    CAShapeLayer *_shapeLayer;
    NSTimer *_shapeTimer;
    NSTimer *_secondTimer;
    long long _seconds;
    KQRecordBLL *_recordBll;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) KQRecordBLL *recordBll; // @synthesize recordBll=_recordBll;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) NSTimer *secondTimer; // @synthesize secondTimer=_secondTimer;
@property(retain, nonatomic) NSTimer *shapeTimer; // @synthesize shapeTimer=_shapeTimer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *shapeView; // @synthesize shapeView=_shapeView;
@property(retain, nonatomic) KGThemeButton *smallSaveBtn; // @synthesize smallSaveBtn=_smallSaveBtn;
@property(retain, nonatomic) KGThemeButton *smallCancelBtn; // @synthesize smallCancelBtn=_smallCancelBtn;
@property(retain, nonatomic) KGThemeButton *readyCancelBtn; // @synthesize readyCancelBtn=_readyCancelBtn;
@property(retain, nonatomic) UIView *yLineView; // @synthesize yLineView=_yLineView;
@property(retain, nonatomic) UIButton *recordBtn; // @synthesize recordBtn=_recordBtn;
@property(retain, nonatomic) UIView *xLineView; // @synthesize xLineView=_xLineView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *rightAnimiationImageView; // @synthesize rightAnimiationImageView=_rightAnimiationImageView;
@property(retain, nonatomic) UIImageView *leftAnimiationImageView; // @synthesize leftAnimiationImageView=_leftAnimiationImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
- (void).cxx_destruct;
- (void)stopPlay;
- (void)readyCancelBtnFun:(id)arg1;
- (void)smallSaveBtnFun:(id)arg1;
- (void)smallCancelBtnFun:(id)arg1;
- (void)secondTimerFun;
- (void)shapeTimerFun;
- (void)playAnimationWithSecond:(long long)arg1;
- (void)stopRecord;
- (void)recordBtnFun:(id)arg1;
- (void)setRecordCallBack:(CDUnknownBlockType)arg1;
- (void)setTitleLabelTextWithSecond:(long long)arg1;
- (void)showRecordTooLong;
- (void)showRecordTooShort;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

