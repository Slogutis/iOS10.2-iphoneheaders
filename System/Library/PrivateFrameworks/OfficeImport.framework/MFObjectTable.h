/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFObjectTable : NSObject {

	NSMutableArray* m_objects;

}
-(id)init;
-(int)size;
-(void)dealloc;
-(void)clear;
-(unsigned)insertPos;
-(int)deleteObject:(unsigned)arg1 ;
-(int)selectInto:(int)arg1 :(id)arg2 ;
-(int)putObject:(id)arg1 :(unsigned)arg2 ;
-(id)getObject:(unsigned)arg1 ;
@end

