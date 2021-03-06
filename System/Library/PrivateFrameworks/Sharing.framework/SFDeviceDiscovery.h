/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSSet;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	unsigned long long _activateTicks;
	NSObject*<OS_dispatch_source> _consoleUserTimer;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _legacy;
	NSXPCConnection* _xpcCnx;
	BOOL _scanCache;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	NSSet* _deviceFilter;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	unsigned long long _discoveryFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	long long _rssiThreshold;
	long long _scanRate;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSSet * deviceFilter;                                      //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryFlags;                       //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) long long scanRate;                                      //@synthesize scanRate=_scanRate - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(long long)scanRate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setScanRate:(long long)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setDeviceFilter:(NSSet *)arg1 ;
-(void)setRssiThreshold:(long long)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(unsigned)changeFlags;
-(NSSet *)deviceFilter;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(long long)rssiThreshold;
-(BOOL)scanCache;
-(void)_invalidated;
-(int)_ensureXPCStarted;
-(void)deviceDiscoveryFoundDevice:(id)arg1 ;
-(void)deviceDiscoveryLostDevice:(id)arg1 ;
-(void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(void)_retryConsole;
-(unsigned long long)discoveryFlags;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
@end

