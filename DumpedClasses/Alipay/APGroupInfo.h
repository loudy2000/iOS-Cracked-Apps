//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APCommonItemProtocol.h"
#import "NSCopying.h"

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString;

@interface APGroupInfo : NSObject <APCommonItemProtocol, NSCopying>
{
    _Bool _gSearchIsMatchTitle;
    int _threshold;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_groupImageUrl;
    NSString *_groupBizType;
    NSString *_groupVersion;
    NSString *_groupStatus;
    NSString *_inContact;
    NSString *_beQuiet;
    NSString *_masterUserId;
    NSDate *_gmtCreate;
    NSString *_showGroupNickName;
    NSString *_isTop;
    NSDate *_queryDate;
    NSString *_permissionsDesc;
    NSString *_memberUserIdsDesc;
    NSString *_memberInfosDesc;
    NSString *_currentDisplayGroupName;
    NSString *_searchableGroupName;
    NSString *_gSearchMatchKey;
    NSString *_gSearchMatchValue;
    NSAttributedString *_gSearchMatchValueMultiString;
    NSString *_openInvSwitchValue;
    NSString *_pyIndex;
    NSString *_pyString;
    NSString *_notice;
    NSString *_noticeReadStatus;
    NSString *_noticeDisplayStatus;
    NSArray *_currentMemberIds;
    NSDictionary *_currentMemberInfos;
    NSArray *_currentPermissions;
}

@property(retain, nonatomic) NSArray *currentPermissions; // @synthesize currentPermissions=_currentPermissions;
@property(retain, nonatomic) NSDictionary *currentMemberInfos; // @synthesize currentMemberInfos=_currentMemberInfos;
@property(retain, nonatomic) NSArray *currentMemberIds; // @synthesize currentMemberIds=_currentMemberIds;
@property(retain, nonatomic) NSString *noticeDisplayStatus; // @synthesize noticeDisplayStatus=_noticeDisplayStatus;
@property(retain, nonatomic) NSString *noticeReadStatus; // @synthesize noticeReadStatus=_noticeReadStatus;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *pyString; // @synthesize pyString=_pyString;
@property(retain, nonatomic) NSString *pyIndex; // @synthesize pyIndex=_pyIndex;
@property(retain, nonatomic) NSString *openInvSwitchValue; // @synthesize openInvSwitchValue=_openInvSwitchValue;
@property(nonatomic) _Bool gSearchIsMatchTitle; // @synthesize gSearchIsMatchTitle=_gSearchIsMatchTitle;
@property(retain, nonatomic) NSAttributedString *gSearchMatchValueMultiString; // @synthesize gSearchMatchValueMultiString=_gSearchMatchValueMultiString;
@property(retain, nonatomic) NSString *gSearchMatchValue; // @synthesize gSearchMatchValue=_gSearchMatchValue;
@property(retain, nonatomic) NSString *gSearchMatchKey; // @synthesize gSearchMatchKey=_gSearchMatchKey;
@property(retain, nonatomic) NSString *searchableGroupName; // @synthesize searchableGroupName=_searchableGroupName;
@property(retain, nonatomic) NSString *currentDisplayGroupName; // @synthesize currentDisplayGroupName=_currentDisplayGroupName;
@property(retain, nonatomic) NSString *memberInfosDesc; // @synthesize memberInfosDesc=_memberInfosDesc;
@property(retain, nonatomic) NSString *memberUserIdsDesc; // @synthesize memberUserIdsDesc=_memberUserIdsDesc;
@property(retain, nonatomic) NSString *permissionsDesc; // @synthesize permissionsDesc=_permissionsDesc;
@property(retain, nonatomic) NSDate *queryDate; // @synthesize queryDate=_queryDate;
@property(retain, nonatomic) NSString *isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) NSString *showGroupNickName; // @synthesize showGroupNickName=_showGroupNickName;
@property(nonatomic) int threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *masterUserId; // @synthesize masterUserId=_masterUserId;
@property(retain, nonatomic) NSString *beQuiet; // @synthesize beQuiet=_beQuiet;
@property(retain, nonatomic) NSString *inContact; // @synthesize inContact=_inContact;
@property(retain, nonatomic) NSString *groupStatus; // @synthesize groupStatus=_groupStatus;
@property(retain, nonatomic) NSString *groupVersion; // @synthesize groupVersion=_groupVersion;
@property(retain, nonatomic) NSString *groupBizType; // @synthesize groupBizType=_groupBizType;
@property(retain, nonatomic) NSString *groupImageUrl; // @synthesize groupImageUrl=_groupImageUrl;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)isNoticeDisplayed;
- (_Bool)isNoticeUnRead;
- (id)subTitleS;
- (id)actionTypeS;
- (id)actionUrlS;
- (id)iconPathS;
- (id)titleS;
- (id)iconUrl;
- (id)primarySearchData;
- (id)commonTitle;
- (id)commonType;
- (id)commonID;
- (id)permissions;
- (_Bool)currentQuiet;
- (id)currentMasterUserId;
- (void)refreshDisplayGroupName;
@property(readonly, nonatomic) NSString *displayGroupName;
- (_Bool)containsUserId:(id)arg1;
- (unsigned long long)membersCount;
- (id)queryMemberInfo:(id)arg1;
- (void)deleteMemberInfos:(id)arg1;
- (void)insertMemberInfos:(id)arg1;
- (id)queryMemberUserIds;
- (void)deleteMemberUserIds:(id)arg1;
- (void)insertMemberUserIds:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithMOBILECHATGroupVO:(id)arg1;
- (void)updateWithSyncMembers:(id)arg1;
- (void)updateWithSyncInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

