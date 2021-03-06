/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDateInterval;

@interface HKStatisticsQuery : HKQuery {

	unsigned long long _mergeStrategy;
	NSDateInterval* _dateInterval;
	/*^block*/id _completionHandler;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long mergeStrategy;                                                         //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (setter=_setDateInterval:,getter=_dateInterval,nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                             //@synthesize options=_options - In the implementation block
+(Class)_queryServerDataObjectClass;
-(id)completionHandler;
-(unsigned long long)options;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)_filter;
-(id)_filterForDateInterval:(id)arg1 ;
-(void)_setDateInterval:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateInterval;
-(unsigned long long)mergeStrategy;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
@end

