/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoPassKit/NanoPassKit-Structs.h>
@class NSData;

@interface NPKBitmapImage : NSObject {

	unsigned _bitmapInfo;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	NSData* _bitmapData;

}

@property (assign) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (retain) NSData * bitmapData;                              //@synthesize bitmapData=_bitmapData - In the implementation block
-(unsigned long long)bitsPerComponent;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned)bitmapInfo;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRow;
-(void)setBitmapData:(NSData *)arg1 ;
-(unsigned long long)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(NSData *)bitmapData;
-(id)initWithCGImageRef:(CGImageRef)arg1 ;
-(id)initWithEncodedImage:(id)arg1 ;
-(id)encodedImage;
-(CGImageRef)createImageRef;
-(void)enumerateAllPixels:(/*^block*/id)arg1 ;
@end

