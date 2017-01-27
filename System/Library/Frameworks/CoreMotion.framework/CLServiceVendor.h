/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLServiceVendor : NSObject
+(void)initialize;
+(BOOL)isServiceEnabled:(id)arg1 ;
+(BOOL)ensureServiceIsRunning:(id)arg1 ;
+(id)getSiloForService:(id)arg1 ;
+(id)proxyForService:(id)arg1 ;
+(void)rereadConfiguration;
+(BOOL)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3 ;
+(id)getServiceWithName:(id)arg1 ;
+(void)retireServiceWithName:(id)arg1 ;
+(BOOL)isServiceRunning:(id)arg1 ;
+(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
@end
