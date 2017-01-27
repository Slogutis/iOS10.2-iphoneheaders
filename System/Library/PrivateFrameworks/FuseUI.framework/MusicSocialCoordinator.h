/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface MusicSocialCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _followingLoaded;
	NSOperationQueue* _queue;

}
+(id)sharedInstance;
+(id)activeDsid;
-(id)init;
-(BOOL)requestFollowingStateForEntityWithStoreID:(long long)arg1 ;
-(void)requestFollowingStateForEntityWithStoreID:(long long)arg1 contentType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateFollowingState:(BOOL)arg1 forEntityWithStoreID:(long long)arg2 contentType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processFollowingOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadFollowingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_entityTypeForContentType:(unsigned long long)arg1 ;
-(void)_loadFollowingWithEntityID:(id)arg1 entityType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateFollowItem:(id)arg1 withState:(BOOL)arg2 ;
-(void)_processFollowEntityOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processFollowing:(id)arg1 ;
@end
