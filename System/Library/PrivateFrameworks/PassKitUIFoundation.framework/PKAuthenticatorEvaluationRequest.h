/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PKAuthenticatorEvaluationRequest : NSObject {

	NSString* _reason;
	NSString* _processName;
	NSNumber* _processIdentifier;
	NSString* _PINTitle;
	NSNumber* _PINLength;
	long long _policy;

}

@property (nonatomic,readonly) long long policy;                      //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * processName;                    //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) NSNumber * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * PINTitle;                       //@synthesize PINTitle=_PINTitle - In the implementation block
@property (nonatomic,copy) NSNumber * PINLength;                      //@synthesize PINLength=_PINLength - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)processName;
-(NSString *)reason;
-(NSNumber *)processIdentifier;
-(NSNumber *)PINLength;
-(long long)policy;
-(void)setReason:(NSString *)arg1 ;
-(void)setProcessIdentifier:(NSNumber *)arg1 ;
-(id)initWithPolicy:(long long)arg1 ;
-(void)setPINTitle:(NSString *)arg1 ;
-(void)setPINLength:(NSNumber *)arg1 ;
-(NSString *)PINTitle;
@end

