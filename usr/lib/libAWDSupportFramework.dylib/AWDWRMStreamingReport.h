/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _counter;
	unsigned _duration;
	NSMutableArray* _instValues;
	unsigned _samplePeriods;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSamplePeriods; 
@property (assign,nonatomic) unsigned samplePeriods;                    //@synthesize samplePeriods=_samplePeriods - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * instValues;               //@synthesize instValues=_instValues - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                          //@synthesize counter=_counter - In the implementation block
+(Class)instValuesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasCounter;
-(void)setInstValues:(NSMutableArray *)arg1 ;
-(void)addInstValues:(id)arg1 ;
-(unsigned long long)instValuesCount;
-(void)clearInstValues;
-(id)instValuesAtIndex:(unsigned long long)arg1 ;
-(void)setSamplePeriods:(unsigned)arg1 ;
-(void)setHasSamplePeriods:(BOOL)arg1 ;
-(BOOL)hasSamplePeriods;
-(unsigned)samplePeriods;
-(NSMutableArray *)instValues;
-(unsigned)counter;
-(void)setCounter:(unsigned)arg1 ;
@end

