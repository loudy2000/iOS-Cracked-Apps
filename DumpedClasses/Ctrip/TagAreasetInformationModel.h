//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TagAreasetInformationModel : CTBusinessBean
{
    int areaType;
    NSString *areaContent;
    NSMutableArray *tagAreaDetailInforList;
}

@property(retain, nonatomic) NSMutableArray *tagAreaDetailInforList; // @synthesize tagAreaDetailInforList;
@property(copy, nonatomic) NSString *areaContent; // @synthesize areaContent;
@property(nonatomic) int areaType; // @synthesize areaType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

