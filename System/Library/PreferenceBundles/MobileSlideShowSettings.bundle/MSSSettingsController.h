/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/CPLDiagnoseServiceClientProtocol.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class PSSpecifier, NSArray, UIProgressHUD, RadiosPreferences, NSXPCConnection, PSCloudStorageOffersManager, CPLStatus, NSString;

@interface MSSSettingsController : PSListController <PSCloudStorageOffersManagerDelegate, CPLStatusDelegate, CPLDiagnoseServiceClientProtocol, RadiosPreferencesDelegate> {

	PSSpecifier* _iCloudPhotosSwitchSpecifier;
	NSArray* _allCloudPhotosSpecifiers;
	NSArray* _photoStreamSwitchSpecifiers;
	NSArray* _sharedStreamsSwitchSpecifiers;
	NSArray* _iCloudPhotoLibraryConditionalSpecifiers;
	NSArray* _photoStreamAvalancheSpecifiers;
	UIProgressHUD* _displayedSpinner;
	RadiosPreferences* _radiosPreferences;
	unsigned char _originalCellFlag;
	unsigned char _originalWiFiFlag;
	long long _wifiAvailable;
	BOOL _cloudPhotosEnabled;
	BOOL _avalancheAllowed;
	BOOL _accountModificationAllowed;
	unsigned _showAirplaneModeAlertWhenViewLoads : 1;
	unsigned _showWifiUnavailableWhenViewLoads : 1;
	unsigned _inAirplaneMode : 1;
	unsigned _observingNetworkChanges : 1;
	unsigned _stoppedObservingNetworkChangesBecauseUIDisappeared : 1;
	unsigned _photoStreamEnabled : 1;
	unsigned _sharedStreamsEnabled : 1;
	unsigned _shownFromAccountSettings : 1;
	NSXPCConnection* _diagnoseServiceConnection;
	PSCloudStorageOffersManager* _offersManager;
	BOOL _requireStorageUpgradeForCPL;
	CPLStatus* _cplStatus;
	BOOL _isCPLInExitMode;
	long long _rampStatus;
	BOOL _performingRampStatusUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPhotoStreamsEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoStreamsEnabledFromBuddyWorkflow:(id)arg1 ;
+(void)setPhotoSharingEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoSharingEnabledFromBuddyWorkflow:(id)arg1 ;
+(BOOL)shouldOfferHyperionInBuddy;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)reloadSpecifiers;
-(void)pushController:(id)arg1 ;
-(void)statusDidChange:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)_continueWithoutStoragePurchase:(id)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(BOOL)_shownFromAccountSettings;
-(void)_wifiReachabilityChanged:(id)arg1 ;
-(void)_clearCachedSpecifiers;
-(void)_initializeUserAccountAndSpecifiers;
-(id)diagnoseServiceConnection;
-(void)diagnosticServiceStateDidChange:(char)arg1 ;
-(void)_updateCloudPhotoFooterTextAnimated:(BOOL)arg1 ;
-(void)_updateKeepOriginalsFooterTextAnimated:(BOOL)arg1 ;
-(BOOL)_shouldHideCPL;
-(void)_hideDisplayedSpinner;
-(void)_setPhotoStreamEnabled:(BOOL)arg1 ;
-(BOOL)_photoStreamAssetsWillBeDeletedIfTurnedOff;
-(void)_showSpinnerForDuration:(double)arg1 withText:(id)arg2 ;
-(void)_confirmWithTitle:(id)arg1 message:(id)arg2 confirmationButtonTitle:(id)arg3 cancelButtonTtle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_setSharedStreamsEnabled:(BOOL)arg1 ;
-(void)_enableCloudPhotosIgnoringStorageLimits:(BOOL)arg1 ;
-(void)_beginCloudPhotosDisableFlow;
-(void)updateDiagnoseButtonWithState:(char)arg1 ;
-(BOOL)_avalancheUploadOnlyPicks;
-(void)_updateAvalancheFooterTextAnimated:(BOOL)arg1 ;
-(void)_saveUserAccount;
-(void)_setDisplayedSpinner:(id)arg1 ;
-(id)_CPLStorageFooterText;
-(id)_CPLSwitchFooterText;
-(id)_uploadBurstFooterText;
-(id)_removeNonPhotoStreamOrCloudPhotosSettingFromSpecifier:(id)arg1 ;
-(id)_photoStreamSwitchName;
-(void)_setRecordVideoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordVideoConfiguration:(id)arg1 ;
-(void)_setRecordSlomoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordSlomoConfiguration:(id)arg1 ;
-(void)_updatePauseUnpauseButtonName;
-(id)_showSpinnerWithText:(id)arg1 ;
-(id)_nonLocalResourceInfo;
-(void)_disableCloudPhotos;
-(void)_confirmCloudPhotosDisableWithSyncInProgress;
-(void)_confirmCloudPhotosDisableWhilePrunedWithNonLocalResourceInfo:(id)arg1 ;
-(void)_confirmCloudPhotosDisableWithNonLocalResourceInfo:(id)arg1 ;
-(void)_cancelDisableCloudPhotos;
-(void)_confirmDeletePrunedResourcesWithNonLocalResourceInfo:(id)arg1 ;
-(void)_enableKeepOriginalsWithNonLocalResourceInfo:(id)arg1 ;
-(void)_showManageStorage;
-(void)keepOriginals:(id)arg1 ;
-(void)_updatePhotoStreamSwitchNameAnimated:(BOOL)arg1 ;
-(void)_showStorageOptions;
-(void)photoStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)photoStreamEnabled:(id)arg1 ;
-(id)sharedStreamsEnabled:(id)arg1 ;
-(void)sharedStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)cloudPhotosEnabled:(id)arg1 ;
-(void)cloudPhotosEnableWasToggled:(id)arg1 specifier:(id)arg2 ;
-(void)pauseCloudPhotos:(id)arg1 ;
-(void)generateCPLDiagnose:(id)arg1 ;
-(void)optimizeStorage:(id)arg1 ;
-(id)uploadBurstPhotos:(id)arg1 ;
-(void)uploadBurstPhotosSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_sharedStreamsAssetsWillBeDeletedIfTurnedOff;
-(void)_updatePhotoStreamSwitchEnabled;
-(id)_personID;
-(id)specifiers;
@end

