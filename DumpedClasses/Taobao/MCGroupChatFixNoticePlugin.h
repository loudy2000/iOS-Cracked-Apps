//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCGroupChatHaderViewDataSourceDelegate.h"
#import "MCGroupFixDataSourceDelegate.h"
#import "MCGroupFixItemViewDelegate.h"
#import "MCGroupFixViewDelegate.h"
#import "MCPluginBaseProtocol.h"
#import "TBIMGroupServiceDelegate.h"

@class MCGroupFixView, MCGroupTopNoticeDO, MCTemplateObject, NSDictionary, NSString;

@interface MCGroupChatFixNoticePlugin : NSObject <MCGroupFixDataSourceDelegate, TBIMGroupServiceDelegate, MCGroupChatHaderViewDataSourceDelegate, MCGroupFixItemViewDelegate, MCGroupFixViewDelegate, MCPluginBaseProtocol>
{
    _Bool _isFixViewTap;
    id <MCPluginChatPageContextProtocol> _chatPageContext;
    id <TBIMGroupAdapter> _group;
    id <MCGroupFixDataSourceProtocol> _groupFixDataSource;
    MCGroupFixView *_groupFixView;
    id <MCGroupChatHaderViewDataSourceProtocol> _groupChatHeaderDataSource;
    MCTemplateObject *_chatGroupTemplate;
    MCGroupTopNoticeDO *_groupTopNoticeDO;
}

@property(nonatomic) _Bool isFixViewTap; // @synthesize isFixViewTap=_isFixViewTap;
@property(retain, nonatomic) MCGroupTopNoticeDO *groupTopNoticeDO; // @synthesize groupTopNoticeDO=_groupTopNoticeDO;
@property(retain, nonatomic) MCTemplateObject *chatGroupTemplate; // @synthesize chatGroupTemplate=_chatGroupTemplate;
@property(nonatomic) __weak id <MCGroupChatHaderViewDataSourceProtocol> groupChatHeaderDataSource; // @synthesize groupChatHeaderDataSource=_groupChatHeaderDataSource;
@property(retain, nonatomic) MCGroupFixView *groupFixView; // @synthesize groupFixView=_groupFixView;
@property(nonatomic) __weak id <MCGroupFixDataSourceProtocol> groupFixDataSource; // @synthesize groupFixDataSource=_groupFixDataSource;
@property(retain, nonatomic) id <TBIMGroupAdapter> group; // @synthesize group=_group;
@property(retain, nonatomic) id <MCPluginChatPageContextProtocol> chatPageContext; // @synthesize chatPageContext=_chatPageContext;
- (void).cxx_destruct;
- (void)groupFixViewEmptyClick:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)loadTemplate:(id)arg1 error:(id)arg2;
- (void)loadNoticeByCCode:(id)arg1 notice:(id)arg2 error:(id)arg3;
- (void)groupFixItemView:(id)arg1 timeBcViewTapped:(id)arg2;
- (void)groupFixItemView:(id)arg1 containerViewTapped:(id)arg2;
- (id)timeStrWithTimeInterval:(double)arg1;
- (void)updateTimeWithInterval:(double)arg1;
- (void)checkExpiredIfNeedExcBlock:(CDUnknownBlockType)arg1;
- (void)setupFixView;
- (void)checkTopNotice;
- (void)checkCountdown;
- (id)getGroupChatFixInfoDO;
- (void)unSetupFixView;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

