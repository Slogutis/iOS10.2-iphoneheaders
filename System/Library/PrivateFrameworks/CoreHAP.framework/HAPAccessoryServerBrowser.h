/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HAPKeyStore;
@class NSObject;

@interface HAPAccessoryServerBrowser : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	long long _linkType;
	id<HAPKeyStore> _keyStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<HAPKeyStore> keyStore;                            //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) long long linkType;                                //@synthesize linkType=_linkType - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)linkType;
-(id<HAPKeyStore>)keyStore;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
@end

