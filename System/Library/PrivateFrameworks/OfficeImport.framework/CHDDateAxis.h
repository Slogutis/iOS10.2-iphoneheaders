/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDDateAxis : CHDAxis {

	BOOL mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;

}
-(BOOL)isAutomatic;
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(double)minorUnitValue;
-(double)majorUnitValue;
-(BOOL)isDate;
-(void)setAutomatic:(BOOL)arg1 ;
-(int)majorTimeUnit;
-(void)setMajorTimeUnit:(int)arg1 ;
-(int)minorTimeUnit;
-(void)setMinorTimeUnit:(int)arg1 ;
-(int)baseTimeUnit;
-(void)setBaseTimeUnit:(int)arg1 ;
@end
