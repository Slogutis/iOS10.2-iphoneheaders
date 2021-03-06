/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>
#import <libobjc.A.dylib/CLSSnapshotSupportProtocol.h>

@class NSDate, CLLocation, NSArray, NSSet, NSData, NSDateComponents, NSDictionary, NSURL, NSString, NSNumber;

@interface CLSInvestigationSnapshotAsset : NSObject <CLSInvestigationItem, CLSSnapshotSupportProtocol> {

	NSDictionary* _metadata;
	NSURL* _imageURLForFill;
	NSURL* _imageURLForFit;
	CLLocation* _location;
	NSDate* _creationDate;
	NSString* _assetName;
	NSArray* _faceRegions;
	NSNumber* _scoreValue;
	NSNumber* _hasAdjustments;
	NSNumber* _mediaSubtype;
	NSNumber* _representsBurst;
	NSNumber* _isFavoriteValue;
	NSNumber* _isPhotoValue;
	NSNumber* _isVideoValue;
	NSNumber* _isAudioValue;
	NSNumber* _isTrashedValue;
	NSNumber* _isHiddenValue;
	NSNumber* _isBlurryValue;
	NSNumber* _isIncludedInCloudFeeds;
	NSNumber* _originalInputOrder;
	NSNumber* _peopleCount;
	NSNumber* _facesCount;
	NSNumber* _clsViewCount;
	NSNumber* _clsPlayCount;
	NSNumber* _clsShareCount;
	NSData* _clsDistanceIdentity;
	NSNumber* _clsVideoScore;
	NSNumber* _clsSharpnessScore;
	NSNumber* _clsContentScore;
	NSNumber* _duration;
	NSArray* _clsUnprefetchedPeopleNames;

}

@property (nonatomic,readonly) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * clsDate; 
@property (nonatomic,readonly) CLLocation * clsLocation; 
@property (nonatomic,readonly) NSArray * clsPeopleNames; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;              //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) BOOL isUtility; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isBlurry; 
@property (nonatomic,readonly) BOOL clsIsSDOF; 
@property (nonatomic,readonly) BOOL clsIsHDR; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications; 
@property (nonatomic,readonly) NSData * clsDistanceIdentity; 
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
@property (nonatomic,readonly) NSDate * universalDate; 
@property (nonatomic,readonly) NSDate * localDate; 
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
+(id)contextForItems:(id)arg1 ;
+(id)snapshotItemWithMetadata:(id)arg1 imageURLForFill:(id)arg2 imageURLForFit:(id)arg3 ;
-(id)cloudIdentifier;
-(BOOL)isHidden;
-(NSString *)description;
-(double)duration;
-(NSDate *)date;
-(id)localIdentifier;
-(CLLocation *)location;
-(NSDateComponents *)dateComponents;
-(BOOL)isVideo;
-(NSDictionary *)metadata;
-(double)_score;
-(id)faceRegions;
-(BOOL)isIncludedInCloudFeeds;
-(BOOL)representsBurst;
-(id)objectID;
-(id)creationDate;
-(BOOL)isFavorite;
-(double)score;
-(BOOL)isPhoto;
-(BOOL)hasAdjustments;
-(BOOL)isAudio;
-(BOOL)isTrashed;
-(unsigned long long)peopleCount;
-(id)initWithMetadata:(id)arg1 imageURLForFill:(id)arg2 imageURLForFit:(id)arg3 ;
-(BOOL)isSubtype:(unsigned long long)arg1 ;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3 ;
-(double)scoreWithContext:(id)arg1 ;
-(NSDate *)clsDate;
-(CLLocation *)clsLocation;
-(NSArray *)clsPeopleNames;
-(NSArray *)clsUnprefetchedPeopleNames;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(double)clsContentScore;
-(BOOL)isUtility;
-(BOOL)isScreenshot;
-(BOOL)isBlurry;
-(BOOL)clsIsSDOF;
-(BOOL)clsIsHDR;
-(NSSet *)clsSceneClassifications;
-(NSData *)clsDistanceIdentity;
-(NSDate *)universalDate;
-(NSDate *)localDate;
-(unsigned long long)facesCount;
-(float)clsVideoScore;
-(float)clsSharpnessScore;
-(unsigned long long)clsPeopleCount;
-(id)itemMetadataForKeys:(id)arg1 ;
-(id)originalInputOrder;
-(NSArray *)peopleNames;
@end

