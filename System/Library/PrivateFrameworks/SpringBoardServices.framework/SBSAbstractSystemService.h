/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractFacilityService.h>

@class SBSSystemServiceClient;

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (nonatomic,readonly) SBSSystemServiceClient * client; 
+(Class)serviceFacilityClientClass;
-(SBSSystemServiceClient *)client;
@end

