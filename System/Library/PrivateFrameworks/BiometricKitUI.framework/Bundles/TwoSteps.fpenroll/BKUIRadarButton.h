/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <UIKit/UIButton.h>

@protocol OS_os_log;
@class NSObject, UIViewController, NSString;

@interface BKUIRadarButton : UIButton {

	BOOL _flashing;
	NSObject*<OS_os_log> bkui_radar_button_log;
	UIViewController* _parentController;
	NSString* _radarInternalDescription;
	SEL _parentTapSelector;

}

@property (__weak) UIViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (retain) NSString * radarInternalDescription;              //@synthesize radarInternalDescription=_radarInternalDescription - In the implementation block
@property (assign) SEL parentTapSelector;                            //@synthesize parentTapSelector=_parentTapSelector - In the implementation block
-(SEL)parentTapSelector;
-(NSString *)radarInternalDescription;
-(void)setRadarInternalDescription:(NSString *)arg1 ;
-(void)setParentTapSelector:(SEL)arg1 ;
-(void)_startFlashingWithPeriod:(double)arg1 ;
-(void)_clicked:(id)arg1 ;
-(void)blinkTimes:(unsigned long long)arg1 withPeriod:(double)arg2 ;
-(void)blinkTimes:(unsigned long long)arg1 ;
-(void)_stopFlashing;
-(void)fillRadar;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setParentController:(UIViewController *)arg1 ;
-(UIViewController *)parentController;
-(void)_setup;
-(void)blink;
@end
