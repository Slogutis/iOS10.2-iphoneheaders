/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView, UIDateLabel;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell {

	CKAudioProgressView* _audioPlaybackView;

}

@property (nonatomic,retain) CKAudioProgressView * audioPlaybackView;              //@synthesize audioPlaybackView=_audioPlaybackView - In the implementation block
@property (nonatomic,retain) UIDateLabel * previewTitleLabel; 
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(id)formattedDurationTextForAsset:(id)arg1 ;
-(id)formattedCreatedDateTextFromDate:(id)arg1 ;
-(CKAudioProgressView *)audioPlaybackView;
-(void)setAudioPlaybackView:(CKAudioProgressView *)arg1 ;
@end
