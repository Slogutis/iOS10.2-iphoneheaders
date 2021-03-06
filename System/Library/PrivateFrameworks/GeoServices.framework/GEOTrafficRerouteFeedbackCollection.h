/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {

	NSData* _directionResponseID;
	unsigned _oldRouteHistoricTravelTime;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	NSData* _reroutedRouteID;
	unsigned _reroutedRouteTravelTime;
	BOOL _oldRouteBlocked;
	SCD_Struct_GE96 _has;

}

@property (assign,nonatomic) BOOL hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime;                           //@synthesize oldRouteTravelTime=_oldRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime;                      //@synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime;                   //@synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime;              //@synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasOldRouteBlocked; 
@property (assign,nonatomic) BOOL oldRouteBlocked;                                  //@synthesize oldRouteBlocked=_oldRouteBlocked - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents;                    //@synthesize oldRouteIncidents=_oldRouteIncidents - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID;                          //@synthesize directionResponseID=_directionResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID;                                   //@synthesize oldRouteID=_oldRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID;                              //@synthesize reroutedRouteID=_reroutedRouteID - In the implementation block
+(Class)oldRouteIncidentsType;
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
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteTravelTime;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteHistoricTravelTime;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(void)clearOldRouteIncidents;
-(void)addOldRouteIncidents:(id)arg1 ;
-(unsigned long long)oldRouteIncidentsCount;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOldRouteID;
-(BOOL)hasReroutedRouteID;
-(unsigned)oldRouteTravelTime;
-(unsigned)reroutedRouteTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(NSData *)oldRouteID;
-(void)setOldRouteID:(NSData *)arg1 ;
-(NSData *)reroutedRouteID;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(void)setOldRouteBlocked:(BOOL)arg1 ;
-(void)setHasOldRouteBlocked:(BOOL)arg1 ;
-(BOOL)hasOldRouteBlocked;
-(BOOL)hasDirectionResponseID;
-(BOOL)oldRouteBlocked;
-(NSData *)directionResponseID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
@end

