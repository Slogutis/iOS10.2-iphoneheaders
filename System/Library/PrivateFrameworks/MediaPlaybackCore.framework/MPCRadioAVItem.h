/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSArray, MPModelResponse, MPModelSong, RadioTrack, RadioStation, NSString, RadioArtworkCollection;

@interface MPCRadioAVItem : MPAVItem {

	NSArray* _buyOffers;
	MPModelResponse* _modelSongPersonalizationResponse;
	MPModelSong* _modelSong;
	RadioTrack* _radioTrack;
	BOOL _isInWishList;
	BOOL _heartbeatInvalid;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (assign,getter=isHeartbeatInvalid,nonatomic) BOOL heartbeatInvalid;                 //@synthesize heartbeatInvalid=_heartbeatInvalid - In the implementation block
@property (nonatomic,copy,readonly) RadioArtworkCollection * _artworkCollection; 
@property (nonatomic,readonly) double _expectedDuration; 
@property (nonatomic,readonly) BOOL _hasLyrics; 
@property (assign,nonatomic) BOOL isInWishList;                                               //@synthesize isInWishList=_isInWishList - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                          //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                                        //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                           //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                                        //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;                                    //@synthesize stationStringID=_stationStringID - In the implementation block
+(id)_supportedModelSongProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)title;
-(long long)stationID;
-(long long)_persistedLikedState;
-(void)_handleUpdatedLikedState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)storeItemInt64ID;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(id)artist;
-(BOOL)isCloudItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(BOOL)isStreamable;
-(id)mainTitle;
-(BOOL)supportsSettingCurrentTime;
-(id)titlesForTime:(double)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)localizedPositionInPlaylistString;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reevaluateType;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)copyrightText;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(long long)storeSubscriptionAdamID;
-(id)modelSong;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(BOOL)usesSubscriptionLease;
-(NSString *)stationStringID;
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
-(NSString *)stationHash;
-(RadioStation *)station;
-(id)album;
-(id)mediaItem;
-(unsigned long long)persistentID;
-(void)setStation:(RadioStation *)arg1 ;
-(BOOL)isRadioItem;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(NSString *)stationName;
-(void)_internalIsInWishlistDidChangeNotification:(id)arg1 ;
-(id)radioTrack;
-(RadioArtworkCollection *)_artworkCollection;
-(void)_applyLoudnessInfoForVolumeNormalization;
-(void)_invalidateModelSong;
-(BOOL)_isSubscriptionEligible;
-(double)_expectedDuration;
-(BOOL)_hasLyrics;
-(void)_modelSongPersonalizationResponseDidInvalidateNotification:(id)arg1 ;
-(void)_sendLikeOrBanRequestWithStatus:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isInWishList;
-(id)initWithRadioTrack:(id)arg1 ;
-(id)aggregateDictionaryItemType;
-(unsigned long long)mpcReporting_itemType;
-(BOOL)mpcReporting_shouldReportPlayEventsToStore;
-(id)mpcReporting_trackInfo;
-(void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIsInWishList:(BOOL)arg1 ;
-(void)_beginUsingPlaybackLease;
-(BOOL)isHeartbeatInvalid;
-(void)setHeartbeatInvalid:(BOOL)arg1 ;
@end

