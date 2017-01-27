/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYIncomingFullSyncSession.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableIndexSet, NSMutableArray;

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {

	NSObject*<OS_dispatch_source> _sessionTimer;
	NSMutableIndexSet* _receivedBatchIndices;
	BOOL _hasReceivedEndSync;
	/*^block*/id _completion;
	os_unfair_lock_s _queueLock;
	NSMutableArray* _incomingBatchQueue;
	BOOL canRestart;
	BOOL canRollback;

}
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithService:(id)arg1 ;
@end
