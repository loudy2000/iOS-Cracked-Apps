//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARTVCBaseICEMessage, ARTVCBaseRoomMessage;

@protocol ARTCVSignalSendDelegate <NSObject>
- (void)sendICEMessage:(ARTVCBaseICEMessage *)arg1;
- (void)leaveRoom:(ARTVCBaseRoomMessage *)arg1;
- (void)joinRoom:(ARTVCBaseRoomMessage *)arg1;
- (void)createRoom:(ARTVCBaseRoomMessage *)arg1;
@end
