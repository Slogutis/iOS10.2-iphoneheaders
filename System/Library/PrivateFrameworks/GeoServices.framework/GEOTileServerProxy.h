/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject {

	id<GEOTileServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQ;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	int _resourceNotificationToken;

}

@property (assign,nonatomic) id<GEOTileServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> delegateQ;               //@synthesize delegateQ=_delegateQ - In the implementation block
-(void)setDelegate:(id<GEOTileServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOTileServerProxyDelegate>)delegate;
-(void)close;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)flushPendingWrites;
-(void)endPreloadSession;
-(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)open;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)calculateFreeableSize;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2 ;
-(void)setDelegateQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQ;
@end

