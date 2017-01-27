/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, PGGraphNode, PGGraphEdge, NSSet;

@interface PGLocationTitleComponent : NSObject {

	NSMutableSet* _addressNodes;
	float _weight;
	PGGraphNode* _node;
	PGGraphEdge* _edge;
	double _timestampStart;

}

@property (nonatomic,retain) PGGraphNode * node;                   //@synthesize node=_node - In the implementation block
@property (nonatomic,retain) PGGraphEdge * edge;                   //@synthesize edge=_edge - In the implementation block
@property (nonatomic,retain) NSSet * addressNodes;                 //@synthesize addressNodes=_addressNodes - In the implementation block
@property (nonatomic,readonly) double timestampStart;              //@synthesize timestampStart=_timestampStart - In the implementation block
@property (nonatomic,readonly) float weight;                       //@synthesize weight=_weight - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PGGraphNode *)node;
-(void)setEdge:(PGGraphEdge *)arg1 ;
-(void)setNode:(PGGraphNode *)arg1 ;
-(float)weight;
-(NSSet *)addressNodes;
-(void)addAddressNode:(id)arg1 ;
-(BOOL)canMergeWithTitleComponent:(id)arg1 ;
-(void)updateWithMomentNodes:(id)arg1 ;
-(PGGraphEdge *)edge;
-(void)setAddressNodes:(NSSet *)arg1 ;
-(double)timestampStart;
@end
