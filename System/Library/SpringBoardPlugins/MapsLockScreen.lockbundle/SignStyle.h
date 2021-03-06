/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsLockScreen/MapsLockScreen-Structs.h>
@class NSString, UIColor, UIImage;

@interface SignStyle : NSObject

@property (nonatomic,readonly) NSString * distanceFontName; 
@property (nonatomic,readonly) NSString * majorInstructionFontName; 
@property (nonatomic,readonly) NSString * instructionsFontName; 
@property (nonatomic,readonly) BOOL capitalizeInstructions; 
@property (nonatomic,readonly) NSString * recalculatingFontName; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIColor * bannerTextColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@property (nonatomic,readonly) UIColor * lockscreenForegroundColor; 
@property (nonatomic,readonly) UIColor * lockscreenDividerColor; 
@property (nonatomic,readonly) int desiredFraming; 
@property (nonatomic,readonly) UIImage * squareSignImage; 
@property (nonatomic,readonly) double secondarySignWidthScale; 
@property (nonatomic,readonly) double secondarySignYOverlapAmount; 
@property (nonatomic,readonly) double secondarySignLeftContentInset; 
@property (nonatomic,readonly) double secondarySignRightContentInset; 
@property (nonatomic,readonly) double secondarySignManeuverAreaWidth; 
@property (nonatomic,readonly) double secondarySignManeuverAreaMargin; 
@property (nonatomic,readonly) double secondarySignShieldAreaMargin; 
@property (nonatomic,readonly) double secondarySignTopBorderHeight; 
@property (nonatomic,readonly) double secondarySignBottomBorderHeight; 
+(SCD_Struct_Gu8)arrowMetricsForStyle:(int)arg1 scaledToMatchReferenceSize:(CGSize)arg2 forView:(id)arg3 ;
+(SCD_Struct_Gu8)arrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_Gu8)_defaultArrowMetricsForStyle:(int)arg1 ;
+(id)sharedSignStyle;
+(SCD_Struct_Gu8)_arrowMetricsByApplyingScale:(double)arg1 toMetrics:(SCD_Struct_Gu8)arg2 forView:(id)arg3 ;
-(id)borderImageForSize:(CGSize)arg1 ;
-(double)maneuverAreaWidthForVariant:(int)arg1 ;
-(UIEdgeInsets)borderInsetsForSize:(CGSize)arg1 ;
-(double)distanceLabelYOffsetForVariant:(int)arg1 ;
-(double)reroutingLabelHeightForVariant:(int)arg1 ;
-(double)distanceFontSizeForVariant:(int)arg1 ;
-(double)shieldAreaMargin;
-(BOOL)capitalizeInstructions;
-(double)secondarySignBottomBorderHeight;
-(double)outerBorderRadiusForSize:(CGSize)arg1 ;
-(double)distanceLabelHeightForVariant:(int)arg1 ;
-(double)secondarySignLeftContentInset;
-(double)innerBorderRadiusForSize:(CGSize)arg1 ;
-(NSString *)recalculatingFontName;
-(double)secondarySignManeuverAreaWidthForVariant:(int)arg1 ;
-(double)topMarginForVariant:(int)arg1 isCombinedSign:(BOOL)arg2 ;
-(double)secondarySignTopBorderHeight;
-(double)secondarySignManeuverAreaWidth;
-(NSString *)majorInstructionFontName;
-(id)dimmedForegroundColor;
-(double)secondarySignHeightForVariant:(int)arg1 ;
-(double)secondarySignYOverlapAmount;
-(int)desiredFraming;
-(double)minimumWidthForVariant:(int)arg1 ;
-(double)secondarySignRightContentInset;
-(UIColor *)lockscreenDividerColor;
-(double)shieldAreaWidthForVariant:(int)arg1 ;
-(id)outerBackgroundImageForSize:(CGSize)arg1 ;
-(NSString *)distanceFontName;
-(double)sideMarginForVariant:(int)arg1 ;
-(double)secondarySignManeuverAreaMargin;
-(double)instructionsFontSizeForVariant:(int)arg1 ;
-(double)secondarySignWidthScale;
-(double)absentSideAreaWidth;
-(double)secondarySignShieldAreaMargin;
-(NSString *)instructionsFontName;
-(double)majorInstructionFontSizeForVariant:(int)arg1 ;
-(id)innerBackgroundImageForSize:(CGSize)arg1 ;
-(UIColor *)lockscreenForegroundColor;
-(BOOL)wantBlur;
-(double)labelBottomMarginForVariant:(int)arg1 ;
-(UIColor *)bannerTextColor;
-(UIImage *)squareSignImage;
-(BOOL)wantCentering;
-(double)internalMargin;
-(double)distanceNumericFontSizeForVariant:(int)arg1 ;
-(double)recalculatingFontSizeForVariant:(int)arg1 ;
-(double)reroutingOnlyLabelYOffsetForVariant:(int)arg1 ;
-(double)instructionsLabelYOffsetForVariant:(int)arg1 ;
-(double)maximumWidthForVariant:(int)arg1 forScreenWidth:(double)arg2 ;
-(UIColor *)backgroundColor;
-(UIColor *)dividerColor;
-(UIColor *)foregroundColor;
-(UIColor *)accentColor;
-(BOOL)isDimmed;
@end

