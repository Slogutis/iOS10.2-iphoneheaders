/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMultiplexedHostingObserver <NSObject>
@optional
-(id)customSnapshotView;
-(id)mainViewForTouchDelivery;
-(BOOL)wantsToShareTouches;
-(BOOL)delaysSharingTouchesUntilAppeared;
-(void)textSelectionInteractionWillBegin;
-(void)textSelectionInteractionDidEnd;
-(void)presentationControllerWillBeginPresenting:(id)arg1;
-(void)presentationControllerDidEndPresenting:(id)arg1;
-(void)presentationControllerWillBeginDismissing:(id)arg1;
-(void)presentationControllerDidEndDismissing:(id)arg1;
-(void)willActivateHosting;
-(void)willDeactivateHosting;
-(id)containingScrollView;

@end

