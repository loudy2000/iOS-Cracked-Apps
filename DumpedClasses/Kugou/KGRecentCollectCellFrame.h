//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGRecentPlayListEntity, NSString;

@interface KGRecentCollectCellFrame : NSObject
{
    KGRecentPlayListEntity *_lisetEntity;
    NSString *_timeStr;
    struct CGRect _iconFrame;
    struct CGRect _playBtnFrame;
    struct CGRect _deleteBtnFrame;
    struct CGRect _titleLabelFrame;
    struct CGRect _infoLabelFrame;
    struct CGRect _timeLabelFrame;
    struct CGRect _payIconFrame;
    struct CGRect _verLineFrame;
    struct CGRect _sepLineFrame;
}

@property(nonatomic) struct CGRect sepLineFrame; // @synthesize sepLineFrame=_sepLineFrame;
@property(nonatomic) struct CGRect verLineFrame; // @synthesize verLineFrame=_verLineFrame;
@property(nonatomic) struct CGRect payIconFrame; // @synthesize payIconFrame=_payIconFrame;
@property(nonatomic) struct CGRect timeLabelFrame; // @synthesize timeLabelFrame=_timeLabelFrame;
@property(nonatomic) struct CGRect infoLabelFrame; // @synthesize infoLabelFrame=_infoLabelFrame;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) struct CGRect deleteBtnFrame; // @synthesize deleteBtnFrame=_deleteBtnFrame;
@property(nonatomic) struct CGRect playBtnFrame; // @synthesize playBtnFrame=_playBtnFrame;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(retain, nonatomic) KGRecentPlayListEntity *lisetEntity; // @synthesize lisetEntity=_lisetEntity;
- (void).cxx_destruct;
- (id)compareCurrentTimeForRecentPlay:(id)arg1;
- (void)updateTimeStr;

@end

