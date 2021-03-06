/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageTranscriptCell.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKBalloonImageView, UIImage, CKAnimatedImage, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer, NSString;

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver> {

	CKBalloonImageView* _imageView;
	UIImage* _image;
	CKAnimatedImage* _animatedImage;
	NSArray* _frames;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) CKBalloonImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSArray * frames;                                                         //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                                        //@synthesize animatedImage=_animatedImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)associatedStickerXOriginForStickerFrame:(CGRect)arg1 parentSize:(CGSize)arg2 contentAlignmentRect:(CGRect)arg3 orientation:(char)arg4 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor)arg5 outBalloonOffset:(double*)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(UIImage *)image;
-(void)prepareForReuse;
-(CKBalloonImageView *)imageView;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setImageView:(CKBalloonImageView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(void)longPressGestureRecognized:(id)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(NSArray *)frames;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
@end

