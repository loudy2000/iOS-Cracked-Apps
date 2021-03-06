//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXMLParser;

@interface XMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *xmlParser;
    NSMutableDictionary *urlDict;
    NSMutableArray *bookMark;
    NSString *va;
    _Bool isCounter;
}

@property(retain, nonatomic) NSMutableArray *bookMark; // @synthesize bookMark;
@property(retain, nonatomic) NSMutableDictionary *urlDict; // @synthesize urlDict;
@property(retain, nonatomic) NSXMLParser *xmlParser; // @synthesize xmlParser;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithData:(id)arg1;
- (id)initWithUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

