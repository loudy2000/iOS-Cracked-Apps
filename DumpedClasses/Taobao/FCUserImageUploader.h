//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBSDKUploadService;

@interface FCUserImageUploader : NSObject
{
    TBSDKUploadService *_sdkUploadService;
}

+ (id)sharedInstace;
@property(retain, nonatomic) TBSDKUploadService *sdkUploadService; // @synthesize sdkUploadService=_sdkUploadService;
- (void).cxx_destruct;
- (void)uploadPictureWithPath:(id)arg1 bizCode:(id)arg2 result:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (void)uploadBackgroundImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadAvatarImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)randomJPGFilename;
- (id)avatarImageCacheWithPath:(id)arg1;

@end

