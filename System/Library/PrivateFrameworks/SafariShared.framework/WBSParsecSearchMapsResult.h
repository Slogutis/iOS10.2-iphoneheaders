/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchMapsResultFeedbackSenderClient.h>
#import <libobjc.A.dylib/WBSParsecSearchResultPresentedInCard.h>

@protocol WBSParsecSearchSession;
@class WBSParsecSearchMapsResultFeedbackSender, NSString, NSURL, WBSParsecSearchMapsResultExtraCompletionItem, WBSParsecSearchResult;

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult <WBSParsecSearchMapsResultFeedbackSenderClient, WBSParsecSearchResultPresentedInCard> {

	NSString* _mapsDataType;
	WBSParsecSearchMapsResultFeedbackSender* _mapsFeedbackSender;
	NSString* _mapsResultType;
	NSURL* _moreURL;
	NSString* _nearbyBusinessesString;
	WBSParsecSearchMapsResultExtraCompletionItem* _extraCompletionItem;
	id<WBSParsecSearchSession> _parsecSearchSession;
	WBSParsecSearchResult* _hiddenParsecResult;

}

@property (nonatomic,readonly) NSString * mapsResultType;                                                       //@synthesize mapsResultType=_mapsResultType - In the implementation block
@property (nonatomic,readonly) NSURL * moreURL;                                                                 //@synthesize moreURL=_moreURL - In the implementation block
@property (nonatomic,readonly) NSString * nearbyBusinessesString;                                               //@synthesize nearbyBusinessesString=_nearbyBusinessesString - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchMapsResultExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
@property (nonatomic,retain) id<WBSParsecSearchSession> parsecSearchSession;                                    //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (nonatomic,retain) WBSParsecSearchResult * hiddenParsecResult;                                        //@synthesize hiddenParsecResult=_hiddenParsecResult - In the implementation block
@property (nonatomic,retain) WBSParsecSearchMapsResultFeedbackSender * mapsFeedbackSender;                      //@synthesize mapsFeedbackSender=_mapsFeedbackSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL willPresentResultInCard; 
-(id)initWithDictionary:(id)arg1 ;
-(WBSParsecSearchMapsResultFeedbackSender *)mapsFeedbackSender;
-(void)setMapsFeedbackSender:(WBSParsecSearchMapsResultFeedbackSender *)arg1 ;
-(id<WBSParsecSearchSession>)parsecSearchSession;
-(void)setParsecSearchSession:(id<WBSParsecSearchSession>)arg1 ;
-(BOOL)willPresentResultInCard;
-(id)supportedStyleOverrides;
-(void)didDisplayMapsResultForQuery:(id)arg1 ;
-(NSString *)mapsResultType;
-(NSURL *)moreURL;
-(NSString *)nearbyBusinessesString;
-(WBSParsecSearchMapsResultExtraCompletionItem *)extraCompletionItem;
-(WBSParsecSearchResult *)hiddenParsecResult;
-(void)setHiddenParsecResult:(WBSParsecSearchResult *)arg1 ;
@end

