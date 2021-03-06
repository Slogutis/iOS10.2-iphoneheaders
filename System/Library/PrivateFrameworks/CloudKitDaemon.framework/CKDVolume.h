/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSNumber, NSString;

@interface CKDVolume : NSObject {

	NSUUID* _volumeUUID;
	NSNumber* _deviceID;
	NSString* _mountToPath;

}

@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * mountToPath;              //@synthesize mountToPath=_mountToPath - In the implementation block
-(id)description;
-(id)CKPropertiesDescription;
-(id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3 ;
-(NSUUID *)volumeUUID;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(NSString *)mountToPath;
-(void)setMountToPath:(NSString *)arg1 ;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
@end

