/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
@class MCDPCModel, NSString, NSData, UIImage;

@interface MCDPCItem : NSObject {

	MRContentItemRef _contentItem;
	BOOL _currentlyPlaying;
	MCDPCModel* _model;

}

@property (nonatomic,__weak,readonly) MCDPCModel * model;               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) MRContentItemRef contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                     //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * artworkData; 
@property (nonatomic,readonly) float playbackProgress; 
@property (nonatomic,readonly) BOOL isPlayable; 
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) BOOL isCloudItem; 
@property (nonatomic,readonly) BOOL isExplicitItem; 
@property (nonatomic,readonly) UIImage * artworkImage; 
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(MCDPCModel *)model;
-(NSString *)subtitle;
-(NSData *)artworkData;
-(BOOL)isCloudItem;
-(float)playbackProgress;
-(BOOL)isExplicitItem;
-(BOOL)isContainer;
-(UIImage *)artworkImage;
-(BOOL)isPlayable;
-(MRContentItemRef)contentItem;
-(void)setContentItem:(MRContentItemRef)arg1 ;
-(BOOL)currentlyPlaying;
-(id)_initWithModel:(id)arg1 MRContentItem:(MRContentItemRef)arg2 ;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
@end

