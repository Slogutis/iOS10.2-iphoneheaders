/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardSlideUpToAppControllerDelegate <SBDashBoardViewTransitioning>
@required
-(void)slideController:(id)arg1 didUpdateWithApplicationWithBundleIdentifier:(id)arg2;
-(void)slideController:(id)arg1 prepareForSlideUpAppLaunchAnimated:(BOOL)arg2;
-(BOOL)slideControllerShouldBeginSliding:(id)arg1;
-(void)slideController:(id)arg1 requestedUnlockWithActionBlock:(/*^block*/id)arg2;
-(id)slideControllerRequestedGrabberView:(id)arg1;

@end

