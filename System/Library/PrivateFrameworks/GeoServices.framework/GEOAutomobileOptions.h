/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOUserPreferences;

@interface GEOAutomobileOptions : PBCodable <NSCopying> {

	int _trafficType;
	GEOUserPreferences* _userPreferences;
	BOOL _includeHistoricTravelTime;
	BOOL _includeStaticTravelTime;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                    //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType;                                   //@synthesize trafficType=_trafficType - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeStaticTravelTime; 
@property (assign,nonatomic) BOOL includeStaticTravelTime;                      //@synthesize includeStaticTravelTime=_includeStaticTravelTime - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPreferences; 
@property (nonatomic,retain) GEOUserPreferences * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)includeHistoricTravelTime;
-(int)trafficType;
-(void)setTrafficType:(int)arg1 ;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(id)trafficTypeAsString:(int)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(BOOL)includeStaticTravelTime;
-(void)setIncludeStaticTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeStaticTravelTime;
-(BOOL)hasUserPreferences;
-(GEOUserPreferences *)userPreferences;
-(void)setUserPreferences:(GEOUserPreferences *)arg1 ;
@end
