//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FMCAddCommandResponse, FMCAddSubMenuResponse, FMCAlertResponse, FMCChangeRegistrationResponse, FMCCreateInteractionChoiceSetResponse, FMCDeleteCommandResponse, FMCDeleteFileResponse, FMCDeleteInteractionChoiceSetResponse, FMCDeleteSubMenuResponse, FMCDiagnosticMessageResponse, FMCEncodedSyncPDataResponse, FMCEndAudioPassThruResponse, FMCGenericResponse, FMCGetDTCsResponse, FMCGetVehicleDataResponse, FMCListFilesResponse, FMCOnAppInterfaceUnregistered, FMCOnAudioPassThru, FMCOnButtonEvent, FMCOnButtonPress, FMCOnCommand, FMCOnDriverDistraction, FMCOnEncodedSyncPData, FMCOnHMIStatus, FMCOnHashChange, FMCOnLanguageChange, FMCOnLockScreenStatus, FMCOnPermissionsChange, FMCOnSyncPData, FMCOnSystemRequest, FMCOnTBTClientState, FMCOnTouchEvent, FMCOnVehicleData, FMCPerformAudioPassThruResponse, FMCPerformInteractionResponse, FMCPutFileResponse, FMCReadDIDResponse, FMCRegisterAppInterfaceResponse, FMCResetGlobalPropertiesResponse, FMCScrollableMessageResponse, FMCSetAppIconResponse, FMCSetDisplayLayoutResponse, FMCSetGlobalPropertiesResponse, FMCSetMediaClockTimerResponse, FMCShowConstantTBTResponse, FMCShowResponse, FMCSliderResponse, FMCSpeakResponse, FMCSubscribeButtonResponse, FMCSubscribeVehicleDataResponse, FMCSyncPDataResponse, FMCUnregisterAppInterfaceResponse, FMCUnsubscribeButtonResponse, FMCUnsubscribeVehicleDataResponse, FMCUpdateTurnListResponse, NSException;

@protocol FMCProxyListener
- (void)onProxyOpened;
- (void)onProxyClosed;
- (void)onOnHMIStatus:(FMCOnHMIStatus *)arg1;
- (void)onOnDriverDistraction:(FMCOnDriverDistraction *)arg1;

@optional
- (void)onUnsubscribeVehicleDataResponse:(FMCUnsubscribeVehicleDataResponse *)arg1;
- (void)onUnsubscribeButtonResponse:(FMCUnsubscribeButtonResponse *)arg1;
- (void)onUnregisterAppInterfaceResponse:(FMCUnregisterAppInterfaceResponse *)arg1;
- (void)onUpdateTurnListResponse:(FMCUpdateTurnListResponse *)arg1;
- (void)onSyncPDataResponse:(FMCSyncPDataResponse *)arg1;
- (void)onSubscribeVehicleDataResponse:(FMCSubscribeVehicleDataResponse *)arg1;
- (void)onSubscribeButtonResponse:(FMCSubscribeButtonResponse *)arg1;
- (void)onSpeakResponse:(FMCSpeakResponse *)arg1;
- (void)onSliderResponse:(FMCSliderResponse *)arg1;
- (void)onShowResponse:(FMCShowResponse *)arg1;
- (void)onShowConstantTBTResponse:(FMCShowConstantTBTResponse *)arg1;
- (void)onSetMediaClockTimerResponse:(FMCSetMediaClockTimerResponse *)arg1;
- (void)onSetGlobalPropertiesResponse:(FMCSetGlobalPropertiesResponse *)arg1;
- (void)onSetDisplayLayoutResponse:(FMCSetDisplayLayoutResponse *)arg1;
- (void)onSetAppIconResponse:(FMCSetAppIconResponse *)arg1;
- (void)onScrollableMessageResponse:(FMCScrollableMessageResponse *)arg1;
- (void)onResetGlobalPropertiesResponse:(FMCResetGlobalPropertiesResponse *)arg1;
- (void)onRegisterAppInterfaceResponse:(FMCRegisterAppInterfaceResponse *)arg1;
- (void)onReadDIDResponse:(FMCReadDIDResponse *)arg1;
- (void)onPutFileResponse:(FMCPutFileResponse *)arg1;
- (void)onPerformInteractionResponse:(FMCPerformInteractionResponse *)arg1;
- (void)onPerformAudioPassThruResponse:(FMCPerformAudioPassThruResponse *)arg1;
- (void)onOnVehicleData:(FMCOnVehicleData *)arg1;
- (void)onOnTouchEvent:(FMCOnTouchEvent *)arg1;
- (void)onOnTBTClientState:(FMCOnTBTClientState *)arg1;
- (void)onOnSystemRequest:(FMCOnSystemRequest *)arg1;
- (void)onOnSyncPData:(FMCOnSyncPData *)arg1;
- (void)onOnPermissionsChange:(FMCOnPermissionsChange *)arg1;
- (void)onOnLockScreenNotification:(FMCOnLockScreenStatus *)arg1;
- (void)onOnLanguageChange:(FMCOnLanguageChange *)arg1;
- (void)onOnHashChange:(FMCOnHashChange *)arg1;
- (void)onOnEncodedSyncPData:(FMCOnEncodedSyncPData *)arg1;
- (void)onOnCommand:(FMCOnCommand *)arg1;
- (void)onOnButtonPress:(FMCOnButtonPress *)arg1;
- (void)onOnButtonEvent:(FMCOnButtonEvent *)arg1;
- (void)onOnAudioPassThru:(FMCOnAudioPassThru *)arg1;
- (void)onOnAppInterfaceUnregistered:(FMCOnAppInterfaceUnregistered *)arg1;
- (void)onListFilesResponse:(FMCListFilesResponse *)arg1;
- (void)onGetVehicleDataResponse:(FMCGetVehicleDataResponse *)arg1;
- (void)onGetDTCsResponse:(FMCGetDTCsResponse *)arg1;
- (void)onGenericResponse:(FMCGenericResponse *)arg1;
- (void)onError:(NSException *)arg1;
- (void)onEndAudioPassThruResponse:(FMCEndAudioPassThruResponse *)arg1;
- (void)onEncodedSyncPDataRespons:(FMCEncodedSyncPDataResponse *)arg1;
- (void)onDiagnosticMessageResponse:(FMCDiagnosticMessageResponse *)arg1;
- (void)onDeleteSubMenuResponse:(FMCDeleteSubMenuResponse *)arg1;
- (void)onDeleteInteractionChoiceSetResponse:(FMCDeleteInteractionChoiceSetResponse *)arg1;
- (void)onDeleteFileResponse:(FMCDeleteFileResponse *)arg1;
- (void)onDeleteCommandResponse:(FMCDeleteCommandResponse *)arg1;
- (void)onCreateInteractionChoiceSetResponse:(FMCCreateInteractionChoiceSetResponse *)arg1;
- (void)onChangeRegistrationResponse:(FMCChangeRegistrationResponse *)arg1;
- (void)onAlertResponse:(FMCAlertResponse *)arg1;
- (void)onAddSubMenuResponse:(FMCAddSubMenuResponse *)arg1;
- (void)onAddCommandResponse:(FMCAddCommandResponse *)arg1;
@end

