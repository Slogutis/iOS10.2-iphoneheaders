/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OITSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)init;
-(void)dealloc;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
@end

