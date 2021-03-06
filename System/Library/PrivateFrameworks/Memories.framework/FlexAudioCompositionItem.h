/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (nonatomic,retain) FlexAudioClip * clip; 
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsForDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(id)trackInfoDict;
-(id)segmentsForFMTrack:(id)arg1 andTimeRange:(SCD_Struct_Mi11)arg2 ;
@end

