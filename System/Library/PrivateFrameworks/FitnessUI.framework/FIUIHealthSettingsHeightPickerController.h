/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {

	NSLengthFormatter* _heightFormatter;
	/*^block*/id _heightUpdateHandler;

}

@property (nonatomic,copy) id heightUpdateHandler;              //@synthesize heightUpdateHandler=_heightUpdateHandler - In the implementation block
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)forceUpdate;
-(void)_heightPickerUpdated;
-(id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)heightUpdateHandler;
-(void)setHeightUpdateHandler:(id)arg1 ;
-(void)setHeightQuantity:(id)arg1 ;
@end

