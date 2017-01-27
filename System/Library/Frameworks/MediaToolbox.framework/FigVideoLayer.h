/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(BOOL)isVideoLayerBeingServiced;
-(void)notificationBarrier;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)finalize;
@end
