/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOVectorTile, VKSharedResources;

@interface VK3DObjectSubTile : NSObject {

	vector<std::__1::shared_ptr<md::ObjectGroup>, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > >* _objectGroups;
	GEOVectorTile* _modelTile;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _styleManager;
	VKSharedResources* _sharedResources;
	long long _vectorType;
	double _contentScale;
	vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap> >* _heights;

}

@property (nonatomic,retain) GEOVectorTile * modelTile;                                                       //@synthesize modelTile=_modelTile - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager;              //@synthesize styleManager=_styleManager - In the implementation block
@property (nonatomic,retain) VKSharedResources * sharedResources;                                             //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) double contentScale;                                                             //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) vector<std::__1::shared_ptr<md::ObjectGroup>* objectGroups; 
-(void)dealloc;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(VKSharedResources *)sharedResources;
-(GEOVectorTile *)modelTile;
-(void)setModelTile:(GEOVectorTile *)arg1 ;
-(void)setSharedResources:(VKSharedResources *)arg1 ;
-(BOOL)heightAtPoint:(const Matrix<float, 2, 1>*)arg1 outZ:(float*)arg2 ;
-(vector<std::__1::shared_ptr<md::ObjectGroup>*)objectGroups;
-(void)fillShadowAreasInContext:(CGContextRef)arg1 ;
-(Box<float, 2>)shadowBounds;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 ;
-(void)_replaceThreeBuldingsInModelTile:(id)arg1 objects:(vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> >*)arg2 ;
-(void)_read3DObjects:(vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> >*)arg1 fromDiskForTileKey:(const GEOTileKey*)arg2 ;
-(BOOL)_createMeshForObjects:(SCD_Struct_VK659*)arg1 count:(unsigned long long)arg2 ;
@end

