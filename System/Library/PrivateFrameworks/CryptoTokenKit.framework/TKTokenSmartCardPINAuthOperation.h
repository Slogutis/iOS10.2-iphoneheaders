/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class TKSmartCardPINFormat, NSData, TKSmartCard, NSString;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation {

	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDUTemplate;
	long long _PINByteOffset;
	TKSmartCard* _smartCard;
	NSString* _PIN;

}

@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (copy) NSData * APDUTemplate;                           //@synthesize APDUTemplate=_APDUTemplate - In the implementation block
@property (assign) long long PINByteOffset;                       //@synthesize PINByteOffset=_PINByteOffset - In the implementation block
@property (retain) TKSmartCard * smartCard;                       //@synthesize smartCard=_smartCard - In the implementation block
@property (copy) NSString * PIN;                                  //@synthesize PIN=_PIN - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)PIN;
-(void)setPIN:(NSString *)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)PINByteOffset;
-(NSData *)APDUTemplate;
-(TKSmartCard *)smartCard;
-(void)setAPDUTemplate:(NSData *)arg1 ;
-(void)setSmartCard:(TKSmartCard *)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
@end

