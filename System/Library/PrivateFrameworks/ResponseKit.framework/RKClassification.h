/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RKClassification : NSObject {

	int _sensitive;
	NSString* _language;
	unsigned long long _sentenceType;
	unsigned long long _gender;
	NSArray* _customResponses;
	NSString* _taggedText;
	NSArray* _sentenceEntities;

}

@property (retain) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign) unsigned long long sentenceType;              //@synthesize sentenceType=_sentenceType - In the implementation block
@property (getter=isSensitive) int sensitive;                    //@synthesize sensitive=_sensitive - In the implementation block
@property (assign) unsigned long long gender;                    //@synthesize gender=_gender - In the implementation block
@property (retain) NSArray * customResponses;                    //@synthesize customResponses=_customResponses - In the implementation block
@property (retain) NSString * taggedText;                        //@synthesize taggedText=_taggedText - In the implementation block
@property (retain) NSArray * sentenceEntities;                   //@synthesize sentenceEntities=_sentenceEntities - In the implementation block
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)sentenceType;
-(void)setSentenceType:(unsigned long long)arg1 ;
-(NSArray *)sentenceEntities;
-(int)isSensitive;
-(NSArray *)customResponses;
-(void)setCustomResponses:(NSArray *)arg1 ;
-(NSString *)taggedText;
-(void)setTaggedText:(NSString *)arg1 ;
-(void)setSentenceEntities:(NSArray *)arg1 ;
-(void)setSensitive:(int)arg1 ;
@end

