/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DScene;

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent> {

	TSCH3DScene* mScene;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)accessorWithScene:(id)arg1 ;
-(void)clearParent;
-(void)dealloc;
-(id)initWithScene:(id)arg1 ;
-(TSCH3DScene *)scene;
@end
