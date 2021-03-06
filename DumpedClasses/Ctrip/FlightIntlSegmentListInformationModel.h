//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightAirportInformationModel, FlightDateTimeInformationModel, FlightIntlCraftTypeInformationModel, FlightIntlListInformationModel, NSMutableArray;

@interface FlightIntlSegmentListInformationModel : CTBusinessBean
{
    int flightIndex;
    FlightIntlListInformationModel *basicInfoModel;
    FlightAirportInformationModel *departAirportInfoModel;
    FlightAirportInformationModel *arriveAirportInfoModel;
    FlightDateTimeInformationModel *dateInfoModel;
    FlightIntlCraftTypeInformationModel *craftInfoModel;
    long long flag;
    _Bool isStop;
    NSMutableArray *flightIntlStopCityItemList;
    NSMutableArray *noteList;
}

@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) NSMutableArray *flightIntlStopCityItemList; // @synthesize flightIntlStopCityItemList;
@property(nonatomic) _Bool isStop; // @synthesize isStop;
@property(nonatomic) long long flag; // @synthesize flag;
@property(retain, nonatomic) FlightIntlCraftTypeInformationModel *craftInfoModel; // @synthesize craftInfoModel;
@property(retain, nonatomic) FlightDateTimeInformationModel *dateInfoModel; // @synthesize dateInfoModel;
@property(retain, nonatomic) FlightAirportInformationModel *arriveAirportInfoModel; // @synthesize arriveAirportInfoModel;
@property(retain, nonatomic) FlightAirportInformationModel *departAirportInfoModel; // @synthesize departAirportInfoModel;
@property(retain, nonatomic) FlightIntlListInformationModel *basicInfoModel; // @synthesize basicInfoModel;
@property(nonatomic) int flightIndex; // @synthesize flightIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

