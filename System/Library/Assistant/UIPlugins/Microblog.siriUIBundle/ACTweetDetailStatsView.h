/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface ACTweetDetailStatsView : UIView {

	UIView* _contentView;
	UILabel* _retweetsLabel;

}
+(id)_createLabel;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

