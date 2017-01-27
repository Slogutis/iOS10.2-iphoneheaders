/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAClientController.h>

@class UASimulator;

@interface UASimulatorAdvertisementCreator : UAClientController {

	UASimulator* _simulator;

}

@property (retain,readonly) UASimulator * simulator;              //@synthesize simulator=_simulator - In the implementation block
-(UASimulator *)simulator;
-(id)eligibleAdvertiseableItemsInOrder;
-(id)initWithManager:(id)arg1 simulator:(id)arg2 ;
-(id)items;
-(long long)priority;
-(BOOL)active;
-(id)statusString;
@end
