//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOUGCMiniBaseComponent.h"

@class NSMutableArray;

@interface TBOUGCMiniImageComponent : TBOUGCMiniBaseComponent
{
    NSMutableArray *_photoList;
}

@property(readonly, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
- (void).cxx_destruct;
- (void)doActionWithCompleted:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)commitWithCompleted:(CDUnknownBlockType)arg1;
- (void)imagePreviewHandler:(struct UIView *)arg1;
- (void)imagePreview:(struct UIView *)arg1;
- (void)addPthotos:(id)arg1;
- (void)imageRemoveHandler:(struct UIView *)arg1;
- (void)imageRemove:(struct UIView *)arg1;
- (void)imageAddHandler:(struct UIView *)arg1;
- (void)imageHandler:(struct UIView *)arg1;
- (void)_onAddImage:(struct UIView *)arg1 isPannel:(_Bool)arg2;
- (_Bool)isValid;

@end

