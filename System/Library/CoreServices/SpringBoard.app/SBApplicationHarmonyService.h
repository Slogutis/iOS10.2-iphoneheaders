/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplicationServerHarmonyDelegate.h>

@class NSString;

@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)applicationServer:(id)arg1 client:(id)arg2 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)init;
@end

