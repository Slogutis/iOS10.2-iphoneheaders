/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUPairingDaemonXPCInterface.h>

@protocol OS_dispatch_queue;
@class CUPairingDaemon, NSObject, NSXPCConnection;

@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface> {

	CUPairingDaemon* _daemon;
	BOOL _pmEntitledDeleteIdentity;
	BOOL _pmEntitledRead;
	BOOL _pmEntitledRemovePeer;
	BOOL _pmEntitledWrite;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)showWithCompletion:(/*^block*/id)arg1 ;
-(int)_entitled:(id)arg1 state:(BOOL*)arg2 label:(id)arg3 ;
-(void)connectionInvalidated;
@end
