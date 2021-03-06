/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
-(void)setSource:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)source;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceLine:(int)arg1 ;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
@end

