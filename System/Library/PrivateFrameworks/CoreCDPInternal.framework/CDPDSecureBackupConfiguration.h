/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext, NSDictionary, NSURLSession;

@interface CDPDSecureBackupConfiguration : NSObject {

	CDPContext* _context;
	NSDictionary* _configurationURLs;
	NSDictionary* _escrowConfigurationURLs;
	NSURLSession* _session;

}
+(id)configurationWithContext:(id)arg1 ;
+(id)configurationWithContext:(id)arg1 andSession:(id)arg2 ;
+(id)_configurationRequestWithURLString:(id)arg1 ;
-(id)accountInfoFetchSetupDictionary;
-(id)escrowAuthInfo;
-(id)_iCloudEnvironment;
-(id)_escrowProxyURL;
-(id)_escrowConfigurationBag;
-(id)_setupConfigurationURLs;
-(id)_escrowConfigurationBagFull;
-(id)_fetchConfigurationDictionary;
-(id)_fetchEscrowConfigurationBag;
-(id)_escrowProxyConfigurationURL;
-(id)_escrowProxyConfigurationURLRequest;
-(id)_fetchConfigurationWithRequest:(id)arg1 ;
-(id)_configurationInfoURLRequest;
@end
