//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FMCategory : NSObject
{
    _Bool _leaf;
    NSString *_name;
    NSString *_id;
    NSString *_catId;
    NSString *_picUrl;
    NSString *_desc;
    NSString *_fatherID;
    NSString *_leafId;
    NSString *_leafName;
    NSString *_tagName;
    NSDictionary *_searchConditions;
    NSDictionary *_trackParams;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSDictionary *searchConditions; // @synthesize searchConditions=_searchConditions;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *leafName; // @synthesize leafName=_leafName;
@property(copy, nonatomic) NSString *leafId; // @synthesize leafId=_leafId;
@property(copy, nonatomic) NSString *fatherID; // @synthesize fatherID=_fatherID;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) _Bool leaf; // @synthesize leaf=_leaf;
@property(copy, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property _Bool isFiltable;
@property _Bool isSelected;
- (id)modelValue;
- (id)modelTitle;
- (id)copyCategory;

@end
