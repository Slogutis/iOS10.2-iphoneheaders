/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/VoiceOverBluetoothAlertDelegate.h>

@class NSMutableArray, NSMutableDictionary, PSSpecifier, NSString, VoiceOverBluetoothAlert, VoiceOverBluetoothSSPPairingRequest, UIAlertController, NSArray;

@interface VoiceOverBluetoothDevicesController : AccessibilityBaseListController <VoiceOverBluetoothAlertDelegate> {

	NSMutableArray* _mainSpecifiersGroup;
	NSMutableArray* _deviceSpecifiersGroup;
	NSMutableDictionary* _devicesDict;
	NSMutableDictionary* _pairingPINDict;
	BOOL _power;
	BOOL _scanningEnabled;
	BOOL _bluetoothIsBusy;
	PSSpecifier* _currentDeviceSpecifier;
	NSString* _primaryDeviceAddress;
	VoiceOverBluetoothAlert* _alert;
	VoiceOverBluetoothSSPPairingRequest* _sspAlert;
	BOOL _togglingPower;
	unsigned _authorizedServices;
	UIAlertController* _powerAlert;

}

@property (assign,nonatomic) BOOL scanningEnabled;                          //@synthesize scanningEnabled=_scanningEnabled - In the implementation block
@property (assign,nonatomic) BOOL bluetoothIsBusy;                          //@synthesize bluetoothIsBusy=_bluetoothIsBusy - In the implementation block
@property (nonatomic,readonly) PSSpecifier * currentSpecifier;              //@synthesize currentDeviceSpecifier=_currentDeviceSpecifier - In the implementation block
@property (nonatomic,retain) NSString * primaryDeviceAddress;               //@synthesize primaryDeviceAddress=_primaryDeviceAddress - In the implementation block
@property (nonatomic,retain) NSArray * mainSpecifiersGroup;                 //@synthesize mainSpecifiersGroup=_mainSpecifiersGroup - In the implementation block
@property (assign,nonatomic) unsigned authorizedServices;                   //@synthesize authorizedServices=_authorizedServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)scanningEnabled;
-(void)_startConnectable;
-(id)bluetoothPowerAlertMessage;
-(void)_sspConfirmationHandler:(id)arg1 ;
-(void)showBluetoothPowerAlert:(BOOL)arg1 ;
-(void)deviceConnected:(id)arg1 ;
-(void)_showScanningUI:(BOOL)arg1 ;
-(void)_sspPasskeyDisplayHandler:(id)arg1 ;
-(void)setMainSpecifiersGroup:(NSArray *)arg1 ;
-(void)_pinRequestHandler:(id)arg1 ;
-(void)_startDiscoverable;
-(id)devicesGroupName;
-(NSString *)primaryDeviceAddress;
-(void)_stopDiscoverable;
-(id)_pairedDeviceSpecifiers;
-(void)_sspNumericComparisonHandler:(id)arg1 ;
-(id)bluetoothPoweredOffFooter;
-(void)_showBluetoothPowerFooter:(BOOL)arg1 ;
-(BOOL)shouldAddDevice:(id)arg1 ;
-(NSArray *)mainSpecifiersGroup;
-(void)setPrimaryDeviceAddress:(NSString *)arg1 ;
-(void)setScanningEnabled:(BOOL)arg1 ;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(void)handleReloadSpecifiers;
-(void)primaryDeviceWasUnpaired;
-(void)_stopConnectable;
-(BOOL)_isBluetoothPowerFooterShowing;
-(unsigned)authorizedServices;
-(BOOL)bluetoothIsBusy;
-(void)_startScanning;
-(void)_cleanupPairing;
-(void)_stopScanning;
-(id)init;
-(void)dealloc;
-(id)window;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)devicePairedHandler:(id)arg1 ;
-(void)reloadSpecifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)_addDevice:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)deviceDiscoveredHandler:(id)arg1 ;
-(void)deviceUpdatedHandler:(id)arg1 ;
-(void)deviceRemovedHandler:(id)arg1 ;
-(void)deviceUnpairedHandler:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)setBluetoothIsBusy:(BOOL)arg1 ;
-(id)_specifierForDevice:(id)arg1 ;
-(void)_updateDevicePosition:(id)arg1 ;
-(PSSpecifier *)currentSpecifier;
-(id)specifiers;
@end

