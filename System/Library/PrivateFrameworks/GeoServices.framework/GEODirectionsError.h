/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEODirectionsError
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
@required
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(BOOL)hasError:(long long)arg1;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;

@end
