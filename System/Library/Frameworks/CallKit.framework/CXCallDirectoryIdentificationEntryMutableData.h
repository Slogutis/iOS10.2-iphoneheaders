/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallDirectoryIdentificationEntryData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryIdentificationEntryMutableData : CXCallDirectoryIdentificationEntryData <NSCopying> {

	NSMutableData* _mutablePhoneNumberData;
	NSMutableData* _mutableLabelData;
	NSMutableDictionary* _labelToLabelDataOffset;

}

@property (nonatomic,retain) NSMutableData * mutablePhoneNumberData;                    //@synthesize mutablePhoneNumberData=_mutablePhoneNumberData - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableLabelData;                          //@synthesize mutableLabelData=_mutableLabelData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelToLabelDataOffset;              //@synthesize labelToLabelDataOffset=_labelToLabelDataOffset - In the implementation block
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableData *)mutablePhoneNumberData;
-(NSMutableData *)mutableLabelData;
-(BOOL)appendPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(void)setMutablePhoneNumberData:(NSMutableData *)arg1 ;
-(void)setMutableLabelData:(NSMutableData *)arg1 ;
-(NSMutableDictionary *)labelToLabelDataOffset;
-(void)setLabelToLabelDataOffset:(NSMutableDictionary *)arg1 ;
@end

