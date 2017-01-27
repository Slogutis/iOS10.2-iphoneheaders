/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpert.h>
#import <libobjc.A.dylib/RTPredictionExpertProtocol.h>

@class RTDefaultsManager, RTLocationTagger, RTPredictionExpertRoomAssistDataSource, NSString;

@interface RTPredictionExpertRoomAssist : RTPredictionExpert <RTPredictionExpertProtocol> {

	RTDefaultsManager* _defaultsManager;
	RTLocationTagger* _locationTagger;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTLocationTagger * locationTagger;                                  //@synthesize locationTagger=_locationTagger - In the implementation block
@property (nonatomic,readonly) RTPredictionExpertRoomAssistDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processData:(/*^block*/id)arg1 ;
-(id)filterEvents:(id)arg1 basedUponOccurrenceOfEvents:(id)arg2 ;
-(void)matchEvents:(id)arg1 toMicroLocationEvents:(id)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(void)createExpertMetricWithHandler:(/*^block*/id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTLocationTagger *)locationTagger;
-(void)setLocationTagger:(RTLocationTagger *)arg1 ;
-(id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 locationTagger:(id)arg5 featureAddons:(id)arg6 ;
-(void)processEventsWithRoomViewEvents:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
