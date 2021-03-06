/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallServicesClient <NSObject>
@required
-(void)resetCallProvisionalStates;
-(void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
-(void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
-(void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;

@end

