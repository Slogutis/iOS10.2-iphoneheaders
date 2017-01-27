/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKTimer;

@interface VKLabelManagerCollisionTimer : NSObject {

	BOOL _isTimerStarted;
	VKTimer* _timer;
	LabelManager* _manager;

}
-(void)dealloc;
-(void)startTimer;
-(id)initWithManager:(LabelManager*)arg1 ;
-(void)cancelTimer;
-(void)killTimer;
-(void)_timerFired:(id)arg1 ;
@end
