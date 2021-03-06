/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface HMDMessageFilterChain : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageFilters;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageFilters;                     //@synthesize messageFilters=_messageFilters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters; 
-(id)init;
-(NSArray *)filters;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableArray *)messageFilters;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeMessageFilter:(id)arg1 ;
-(void)addMessageFilter:(id)arg1 ;
-(void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldCloudSyncData;
-(void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMessageFilters:(NSMutableArray *)arg1 ;
@end

