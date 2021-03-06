//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYCCategory, DYCClass;

@interface DYCJavaScriptModuleParser : NSObject
{
    DYCClass *_buildingClass;
    DYCCategory *_buildingCategory;
}

@property(nonatomic) __weak DYCCategory *buildingCategory; // @synthesize buildingCategory=_buildingCategory;
@property(nonatomic) __weak DYCClass *buildingClass; // @synthesize buildingClass=_buildingClass;
- (void).cxx_destruct;
- (id)parseMethods:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseIvars:(id)arg1;
- (id)parseCvars:(id)arg1;
- (id)parseFunctions:(id)arg1;
- (id)parseProtocols:(id)arg1;
- (id)parseCategories:(id)arg1;
- (id)parseClasses:(id)arg1;
- (void)parseSymbolTable:(id)arg1;
- (id)parseMetadata:(id)arg1;
- (_Bool)parseSourceData:(id)arg1 intoModuleRoot:(id)arg2 error:(id *)arg3;

@end

