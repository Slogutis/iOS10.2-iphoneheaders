/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <UserNotificationsServer/UNSAttachmentData.h>
#import <libobjc.A.dylib/UNSAttachmentThumbnailProvider.h>

@class NSString;

@interface UNSMovieAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFileValid:(id)arg1 ;
+(id)_videoAssetWithURL:(id)arg1 ;
+(id)_videoTrackForAsset:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)sizeForThumbnailOptions:(id)arg1 ;
-(id)thumbnailPNGOfSize:(CGSize)arg1 forThumbnailOptions:(id)arg2 ;
@end
