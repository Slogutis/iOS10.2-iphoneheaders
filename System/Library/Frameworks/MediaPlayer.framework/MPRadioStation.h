/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RadioStation, NSString;

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding> {

	RadioStation* _station;

}

@property (getter=_station,nonatomic,readonly) RadioStation * _station; 
@property (nonatomic,readonly) long long uniqueIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
-(long long)uniqueIdentifier;
-(RadioStation *)_station;
-(id)initWithStation:(id)arg1 ;
@end
