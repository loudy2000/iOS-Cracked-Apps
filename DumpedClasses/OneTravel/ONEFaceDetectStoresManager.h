//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONEFaceDetectThreadSafeDictionary;

@interface ONEFaceDetectStoresManager : NSObject
{
    ONEFaceDetectThreadSafeDictionary *_stores;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ONEFaceDetectThreadSafeDictionary *stores; // @synthesize stores=_stores;
- (void).cxx_destruct;
- (long long)storesCount;
- (void)saveStoreWithClassName:(id)arg1 instance:(id)arg2;
- (id)storeInstanceWithClassName:(id)arg1;
- (void)clearStores;
- (id)sharedStoreInstanceWithStoreClass:(Class)arg1;
- (id)init;

@end

