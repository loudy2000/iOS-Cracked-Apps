//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGRunMapView, NSArray, UIButton, UIImageView, UILabel;

@interface KGRunShareContentView : UIView
{
    double _labelBpmDescWidth;
    _Bool _isShowLogo;
    _Bool _isSHowBtnOpenPic;
    _Bool _isMapImage;
    CDUnknownBlockType _clickOpenClickBlock;
    UILabel *_lblKm;
    UILabel *_lblDate;
    UILabel *_lblTime;
    UILabel *_lblSpeed;
    UILabel *_lblBpm;
    UIImageView *_imageView;
    KGRunMapView *_runMapView;
    CDUnknownBlockType _captureMapImageCallback;
    UILabel *_lblTimeDesc;
    UILabel *_lblSpeedDesc;
    UILabel *_lblBpmDesc;
    NSArray *_arrSongs;
    long long _totalRows;
    UIView *_outSideFootView;
    UIButton *_btnOpenPic;
    UIView *_converView;
}

@property(retain, nonatomic) UIView *converView; // @synthesize converView=_converView;
@property(retain, nonatomic) UIButton *btnOpenPic; // @synthesize btnOpenPic=_btnOpenPic;
@property(retain, nonatomic) UIView *outSideFootView; // @synthesize outSideFootView=_outSideFootView;
@property(nonatomic) long long totalRows; // @synthesize totalRows=_totalRows;
@property(retain, nonatomic) NSArray *arrSongs; // @synthesize arrSongs=_arrSongs;
@property(retain, nonatomic) UILabel *lblBpmDesc; // @synthesize lblBpmDesc=_lblBpmDesc;
@property(retain, nonatomic) UILabel *lblSpeedDesc; // @synthesize lblSpeedDesc=_lblSpeedDesc;
@property(retain, nonatomic) UILabel *lblTimeDesc; // @synthesize lblTimeDesc=_lblTimeDesc;
@property(copy, nonatomic) CDUnknownBlockType captureMapImageCallback; // @synthesize captureMapImageCallback=_captureMapImageCallback;
@property(nonatomic) _Bool isMapImage; // @synthesize isMapImage=_isMapImage;
@property(nonatomic) _Bool isSHowBtnOpenPic; // @synthesize isSHowBtnOpenPic=_isSHowBtnOpenPic;
@property(nonatomic) _Bool isShowLogo; // @synthesize isShowLogo=_isShowLogo;
@property(retain, nonatomic) KGRunMapView *runMapView; // @synthesize runMapView=_runMapView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *lblBpm; // @synthesize lblBpm=_lblBpm;
@property(retain, nonatomic) UILabel *lblSpeed; // @synthesize lblSpeed=_lblSpeed;
@property(retain, nonatomic) UILabel *lblTime; // @synthesize lblTime=_lblTime;
@property(retain, nonatomic) UILabel *lblDate; // @synthesize lblDate=_lblDate;
@property(retain, nonatomic) UILabel *lblKm; // @synthesize lblKm=_lblKm;
@property(copy, nonatomic) CDUnknownBlockType clickOpenClickBlock; // @synthesize clickOpenClickBlock=_clickOpenClickBlock;
- (void).cxx_destruct;
- (id)runSongDesc:(long long)arg1 withFont:(id)arg2;
- (id)logoImageVIew;
- (void)refreshMapInfo;
- (void)refreshImage:(id)arg1;
- (void)clickOpenPic:(id)arg1;
- (void)createUI;
- (id)initWithSongList:(id)arg1;
- (id)initWithSongList:(id)arg1 withFootView:(id)arg2;

@end

