/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSMutableDictionary, NSMutableArray, NSObject, _HDAWDPeriodicAction, NSString;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	NSMutableDictionary* _serverConnectionsByComponentId;
	NSMutableArray* _actions;
	NSObject*<OS_dispatch_queue> _queue;
	_HDAWDPeriodicAction* _fitnessDailyAction;
	BOOL _started;
	int _fitnessDailyCollectionEnabledNotifyToken;
	/*^block*/id _testHandler;

}

@property (nonatomic,copy) id testHandler;                                      //@synthesize testHandler=_testHandler - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) double activitySummaryQueryTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_actions;
-(void)_queue_start;
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)diagnosticDescription;
-(BOOL)_computeAndSubmitAchievementCountMetric:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitFitnessFriendsMonthlyMetric:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitDatabaseStatsMetric:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitSleepAlarmStatistics:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
-(void)_registerForFitnessDailyCollection;
-(void)_queue_updateFitnessDailyCollectionEnabled;
-(BOOL)isFitnessDailyCollectionEnabled;
-(BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(BOOL)arg4 ;
-(id)_serverConnectionForComponentId:(unsigned)arg1 ;
-(BOOL)_submitAchievementCountMetricWithConnection:(id)arg1 container:(id)arg2 earnedAchievements:(id)arg3 calorieGoal:(id)arg4 force:(BOOL)arg5 ;
-(long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5 ;
-(id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateDatabaseStatsEvent:(id)arg1 withSizeFromDatabase:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 ;
-(long long)_objectRowCountWithDatabase:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3 ;
-(long long)_deletedRowCountWithDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_CDACountWithDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_manuallyEnteredTypesCountWithDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_nonAppleSourcesCountWithDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_nonAppleSourcesWithDataSince:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_hasWatchSourcesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(/*^block*/id)arg2 ;
-(double)activitySummaryQueryTimeout;
-(id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)motionToken;
-(BOOL)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id*)arg2 error:(id*)arg3 ;
-(id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5 ;
-(id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 ;
-(id)_statisticsForTimeDeltas:(id)arg1 ;
-(id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2 ;
-(void)updateFitnessDailyCollectionEnabled;
-(BOOL)runTask:(id)arg1 error:(id*)arg2 ;
-(void)resetTask:(id)arg1 ;
-(id)testHandler;
-(void)setTestHandler:(id)arg1 ;
@end

