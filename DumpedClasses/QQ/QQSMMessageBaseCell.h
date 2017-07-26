//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCell.h"

#import "QQSMItemElementViewDelegate.h"
#import "SimpleAlertViewDelegate.h"

@class NSString, QQAIOSMMessageModel, QQSMItemElementBaseView;

@interface QQSMMessageBaseCell : QQAIOCell <SimpleAlertViewDelegate, QQSMItemElementViewDelegate>
{
    QQAIOSMMessageModel *_cellModel;
    QQSMItemElementBaseView *_cellView;
    _Bool _needUpdateVoiceOver;
}

@property(retain, nonatomic) QQAIOSMMessageModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) QQSMItemElementBaseView *smCellView; // @synthesize smCellView=_cellView;
@property(nonatomic) _Bool needUpdateVoiceOver; // @synthesize needUpdateVoiceOver=_needUpdateVoiceOver;
- (void).cxx_destruct;
- (void)menuActionReply:(id)arg1;
- (void)showPopupMenu;
- (void)hideMenu;
- (void)setViewAndSubviewsHighlighted:(id)arg1 highlighted:(_Bool)arg2;
- (void)menuControllerWillHide:(id)arg1;
- (id)getMenuItems;
- (void)cancelSendThirdAppShareXml:(id)arg1;
- (void)copyURL:(id)arg1;
- (void)recallMessage:(id)arg1;
- (void)collectMessage:(id)arg1;
- (void)forwardMultiMsgMessage:(id)arg1;
- (void)actionAskForMore:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)doubleForwardMessage:(id)arg1 imageCount:(unsigned long long)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)newForwardMessage:(id)arg1;
- (void)addToFaceMessage:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)LongPressCanceled:(struct CGPoint)arg1;
- (void)LongPressEnded:(struct CGPoint)arg1;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (_Bool)canForwardSingleItem:(id)arg1;
- (void)longPressAction;
- (id)dequeueReusableElementViewWithIdentifier:(id)arg1;
- (void)enqueReusableElementView:(id)arg1 withIdentifier:(id)arg2;
- (void)QQSMItemElementViewDidTouchHead:(id)arg1;
- (void)QQSMItemElementView:(id)arg1 didAction:(id)arg2;
- (struct CGRect)getContentBgRect;
- (void)layoutSubviews;
- (void)updateCellView;
- (void)setAioModel:(id)arg1;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
