/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TUDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)dispatcherWithIdentifier:(id)arg1 ;
+(id)dispatcherWithQueue:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(/*^block*/id)qosUserInteractiveDispatchBlockForBlock:(/*^block*/id)arg1 ;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)boostQualityOfService;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end
