/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>

@class brc_task_tracker, NSDate, NSMutableDictionary, BRCDeadlineScheduler, NSString;

@interface BRCFSDownloader : BRCFSSchedulerBase <BRCModule> {

	BOOL _initialKickDone;
	brc_task_tracker* _tracker;
	unsigned long long _activeDownloadsSize;
	NSDate* _lastDownloadRefresh;
	NSMutableDictionary* _willRetryOperationProgress;
	BRCDeadlineScheduler* _downloadsDeadlineScheduler;

}

@property (nonatomic,readonly) BRCDeadlineScheduler * downloadsDeadlineScheduler;              //@synthesize downloadsDeadlineScheduler=_downloadsDeadlineScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(void)cancel;
-(void)suspend;
-(void)resume;
-(void)close;
-(void)schedule;
-(void)_close;
-(BOOL)isDownloadingItem:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4 ;
-(void)_deleteThrottleID:(long long)arg1 ;
-(unsigned long long)sizeOfActiveDownloads;
-(void)_fetchStamps:(throttle_stamps*)arg1 now:(long long)arg2 throttle:(id)arg3 throttleID:(long long)arg4 kind:(int)arg5 etag:(id)arg6 ;
-(id)_appLibraryForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 ;
-(void)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2 ;
-(id)_sanitizeRecord:(id)arg1 ;
-(void)_cancelThrottles:(id)arg1 state:(int)arg2 ;
-(void)_finishDownloadCleanup:(id)arg1 ;
-(BOOL)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 ;
-(void)createThrottleForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(BOOL)arg5 ;
-(BOOL)shouldScheduleLosersEvictionForItem:(id)arg1 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3 ;
-(void)rescheduleThrottlesPendingWinnerForItem:(id)arg1 ;
-(void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(BOOL)arg3 applySchedulerState:(int*)arg4 ;
-(void)_finishedDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 error:(id)arg4 ;
-(void)_willDownload:(id)arg1 operationID:(id)arg2 ;
-(unsigned long long)inFlightSize;
-(void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2 ;
-(void)_sendThumbnailsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_sendContentsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_sendLosersBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 ;
-(void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1 ;
-(void)rescheduleThrottlesForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1 ;
-(void)cancelAndCleanupItemDownloads:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2 ;
-(void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3 ;
-(BOOL)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2 ;
-(BOOL)makeContentLive:(id)arg1 ;
-(void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int*)arg3 ;
-(BOOL)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6 ;
-(BOOL)hasThumbnailToApplyForItem:(id)arg1 ;
-(void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int*)arg3 ;
-(BOOL)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 ;
-(void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BRCDeadlineScheduler *)downloadsDeadlineScheduler;
@end

