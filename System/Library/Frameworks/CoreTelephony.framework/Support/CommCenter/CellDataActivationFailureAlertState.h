/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSLock;

@interface CellDataActivationFailureAlertState : NSObject {

	NSLock* fLockMain;
	int fAction;
	CFSharedRef<const __CFData>* fDataPlanCsn;
	CFSharedRef<const __CFString>* fDataPlanUrl;
	CFSharedRef<const __CFString>* fDataPlanIccid;
	BOOL _scheduled;

}

@property (assign) BOOL scheduled;              //@synthesize scheduled=_scheduled - In the implementation block
@property (assign) int action; 
+(id)sharedInstance;
-(void)appInit;
-(BOOL)trylockMain;
-(void)unlockMain;
-(void)lockScheduled;
-(void)unlockScheduled;
-(void)setDataPlanCsn:(CFSharedRef<const __CFData>*)arg1 ;
-(void)setDataPlanUrl:(CFSharedRef<const __CFString>*)arg1 ;
-(void)setDataPlanIccid:(CFSharedRef<const __CFString>*)arg1 ;
-(void)handleActionResponse;
-(id)init;
-(void)dealloc;
-(int)action;
-(void)setAction:(int)arg1 ;
-(BOOL)scheduled;
-(void)setScheduled:(BOOL)arg1 ;
@end
