/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSUIFaceTimeSetupController : NSObject
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)cellularFaceTimeEnabled;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
