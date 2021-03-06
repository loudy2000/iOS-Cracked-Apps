//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString, TBRDRateShareModel;

@interface TBRDPhotoBrowseModel : TBJSONModel
{
    _Bool _allowComment;
    _Bool _allowInteract;
    _Bool _hasDetail;
    _Bool _isVideo;
    NSString *_rateId;
    NSString *_picUrl;
    NSString *_feedback;
    NSString *_appendFeedback;
    NSArray *_structureTextList;
    NSDictionary *_interactInfo;
    TBRDRateShareModel *_share;
    NSDictionary *_video;
}

@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSDictionary *video; // @synthesize video=_video;
@property(retain, nonatomic) TBRDRateShareModel *share; // @synthesize share=_share;
@property(copy, nonatomic) NSDictionary *interactInfo; // @synthesize interactInfo=_interactInfo;
@property(copy, nonatomic) NSArray *structureTextList; // @synthesize structureTextList=_structureTextList;
@property(nonatomic) _Bool hasDetail; // @synthesize hasDetail=_hasDetail;
@property(nonatomic) _Bool allowInteract; // @synthesize allowInteract=_allowInteract;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(copy, nonatomic) NSString *appendFeedback; // @synthesize appendFeedback=_appendFeedback;
@property(copy, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *rateId; // @synthesize rateId=_rateId;
- (void).cxx_destruct;
- (id)init;

@end

