/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource, NSString;

@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (nonatomic,copy) NSArray * aceAirQualities; 
@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,retain) SAUIImageResource * attributionImage; 
@property (nonatomic,copy) NSString * title; 
+(id)airQualitySnippet;
+(id)airQualitySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)aceAirQualities;
-(void)setAceAirQualities:(NSArray *)arg1 ;
-(void)setAttributionImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)attributionImage;
@end

