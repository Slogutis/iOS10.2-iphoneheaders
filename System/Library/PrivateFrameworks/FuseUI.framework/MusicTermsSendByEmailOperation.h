/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsSendByEmailOperation : SSVComplexOperation {

	NSError* _error;
	NSString* _emailAddress;

}

@property (copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
-(void)main;
-(NSString *)emailAddress;
-(id)error;
-(id)initWithEmailAddress:(id)arg1 ;
@end
