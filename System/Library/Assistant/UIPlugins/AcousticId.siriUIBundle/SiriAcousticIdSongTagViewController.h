/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <AcousticId/SiriAcousticIdHeaderViewDelegate.h>
#import <AcousticId/SiriAcousticIdAttributionFooterViewDelegate.h>

@class SAAISongTagSnippet, NSMutableArray, NSString;

@interface SiriAcousticIdSongTagViewController : SiriUISnippetViewController <SiriAcousticIdHeaderViewDelegate, SiriAcousticIdAttributionFooterViewDelegate> {

	SAAISongTagSnippet* _songTagSnippet;
	NSMutableArray* _buttons;
	BOOL _isSongQueued;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerViewPlayButtonWasTapped:(id)arg1 ;
-(BOOL)_displaysFooterView;
-(void)attributionFooterViewButtonWasTapped:(id)arg1 ;
-(id)initWithSongTagSnippet:(id)arg1 ;
-(void)headerViewBuyButtonWasTapped:(id)arg1 ;
-(void)setSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
@end
