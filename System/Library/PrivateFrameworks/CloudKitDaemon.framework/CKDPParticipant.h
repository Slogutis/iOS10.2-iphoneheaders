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

@class CKDPContactInformation, CKDPIdentifier, NSData, CKDPProtectionInfo;

@interface CKDPParticipant : PBCodable <NSCopying> {

	long long _acceptTimestamp;
	CKDPContactInformation* _contactInformation;
	CKDPIdentifier* _inviterId;
	int _outOfNetworkKeyType;
	NSData* _outOfNetworkPrivateKey;
	CKDPIdentifier* _participantId;
	int _participantType;
	int _permission;
	CKDPProtectionInfo* _protectionInfo;
	CKDPProtectionInfo* _publicKey;
	int _publicKeyVersion;
	int _state;
	CKDPIdentifier* _userId;
	BOOL _acceptedInProcess;
	BOOL _createdInProcess;
	BOOL _isInNetwork;
	SCD_Struct_CK14 _has;

}

@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) CKDPIdentifier * participantId;                           //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) CKDPIdentifier * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasContactInformation; 
@property (nonatomic,retain) CKDPContactInformation * contactInformation;              //@synthesize contactInformation=_contactInformation - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                                      //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                           //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterId; 
@property (nonatomic,retain) CKDPIdentifier * inviterId;                               //@synthesize inviterId=_inviterId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedInProcess; 
@property (assign,nonatomic) BOOL createdInProcess;                                    //@synthesize createdInProcess=_createdInProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKey; 
@property (nonatomic,retain) CKDPProtectionInfo * publicKey;                           //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptTimestamp; 
@property (assign,nonatomic) long long acceptTimestamp;                                //@synthesize acceptTimestamp=_acceptTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                      //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasOutOfNetworkPrivateKey; 
@property (nonatomic,retain) NSData * outOfNetworkPrivateKey;                          //@synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfNetworkKeyType; 
@property (assign,nonatomic) int outOfNetworkKeyType;                                  //@synthesize outOfNetworkKeyType=_outOfNetworkKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyVersion; 
@property (assign,nonatomic) int publicKeyVersion;                                     //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptedInProcess; 
@property (assign,nonatomic) BOOL acceptedInProcess;                                   //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (assign,nonatomic) BOOL hasIsInNetwork; 
@property (assign,nonatomic) BOOL isInNetwork;                                         //@synthesize isInNetwork=_isInNetwork - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(CKDPIdentifier *)userId;
-(void)setUserId:(CKDPIdentifier *)arg1 ;
-(BOOL)createdInProcess;
-(BOOL)acceptedInProcess;
-(void)setCreatedInProcess:(BOOL)arg1 ;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(int)permission;
-(int)participantType;
-(NSData *)outOfNetworkPrivateKey;
-(void)setParticipantId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasParticipantType;
-(void)setParticipantType:(int)arg1 ;
-(BOOL)hasPublicKey;
-(BOOL)hasParticipantId;
-(int)publicKeyVersion;
-(void)setPublicKeyVersion:(int)arg1 ;
-(void)setHasPublicKeyVersion:(BOOL)arg1 ;
-(BOOL)hasPublicKeyVersion;
-(void)setHasAcceptedInProcess:(BOOL)arg1 ;
-(BOOL)hasAcceptedInProcess;
-(CKDPIdentifier *)participantId;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(id)permissionAsString:(int)arg1 ;
-(int)StringAsPermission:(id)arg1 ;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(id)participantTypeAsString:(int)arg1 ;
-(int)StringAsParticipantType:(id)arg1 ;
-(void)setContactInformation:(CKDPContactInformation *)arg1 ;
-(void)setInviterId:(CKDPIdentifier *)arg1 ;
-(void)setOutOfNetworkPrivateKey:(NSData *)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasContactInformation;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(BOOL)hasInviterId;
-(void)setHasCreatedInProcess:(BOOL)arg1 ;
-(BOOL)hasCreatedInProcess;
-(void)setAcceptTimestamp:(long long)arg1 ;
-(void)setHasAcceptTimestamp:(BOOL)arg1 ;
-(BOOL)hasAcceptTimestamp;
-(BOOL)hasOutOfNetworkPrivateKey;
-(void)setOutOfNetworkKeyType:(int)arg1 ;
-(void)setHasOutOfNetworkKeyType:(BOOL)arg1 ;
-(BOOL)hasOutOfNetworkKeyType;
-(CKDPContactInformation *)contactInformation;
-(CKDPIdentifier *)inviterId;
-(long long)acceptTimestamp;
-(int)outOfNetworkKeyType;
-(CKDPProtectionInfo *)publicKey;
-(void)setPublicKey:(CKDPProtectionInfo *)arg1 ;
@end

