/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface FBSApplicationTerminationAssertionClient : FBSSystemServiceFacilityClient
+(id)sharedInstance;
-(void)sendRelinquishTerminationAssertion:(id)arg1 ;
-(void)sendAcquireTerminationAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_messageWithAssertion:(id)arg1 ;
@end

