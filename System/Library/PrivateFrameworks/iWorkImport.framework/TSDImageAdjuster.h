/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {

	TSDImageAdjustments* mImageAdjustments;

}
-(CGImageRef)p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImageRef)arg2 ;
-(id)initWithImageAdjustments:(id)arg1 ;
-(CGImageRef)newFilteredImageForImage:(CGImageRef)arg1 enhancedImage:(CGImage*)arg2 ;
-(id)init;
-(void)dealloc;
@end

