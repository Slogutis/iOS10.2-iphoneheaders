/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSKWarning;

@interface TSWPCharacterStyleValidateFontResult : NSObject {

	NSString* _mappedName;
	int _bold;
	int _italic;
	TSKWarning* _warning;

}

@property (nonatomic,retain) NSString * mappedName;              //@synthesize mappedName=_mappedName - In the implementation block
@property (nonatomic,retain) TSKWarning * warning;               //@synthesize warning=_warning - In the implementation block
@property (assign,nonatomic) int bold;                           //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) int italic;                         //@synthesize italic=_italic - In the implementation block
-(NSString *)mappedName;
-(void)setMappedName:(NSString *)arg1 ;
-(void)dealloc;
-(int)bold;
-(int)italic;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(void)setWarning:(TSKWarning *)arg1 ;
-(TSKWarning *)warning;
@end

