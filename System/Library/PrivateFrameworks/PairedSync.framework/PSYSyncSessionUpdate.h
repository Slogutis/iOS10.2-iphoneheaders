/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject {

	PSYSyncSession* _originalSession;
	PSYSyncSession* _updatedSession;

}

@property (nonatomic,readonly) PSYSyncSession * originalSession;              //@synthesize originalSession=_originalSession - In the implementation block
@property (nonatomic,readonly) PSYSyncSession * updatedSession;               //@synthesize updatedSession=_updatedSession - In the implementation block
-(void)enumerateChangedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2 ;
-(void)enumerateNewlyCompletedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)didUpdateCompleteSyncSession;
-(PSYSyncSession *)originalSession;
-(PSYSyncSession *)updatedSession;
-(void)enumerateNewlyRunningActivitiesWithBlock:(/*^block*/id)arg1 ;
@end

