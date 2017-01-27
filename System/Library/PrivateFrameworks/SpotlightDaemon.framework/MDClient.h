/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXPCProxyCreating;
@class NSXPCConnection, NSNumber, NSString;

@interface MDClient : NSObject {

	NSXPCConnection* _connection;
	id<NSXPCProxyCreating> _clientLink;
	NSNumber* _processID;
	NSString* _processName;
	NSString* _bundleID;

}

@property (retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (retain) id<NSXPCProxyCreating> clientLink;              //@synthesize clientLink=_clientLink - In the implementation block
@property (retain) NSNumber * processID;                           //@synthesize processID=_processID - In the implementation block
@property (retain) NSString * processName;                         //@synthesize processName=_processName - In the implementation block
@property (retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)processName;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setProcessID:(NSNumber *)arg1 ;
-(NSNumber *)processID;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setClientLink:(id<NSXPCProxyCreating>)arg1 ;
-(id<NSXPCProxyCreating>)clientLink;
@end
