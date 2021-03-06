/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncablePerson.h>

@class NSString, NSSet, PLDetectedFace, PLDetectedFaceGroup;

@interface PLPerson : PLManagedObject <PLSyncablePerson> {

	BOOL _needsPersistenceUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (assign,nonatomic) BOOL verified; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                            //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSSet * personReferences; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,retain) PLDetectedFace * keyFace; 
@property (nonatomic,retain) PLDetectedFaceGroup * rejectedFacesGroup; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) int manualOrder; 
@property (nonatomic,retain) NSString * personUri; 
@property (assign,nonatomic) BOOL inPersonNamingModel; 
@property (assign,nonatomic) int faceCount; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) PLDetectedFaceGroup * associatedFaceGroup; 
+(id)peopleToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)peopleWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(/*^block*/id)arg3 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4 ;
+(id)_persistenceUpdateQueue;
+(id)_stringFromContact:(id)arg1 preferGivenName:(BOOL)arg2 ;
+(id)allPersonsInManagedObjectContext:(id)arg1 ;
+(void)deleteAllPersonsInManagedObjectContext:(id)arg1 ;
+(void)createAssociatedPersonForFaceGroup:(id)arg1 ;
+(void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)fullNameFromContact:(id)arg1 ;
+(id)displayNameFromContact:(id)arg1 ;
+(id)entityName;
-(id)cplPersonChange;
-(id)debugLogDescription;
-(void)persistMetadataToFileSystem;
-(id)mutableFaces;
-(void)refreshFaces;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemData;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)didSave;
-(BOOL)needsPersistenceUpdate;
-(BOOL)shouldIndexForSearch;
-(BOOL)isValidForPersistence;
-(id)rejectedFacesGroupInsertingIfNeeded;
@end

