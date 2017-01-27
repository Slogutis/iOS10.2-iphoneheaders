/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLock, NSFileHandle;

@interface HDDatabaseJournal : NSObject {

	NSString* _path;
	NSLock* _journalLock;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSLock * journalLock;                   //@synthesize journalLock=_journalLock - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)mergeWithProfile:(id)arg1 ;
-(BOOL)_appendData:(id)arg1 error:(id*)arg2 ;
-(void)_executeAtomically:(/*^block*/id)arg1 ;
-(id)_sortedListOfJournalFiles;
-(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 error:(id*)arg4 ;
-(id)_nameOfNextJournalFile;
-(id)_loadJournalEntry:(id)arg1 ;
-(unsigned)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileHandle:(id)arg4 mapping:(void*)arg5 length:(unsigned long long)arg6 error:(id*)arg7 ;
-(unsigned)_processOkemoJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8 ;
-(unsigned)_processMonarchJournalWithVersion:(unsigned)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8 ;
-(BOOL)_loadJournalFromMapping:(void*)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id*)arg4 error:(id*)arg5 ;
-(BOOL)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id*)arg2 error:(id*)arg3 ;
-(void)_mergeJournalEntries:(id)arg1 profile:(id)arg2 ;
-(BOOL)_performPostJournalMergeWithVersion:(unsigned)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(NSLock *)journalLock;
-(void)setJournalLock:(NSLock *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end
