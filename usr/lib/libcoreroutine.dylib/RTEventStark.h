/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTEventStark : RTEvent <NSSecureCoding> {

	long long _starkState;

}

@property (nonatomic,readonly) long long starkState;              //@synthesize starkState=_starkState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromStarkState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)starkState;
-(id)initWithDeviceStarkState:(long long)arg1 source:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

