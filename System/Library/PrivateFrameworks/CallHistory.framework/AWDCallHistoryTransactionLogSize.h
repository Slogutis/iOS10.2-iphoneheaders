/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryTransactionLogSize : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _records;
	unsigned _sizeBytes;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSizeBytes; 
@property (assign,nonatomic) unsigned sizeBytes;                        //@synthesize sizeBytes=_sizeBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRecords; 
@property (assign,nonatomic) unsigned records;                          //@synthesize records=_records - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)records;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSizeBytes:(unsigned)arg1 ;
-(void)setHasSizeBytes:(BOOL)arg1 ;
-(BOOL)hasSizeBytes;
-(void)setHasRecords:(BOOL)arg1 ;
-(BOOL)hasRecords;
-(unsigned)sizeBytes;
-(void)setRecords:(unsigned)arg1 ;
@end
