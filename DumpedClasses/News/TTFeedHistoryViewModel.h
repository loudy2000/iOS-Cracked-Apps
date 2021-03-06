//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFeedMultiDeleteViewModel.h"

@class NSMutableSet;

@interface TTFeedHistoryViewModel : TTFeedMultiDeleteViewModel
{
    NSMutableSet *_deletingGroups;
    unsigned long long _historyType;
}

@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(retain, nonatomic) NSMutableSet *deletingGroups; // @synthesize deletingGroups=_deletingGroups;
- (void).cxx_destruct;
- (id)headerTextForGroup:(id)arg1;
- (id)generateParamsClearAll:(_Bool)arg1 historyType:(unsigned long long)arg2;
- (void)deleteItemsClearAll:(_Bool)arg1 historyType:(unsigned long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;

@end

