/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <mediaremoted/mediaremoted-Structs.h>
@class MRDAVRoutingDataSource;

@interface MRDVolumeController : NSObject {

	BOOL _volumeWarningEnabled;
	float _currentVolume;
	float _volumeLimit;
	MRDAVRoutingDataSource* _routingDataSource;
	unsigned long long _warningState;

}

@property (nonatomic,readonly) MRDAVRoutingDataSource * routingDataSource;              //@synthesize routingDataSource=_routingDataSource - In the implementation block
@property (nonatomic,readonly) float currentVolume;                                     //@synthesize currentVolume=_currentVolume - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                               //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) float volumeLimit;                                       //@synthesize volumeLimit=_volumeLimit - In the implementation block
@property (assign,nonatomic) unsigned long long warningState;                           //@synthesize warningState=_warningState - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithRoutingDataSource:(id)arg1 ;
-(BOOL)setVolume:(float)arg1 error:(id*)arg2 ;
-(BOOL)adjustVolumeWithStepAmount:(float)arg1 error:(id*)arg2 ;
-(MRDAVRoutingDataSource *)routingDataSource;
-(float)currentVolume;
-(float)volumeLimit;
-(unsigned long long)warningState;
-(void)setWarningState:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)volumeWarningEnabled;
@end
