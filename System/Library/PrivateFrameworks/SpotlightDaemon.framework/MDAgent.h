/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXPCProxyCreating;
@class MDAgentDelegate, NSString;

@interface MDAgent : NSObject {

	MDAgentDelegate* _delegate;
	id<NSXPCProxyCreating> _clientLink;
	NSString* _processDescription;

}

@property (retain) id<NSXPCProxyCreating> clientLink;                    //@synthesize clientLink=_clientLink - In the implementation block
@property (__weak) MDAgentDelegate * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * processDescription;              //@synthesize processDescription=_processDescription - In the implementation block
+(id)xpcInterface;
+(id)machServiceName;
+(id)clientXPCInterface;
+(id)clientBundleIDForConnection:(id)arg1 ;
-(void)setDelegate:(MDAgentDelegate *)arg1 ;
-(MDAgentDelegate *)delegate;
-(void)setClientLink:(id<NSXPCProxyCreating>)arg1 ;
-(void)setProcessDescription:(NSString *)arg1 ;
-(id<NSXPCProxyCreating>)clientLink;
-(id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3 ;
-(id)_clientForBundleID:(id)arg1 ;
-(NSString *)processDescription;
@end

