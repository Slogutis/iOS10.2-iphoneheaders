/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerResponseHandler : NSObject
-(void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2 ;
@end
