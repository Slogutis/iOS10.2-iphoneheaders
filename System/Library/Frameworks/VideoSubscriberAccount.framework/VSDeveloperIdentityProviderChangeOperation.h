/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, VSFailable, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	long long _changeKind;
	VSFailable* _result;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) VSFailable * result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;              //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic) long long changeKind;                               //@synthesize changeKind=_changeKind - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(id)_serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)executionDidBegin;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setChangeKind:(long long)arg1 ;
-(long long)changeKind;
@end

