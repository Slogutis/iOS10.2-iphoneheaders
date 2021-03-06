/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString, NSMutableDictionary;

@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate> {

	NSMutableArray* _allTagSpecifications;
	NSMutableArray* _stackOfElements;
	NSString* _matchedTagSpecification;
	NSMutableDictionary* _resultTagContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)addTagSpecificationForExtraction:(id)arg1 ;
-(void)parseWithData:(id)arg1 ;
-(id)getDataForTagSpecification:(id)arg1 ;
-(void)_parseWithXMLParser:(id)arg1 ;
-(void)_resetScanningState;
-(id)_matchSpecificationWithAttributes:(id)arg1 ;
-(void)parseWithStream:(id)arg1 ;
@end

