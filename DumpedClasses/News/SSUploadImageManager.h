//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSOperationQueue;

@interface SSUploadImageManager : NSObject
{
    unsigned long long _uploadTotalSize;
    double _uploadSize;
    _Bool _cancelUpload;
    id <SSUploadImageManagerDelegate> _delegate;
    unsigned long long _currentUploadTaskIndex;
    NSOperationQueue *_operationQueue;
    NSDictionary *_uploadTasks;
    NSMutableArray *_finishResults;
}

+ (id)imageUniqueKey:(id)arg1;
+ (id)imageDataForImage:(id)arg1 withMaxAspectSize:(struct CGSize)arg2 withMaxDataSize:(double)arg3;
@property(retain, nonatomic) NSMutableArray *finishResults; // @synthesize finishResults=_finishResults;
@property(retain, nonatomic) NSDictionary *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) unsigned long long currentUploadTaskIndex; // @synthesize currentUploadTaskIndex=_currentUploadTaskIndex;
@property(nonatomic) _Bool cancelUpload; // @synthesize cancelUpload=_cancelUpload;
@property(nonatomic) __weak id <SSUploadImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)uploadProgress:(id)arg1;
- (void)operation:(id)arg1 didUploadImage:(id)arg2 error:(id)arg3;
- (void)cancelAllOperation;
- (void)uploadImages:(id)arg1 uniqueKey:(id)arg2 withMaxAspectSize:(struct CGSize)arg3 withMaxDataSize:(double)arg4;
- (void)uploadImages:(id)arg1 uniqueKey:(id)arg2;
- (void)uploadImageData:(id)arg1 uniqueKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

