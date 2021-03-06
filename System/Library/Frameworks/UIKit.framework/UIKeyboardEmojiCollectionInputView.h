/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UIKBEmojiHitTestResponder;
@class UIKeyboardEmojiCollectionView, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, NSIndexPath, UIKeyboardEmojiGraphicsTraits, UIResponder, NSString;

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UIKeyboardEmojiCollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIKeyboardEmojiCategory* _category;
	NSIndexPath* _tappedSkinToneEmoji;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isDraggingInputView;
	unsigned long long _currentSection;
	/*^block*/id _completionBlock;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;

}

@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) UIKeyboardEmojiCategory * category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (readonly) BOOL isDraggingInputView;                                                      //@synthesize isDraggingInputView=_isDraggingInputView - In the implementation block
@property (assign,nonatomic) NSIndexPath * tappedSkinToneEmoji;                                     //@synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)dimKeys:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(id)emojiBaseFirstCharacterString:(id)arg1 ;
-(BOOL)genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
-(void)setTappedSkinToneEmoji:(NSIndexPath *)arg1 ;
-(BOOL)skinToneWasUsedForEmoji:(id)arg1 ;
-(long long)didInputSubTree:(id)arg1 ;
-(BOOL)_userHasSelectedSkinToneEmoji;
-(id)selectedChildSkinToneEmoji:(id)arg1 ;
-(NSIndexPath *)tappedSkinToneEmoji;
-(id)emojiBaseString:(id)arg1 ;
-(void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)shouldDismissModalDisplayView:(id)arg1 ;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(double)snappedXOffsetForOffset:(double)arg1 ;
-(void)setCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(UIKeyboardEmojiCategory *)category;
-(long long)indexForPrettyCategoryDisplay:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
-(BOOL)isDraggingInputView;
@end

