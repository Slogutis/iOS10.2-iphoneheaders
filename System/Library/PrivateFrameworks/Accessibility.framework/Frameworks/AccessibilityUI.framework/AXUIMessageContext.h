/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue;

@interface AXUIMessageContext : NSObject {

	BOOL _completionRequiresWritingBlock;
	NSObject*<OS_xpc_object> _xpcMessage;
	void* _context;
	AXAccessQueue* _targetAccessQueue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (assign,nonatomic) void* context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXAccessQueue * targetAccessQueue;                //@synthesize targetAccessQueue=_targetAccessQueue - In the implementation block
@property (assign,nonatomic) BOOL completionRequiresWritingBlock;              //@synthesize completionRequiresWritingBlock=_completionRequiresWritingBlock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(void*)context;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setTargetAccessQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)targetAccessQueue;
-(BOOL)completionRequiresWritingBlock;
-(void)setCompletionRequiresWritingBlock:(BOOL)arg1 ;
@end

