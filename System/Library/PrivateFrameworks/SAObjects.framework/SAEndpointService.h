/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointService : SAEndpoint

@property (nonatomic,copy) NSString * serverUrl; 
+(id)endpointService;
+(id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)serverUrl;
-(void)setServerUrl:(NSString *)arg1 ;
@end
