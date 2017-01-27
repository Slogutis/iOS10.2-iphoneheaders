/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ENUCoordinate : NSObject {

	double _east;
	double _north;
	double _up;

}

@property (assign,nonatomic) double east;               //@synthesize east=_east - In the implementation block
@property (assign,nonatomic) double north;              //@synthesize north=_north - In the implementation block
@property (assign,nonatomic) double up;                 //@synthesize up=_up - In the implementation block
+(id)fromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3 ;
-(id)init;
-(double)east;
-(double)north;
-(id)initWithEast:(double)arg1 north:(double)arg2 up:(double)arg3 ;
-(void)setEast:(double)arg1 ;
-(void)setNorth:(double)arg1 ;
-(void)setUp:(double)arg1 ;
-(double)up;
@end
