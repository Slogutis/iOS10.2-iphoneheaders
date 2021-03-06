/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCarKitService
@required
-(void)isPairedWithCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2;
-(void)saveVehicle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeVehicle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchAllVehiclesWithReply:(/*^block*/id)arg1;
-(void)hasVehiclesWithReply:(/*^block*/id)arg1;
-(void)handleDidConnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleDidDisconnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isBluetoothInCarWithReply:(/*^block*/id)arg1;
-(void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(id)arg2 reply:(/*^block*/id)arg3;
-(void)allowsConnectionsForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)allowsConnectionsForCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleCarPlayRestrictionChangedWithReply:(/*^block*/id)arg1;
-(void)isCarPlayAllowedWithReply:(/*^block*/id)arg1;

@end

