/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/VSPrivacyServiceProtocol.h>

@class NSString, NSOperationQueue, NSArray;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol> {

	NSString* _service;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,copy) NSString * service;                                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                               //@synthesize privateQueue=_privateQueue - In the implementation block
@property (getter=isAccessRestricted,nonatomic,readonly) BOOL accessRestriced; 
@property (nonatomic,copy,readonly) NSArray * knownAppBundles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPrivacyFacade;
-(id)init;
-(BOOL)reset;
-(BOOL)isAccessRestricted;
-(id)initWithService:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(SCD_Struct_VS3)arg2 ;
-(void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessForAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isAccessGrantedForAuditToken:(SCD_Struct_VS3)arg1 ;
-(BOOL)isAccessGrantedForBundle:(CFBundleRef)arg1 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forBundle:(CFBundleRef)arg2 ;
-(NSArray *)knownAppBundles;
@end
