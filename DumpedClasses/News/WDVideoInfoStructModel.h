//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, WDImageUrlStructModel;

@interface WDVideoInfoStructModel : WDBaseModel
{
    NSString *_video_id;
    WDImageUrlStructModel *_cover_pic;
    NSNumber *_duration;
}

@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) WDImageUrlStructModel *cover_pic; // @synthesize cover_pic=_cover_pic;
@property(retain, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
