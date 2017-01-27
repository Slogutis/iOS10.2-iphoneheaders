/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, VSDevice, NSURL;

@interface VSPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	VSDevice* _device;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) VSDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) NSURL * overridingAppBootURL; 
@property (nonatomic,readonly) BOOL shouldDisableRequestTimeouts; 
@property (nonatomic,readonly) BOOL shouldAlwaysAllowRemoteInspection; 
@property (assign,nonatomic) long long cachedAvailabilityStatus; 
@property (assign,nonatomic) long long cachedDeveloperProviderStatus; 
@property (assign,nonatomic) long long cachedStoreProviderStatus; 
@property (nonatomic,readonly) BOOL hasSentWelcomeMessage; 
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(VSDevice *)device;
-(void)setDevice:(VSDevice *)arg1 ;
-(BOOL)hasSentWelcomeMessage;
-(void)noteDidSendWelcomeMessage;
-(BOOL)hasAcknowledgedUnsupportedIdentityProvider:(id)arg1 ;
-(void)noteDidAcknowledgeUnsupportedIdentityProvider:(id)arg1 ;
-(NSURL *)overridingAppBootURL;
-(BOOL)shouldAlwaysAllowRemoteInspection;
-(BOOL)shouldDisableRequestTimeouts;
-(long long)cachedAvailabilityStatus;
-(void)setCachedAvailabilityStatus:(long long)arg1 ;
-(long long)cachedDeveloperProviderStatus;
-(void)setCachedDeveloperProviderStatus:(long long)arg1 ;
-(long long)cachedStoreProviderStatus;
-(void)setCachedStoreProviderStatus:(long long)arg1 ;
@end
