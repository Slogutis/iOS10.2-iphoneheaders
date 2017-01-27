/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPRep.h>

@class NSSet, TPBodyLayout;

@interface TPBodyRep : TSWPRep {

	NSSet* _lastSelectedInfos;
	TPBodyLayout* _bodyLayout;

}

@property (nonatomic,readonly) TPBodyLayout * bodyLayout;              //@synthesize bodyLayout=_bodyLayout - In the implementation block
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(TPBodyLayout *)bodyLayout;
-(BOOL)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(BOOL)arg3 ;
-(id)storage;
-(void)dealloc;
@end
