/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSURetainedPointerKeyDictionary;

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {

	TSURetainedPointerKeyDictionary* mEntries;

}
+(id)dictionary;
-(id)entryForLayer:(id)arg1 ;
-(id)nonretainedValueForObject:(id)arg1 ;
-(void)addAnimation:(id)arg1 animationInfo:(id)arg2 forLayer:(id)arg3 ;
-(id)animationDictionaryForBuildEngine;
-(void)addEntriesFromAnimationDictionary:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 interpolations:(id)arg4 ;
-(id)init;
-(void)dealloc;
@end

