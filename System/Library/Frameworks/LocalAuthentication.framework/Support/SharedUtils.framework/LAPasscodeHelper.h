/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LAPasscodeHelper : NSObject
+(id)sharedInstance;
-(BOOL)isPasscodeSetWithError:(id*)arg1 ;
-(long long)verifyPassword:(id)arg1 acmContext:(id)arg2 userId:(id)arg3 ;
-(long long)createStash:(id)arg1 mode:(int)arg2 manifest:(id)arg3 ;
-(BOOL)useLightOnDarkPasscodeScreenWithPolicy:(long long)arg1 policyOptions:(id)arg2 ;
@end
