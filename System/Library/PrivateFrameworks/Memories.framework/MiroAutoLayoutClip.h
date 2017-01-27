/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KonaClip, NSArray, MultiUpClip, NSDictionary;

@interface MiroAutoLayoutClip : NSObject {

	BOOL _canSupportPrecedingTransition;
	BOOL _canSupportMultiUp;
	BOOL _transitionAssigned;
	BOOL _zoomToPersonCandidate;
	BOOL _isPortrait;
	BOOL _isSquare;
	BOOL _facesAreClose;
	BOOL _durationIsFlexible;
	BOOL _missedRollToBeats;
	int _clipType;
	int _preferredDirection;
	int _requiredTreatmentStyle;
	int _faceLocation;
	int _directionOfMovement;
	int _assignedTreatmentStyle;
	int _numberOfFaces;
	KonaClip* _projectClip;
	unsigned long long _assignedKBStyle;
	NSArray* _multiUpPeers;
	MultiUpClip* _multiUpClip;
	long long _shotType;
	NSDictionary* _assignedTreatmentDict;

}

@property (nonatomic,retain) KonaClip * projectClip;                            //@synthesize projectClip=_projectClip - In the implementation block
@property (assign,nonatomic) int clipType;                                      //@synthesize clipType=_clipType - In the implementation block
@property (assign,nonatomic) int preferredDirection;                            //@synthesize preferredDirection=_preferredDirection - In the implementation block
@property (assign,nonatomic) int requiredTreatmentStyle;                        //@synthesize requiredTreatmentStyle=_requiredTreatmentStyle - In the implementation block
@property (assign,nonatomic) unsigned long long assignedKBStyle;                //@synthesize assignedKBStyle=_assignedKBStyle - In the implementation block
@property (assign,nonatomic) BOOL canSupportPrecedingTransition;                //@synthesize canSupportPrecedingTransition=_canSupportPrecedingTransition - In the implementation block
@property (assign,nonatomic) BOOL canSupportMultiUp;                            //@synthesize canSupportMultiUp=_canSupportMultiUp - In the implementation block
@property (nonatomic,retain) NSArray * multiUpPeers;                            //@synthesize multiUpPeers=_multiUpPeers - In the implementation block
@property (nonatomic,retain) MultiUpClip * multiUpClip;                         //@synthesize multiUpClip=_multiUpClip - In the implementation block
@property (assign,nonatomic) long long shotType;                                //@synthesize shotType=_shotType - In the implementation block
@property (assign,nonatomic) int faceLocation;                                  //@synthesize faceLocation=_faceLocation - In the implementation block
@property (assign,nonatomic) int directionOfMovement;                           //@synthesize directionOfMovement=_directionOfMovement - In the implementation block
@property (assign,nonatomic) BOOL transitionAssigned;                           //@synthesize transitionAssigned=_transitionAssigned - In the implementation block
@property (assign,nonatomic) int assignedTreatmentStyle;                        //@synthesize assignedTreatmentStyle=_assignedTreatmentStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * assignedTreatmentDict;              //@synthesize assignedTreatmentDict=_assignedTreatmentDict - In the implementation block
@property (assign,nonatomic) BOOL zoomToPersonCandidate;                        //@synthesize zoomToPersonCandidate=_zoomToPersonCandidate - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait;                                 //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) BOOL isSquare;                                   //@synthesize isSquare=_isSquare - In the implementation block
@property (nonatomic,readonly) int numberOfFaces;                               //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,readonly) BOOL facesAreClose;                              //@synthesize facesAreClose=_facesAreClose - In the implementation block
@property (assign,nonatomic) BOOL durationIsFlexible;                           //@synthesize durationIsFlexible=_durationIsFlexible - In the implementation block
@property (assign,nonatomic) BOOL missedRollToBeats;                            //@synthesize missedRollToBeats=_missedRollToBeats - In the implementation block
+(BOOL)assetCanFillProjectFrame:(id)arg1 ;
+(BOOL)clipIsPortrait:(id)arg1 ;
+(BOOL)clipIsSquare:(id)arg1 ;
+(BOOL)clipIsPano:(id)arg1 ;
+(double)clipAspectRatio:(id)arg1 ;
+(BOOL)clipIsPortraitOrSquare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isVideo;
-(BOOL)isSquare;
-(BOOL)isFavorite;
-(BOOL)isEdited;
-(int)clipType;
-(KonaClip *)projectClip;
-(NSDictionary *)assignedTreatmentDict;
-(void)setMissedRollToBeats:(BOOL)arg1 ;
-(BOOL)isPortrait;
-(BOOL)isPano;
-(void)setProjectClip:(KonaClip *)arg1 ;
-(void)setZoomToPersonCandidate:(BOOL)arg1 ;
-(void)establishProjectClipType;
-(void)establishFaceInfo;
-(void)establishShotType;
-(void)establishIsPortrait;
-(void)establishIsSquare;
-(void)establishDurationFlexibility;
-(void)establishPreferredDirection;
-(void)establishFacesAreClose;
-(void)establishCanSupportPrecedingTransition;
-(void)establishCanSupportMultiUp:(id)arg1 ;
-(NSArray *)multiUpPeers;
-(void)setMultiUpPeers:(NSArray *)arg1 ;
-(BOOL)isTransition;
-(void)establishRequiredTreatment:(id)arg1 polishDelegate:(id)arg2 ;
-(int)requiredTreatmentStyle;
-(BOOL)transitionAssigned;
-(BOOL)missedRollToBeats;
-(int)numberOfFaces;
-(void)setClipType:(int)arg1 ;
-(void)setRequiredTreatmentStyle:(int)arg1 ;
-(BOOL)hasSingleFace;
-(BOOL)hasMultipleFaces;
-(BOOL)facesAreClose;
-(BOOL)shotTypeSupportsZoomCrop;
-(BOOL)canSupportMultiUp;
-(void)establishCanSupportInEditMultiUp:(id)arg1 ;
-(void)setAssignedTreatmentStyle:(int)arg1 ;
-(void)setPreferredDirection:(int)arg1 ;
-(void)setAssignedKBStyle:(unsigned long long)arg1 ;
-(BOOL)zoomToPersonCandidate;
-(void)setFaceLocation:(int)arg1 ;
-(void)setShotType:(long long)arg1 ;
-(void)setDurationIsFlexible:(BOOL)arg1 ;
-(void)setCanSupportPrecedingTransition:(BOOL)arg1 ;
-(long long)shotType;
-(BOOL)isWideShot;
-(id)locationForClip;
-(id)initWithKonaClip:(id)arg1 multiUpDelegate:(id)arg2 polishDelegate:(id)arg3 zoomToPersonCandidate:(BOOL)arg4 ;
-(BOOL)canSupportInEditMultiUpTreatment:(id)arg1 ;
-(BOOL)isCloseUp;
-(BOOL)isMediumShot;
-(double)distanceToLayoutClip:(id)arg1 ;
-(int)preferredDirection;
-(unsigned long long)assignedKBStyle;
-(BOOL)canSupportPrecedingTransition;
-(void)setCanSupportMultiUp:(BOOL)arg1 ;
-(MultiUpClip *)multiUpClip;
-(void)setMultiUpClip:(MultiUpClip *)arg1 ;
-(int)faceLocation;
-(int)directionOfMovement;
-(void)setDirectionOfMovement:(int)arg1 ;
-(void)setTransitionAssigned:(BOOL)arg1 ;
-(int)assignedTreatmentStyle;
-(void)setAssignedTreatmentDict:(NSDictionary *)arg1 ;
-(BOOL)durationIsFlexible;
@end
