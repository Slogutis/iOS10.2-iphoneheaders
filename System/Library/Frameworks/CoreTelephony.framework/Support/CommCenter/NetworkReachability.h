/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NWPathEvaluator;

@interface NetworkReachability : NSObject {

	property_source_t<internet_reachability_interface>* fInternetReachabilityInterface;
	property_source_t<internet_status>* fInternetStatus;
	property_source_t<wifi_status>* fWifiStatus;
	RestModule* fRestModule;
	queue* fQueue;
	NWPathEvaluator* fNWPathEvaluator;
	shared_ptr<Registry>* fRegistry;
	LoggerBase<std::__1::shared_ptr<ctu::LogServer> >* fLogger;

}
-(id)initWithRegistry:(shared_ptr<Registry>*)arg1 andQueue:(queue*)arg2 andLogger:(LoggerBase<std::__1::shared_ptr<ctu::LogServer> >*)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setup;
@end

