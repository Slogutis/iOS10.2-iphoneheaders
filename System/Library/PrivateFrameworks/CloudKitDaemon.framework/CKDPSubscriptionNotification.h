/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPSubscriptionNotificationAlert;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {

	NSMutableArray* _additionalFields;
	CKDPSubscriptionNotificationAlert* _alert;
	BOOL _shouldBadge;
	BOOL _shouldSendContentAvailable;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) BOOL hasAlert; 
@property (nonatomic,retain) CKDPSubscriptionNotificationAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBadge; 
@property (assign,nonatomic) BOOL shouldBadge;                                       //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalFields;                      //@synthesize additionalFields=_additionalFields - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSendContentAvailable; 
@property (assign,nonatomic) BOOL shouldSendContentAvailable;                        //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
+(Class)additionalFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAlert;
-(CKDPSubscriptionNotificationAlert *)alert;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(NSMutableArray *)additionalFields;
-(void)setAdditionalFields:(NSMutableArray *)arg1 ;
-(void)setAlert:(CKDPSubscriptionNotificationAlert *)arg1 ;
-(void)addAdditionalFields:(id)arg1 ;
-(unsigned long long)additionalFieldsCount;
-(void)clearAdditionalFields;
-(id)additionalFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldBadge:(BOOL)arg1 ;
-(BOOL)hasShouldBadge;
-(void)setHasShouldSendContentAvailable:(BOOL)arg1 ;
-(BOOL)hasShouldSendContentAvailable;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(BOOL)shouldSendContentAvailable;
@end

