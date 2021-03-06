/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSAttributedString, UIFont, _TtC12UpNextWidget25TintColorAsTextColorLabel;

@interface UpNextWidget.VibrantLabel : UIView {

	 text;
	 attributedText;
	 font;
	 numberOfLines;
	 lineBreakMode;
	 containingVisualEffectView;
	 label;

}

@property (copy,nonatomic) NSString * text; 
@property (retain,nonatomic) NSAttributedString * attributedText; 
@property (retain,nonatomic) UIFont * font; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (retain,nonatomic) _TtC12UpNextWidget25TintColorAsTextColorLabel * label; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(NSAttributedString *)attributedText;
-(_TtC12UpNextWidget25TintColorAsTextColorLabel *)label;
-(void)setLabel:(_TtC12UpNextWidget25TintColorAsTextColorLabel *)arg1 ;
-(long long)lineBreakMode;
-(long long)numberOfLines;
@end

