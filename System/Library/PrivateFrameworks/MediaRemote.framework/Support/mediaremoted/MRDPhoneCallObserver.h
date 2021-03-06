/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol MRDPhoneCallObserverDelegate;
@class CXCallObserver, NSString;

@interface MRDPhoneCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;
	unsigned long long _numberOfActiveCalls;
	id<MRDPhoneCallObserverDelegate> _delegate;

}

@property (assign,nonatomic) id<MRDPhoneCallObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)numberOfActivePhoneCalls:(/*^block*/id)arg1 ;
-(void)phoneCallDidChangeNotification:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MRDPhoneCallObserverDelegate>)arg1 ;
-(id<MRDPhoneCallObserverDelegate>)delegate;
-(void)_notifyDelegate:(id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
@end

