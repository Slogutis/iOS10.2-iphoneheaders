/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class HKWorkout, NSUUID, NSNumber;

@interface _HKAchievementPredicateWorkoutEnvironment : _HKBaseAchievementPredicateEnvironment {

	HKWorkout* _workout;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSNumber * startDate; 
@property (nonatomic,readonly) NSNumber * endDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double calories; 
@property (nonatomic,readonly) double distanceInKilometers; 
@property (nonatomic,readonly) BOOL isFirstParty; 
-(double)calories;
-(double)duration;
-(unsigned long long)type;
-(NSUUID *)UUID;
-(NSNumber *)startDate;
-(NSNumber *)endDate;
-(double)distanceInKilometers;
-(id)initWithWorkout:(id)arg1 ;
-(BOOL)isFirstParty;
@end

