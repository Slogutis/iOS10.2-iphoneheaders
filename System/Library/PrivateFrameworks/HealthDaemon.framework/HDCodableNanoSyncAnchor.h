/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {

	long long _anchor;
	int _objectType;
	SCD_Struct_HD18 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                  //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;                //@synthesize anchor=_anchor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)anchor;
-(void)setAnchor:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)nanoSyncDescription;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(int)objectType;
-(BOOL)hasAnchor;
-(void)setHasAnchor:(BOOL)arg1 ;
@end
