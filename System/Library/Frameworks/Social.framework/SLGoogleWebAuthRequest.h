/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLGoogleWebAuthRequest : NSObject
+(id)requestForURL:(id)arg1 ;
+(void)clearCookiesFromStorage:(id)arg1 ;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1 ;
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 ;
+(id)authCodeFromWebPageTitle:(id)arg1 ;
+(id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 ;
@end
