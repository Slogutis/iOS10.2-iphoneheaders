/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject {

	NSMutableSet* _requesters;

}
-(BOOL)hasRequesters;
-(void)setRequested:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)addRequester:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
@end

