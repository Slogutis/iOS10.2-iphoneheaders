/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSWPSmartField.h>
#import <iWorkImport/TSWPCitationRecordHosting.h>

@class NSArray, NSString;

@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting> {

	NSArray* _citationRecords;
	BOOL _isLocalizable;

}

@property (nonatomic,copy) NSArray * citationRecords; 
@property (assign,nonatomic) BOOL isLocalizable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidBibliographyField:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)allowsPasteAsSmartField;
-(BOOL)isLocalizable;
-(void)setIsLocalizable:(BOOL)arg1 ;
-(void)setCitationRecords:(NSArray *)arg1 ;
-(NSArray *)citationRecords;
-(id)citationSmartFields;
-(void)dealloc;
@end
