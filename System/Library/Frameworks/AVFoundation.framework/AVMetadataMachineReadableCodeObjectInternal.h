/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	BOOL decoded;
	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) BOOL decoded; 
-(void)dealloc;
-(NSString *)stringValue;
-(NSArray *)corners;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(BOOL)decoded;
-(void)setDecoded:(BOOL)arg1 ;
-(void)setCorners:(NSArray *)arg1 ;
@end

