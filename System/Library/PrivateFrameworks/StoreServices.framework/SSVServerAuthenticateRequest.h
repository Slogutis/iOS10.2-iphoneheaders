/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_xpc_object;
@class SSAuthenticationContext, NSObject, NSString;

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSObject*<OS_xpc_object> _dialog;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedDialog;                   //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithAuthenticateResponse:(/*^block*/id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedDialog;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithEncodedDialog:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
@end
