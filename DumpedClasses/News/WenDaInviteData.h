//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSNumber, NSString;

@interface WenDaInviteData : ExploreOriginalData
{
    NSNumber *_behotTime;
    NSNumber *_cellType;
    NSNumber *_cursor;
    NSString *_title;
    NSString *_schema;
    NSNumber *_showTopSeparator;
    NSNumber *_showBottomSeparator;
    NSArray *_questionDictList;
    NSArray *_questionList;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)dbName;
@property(retain, nonatomic) NSArray *questionList; // @synthesize questionList=_questionList;
@property(retain, nonatomic) NSArray *questionDictList; // @synthesize questionDictList=_questionDictList;
@property(copy, nonatomic) NSNumber *showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(copy, nonatomic) NSNumber *showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSNumber *cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSNumber *behotTime; // @synthesize behotTime=_behotTime;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;

@end

