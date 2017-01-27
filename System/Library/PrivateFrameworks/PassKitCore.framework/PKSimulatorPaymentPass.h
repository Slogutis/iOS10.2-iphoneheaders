/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPass.h>

@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass {

	NSDictionary* _dictionary;

}
-(id)localizedDescription;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)devicePrimaryPaymentApplication;
-(id)primaryAccountIdentifier;
-(id)primaryAccountNumberSuffix;
@end
