/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UIImage, NSMutableArray, NSDictionary, NSString;

@interface MiroVideoScrubberCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	BOOL _thumbnailsNeedUpdate;
	UIImage* _placeholderImage;
	NSMutableArray* _thumbnails;
	NSDictionary* _frameGeneratorsForClips;
	UIImage* _blackThumbnailImage;
	double _currentDuration;
	long long _placeholderOffset;
	CGRect _currentBounds;

}

@property (nonatomic,retain) NSMutableArray * thumbnails;                         //@synthesize thumbnails=_thumbnails - In the implementation block
@property (nonatomic,retain) NSDictionary * frameGeneratorsForClips;              //@synthesize frameGeneratorsForClips=_frameGeneratorsForClips - In the implementation block
@property (nonatomic,retain) UIImage * blackThumbnailImage;                       //@synthesize blackThumbnailImage=_blackThumbnailImage - In the implementation block
@property (assign,nonatomic) double currentDuration;                              //@synthesize currentDuration=_currentDuration - In the implementation block
@property (assign,nonatomic) CGRect currentBounds;                                //@synthesize currentBounds=_currentBounds - In the implementation block
@property (assign,nonatomic) BOOL thumbnailsNeedUpdate;                           //@synthesize thumbnailsNeedUpdate=_thumbnailsNeedUpdate - In the implementation block
@property (assign,nonatomic) long long placeholderOffset;                         //@synthesize placeholderOffset=_placeholderOffset - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                          //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setBlackThumbnailImage:(UIImage *)arg1 ;
-(double)currentDuration;
-(double)_numberOfThumbnails;
-(NSMutableArray *)thumbnails;
-(UIImage *)blackThumbnailImage;
-(void)setThumbnails:(NSMutableArray *)arg1 ;
-(void)setCurrentBounds:(CGRect)arg1 ;
-(void)setThumbnailsNeedUpdate:(BOOL)arg1 ;
-(CGRect)currentBounds;
-(BOOL)thumbnailsNeedUpdate;
-(void)buildThumbnails;
-(void)setCurrentDuration:(double)arg1 ;
-(double)_itemWidth;
-(id)_thumbnailForIndexPath:(id)arg1 ;
-(void)invalidateThumbnails;
-(void)invalidateDuration:(double)arg1 ;
-(NSDictionary *)frameGeneratorsForClips;
-(void)setFrameGeneratorsForClips:(NSDictionary *)arg1 ;
-(long long)placeholderOffset;
-(void)setPlaceholderOffset:(long long)arg1 ;
@end
