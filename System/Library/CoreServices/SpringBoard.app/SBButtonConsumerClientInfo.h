/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSystemServiceClient;
@interface SBButtonConsumerClientInfo : NSObject {

	id<FBSystemServiceClient> _systemServiceClient;
	unsigned long long _eventMask;
	long long _eventPriority;

}

@property (nonatomic,retain) id<FBSystemServiceClient> systemServiceClient;              //@synthesize systemServiceClient=_systemServiceClient - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                               //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long eventPriority;                                    //@synthesize eventPriority=_eventPriority - In the implementation block
-(void)setSystemServiceClient:(id<FBSystemServiceClient>)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
-(id<FBSystemServiceClient>)systemServiceClient;
@end
