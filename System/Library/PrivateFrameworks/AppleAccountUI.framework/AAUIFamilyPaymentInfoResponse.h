/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse {

	AAUIFamilyCreditCard* _creditCard;

}

@property (nonatomic,retain) AAUIFamilyCreditCard * creditCard;              //@synthesize creditCard=_creditCard - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(AAUIFamilyCreditCard *)creditCard;
-(void)setCreditCard:(AAUIFamilyCreditCard *)arg1 ;
@end
