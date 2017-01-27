/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate;
@interface CMWakeGestureManager : NSObject {

	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isWakeGestureAvailable;
+(id)sharedManager;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
-(void)stopWakeGestureUpdates;
-(void)startWakeGestureUpdates;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)logAssert;
@end
