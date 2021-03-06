/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSNumberFormatter, NSMutableIndexSet, NSMutableDictionary, UICollectionView, SAUIPronunciationSnippet, NSString;

@interface SiriPronunciationDataViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSNumberFormatter* _numberFormatter;
	NSMutableIndexSet* _playingIndexes;
	NSMutableDictionary* _playCounts;

}

@property (nonatomic,retain) UICollectionView * view; 
@property (nonatomic,retain) SAUIPronunciationSnippet * snippet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_cellSizeForWidth:(double)arg1 ;
-(id)_selectionStatsForType:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forPronunciationIndex:(long long)arg2 ;
-(id)_selectNoneCommands;
-(void)_incrementPlayCountForItemAtIndex:(long long)arg1 ;
-(id)_selectionStatsForSelectedIndex:(long long)arg1 ;
-(id)_cancelCommands;
-(id)_pronunciationItems;
-(void)_tellSiriAgainTapped:(id)arg1 ;
-(void)_setItemAtIndex:(long long)arg1 isPlaying:(BOOL)arg2 ;
-(BOOL)_itemAtIndexIsPlaying:(long long)arg1 ;
-(void)_resetPlayCounts;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSnippet:(SAUIPronunciationSnippet *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
-(BOOL)removedAfterDialogProgresses;
@end

