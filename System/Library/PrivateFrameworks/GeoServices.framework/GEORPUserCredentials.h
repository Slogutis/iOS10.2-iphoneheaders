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

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;

}

@property (nonatomic,readonly) BOOL hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId;                   //@synthesize icloudUserPersonId=_icloudUserPersonId - In the implementation block
@property (nonatomic,readonly) BOOL hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken;              //@synthesize icloudUserMapsAuthToken=_icloudUserMapsAuthToken - In the implementation block
+(id)_credentialsForPrimaryICloudAccount;
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
-(BOOL)hasIcloudUserPersonId;
-(BOOL)hasIcloudUserMapsAuthToken;
-(NSString *)icloudUserPersonId;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(NSString *)icloudUserMapsAuthToken;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
@end

