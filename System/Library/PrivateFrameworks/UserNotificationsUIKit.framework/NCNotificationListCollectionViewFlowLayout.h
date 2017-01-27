/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _isChangingBounds;
	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _removedIndexPaths;
	NSMutableArray* _replacedIndexPaths;

}

@property (nonatomic,retain) NSMutableArray * insertedIndexPaths;              //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedIndexPaths;               //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * replacedIndexPaths;              //@synthesize replacedIndexPaths=_replacedIndexPaths - In the implementation block
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(NSMutableArray *)insertedIndexPaths;
-(void)setInsertedIndexPaths:(NSMutableArray *)arg1 ;
-(void)setRemovedIndexPaths:(NSMutableArray *)arg1 ;
-(void)setReplacedIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)removedIndexPaths;
-(NSMutableArray *)replacedIndexPaths;
@end
