/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
@end

