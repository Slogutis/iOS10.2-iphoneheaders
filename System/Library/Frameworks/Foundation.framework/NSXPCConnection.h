/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSXPCInterface, NSString, NSXPCListenerEndpoint, NSBundle, NSSet;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {

	void* _xconnection;
	id _repliesExpected;
	NSObject*<OS_dispatch_queue> _userQueue;
	unsigned _state;
	unsigned _state2;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	id _exportInfo;
	id _repliesRequested;
	id _importInfo;
	id<NSObject> _otherInfo;
	id _reserved1;
	id _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSString* _serviceName;
	NSXPCListenerEndpoint* _endpoint;
	id _eCache;
	id _dCache;

}

@property (nonatomic,copy,readonly) NSString * cx_applicationIdentifier; 
@property (nonatomic,copy,readonly) NSString * cx_developerTeamIdentifier; 
@property (nonatomic,readonly) NSBundle * cx_bundle; 
@property (nonatomic,copy,readonly) NSString * cx_processName; 
@property (nonatomic,readonly) BOOL cx_hasVoIPBackgroundMode; 
@property (nonatomic,copy,readonly) NSSet * cx_capabilities; 
@property (nonatomic,readonly) BOOL hk_isAppExtension; 
@property (nonatomic,copy,readonly) NSString * hk_bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * hk_signingIdentifier; 
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) NSString * processBundleIdentifier; 
@property (copy,readonly) NSString * serviceName; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
@property (retain) NSXPCInterface * exportedInterface; 
@property (retain) id exportedObject; 
@property (retain) NSXPCInterface * remoteObjectInterface;                              //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (retain,readonly) id remoteObjectProxy; 
@property (copy) id interruptionHandler; 
@property (copy) id invalidationHandler; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
+(id)callServicesDaemonDelegateXPCInterface;
+(id)callServicesClientXPCInterface;
+(id)currentConnection;
+(id)_currentBoost;
+(void)beginTransaction;
+(void)endTransaction;
-(BOOL)cx_hasVoIPBackgroundMode;
-(NSString *)cx_applicationIdentifier;
-(NSBundle *)cx_bundle;
-(NSSet *)cx_capabilities;
-(NSString *)cx_developerTeamIdentifier;
-(NSString *)cx_processName;
-(id)initCellularPlanDatabaseClient;
-(id)initVinylTestClient;
-(NSString *)hk_bundleIdentifier;
-(NSString *)hk_signingIdentifier;
-(BOOL)hk_isAppExtension;
-(id)sl_localizedClientName;
-(BOOL)sl_clientHasEntitlement:(id)arg1 ;
-(id)_clientBundleID;
-(id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1 ;
-(id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSString *)processName;
-(NSString *)processBundleIdentifier;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(void)_killConnection:(int)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(id)_errorDescription;
-(id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)_generationCount;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(/*^block*/id)arg4 timeout:(double)arg5 userInfo:(id)arg6 ;
-(void)_pauseProgress:(unsigned long long)arg1 ;
-(void)_resumeProgress:(unsigned long long)arg1 ;
-(void)_decodeAndInvokeReplyBlockWithData:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3 ;
-(void)_sendDesistForProxy:(id)arg1 ;
-(void)_decodeAndInvokeMessageWithData:(id)arg1 ;
-(id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 ;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(/*^block*/id)arg4 ;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(id)_exportTable;
-(id)replacementObjectForEncoder:(id)arg1 object:(id)arg2 ;
-(BOOL)_encodeCacheContainsClass:(Class)arg1 ;
-(void)_addClassToEncodeCache:(Class)arg1 ;
-(BOOL)_decodeCacheContainsClass:(Class)arg1 ;
-(void)_addClassToDecodeCache:(Class)arg1 ;
-(id)exportedObject;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_addImportedProxy:(id)arg1 ;
-(void)_removeImportedProxy:(id)arg1 ;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(void)_setTargetUserIdentifier:(unsigned)arg1 ;
-(void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2 ;
-(void)_decodeProgressMessageWithData:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)invalidate;
-(id)userInfo;
-(void)suspend;
-(void)stop;
-(id)_queue;
-(void)start;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)resume;
-(NSXPCInterface *)exportedInterface;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_xpcConnection;
-(int)processIdentifier;
-(SCD_Struct_NS83)auditToken;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSXPCInterface *)remoteObjectInterface;
-(void)_setUUID:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(NSString *)serviceName;
-(void)_cancelProgress:(unsigned long long)arg1 ;
@end

