//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeLabel, KGThemeView, NSString, UIColor;

@interface KGCommentBaseSectionTableViewCell : UITableViewCell
{
    _Bool _isNotAutoChangeColorByTheme;
    NSString *_indexTitle;
    double _sectionTableViewCellHeight;
    double _sectionTableViewCellFlagViewY;
    UIColor *_indexTitleColor;
    UIColor *_indexFlagColor;
    KGThemeLabel *_indexTitleLabel;
    KGThemeView *_indexFlagView;
}

@property(retain, nonatomic) KGThemeView *indexFlagView; // @synthesize indexFlagView=_indexFlagView;
@property(retain, nonatomic) KGThemeLabel *indexTitleLabel; // @synthesize indexTitleLabel=_indexTitleLabel;
@property(retain, nonatomic) UIColor *indexFlagColor; // @synthesize indexFlagColor=_indexFlagColor;
@property(retain, nonatomic) UIColor *indexTitleColor; // @synthesize indexTitleColor=_indexTitleColor;
@property(nonatomic) _Bool isNotAutoChangeColorByTheme; // @synthesize isNotAutoChangeColorByTheme=_isNotAutoChangeColorByTheme;
@property(nonatomic) double sectionTableViewCellFlagViewY; // @synthesize sectionTableViewCellFlagViewY=_sectionTableViewCellFlagViewY;
@property(nonatomic) double sectionTableViewCellHeight; // @synthesize sectionTableViewCellHeight=_sectionTableViewCellHeight;
@property(retain, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
- (void).cxx_destruct;
- (void)refreshAllItemColor;
- (void)createUI;
- (void)p_initProperty;
- (void)dealloc;
- (id)initWithCommentData;

@end

