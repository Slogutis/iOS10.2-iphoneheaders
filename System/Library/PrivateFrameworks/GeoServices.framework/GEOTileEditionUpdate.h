/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	BOOL _flushEverything;
	BOOL _invalidateEverything;

}

@property (assign,nonatomic) BOOL flushEverything;                   //@synthesize flushEverything=_flushEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateEverything;              //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)invalidateEverything;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(unsigned long long)tilesetCount;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(BOOL*)arg4 atIndex:(unsigned long long)arg5 ;
-(BOOL)flushEverything;
-(void)setFlushEverything:(BOOL)arg1 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
@end
