/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDBezierPath : GQDPath <GQDNameMappable> {

	CGPathRef mPath;
	char* mPathStr;
	BOOL mHasVFlip;
	BOOL mVFlip;
	BOOL mHasHFlip;
	BOOL mHFlip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
+(CFStringRef)createCFStringFromPath:(CGPathRef)arg1 ;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(id)initWithPathString:(const char*)arg1 ;
-(char*)pathStr;
-(CGPathRef)createBezierPath;
-(BOOL)hasVerticalFlip;
-(BOOL)hasHorizontalFlip;
-(void)dealloc;
-(CGPathRef)path;
-(BOOL)isRectangular;
@end

