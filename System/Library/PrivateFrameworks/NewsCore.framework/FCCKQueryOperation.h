/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKDatabase, CKQuery, CKQueryCursor, NSArray;

@interface FCCKQueryOperation : FCNetworkOperation {

	FCCKDatabase* _database;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	NSArray* _requestUUIDs;
	NSArray* _networkEvents;
	CKQueryCursor* _resultCursor;

}

@property (nonatomic,copy) NSArray * requestUUIDs;                         //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                        //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultCursor;                 //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,retain) FCCKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKQuery * query;                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                       //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                          //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                          //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCompletionBlock;                        //@synthesize queryCompletionBlock=_queryCompletionBlock - In the implementation block
-(id)init;
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)setQuery:(CKQuery *)arg1 ;
-(FCCKDatabase *)database;
-(void)setDatabase:(FCCKDatabase *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultCursor:(CKQueryCursor *)arg1 ;
-(NSArray *)networkEvents;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(NSArray *)requestUUIDs;
-(void)setQueryCompletionBlock:(id)arg1 ;
-(id)queryCompletionBlock;
-(id)recordFetchedBlock;
-(id)throttleGroup;
-(CKQueryCursor *)resultCursor;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(id)_requestOperations;
-(id)_ckRecordsFromQueryResponse:(id)arg1 ;
-(id)_ckCursorFromQueryResponse:(id)arg1 ;
@end

