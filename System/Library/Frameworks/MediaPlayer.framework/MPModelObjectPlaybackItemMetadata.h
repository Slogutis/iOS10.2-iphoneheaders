/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue, MPModelObjectPlaybackItemMetadataDelegate;
@class MPModelSong, NSObject, MPModelObject;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	MPModelSong* _song;
	NSObject*<OS_dispatch_queue> _writeQueue;
	id<MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
	MPModelObject* _modelObject;

}

@property (assign,nonatomic,__weak) id<MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate;              //@synthesize modelObjectDelegate=_modelObjectDelegate - In the implementation block
@property (nonatomic,retain) MPModelObject * modelObject;                                                           //@synthesize modelObject=_modelObject - In the implementation block
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(BOOL)_shouldRespectStoreCellularDataSetting;
+(id)requiredPropertiesForModelObjectClass:(Class)arg1 ;
+(id)_requiredSongProperties;
+(id)_requiredPlaylistEntryProperties;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(MPModelObject *)modelObject;
-(BOOL)isExplicitTrack;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)modelSong;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(id)composerName;
-(BOOL)showComposer;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(BOOL)shouldRememberBookmarkTime;
-(float)volumeNormalization;
-(long long)storeAdamID;
-(long long)endpointType;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(unsigned long long)storeSagaID;
-(unsigned long long)storeAccountID;
-(id)localNetworkContentURL;
-(id)protectedContentSupportStorageURL;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)mediaLibraryPersistentID;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(id)contentTitle;
-(long long)downloadIdentifier;
-(double)expectedDuration;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(BOOL)allowsAssetCaching;
-(void)setModelObjectDelegate:(id<MPModelObjectPlaybackItemMetadataDelegate>)arg1 ;
-(id<MPModelObjectPlaybackItemMetadataDelegate>)modelObjectDelegate;
-(id)buyParameters;
-(id)artistName;
-(id)albumTitle;
-(id)mediaItem;
-(unsigned long long)contentType;
@end

