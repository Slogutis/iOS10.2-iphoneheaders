/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaSongUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _artist;
	NSString* _album;
	NSString* _lyrics;
	LPiTunesMediaAsset* _artwork;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artist;                            //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                             //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * lyrics;                            //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSArray * offers;                           //@synthesize offers=_offers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)resolve;
-(LPiTunesMediaAsset *)artwork;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)lyrics;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setLyrics:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSArray *)offers;
-(NSString *)storeFrontIdentifier;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(id)assetsToResolve;
@end
