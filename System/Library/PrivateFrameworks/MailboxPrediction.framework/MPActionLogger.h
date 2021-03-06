/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPActionLogging.h>

@class NSString;

@interface MPActionLogger : NSObject <MPActionLogging> {

	NSString* _modelName;

}

@property (nonatomic,retain) NSString * modelName;                  //@synthesize modelName=_modelName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)modelName;
-(void)logKeySet:(id)arg1 ;
-(void)logUserAction:(unsigned long long)arg1 inContext:(unsigned long long)arg2 forMessage:(id)arg3 available:(id)arg4 displayed:(id)arg5 selected:(id)arg6 ;
-(id)initWithModelName:(id)arg1 ;
@end

