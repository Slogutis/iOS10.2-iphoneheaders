/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface CFPrefsDaemon : NSObject {

	NSObject*<OS_xpc_object> _listener;
	const char* _name;
	int _role;
	CFSetRef _sourceCache;
	os_unfair_lock_s _sourceCacheLock;
	BOOL _testMode;
	/*function pointer*/void** _shmem;

}
-(/*function pointer*/void**)shmem;
-(void)synchronousWithSourceCache:(/*^block*/id)arg1 ;
-(void)withSources:(/*^block*/id)arg1 ;
-(void)withSourceForDomain:(CFStringRef)arg1 inContainer:(CFStringRef)arg2 user:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 cloudStoreEntitlement:(id)arg6 cloudConfigurationPath:(CFStringRef)arg7 perform:(/*^block*/id)arg8 ;
-(void)getShmemName:(char*)arg1 bufLen:(unsigned long long)arg2 ;
-(void)handleSourceMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleFlushManagedMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleAgentCheckInMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleMultiMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleUserDeletedMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3 ;
-(void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_initializeShmemPage:((?)*)arg1 ;
-(void)flushDomainInAgents:(const char*)arg1 ;
-(id)initWithRole:(int)arg1 testMode:(BOOL)arg2 ;
-(BOOL)isInTestMode;
-(void)checkIn;
-(id)listener;
-(void)handleError:(id)arg1 ;
-(int)role;
-(unsigned)userID;
@end
