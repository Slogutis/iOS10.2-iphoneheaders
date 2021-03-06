/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData;

@interface KNMovieSegment : NSObject {

	TSPData* mMovieData;
	double mStartTime;

}

@property (nonatomic,readonly) TSPData * movieData; 
@property (getter=isEmptySegment,nonatomic,readonly) BOOL emptySegment; 
@property (nonatomic,readonly) double startTime; 
-(void)saveToArchive:(MovieSegmentArchive*)arg1 archiver:(id)arg2 ;
-(id)movieSegmentByAddingTimeOffset:(double)arg1 ;
-(id)initWithMovieData:(id)arg1 startTime:(double)arg2 ;
-(id)initEmptySegmentWithStartTime:(double)arg1 ;
-(BOOL)isEmptySegment;
-(id)initWithContext:(id)arg1 archive:(const MovieSegmentArchive*)arg2 unarchiver:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(double)startTime;
-(TSPData *)movieData;
@end

