//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBMyTaobaoActivityNewItem>;

@interface TBMyTaobaoActivityModel : TBJSONModel
{
    _Bool _isOpened;
    NSArray<TBMyTaobaoActivityNewItem> *_list;
}

@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(retain, nonatomic) NSArray<TBMyTaobaoActivityNewItem> *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (_Bool)exist;

@end

