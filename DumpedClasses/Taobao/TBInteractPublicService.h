//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBInteractServiceProtocol.h"

@class NSString;

@interface TBInteractPublicService : NSObject <TBInteractServiceProtocol>
{
}

+ (void)uploadDatas:(id)arg1 fileName:(id)arg2 viaUploader:(Class)arg3 completion:(CDUnknownBlockType)arg4 uploadProgress:(CDUnknownBlockType)arg5;
+ (void)uploadFiles:(id)arg1 viaUploader:(Class)arg2 completion:(CDUnknownBlockType)arg3 uploadProgress:(CDUnknownBlockType)arg4;
+ (void)uploadDatasViaMTOP:(id)arg1 fileName:(id)arg2 bizCode:(id)arg3 userNick:(id)arg4 completion:(CDUnknownBlockType)arg5 uploadProgress:(CDUnknownBlockType)arg6;
+ (void)uploadFilesViaMTOP:(id)arg1 bizCode:(id)arg2 userNick:(id)arg3 completion:(CDUnknownBlockType)arg4 uploadProgress:(CDUnknownBlockType)arg5;
+ (void)audioRecordFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)videoRecordFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)innerSettingWithSetting:(id)arg1;
+ (void)editImageFromViewController:(id)arg1 withSetting:(id)arg2 image:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)ablumSelectFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)takePhotoFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)publishPhotoFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

