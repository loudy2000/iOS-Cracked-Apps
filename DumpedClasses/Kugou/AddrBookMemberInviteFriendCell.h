//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AddrBookMemberCell.h"

#import "AddrBookMemberCellAdapter.h"

@class AddrBookMember, KGThemeLabel, NSString;

@interface AddrBookMemberInviteFriendCell : AddrBookMemberCell <AddrBookMemberCellAdapter>
{
    KGThemeLabel *_nameLabel;
    AddrBookMember *_member;
}

@property(readonly, nonatomic) AddrBookMember *member; // @synthesize member=_member;
@property(retain, nonatomic) KGThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)feedCellWithItem:(id)arg1;
- (void)createContentViewInConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

