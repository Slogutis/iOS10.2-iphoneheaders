/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * sinfs; 
+(id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
+(id)copyDatabaseDictionaryWithRequestProperties:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
-(id)copyStoreDownloadKeyCookie;
-(id)copyURLRequestProperties;
-(NSArray *)sinfs;
-(BOOL)deleteFromDatabase;
@end
