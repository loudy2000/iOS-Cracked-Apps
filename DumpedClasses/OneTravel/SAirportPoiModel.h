//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><SAirportPoiElementModel>, NSNumber<Optional>;

@interface SAirportPoiModel : JSONModel
{
    NSNumber<Optional> *_scene_type;
    NSNumber<Optional> *_poi_num;
    NSArray<Optional><SAirportPoiElementModel> *_airport_poi_list;
}

@property(retain, nonatomic) NSArray<Optional><SAirportPoiElementModel> *airport_poi_list; // @synthesize airport_poi_list=_airport_poi_list;
@property(retain, nonatomic) NSNumber<Optional> *poi_num; // @synthesize poi_num=_poi_num;
@property(retain, nonatomic) NSNumber<Optional> *scene_type; // @synthesize scene_type=_scene_type;
- (void).cxx_destruct;

@end

