//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSDictionary<AliDetailProductInterfaceDataModel>, NSString;

@interface AliDetailProductInterfaceDataModel : TBJSONModel
{
    NSString *_ID;
    NSArray *_dataList;
    NSString *_trackName;
    NSDictionary *_trackParams;
    NSDictionary<AliDetailProductInterfaceDataModel> *_children;
}

@property(retain, nonatomic) NSDictionary<AliDetailProductInterfaceDataModel> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

