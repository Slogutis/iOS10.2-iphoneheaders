/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell {

	NSArray* _constantConstraints;
	NSArray* _variableConstraints;
	BOOL _hasBeenDisplayed;
	BOOL _shouldUseExpandedContentStyle;
	CNCardGroupItem* _cardGroupItem;
	double _leftContentMargin;
	double _rightContentMargin;

}

@property (assign,nonatomic) BOOL showSeparator; 
@property (nonatomic,retain) CNCardGroupItem * cardGroupItem;                 //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) double leftContentMargin;                        //@synthesize leftContentMargin=_leftContentMargin - In the implementation block
@property (assign,nonatomic) double rightContentMargin;                       //@synthesize rightContentMargin=_rightContentMargin - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDisplayed;                           //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExpandedContentStyle;              //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)prepareForReuse;
-(CNCardGroupItem *)cardGroupItem;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(void)performDefaultAction;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(double)leftContentMargin;
-(void)setLeftContentMargin:(double)arg1 ;
-(double)rightContentMargin;
-(void)setRightContentMargin:(double)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(BOOL)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(BOOL)arg1 ;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(BOOL)shouldPerformDefaultAction;
@end

