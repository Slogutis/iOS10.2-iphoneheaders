/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHNotifyOnModify.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartInfo, TSCHChartGrid, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface TSCHChartModel : NSObject <TSCHNotifyOnModify, TSCHUnretainedParent, TSDMixing, NSCopying> {

	TSCHChartInfo* mInfo;
	TSCHChartGrid* mGrid;
	int mScatterFormat;
	unsigned long long mMultiDataSetIndex;
	BOOL mIsTransient;
	NSMutableArray* mSeriesList;
	NSMutableArray* mAxisList;
	NSMutableDictionary* mRefLinesMap;
	unsigned long long mNumberOfSeriesForCalculatingBarWidth;
	BOOL mModelInvalid;
	NSMutableDictionary* mModelManagedCaches;
	NSMutableDictionary* mSeriesDimensionsByGridIndex;
	NSMutableDictionary* mGridIndexesBySeriesDimension;

}

@property (assign,nonatomic) TSCHChartInfo * chartInfo; 
@property (nonatomic,retain) TSCHChartGrid * grid; 
@property (assign,nonatomic) int scatterFormat; 
@property (nonatomic,readonly) BOOL isTransient; 
@property (nonatomic,readonly) BOOL isMultiData; 
@property (assign,nonatomic) unsigned long long multiDataSetIndex; 
@property (nonatomic,readonly) unsigned long long numberOfMultiDataSets; 
@property (nonatomic,readonly) unsigned long long numberOfMultiDataSetCategories; 
@property (nonatomic,readonly) unsigned long long numberOfChunkableMultiDataSets; 
@property (nonatomic,readonly) unsigned long long numberOfSeries; 
@property (nonatomic,readonly) unsigned long long numberOfSeriesForCalculatingBarWidth; 
@property (nonatomic,readonly) unsigned long long numberOfValues; 
@property (nonatomic,readonly) unsigned long long maxNumberOfReferenceLines; 
@property (nonatomic,retain,readonly) NSArray * seriesList; 
@property (nonatomic,retain,readonly) NSArray * axisList; 
@property (nonatomic,retain,readonly) NSArray * valueAxisList; 
@property (nonatomic,retain,readonly) NSArray * categoryAxisList; 
@property (nonatomic,retain,readonly) NSDictionary * referenceLinesMap; 
@property (nonatomic,retain,readonly) id syncRoot; 
-(void)willModify;
-(void)validateIfNeeded;
-(NSArray *)axisList;
-(void)invalidateModel;
-(unsigned long long)maxNumberOfReferenceLines;
-(TSCHChartInfo *)chartInfo;
-(id)axisForID:(id)arg1 ;
-(void)clearParent;
-(BOOL)isMultiData;
-(void)enumerateMultiDataModelsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfSeries;
-(id)seriesAtIndex:(unsigned long long)arg1 ;
-(id)referenceLineForStyleSwapIndex:(unsigned long long)arg1 ;
-(id)barModelCacheForSeries:(unsigned long long)arg1 ;
-(id)pieSeriesModelCacheForSeries:(unsigned long long)arg1 ;
-(NSDictionary *)referenceLinesMap;
-(id)syncRoot;
-(NSArray *)seriesList;
-(unsigned long long)multiDataSetIndex;
-(unsigned long long)multiDataSetCategoryIndexForCategory:(unsigned long long)arg1 ;
-(unsigned long long)categoryForMultiDataSetCategoryIndex:(unsigned long long)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(int)scatterFormat;
-(id)initWithChartInfo:(id)arg1 ;
-(unsigned long long)numberOfMultiDataSets;
-(id)initWithChartInfo:(id)arg1 dataSetIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_lastMultiDataSetIndex;
-(void)setScatterFormat:(int)arg1 ;
-(void)setMultiDataSetIndex:(unsigned long long)arg1 ;
-(id)p_axisForID:(id)arg1 ;
-(void)p_synchronizeAxis:(id)arg1 class:(Class)arg2 axisID:(id)arg3 axisIndex:(unsigned long long)arg4 styleIndex:(unsigned long long)arg5 usedAxes:(id)arg6 unusedAxes:(id)arg7 ;
-(void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(BOOL)arg1 ;
-(unsigned long long)defaultOrdinalForAxisType:(int)arg1 seriesIndex:(unsigned long long)arg2 ;
-(void)p_setBimapEntryForSeriesDimension:(id)arg1 andGridIndex:(unsigned long long)arg2 ;
-(void)p_synchronizeModelWithSeriesNonStyleMigration:(BOOL)arg1 ;
-(void)p_synchronizeAxisList;
-(void)p_postSynchronizeAxisList;
-(void)p_synchronizeReferenceLines;
-(void)resetSeriesStorage;
-(void)p_synchronizeModel;
-(unsigned long long)numberOfGridValues;
-(unsigned long long)p_multiDataSetCategoryIndexForCategory:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMultiDataSetCategories;
-(id)nameForMultiDataSetCategory:(unsigned long long)arg1 ;
-(void)setNameForMultiDataSetCategory:(unsigned long long)arg1 toName:(id)arg2 ;
-(BOOL)p_shouldLoadDefaultData;
-(void)p_loadDefaultDataWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3 ;
-(void)p_loadDefaultData;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(unsigned long long)p_archivedMultiDataSetIndex;
-(void)updateTransientModelFromInfoModel;
-(void)p_synchronizeSeriesList;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 ;
-(void)validateIfNeededWithSeriesNonStyleMigration:(BOOL)arg1 ;
-(id)noSyncAxisList;
-(NSArray *)valueAxisList;
-(NSArray *)categoryAxisList;
-(id)noSyncSeriesList;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth;
-(unsigned long long)numberOfChunkableMultiDataSets;
-(id)nameForSeries:(unsigned long long)arg1 ;
-(id)dataSetNameForMultiDataModel;
-(void)setNameForCategory:(unsigned long long)arg1 toName:(id)arg2 ;
-(void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)arg1 gridColumnIds:(id)arg2 forDocumentLocale:(id)arg3 ;
-(void)loadDefaultDataIfNotDirty;
-(void)forceLoadDefaultData;
-(id)seriesDimensionForGridIndex:(unsigned long long)arg1 ;
-(unsigned long long)gridIndexForSeriesDimension:(id)arg1 ;
-(BOOL)hasReferenceLines;
-(unsigned long long)styleSwapIndexForReferenceLine:(id)arg1 ;
-(id)lineAreaModelCacheForSeries:(unsigned long long)arg1 ;
-(id)legendModelCache;
-(void)loadFromPreUFFArchive:(const ChartModelArchive*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 ;
-(void)setTextEditingSelectionPath:(id)arg1 string:(id)arg2 ;
-(void)clearTextEditingSelectionPath;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 unarchiver:(id)arg2 contextForUpgradeOnly:(id)arg3 chartInfo:(id)arg4 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 forCopy:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTransient;
-(unsigned long long)numberOfValues;
-(void)setGrid:(TSCHChartGrid *)arg1 ;
-(void)invalidateCaches;
-(id)cachedObjectForKey:(id)arg1 ;
-(id)nameForCategory:(unsigned long long)arg1 ;
-(TSCHChartGrid *)grid;
@end
