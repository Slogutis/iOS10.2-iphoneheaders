/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (nonatomic,retain) NSString * bundleDescriptor;                                         //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (nonatomic,readonly) BOOL shouldShowEmergencyAddress; 
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(BOOL)shouldShowEmergencyAddress;
-(id)updateEmergencyAddressController;
-(id)provisionCapabilityController;
-(void)loadWebViewController;
-(void)enableCapability;
-(NSString *)bundleDescriptor;
-(void)reloadWebViewController;
-(BOOL)shouldEnableCapability;
-(id)genericErrorAlertController;
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(void)webSheetCompletion;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end

