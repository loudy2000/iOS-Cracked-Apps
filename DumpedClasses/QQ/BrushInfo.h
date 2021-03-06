//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class UIColor;

@interface BrushInfo : QQModel <NSCopying>
{
    _Bool _drawScreenPoint;
    int _faceIndex;
    float _faceWidth;
    float _faceAngles0;
    float _faceAngles1;
    float _faceAngles2;
    UIColor *_faceColor;
}

@property(retain, nonatomic) UIColor *faceColor; // @synthesize faceColor=_faceColor;
@property(nonatomic) float faceAngles2; // @synthesize faceAngles2=_faceAngles2;
@property(nonatomic) float faceAngles1; // @synthesize faceAngles1=_faceAngles1;
@property(nonatomic) float faceAngles0; // @synthesize faceAngles0=_faceAngles0;
@property(nonatomic) float faceWidth; // @synthesize faceWidth=_faceWidth;
@property(nonatomic) int faceIndex; // @synthesize faceIndex=_faceIndex;
@property(nonatomic) _Bool drawScreenPoint; // @synthesize drawScreenPoint=_drawScreenPoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

