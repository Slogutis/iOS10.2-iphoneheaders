/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {

	AVManagedAssetCacheInternal* _priv;

}
+(id)assetCacheWithURL:(id)arg1 ;
-(void)dealloc;
-(id)allKeys;
-(long long)maxSize;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(void)setMaxSize:(long long)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(BOOL)isPlayableOffline;
-(long long)maxEntrySize;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)setMaxEntrySize:(long long)arg1 ;
-(void)finalize;
@end
