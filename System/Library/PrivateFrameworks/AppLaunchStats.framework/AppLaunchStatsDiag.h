/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AppLaunchStats/AppLaunchStats-Structs.h>
@class NSObject;

@interface AppLaunchStatsDiag : NSObject {

	NSObject*<OS_dispatch_queue> APLSDiagQueue;
	NSObject*<OS_dispatch_source> APLSDiagTimer;
	int diagToken;
	BOOL diagTimerOn;
	BOOL _hasTransitionedToCoreDuet;

}

@property (assign) BOOL hasTransitionedToCoreDuet;              //@synthesize hasTransitionedToCoreDuet=_hasTransitionedToCoreDuet - In the implementation block
-(id)init;
-(void)dumpDiagnosticIntoFile;
-(void)turnOffDiagnostic;
-(BOOL)checkDuetDiagState;
-(void)turnOnDiagnostic:(long long)arg1 ;
-(void)base64EncodeFile:(const char*)arg1 dumpfile:(_sFILE*)arg2 ;
-(void)initializeDiag:(BOOL)arg1 ;
-(BOOL)hasTransitionedToCoreDuet;
-(void)setHasTransitionedToCoreDuet:(BOOL)arg1 ;
@end

