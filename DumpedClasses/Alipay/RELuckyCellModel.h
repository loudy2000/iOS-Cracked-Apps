//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface RELuckyCellModel : NSObject
{
    NSString *_cellIndentifier;
    UIView *_cellView;
    double _cellHeight;
    CDUnknownBlockType _onClick;
}

@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
@property(copy, nonatomic) NSString *cellIndentifier; // @synthesize cellIndentifier=_cellIndentifier;
- (void).cxx_destruct;
- (id)init;

@end

