/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterSettings/GKSettingsGroupController.h>

@class NSString, NSMutableArray;

@interface GKSettingsSessionsGroupController : GKSettingsGroupController {

	NSString* _zone;
	BOOL _sessionFetchInProgress;
	NSMutableArray* _sessions;

}

@property (assign,getter=isSessionFetchInProgress,nonatomic) BOOL sessionFetchInProgress;              //@synthesize sessionFetchInProgress=_sessionFetchInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * sessions;                                                //@synthesize sessions=_sessions - In the implementation block
-(BOOL)isSessionFetchInProgress;
-(void)setSessionFetchInProgress:(BOOL)arg1 ;
-(void)setSessions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)removeSession:(id)arg1 ;
-(id)initWithZone:(id)arg1 ;
-(NSMutableArray *)sessions;
-(id)specifiers;
@end
