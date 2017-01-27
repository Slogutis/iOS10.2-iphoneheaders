/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMInstructionLabel.h>

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel {

	long long _shallowDepthOfFieldStatus;
	unsigned long long _numberOfPeopleFound;

}

@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleFound;              //@synthesize numberOfPeopleFound=_numberOfPeopleFound - In the implementation block
+(id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 ;
+(BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateText;
-(long long)shallowDepthOfFieldStatus;
-(unsigned long long)numberOfPeopleFound;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)setNumberOfPeopleFound:(unsigned long long)arg1 ;
-(double)_backgroundAlpha;
-(UIEdgeInsets)_textInsets;
@end
