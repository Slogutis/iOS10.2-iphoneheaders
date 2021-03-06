/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, RTLocation, NSUUID;

@interface RTVisitIncident : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	long long _type;
	RTLocation* _location;
	long long _dataPointCount;
	NSDate* _entry;
	NSDate* _exit;
	NSUUID* _locationOfInterestIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) RTLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long dataPointCount;                                //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * entry;                                     //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exit;                                      //@synthesize exit=_exit - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * locationOfInterestIdentifier;              //@synthesize locationOfInterestIdentifier=_locationOfInterestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromVisitIncidentType:(long long)arg1 ;
+(long long)visitIncidentTypeFromString:(id)arg1 ;
+(id)visitIncidentFromDefaultsDictionary:(id)arg1 ;
-(NSDate *)exit;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTLocation *)location;
-(NSDate *)entry;
-(NSUUID *)locationOfInterestIdentifier;
-(id)initWithType:(long long)arg1 location:(id)arg2 dataPointCount:(long long)arg3 entry:(id)arg4 exit:(id)arg5 locationOfInterestIdentifier:(id)arg6 ;
-(long long)dataPointCount;
@end

