//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class BasicFilterSettingModel, HotelCommentGroupSearchInformationModel, HotelUserInfoModel, NSString;

@interface HotelCommentGroupSearchRequest : CTBusinessBean
{
    int _serviceVersion;
    int _moduleSourceType;
    int _hotelId;
    int _hotelStar;
    int _hotelType;
    NSString *_clientEnvironmentInfo;
    HotelUserInfoModel *_hotelUserInfoModel;
    BasicFilterSettingModel *_sortingInfoModel;
    HotelCommentGroupSearchInformationModel *_searchInfoModel;
    NSString *_serverSharedData;
}

@property(copy, nonatomic) NSString *serverSharedData; // @synthesize serverSharedData=_serverSharedData;
@property(retain, nonatomic) HotelCommentGroupSearchInformationModel *searchInfoModel; // @synthesize searchInfoModel=_searchInfoModel;
@property(retain, nonatomic) BasicFilterSettingModel *sortingInfoModel; // @synthesize sortingInfoModel=_sortingInfoModel;
@property(nonatomic) int hotelType; // @synthesize hotelType=_hotelType;
@property(nonatomic) int hotelStar; // @synthesize hotelStar=_hotelStar;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(retain, nonatomic) HotelUserInfoModel *hotelUserInfoModel; // @synthesize hotelUserInfoModel=_hotelUserInfoModel;
@property(nonatomic) int moduleSourceType; // @synthesize moduleSourceType=_moduleSourceType;
@property(copy, nonatomic) NSString *clientEnvironmentInfo; // @synthesize clientEnvironmentInfo=_clientEnvironmentInfo;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

