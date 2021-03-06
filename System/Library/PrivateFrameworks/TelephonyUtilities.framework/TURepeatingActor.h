/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TURepeatingActor : NSObject {

	BOOL _running;
	BOOL _stopped;
	BOOL _currentlyPerformingAction;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _iterationsRemaining;
	double _pauseDuration;
	/*^block*/id _action;
	/*^block*/id _completionBlock;
	/*^block*/id _attemptNextIterationBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                                  //@synthesize running=_running - In the implementation block
@property (assign,getter=isStopped,nonatomic) BOOL stopped;                                                  //@synthesize stopped=_stopped - In the implementation block
@property (assign,getter=isCurrentlyPerformingAction,nonatomic) BOOL currentlyPerformingAction;              //@synthesize currentlyPerformingAction=_currentlyPerformingAction - In the implementation block
@property (assign,nonatomic) unsigned long long iterationsRemaining;                                         //@synthesize iterationsRemaining=_iterationsRemaining - In the implementation block
@property (assign,nonatomic) double pauseDuration;                                                           //@synthesize pauseDuration=_pauseDuration - In the implementation block
@property (nonatomic,copy) id action;                                                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id attemptNextIterationBlock;                                            //@synthesize attemptNextIterationBlock=_attemptNextIterationBlock - In the implementation block
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)action;
-(void)stop;
-(BOOL)isRunning;
-(void)setAction:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isStopped;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIterationsRemaining:(unsigned long long)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(void)_attemptNextIteration;
-(void)_stopWithDidFinish:(BOOL)arg1 ;
-(BOOL)_hasIterationsRemaining;
-(unsigned long long)iterationsRemaining;
-(void)setCurrentlyPerformingAction:(BOOL)arg1 ;
-(void)setAttemptNextIterationBlock:(id)arg1 ;
-(double)pauseDuration;
-(void)_completeWithDidFinish:(BOOL)arg1 ;
-(id)attemptNextIterationBlock;
-(BOOL)isCurrentlyPerformingAction;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setStopped:(BOOL)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
@end

