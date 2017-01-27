/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINChangeViewControllerDelegate;
@class TPSetPINViewController;

@interface PHSIMPINChangeViewController : UIViewController <TPSetPINViewControllerDelegate> {

	id<PHSIMPINChangeViewControllerDelegate> _delegate;
	TPSetPINViewController* _changePINViewController;

}

@property (retain) TPSetPINViewController * changePINViewController;               //@synthesize changePINViewController=_changePINViewController - In the implementation block
@property (assign) id<PHSIMPINChangeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<PHSIMPINChangeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PHSIMPINChangeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(void)setChangePINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)changePINViewController;
-(void)_handleSIMPINChanged:(id)arg1 ;
@end
