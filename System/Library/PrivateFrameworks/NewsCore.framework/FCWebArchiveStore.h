/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAssetStore;

@interface FCWebArchiveStore : NSObject {

	FCAssetStore* _assetStore;

}

@property (nonatomic,retain) FCAssetStore * assetStore;              //@synthesize assetStore=_assetStore - In the implementation block
-(id)initWithStoreDirectory:(id)arg1 ;
-(id)allWebArchiveKeys;
-(id)webArchiveURLForKey:(id)arg1 ;
-(unsigned long long)totalSizeOfAllWebArchives;
-(BOOL)deleteWebArchiveForKey:(id)arg1 ;
-(BOOL)saveWebArchiveData:(id)arg1 forKey:(id)arg2 ;
-(FCAssetStore *)assetStore;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
@end

