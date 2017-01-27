/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Security.framework/IDSKeychainSyncingProxy.bundle/IDSKeychainSyncingProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSKeychainSyncingProxy/IDSServiceDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class IDSService, NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface IDSKeychainSyncingProxy : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSString* _deviceID;
	BOOL _penaltyTimerScheduled;
	BOOL _isIDSInitDone;
	BOOL _isSecDRunningAsRoot;
	BOOL _doesSecDHavePeer;
	BOOL _isLocked;
	BOOL _unlockedSinceBoot;
	BOOL _retryTimerScheduled;
	BOOL _inCallout;
	BOOL _setIDSDeviceID;
	BOOL _shadowDoSetIDSDeviceID;
	BOOL _handleAllPendingMessages;
	BOOL _shadowHandleAllPendingMessages;
	NSMutableDictionary* _unhandledMessageBuffer;
	NSMutableDictionary* _shadowPendingMessages;
	NSMutableDictionary* _allFragmentedMessages;
	NSMutableDictionary* _pingTimers;
	NSObject*<OS_dispatch_source> _penaltyTimer;
	NSMutableDictionary* _monitor;
	NSDictionary* _queuedMessages;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_source> _retryTimer;

}

@property (nonatomic,retain) NSMutableDictionary * unhandledMessageBuffer;              //@synthesize unhandledMessageBuffer=_unhandledMessageBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shadowPendingMessages;               //@synthesize shadowPendingMessages=_shadowPendingMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allFragmentedMessages;               //@synthesize allFragmentedMessages=_allFragmentedMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pingTimers;                          //@synthesize pingTimers=_pingTimers - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> penaltyTimer;                          //@synthesize penaltyTimer=_penaltyTimer - In the implementation block
@property (assign) BOOL penaltyTimerScheduled;                                          //@synthesize penaltyTimerScheduled=_penaltyTimerScheduled - In the implementation block
@property (retain) NSMutableDictionary * monitor;                                       //@synthesize monitor=_monitor - In the implementation block
@property (retain) NSDictionary * queuedMessages;                                       //@synthesize queuedMessages=_queuedMessages - In the implementation block
@property (assign) BOOL isIDSInitDone;                                                  //@synthesize isIDSInitDone=_isIDSInitDone - In the implementation block
@property (assign) BOOL isSecDRunningAsRoot;                                            //@synthesize isSecDRunningAsRoot=_isSecDRunningAsRoot - In the implementation block
@property (assign) BOOL doesSecDHavePeer;                                               //@synthesize doesSecDHavePeer=_doesSecDHavePeer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> calloutQueue;                           //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (assign) BOOL isLocked;                                                       //@synthesize isLocked=_isLocked - In the implementation block
@property (assign) BOOL unlockedSinceBoot;                                              //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> retryTimer;                            //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign) BOOL retryTimerScheduled;                                            //@synthesize retryTimerScheduled=_retryTimerScheduled - In the implementation block
@property (assign) BOOL inCallout;                                                      //@synthesize inCallout=_inCallout - In the implementation block
@property (assign) BOOL setIDSDeviceID;                                                 //@synthesize setIDSDeviceID=_setIDSDeviceID - In the implementation block
@property (assign) BOOL shadowDoSetIDSDeviceID;                                         //@synthesize shadowDoSetIDSDeviceID=_shadowDoSetIDSDeviceID - In the implementation block
@property (assign) BOOL handleAllPendingMessages;                                       //@synthesize handleAllPendingMessages=_handleAllPendingMessages - In the implementation block
@property (assign) BOOL shadowHandleAllPendingMessages;                                 //@synthesize shadowHandleAllPendingMessages=_shadowHandleAllPendingMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idsProxy;
-(id)exportState;
-(void)doIDSInitialization;
-(void)doSetIDSDeviceID;
-(void)streamEvent:(id)arg1 ;
-(void)timerFired;
-(void)importIDSState:(id)arg1 ;
-(BOOL)updateUnlockedSinceBoot;
-(BOOL)updateIsLocked;
-(void)keybagDidUnlock;
-(void)keybagStateChange;
-(void)handleAllPendingMessage;
-(void)keybagDidLock;
-(void)scheduleRetryRequestTimer;
-(void)calloutWith:(/*^block*/id)arg1 ;
-(void)persistState;
-(void)sendKeysCallout:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)unhandledMessageBuffer;
-(void)setUnhandledMessageBuffer:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)shadowPendingMessages;
-(void)setShadowPendingMessages:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allFragmentedMessages;
-(void)setAllFragmentedMessages:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pingTimers;
-(void)setPingTimers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)penaltyTimer;
-(void)setPenaltyTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)penaltyTimerScheduled;
-(void)setPenaltyTimerScheduled:(BOOL)arg1 ;
-(void)setQueuedMessages:(NSDictionary *)arg1 ;
-(BOOL)isIDSInitDone;
-(void)setIsIDSInitDone:(BOOL)arg1 ;
-(BOOL)isSecDRunningAsRoot;
-(void)setIsSecDRunningAsRoot:(BOOL)arg1 ;
-(BOOL)doesSecDHavePeer;
-(void)setDoesSecDHavePeer:(BOOL)arg1 ;
-(BOOL)retryTimerScheduled;
-(void)setRetryTimerScheduled:(BOOL)arg1 ;
-(BOOL)inCallout;
-(void)setInCallout:(BOOL)arg1 ;
-(BOOL)setIDSDeviceID;
-(void)setSetIDSDeviceID:(BOOL)arg1 ;
-(BOOL)shadowDoSetIDSDeviceID;
-(void)setShadowDoSetIDSDeviceID:(BOOL)arg1 ;
-(BOOL)handleAllPendingMessages;
-(void)setHandleAllPendingMessages:(BOOL)arg1 ;
-(BOOL)shadowHandleAllPendingMessages;
-(void)setShadowHandleAllPendingMessages:(BOOL)arg1 ;
-(void)recordTimestampOfWriteToIDS:(id)arg1 deviceName:(id)arg2 peerID:(id)arg3 ;
-(id)filterForWritableValues:(id)arg1 ;
-(BOOL)sendFragmentedIDSMessages:(id)arg1 name:(id)arg2 peer:(id)arg3 error:(id*)arg4 ;
-(void)pingDevices:(id)arg1 peerID:(id)arg2 ;
-(BOOL)sendIDSMessage:(id)arg1 name:(id)arg2 peer:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(BOOL)chunkAndSendKeychainPayload:(id)arg1 deviceID:(id)arg2 ourPeerID:(id)arg3 theirPeerID:(id)arg4 operation:(id)arg5 error:(id*)arg6 ;
-(void)pingTimerFired:(id)arg1 peerID:(id)arg2 identifier:(id)arg3 ;
-(int)countNumberOfValidObjects:(id)arg1 ;
-(void)handleTestMessage:(id)arg1 id:(id)arg2 ;
-(BOOL)checkForFragmentation:(id)arg1 id:(id)arg2 data:(id)arg3 ;
-(id)combineMessage:(id)arg1 peerID:(id)arg2 uuid:(id)arg3 ;
-(void)sendMessageToSecurity:(id)arg1 fromID:(id)arg2 ;
-(BOOL)shouldPersistMessage:(id)arg1 id:(id)arg2 ;
-(void)penaltyTimerFired:(id)arg1 deviceName:(id)arg2 peerID:(id)arg3 ;
-(id)setNewTimer:(int)arg1 key:(id)arg2 deviceName:(id)arg3 peerID:(id)arg4 ;
-(void)initializeKeyEntry:(id)arg1 ;
-(void)increasePenalty:(id)arg1 key:(id)arg2 keyEntry:(id*)arg3 deviceName:(id)arg4 peerID:(id)arg5 ;
-(void)decreasePenalty:(id)arg1 key:(id)arg2 keyEntry:(id*)arg3 deviceName:(id)arg4 peerID:(id)arg5 ;
-(id)initializeTimeTable:(id)arg1 ;
-(void)recordTimestampForAppropriateInterval:(id*)arg1 key:(id)arg2 consecutiveWrites:(id*)arg3 ;
-(id)init;
-(BOOL)isLocked;
-(NSMutableDictionary *)monitor;
-(NSDictionary *)queuedMessages;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setMonitor:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)retryTimer;
-(void)setRetryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
@end
