//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GeofenceUtils : NSObject
{
}

+ (double)transformlng:(struct CLLocationCoordinate2D)arg1;
+ (double)transformlat:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isOutOfChina:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)gcj02towgs84:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)wgs84togcj02:(struct CLLocationCoordinate2D)arg1;
+ (id)encypt:(id)arg1;
+ (void)sendLocalNotification:(id)arg1;
+ (id)dateFormatter;
+ (void)storeString:(id)arg1;
+ (id)dataMapper;
+ (id)localDate;
+ (void)store:(id)arg1;

@end
