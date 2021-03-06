//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTFlightTagManagerModel : NSObject
{
    _Bool _bold;
    _Bool _isLargeFont;
    int _pageType;
    int _tagIndex;
    int _tagType;
    int _subTagType;
    NSString *_backgroundColor;
    NSString *_textColor;
    NSString *_text;
    double _width;
    double _height;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isLargeFont; // @synthesize isLargeFont=_isLargeFont;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int subTagType; // @synthesize subTagType=_subTagType;
@property(nonatomic) int tagType; // @synthesize tagType=_tagType;
@property(nonatomic) int tagIndex; // @synthesize tagIndex=_tagIndex;
@property(nonatomic) int pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithCachebean:(id)arg1;

@end

