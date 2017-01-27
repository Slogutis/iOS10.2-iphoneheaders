/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface MLDDatabaseFileDiagnostic : NSObject {

	NSString* _databasePath;
	NSArray* _processesWithOpenFileHandles;
	NSDictionary* _fileAttributes;

}

@property (nonatomic,readonly) NSString * databasePath;                             //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) NSArray * processesWithOpenFileHandles;              //@synthesize processesWithOpenFileHandles=_processesWithOpenFileHandles - In the implementation block
@property (nonatomic,readonly) NSDictionary * fileAttributes;                       //@synthesize fileAttributes=_fileAttributes - In the implementation block
-(NSArray *)processesWithOpenFileHandles;
-(id)description;
-(id)initWithDatabasePath:(id)arg1 ;
-(NSString *)databasePath;
-(NSDictionary *)fileAttributes;
@end
