/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface _DPBlacklist : NSObject {

	NSSet* _blacklist;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSSet * blacklist;                //@synthesize blacklist=_blacklist - In the implementation block
+(id)blacklistForKey:(id)arg1 ;
+(id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
-(id)init;
-(NSString *)key;
-(NSSet *)blacklist;
-(id)initWithKey:(id)arg1 ;
@end
