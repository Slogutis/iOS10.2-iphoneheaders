/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMViewfinderView, CAMSnapshotView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject {

	CAMViewfinderView* __viewfinderView;
	CAMSnapshotView* __snapshotView;

}

@property (nonatomic,__weak,readonly) CAMViewfinderView * _viewfinderView;                          //@synthesize _viewfinderView=__viewfinderView - In the implementation block
@property (setter=_setSnapshotView:,nonatomic,retain) CAMSnapshotView * _snapshotView;              //@synthesize _snapshotView=__snapshotView - In the implementation block
-(CAMSnapshotView *)_snapshotView;
-(void)_setSnapshotView:(id)arg1 ;
-(CAMViewfinderView *)_viewfinderView;
-(id)initWithViewfinderView:(id)arg1 ;
-(id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2 ;
-(void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)openAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

