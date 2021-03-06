/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/MobileMail.axbundle/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/__MFConversationViewControllerAccessibility_super.h>

@interface MFConversationViewControllerAccessibility : __MFConversationViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_axSkipNextFocusOnMessage;
-(void)_scrollToReferenceMessage;
-(id)_axFirstVisibleCell;
-(id)_axMessageSubjectView;
-(id)_axElementForFocusInCell:(id)arg1 ;
-(void)_axSetSkipNextFocusOnMessage:(BOOL)arg1 ;
-(void)_axCancelMarkAsReadTimer;
-(id)_axAutomaticallyMarkReadTimer;
-(id)arrowControlsView;
-(BOOL)_axFocusOnReferenceMessage;
-(id)_accessibilityTitleForLeadingActionWithCell:(id)arg1 ;
-(void)_accessibilityPerformLeadingActionWithCell:(id)arg1 ;
-(void)_axSetFocusOnReferenceOnMessage:(BOOL)arg1 ;
-(void)_shrinkMessagesToBarButton:(id)arg1 withInteraction:(id)arg2 ;
-(void)_axSimulateTapArrowButtonWithDirection:(int)arg1 ;
-(void)arrowControlsView:(id)arg1 didTapButtonWithDirection:(int)arg2 ;
-(void)messageViewControllerDidTapRevealActionsButton:(id)arg1 ;
-(void)invalidateAutomaticMarkAsReadForAllMessages;
-(void)cancelAutomaticMarkAsReadForMessage:(id)arg1 ;
-(void)_axSetAutomaticallyMarkReadTimer:(id)arg1 ;
-(void)scheduleAutomaticMarkAsReadForMessage:(id)arg1 ;
-(id)_previewActionForTriageAction:(unsigned long long)arg1 withMessages:(id)arg2 forSwipe:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(id)accessibilityCustomRotors;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityFirstElementForFocus;
@end

