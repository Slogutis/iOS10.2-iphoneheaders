/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/InCallService.axbundle/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/__PHVideoCallViewControllerAccessibility_super.h>

@interface PHVideoCallViewControllerAccessibility : __PHVideoCallViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_accessibilityUpdateInfoOnLocalVideoViewsForCameraType:(unsigned)arg1 ;
-(void)_accessibilityPIPVideoInfoWithDisplayName:(id)arg1 ;
-(void)_accessibilityRemoteVideoInfoWithDisplayName:(id)arg1 ;
-(void)_accessibilityMakeSureWindowIsVisibleToElementFetcher;
-(void)updateTopBar:(BOOL)arg1 bottomBar:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)toggleLocalCameraType;
-(void)_accessibilityUpdateInfoOnLocalVideoView:(id)arg1 cameraType:(unsigned)arg2 ;
-(id)_accessibilityValueStringForLocalVideoAndCameraType:(unsigned)arg1 ;
-(void)_refreshStatusBarAndPIPAnimated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end

