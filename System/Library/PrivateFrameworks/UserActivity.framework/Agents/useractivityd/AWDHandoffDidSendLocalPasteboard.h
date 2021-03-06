/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHandoffDidSendLocalPasteboard : PBCodable <NSCopying> {

	unsigned long long _clientWriteSize;
	unsigned long long _clientWriteSpeed;
	unsigned long long _clientWriteTime;
	long long _errorCode;
	unsigned long long _streamDataSize;
	unsigned long long _streamDataXferSpeed;
	unsigned long long _streamDataXferTime;
	unsigned long long _streamOpenDelay;
	unsigned long long _timestamp;
	unsigned long long _totalTime;
	BOOL _usedStreams;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasClientWriteSize; 
@property (assign,nonatomic) unsigned long long clientWriteSize;                  //@synthesize clientWriteSize=_clientWriteSize - In the implementation block
@property (assign,nonatomic) BOOL hasClientWriteTime; 
@property (assign,nonatomic) unsigned long long clientWriteTime;                  //@synthesize clientWriteTime=_clientWriteTime - In the implementation block
@property (assign,nonatomic) BOOL hasClientWriteSpeed; 
@property (assign,nonatomic) unsigned long long clientWriteSpeed;                 //@synthesize clientWriteSpeed=_clientWriteSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasUsedStreams; 
@property (assign,nonatomic) BOOL usedStreams;                                    //@synthesize usedStreams=_usedStreams - In the implementation block
@property (assign,nonatomic) BOOL hasStreamOpenDelay; 
@property (assign,nonatomic) unsigned long long streamOpenDelay;                  //@synthesize streamOpenDelay=_streamOpenDelay - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataSize; 
@property (assign,nonatomic) unsigned long long streamDataSize;                   //@synthesize streamDataSize=_streamDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataXferTime; 
@property (assign,nonatomic) unsigned long long streamDataXferTime;               //@synthesize streamDataXferTime=_streamDataXferTime - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataXferSpeed; 
@property (assign,nonatomic) unsigned long long streamDataXferSpeed;              //@synthesize streamDataXferSpeed=_streamDataXferSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTime; 
@property (assign,nonatomic) unsigned long long totalTime;                        //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
-(void)setClientWriteSize:(unsigned long long)arg1 ;
-(void)setHasClientWriteSize:(BOOL)arg1 ;
-(BOOL)hasClientWriteSize;
-(void)setClientWriteTime:(unsigned long long)arg1 ;
-(void)setHasClientWriteTime:(BOOL)arg1 ;
-(BOOL)hasClientWriteTime;
-(void)setClientWriteSpeed:(unsigned long long)arg1 ;
-(void)setHasClientWriteSpeed:(BOOL)arg1 ;
-(BOOL)hasClientWriteSpeed;
-(void)setUsedStreams:(BOOL)arg1 ;
-(void)setHasUsedStreams:(BOOL)arg1 ;
-(BOOL)hasUsedStreams;
-(void)setStreamOpenDelay:(unsigned long long)arg1 ;
-(void)setHasStreamOpenDelay:(BOOL)arg1 ;
-(BOOL)hasStreamOpenDelay;
-(void)setStreamDataSize:(unsigned long long)arg1 ;
-(void)setHasStreamDataSize:(BOOL)arg1 ;
-(BOOL)hasStreamDataSize;
-(void)setStreamDataXferTime:(unsigned long long)arg1 ;
-(void)setHasStreamDataXferTime:(BOOL)arg1 ;
-(BOOL)hasStreamDataXferTime;
-(void)setStreamDataXferSpeed:(unsigned long long)arg1 ;
-(void)setHasStreamDataXferSpeed:(BOOL)arg1 ;
-(BOOL)hasStreamDataXferSpeed;
-(void)setHasTotalTime:(BOOL)arg1 ;
-(BOOL)hasTotalTime;
-(unsigned long long)clientWriteSize;
-(unsigned long long)clientWriteTime;
-(unsigned long long)clientWriteSpeed;
-(BOOL)usedStreams;
-(unsigned long long)streamOpenDelay;
-(unsigned long long)streamDataSize;
-(unsigned long long)streamDataXferTime;
-(unsigned long long)streamDataXferSpeed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(long long)errorCode;
-(void)setTotalTime:(unsigned long long)arg1 ;
-(unsigned long long)totalTime;
@end

