/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSArray, PHObject, NSString;

@interface PHRelatedCollection : PHAssetCollection {

	long long _titleCategory;
	unsigned long long _relationType;
	NSArray* _debugInfo;
	PHObject* _relatedObject;
	NSArray* _momentLocalIdentifiers;
	NSString* _subtitle;

}

@property (nonatomic,readonly) NSArray * debugInfo;                           //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,readonly) PHObject * relatedObject;                      //@synthesize relatedObject=_relatedObject - In the implementation block
@property (nonatomic,readonly) NSArray * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long relationType;               //@synthesize relationType=_relationType - In the implementation block
+(id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2 ;
+(id)_transientCollectionListWithCollectionsRelatedToIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToFaceCollections:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
-(NSString *)subtitle;
-(id)localizedSubtitle;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleCategory:(long long)arg7 momentLocalIdentifiers:(id)arg8 debugInfo:(id)arg9 ;
-(unsigned long long)relationType;
-(PHObject *)relatedObject;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(long long)titleCategory;
-(NSArray *)debugInfo;
-(NSArray *)momentLocalIdentifiers;
@end

