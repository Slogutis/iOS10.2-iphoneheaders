/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSString, NSArray, NSNumber;

@interface PLSAlbum : PLSItem {

	NSString* _name;
	NSArray* _assetUUIDs;
	NSString* _parentUUID;
	NSNumber* _albumSubclass;
	NSNumber* _albumKeyAssetFaceIndex;
	NSString* _keyAssetUUID;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                           //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * parentUUID;                          //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,retain) NSNumber * albumSubclass;                       //@synthesize albumSubclass=_albumSubclass - In the implementation block
@property (nonatomic,retain) NSNumber * albumKeyAssetFaceIndex;              //@synthesize albumKeyAssetFaceIndex=_albumKeyAssetFaceIndex - In the implementation block
@property (nonatomic,retain) NSString * keyAssetUUID;                        //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
+(id)albumWithUUID:(id)arg1 ;
+(id)album;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setParentUUID:(NSString *)arg1 ;
-(BOOL)isEqualToAlbum:(id)arg1 ;
-(NSString *)parentUUID;
-(NSNumber *)albumKeyAssetFaceIndex;
-(void)setAlbumSubclass:(NSNumber *)arg1 ;
-(void)setAlbumKeyAssetFaceIndex:(NSNumber *)arg1 ;
-(NSNumber *)albumSubclass;
-(id)_itemType;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(NSArray *)assetUUIDs;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
@end

