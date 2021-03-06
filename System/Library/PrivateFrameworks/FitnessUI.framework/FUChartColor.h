/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@interface FUChartColor : NSObject {

	CGGradientRef _gradient;
	CGColorRef _color;
	double _chartYValue;
	double _threshold;

}

@property (assign,nonatomic) double chartYValue; 
@property (assign,nonatomic) double threshold;                //@synthesize threshold=_threshold - In the implementation block
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
-(void)setChartYValue:(double)arg1 ;
-(double)chartYValue;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end

