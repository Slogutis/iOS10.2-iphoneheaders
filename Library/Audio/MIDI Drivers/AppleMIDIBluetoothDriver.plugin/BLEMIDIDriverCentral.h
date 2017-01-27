/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMIDIBluetoothDriver/AppleMIDIBluetoothDriver-Structs.h>
#import <AppleMIDIBluetoothDriver/CBCentralManagerDelegate.h>
#import <AppleMIDIBluetoothDriver/CBPeripheralDelegate.h>

@class CBCentralManager, NSMutableArray, NSString;

@interface BLEMIDIDriverCentral : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* connectedDevices;
	NSMutableArray* connectedPeripherals;
	NSMutableArray* peripheralsToConnect;
	MIDIDriverInterface* driver;
	unsigned long long connectionIntervalNanos;
	BOOL leCapable;

}

@property (nonatomic,readonly) CBCentralManager * centralManager; 
@property (nonatomic,readonly) MIDIDriverInterface* driver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeDeviceForPeripheral:(id)arg1 ;
-(void)activateUUID:(id)arg1 withName:(id)arg2 ;
-(void)checkChangeDeviceName:(unsigned)arg1 withName:(id)arg2 ;
-(void)resetDevice:(unsigned)arg1 ;
-(BOOL)isAlreadyConnectedAsCentral:(id)arg1 ;
-(void)removeDeviceForUUID:(id)arg1 ;
-(BOOL)verifyUUIDDiscovery:(id)arg1 ;
-(void)activateConnectedUUIDs;
-(void)resetAllConnectedDevices;
-(id)deviceForPeripheral:(id)arg1 ;
-(id)deviceForUUID:(id)arg1 ;
-(id)peripheralWithUUID:(id)arg1 ;
-(unsigned)createDevice:(id)arg1 ;
-(void)cancelAllConnections;
-(id)deviceForEP:(unsigned)arg1 ;
-(BOOL)verifyBLEDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)connectDevice:(unsigned)arg1 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(CBCentralManager *)centralManager;
-(BOOL)isLECapableHardware;
-(void)disconnectDevice:(unsigned)arg1 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)stopScan;
-(void)centralManager:(id)arg1 didUpdateConnectionParameters:(id)arg2 interval:(id)arg3 latency:(id)arg4 supervisionTimeout:(id)arg5 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(MIDIDriverInterface*)driver;
-(id)initWithDriver:(MIDIDriverInterface*)arg1 ;
-(void)startScan;
@end
