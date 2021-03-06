/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPRecordIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _value;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPIdentifier *)value;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
@end

