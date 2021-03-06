/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceReferable.h>

@class NSString;

@interface SABaseAceObject : AceObject <SAAceReferable>

@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * metricsContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseAceObject;
+(id)baseAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)metricsContext;
-(void)setMetricsContext:(NSString *)arg1 ;
-(NSString *)aceId;
@end

