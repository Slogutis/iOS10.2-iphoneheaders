/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol ICSearchIndexableNote;
@class ICSearchResult, UILabel, UIImageView, NSLayoutConstraint, ICCollapsibleActivityView, UIImage;

@interface ICNotesListTableViewCell : UITableViewCell {

	BOOL _needsToUpdateViews;
	BOOL _letterPressEnabled;
	id<ICSearchIndexableNote> _note;
	ICSearchResult* _searchResult;
	double _computedRowHeight;
	UILabel* _titleLabel;
	UILabel* _snippetLabel;
	UILabel* _lastModifiedLabel;
	UIImageView* _statusImageView0;
	UIImageView* _statusImageView1;
	NSLayoutConstraint* _statusImage0BaselineConstraint;
	NSLayoutConstraint* _statusImage1BaselineConstraint;
	ICCollapsibleActivityView* _activityIndicator;

}

@property (nonatomic,readonly) BOOL icaxDisplaysLockStatusInSnippet; 
@property (assign,nonatomic) BOOL needsToUpdateViews;                                                 //@synthesize needsToUpdateViews=_needsToUpdateViews - In the implementation block
@property (assign,nonatomic) BOOL letterPressEnabled;                                                 //@synthesize letterPressEnabled=_letterPressEnabled - In the implementation block
@property (nonatomic,readonly) UIImage * shareImageNoLetterpress; 
@property (nonatomic,readonly) UIImage * indicatorImageNoLetterpress; 
@property (nonatomic,readonly) UIImage * lockImageNoLetterpress; 
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * snippetLabel;                                           //@synthesize snippetLabel=_snippetLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * lastModifiedLabel;                                      //@synthesize lastModifiedLabel=_lastModifiedLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * statusImageView0;                                   //@synthesize statusImageView0=_statusImageView0 - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * statusImageView1;                                   //@synthesize statusImageView1=_statusImageView1 - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * statusImage0BaselineConstraint;              //@synthesize statusImage0BaselineConstraint=_statusImage0BaselineConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * statusImage1BaselineConstraint;              //@synthesize statusImage1BaselineConstraint=_statusImage1BaselineConstraint - In the implementation block
@property (nonatomic,readonly) UIImage * shareImage; 
@property (nonatomic,readonly) UIImage * indicatorImage; 
@property (nonatomic,readonly) UIImage * lockImage; 
@property (assign,nonatomic,__weak) ICCollapsibleActivityView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) id<ICSearchIndexableNote> note;                                        //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) ICSearchResult * searchResult;                                         //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) double computedRowHeight;                                                //@synthesize computedRowHeight=_computedRowHeight - In the implementation block
-(UIImage *)lockImageNoLetterpress;
-(void)setLetterPressEnabled:(BOOL)arg1 ;
-(void)setLastModifiedLabel:(UILabel *)arg1 ;
-(double)computeRowHeight;
-(void)configureForSiri;
-(BOOL)letterPressEnabled;
-(UIImageView *)statusImageView0;
-(BOOL)icaxDisplaysLockStatusInSnippet;
-(void)setNote:(id)arg1 searchResult:(id)arg2 ;
-(void)setStatusImageView1:(UIImageView *)arg1 ;
-(void)setNeedsToUpdateViews:(BOOL)arg1 ;
-(void)updateViewsFromCurrentNote;
-(void)refreshSnippetLabelForAttachmentsIfNecessary;
-(NSLayoutConstraint *)statusImage1BaselineConstraint;
-(BOOL)needsToUpdateViews;
-(void)noteDecryptedStatusDidChange:(id)arg1 ;
-(void)updateIconBaselineOffsetsForImage0:(double)arg1 offsetImage1:(double)arg2 ;
-(void)configureForSiriIfNecessary;
-(NSLayoutConstraint *)statusImage0BaselineConstraint;
-(void)setStatusImageView0:(UIImageView *)arg1 ;
-(void)setupLabels;
-(void)refreshModificationDate;
-(double)computedRowHeight;
-(UILabel *)lastModifiedLabel;
-(void)setSnippetLabel:(UILabel *)arg1 ;
-(UIImageView *)statusImageView1;
-(void)setComputedRowHeight:(double)arg1 ;
-(void)updateStatusImages;
-(void)updateSizingInfoForTableFrame:(CGRect)arg1 ;
-(UILabel *)snippetLabel;
-(UIImage *)shareImage;
-(UIImage *)indicatorImage;
-(UIImage *)lockImage;
-(void)updateForAccessibilityDarkerSystemColors:(id)arg1 ;
-(void)positionActivityIndicatorIfNecessary;
-(void)updateViewsFromCurrentNoteIfNecessary;
-(void)calcImageBaselineOffsetsIfNecessary;
-(void)setStatusImage0BaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusImage1BaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)showDownloadingProgressIndicator;
-(void)hideDownloadingProgressIndicator;
-(UIImage *)shareImageNoLetterpress;
-(void)copySizingInfoFromCell:(id)arg1 ;
-(UIImage *)indicatorImageNoLetterpress;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)imageNamed:(id)arg1 ;
-(void)awakeFromNib;
-(void)willMoveToWindow:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityCustomActions;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(ICCollapsibleActivityView *)activityIndicator;
-(void)setActivityIndicator:(ICCollapsibleActivityView *)arg1 ;
-(ICSearchResult *)searchResult;
-(void)contentSizeCategoryDidChange;
-(id<ICSearchIndexableNote>)note;
@end
