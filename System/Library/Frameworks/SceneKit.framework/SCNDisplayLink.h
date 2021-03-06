/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CADisplayLink, NSObject;

@interface SCNDisplayLink : NSObject {

	CADisplayLink* _caDisplayLink;
	BOOL _supportTargetTimestamp;
	id _owner;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _invalidated;
	BOOL _asynchronous;
	double _lastFrameTime;
	float _preferredFrameRate;
	int _queuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFrameRate; 
-(id)init;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)invalidate;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_teardown;
-(void)_caDisplayLinkCallback;
-(void)_resume;
-(BOOL)_isInvalidated;
-(void)_callbackWithTime:(double)arg1 ;
-(id)initWithOwner:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)willDie;
-(BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3 ;
-(float)preferredFrameRate;
-(void)setPreferredFrameRate:(float)arg1 ;
-(int)queuedFrameCount;
-(void)_pause;
@end

