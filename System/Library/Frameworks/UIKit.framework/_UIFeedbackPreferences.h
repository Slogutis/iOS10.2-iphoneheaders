/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSUserDefaults;

@interface _UIFeedbackPreferences : NSObject {

	NSMutableDictionary* _enabledFeedbackTypes;
	NSDictionary* _defaultFeedbackTypes;
	NSUserDefaults* _userDefaults;

}
+(id)sharedPreferences;
-(id)init;
-(unsigned long long)enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_invalidate;
-(id)_keyForCategory:(id)arg1 ;
-(void)_startObservingDefaults;
-(id)_defaultKeyForKey:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)_enabledFeedbackTypesForKey:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forKey:(id)arg2 postNotification:(BOOL)arg3 ;
-(void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forKey:(id)arg2 ;
@end

