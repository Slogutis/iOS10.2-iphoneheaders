/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVShape : NSObject
+(id)readFromShape:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(unsigned short)typeWithShape:(xmlNode*)arg1 state:(id)arg2 ;
+(id)managerWithShape:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readBoundsAndGeometryOfPolylineFromManager:(id)arg1 toShape:(id)arg2 state:(id)arg3 ;
@end
