/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSafariExtensionEventsListener;
@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

@interface SFWebProcessPlugInPageExtensionController : NSObject {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	_WKRemoteObjectInterface* _extensionControllerInterface;
	id<SFSafariExtensionEventsListener> _safariExtensionEventsListener;
	NSMutableDictionary* _extensionToScriptWorldMap;

}
-(void)dealloc;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(void)_setUpExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)_clearExtensionControllerInterface;
-(void)evaluateJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 replyIdentifier:(id)arg3 ;
-(id)_extensionEventListenerProxy;
-(id)initWithBrowserContextController:(id)arg1 ;
@end

