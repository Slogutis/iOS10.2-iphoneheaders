/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCPurchaseController, NSString;

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming> {

	unsigned long long _minimumResultHeadlineCount;
	double _paidHeadlineRatio;
	unsigned long long _maxiumInaccessibleHeadlineCount;
	FCPurchaseController* _purchaseController;

}

@property (assign,nonatomic) double paidHeadlineRatio;                                        //@synthesize paidHeadlineRatio=_paidHeadlineRatio - In the implementation block
@property (assign,nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;              //@synthesize maxiumInaccessibleHeadlineCount=_maxiumInaccessibleHeadlineCount - In the implementation block
@property (nonatomic,retain) FCPurchaseController * purchaseController;                       //@synthesize purchaseController=_purchaseController - In the implementation block
@property (assign,nonatomic) unsigned long long minimumResultHeadlineCount;                   //@synthesize minimumResultHeadlineCount=_minimumResultHeadlineCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithContext:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(FCPurchaseController *)purchaseController;
-(void)setPurchaseController:(FCPurchaseController *)arg1 ;
-(void)setPaidHeadlineRatio:(double)arg1 ;
-(void)setMaxiumInaccessibleHeadlineCount:(unsigned long long)arg1 ;
-(void)setMinimumResultHeadlineCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumResultHeadlineCount;
-(double)paidHeadlineRatio;
-(unsigned long long)maxiumInaccessibleHeadlineCount;
-(id)transformItems:(id)arg1 isPaidBlock:(/*^block*/id)arg2 sourceChannelIDProvider:(/*^block*/id)arg3 ;
-(id)transformHeadlines:(id)arg1 ;
@end

