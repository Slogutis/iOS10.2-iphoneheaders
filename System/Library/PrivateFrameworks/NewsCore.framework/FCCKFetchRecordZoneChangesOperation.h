/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKDatabase, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKFetchRecordZoneChangesOperation : FCNetworkOperation {

	BOOL _fetchAllChanges;
	FCCKDatabase* _database;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	/*^block*/id _finishedBlock;
	NSMutableArray* _unfinishedRecordZoneIDs;
	NSMutableDictionary* _unfinishedOptionsByRecordZoneID;
	NSMutableDictionary* _changedRecordsByRecordType;
	NSMutableDictionary* _deletedRecordIDsByRecordType;
	NSMutableDictionary* _recordZoneChangeResultsByRecordZoneID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * unfinishedRecordZoneIDs;                                 //@synthesize unfinishedRecordZoneIDs=_unfinishedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unfinishedOptionsByRecordZoneID;                    //@synthesize unfinishedOptionsByRecordZoneID=_unfinishedOptionsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changedRecordsByRecordType;                         //@synthesize changedRecordsByRecordType=_changedRecordsByRecordType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deletedRecordIDsByRecordType;                       //@synthesize deletedRecordIDsByRecordType=_deletedRecordIDsByRecordType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneChangeResultsByRecordZoneID;              //@synthesize recordZoneChangeResultsByRecordZoneID=_recordZoneChangeResultsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                                 //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                    //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID;                                       //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                     //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id finishedBlock;                                                           //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(id)init;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(FCCKDatabase *)database;
-(void)setDatabase:(FCCKDatabase *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(NSArray *)recordZoneIDs;
-(NSDictionary *)optionsByRecordZoneID;
-(void)prepareOperation;
-(void)setUnfinishedRecordZoneIDs:(NSMutableArray *)arg1 ;
-(void)setUnfinishedOptionsByRecordZoneID:(NSMutableDictionary *)arg1 ;
-(void)_fetchRecordZoneChanges;
-(void)setOperationError:(NSError *)arg1 ;
-(NSMutableDictionary *)changedRecordsByRecordType;
-(NSMutableDictionary *)deletedRecordIDsByRecordType;
-(NSMutableDictionary *)recordZoneChangeResultsByRecordZoneID;
-(NSError *)operationError;
-(NSMutableArray *)unfinishedRecordZoneIDs;
-(NSMutableDictionary *)unfinishedOptionsByRecordZoneID;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setChangedRecordsByRecordType:(NSMutableDictionary *)arg1 ;
-(void)setDeletedRecordIDsByRecordType:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneChangeResultsByRecordZoneID:(NSMutableDictionary *)arg1 ;
@end
