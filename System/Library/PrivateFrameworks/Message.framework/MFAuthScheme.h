/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAuthScheme : NSObject
+(void)initialize;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(void)registerSchemeClass:(Class)arg1 ;
+(id)authSchemesForAccount:(id)arg1 connection:(id)arg2 ;
-(id)name;
-(BOOL)requiresPassword;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(Class)authenticatorClass;
-(unsigned)defaultPortForAccount:(id)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(id)humanReadableName;
@end

