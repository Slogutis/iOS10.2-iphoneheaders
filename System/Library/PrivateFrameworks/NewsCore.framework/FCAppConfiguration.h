/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FCContentContext;
@class NSArray, FCCoverArticlesConfiguration, NSString, NTPBWidgetConfig, FCAsyncSerialQueue, NSObject, FCRecommendedCategory, NSDictionary, NTPBPersonalizationConfig, FCIAdConfiguration, FCPrefetchConfiguration, FCTopStoriesConfiguration, FCNotificationsConfiguration, NSHashTable, NSMutableArray, FCResource, NSSet, FCForYouGroupsConfiguration;

@interface FCAppConfiguration : NSObject {

	BOOL _universalLinksEnabled;
	BOOL _forceAppConfigUpdate;
	BOOL _forceTrendingSearchesUpdate;
	BOOL _alternativeWidgetConfigEnabled;
	NSArray* _trendingTopics;
	FCCoverArticlesConfiguration* _coverArticlesConfig;
	NSString* _forYouRecordConfigID;
	NSString* _embedConfigurationAssetID;
	NTPBWidgetConfig* _widgetConfiguration;
	NTPBWidgetConfig* _alternativeWidgetConfiguration;
	FCAsyncSerialQueue* _requestSerialQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _hiddenFeedIDs;
	NSArray* _presubscribedFeedIDs;
	NSArray* _onboardingFeedIDs;
	FCRecommendedCategory* _topLevelCategory;
	long long _shortReminderTime;
	long long _longReminderTime;
	long long _minimumArticleUpdateInterval;
	long long _initialArticlesFromNewFavorite;
	long long _autoScrollToTopFeedTimeout;
	long long _appConfigRefreshRate;
	long long _trendingTopicsRefreshRate;
	long long _timeBetweenWidgetInsertions;
	long long _timeBetweenSameWidgetReinsertion;
	long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
	double _batchedFeedTimeout;
	double _interstitialAdLoadDelay;
	double _prerollLoadingTimeout;
	double _tileProminenceScoreBalanceValue;
	long long _minimumDistanceBetweenImageOnTopTiles;
	long long _articleRapidUpdatesTimeout;
	long long _subscriptionsGlobalMeteredCount;
	long long _subscriptionsPlacardPublisherFrequencyInDays;
	long long _subscriptionsPlacardGlobalMaximumPerDay;
	long long _subscriptionsGracePeriodForTokenVerificationSeconds;
	long long _newFavoriteNotificationAlertsFrequency;
	double _endOfArticleMinPaidHeadlineRatio;
	long long _endOfArticleMaxInaccessiblePaidArticleCount;
	long long _notificationArticleCacheTimeout;
	long long _notificationArticleWithRapidUpdatesCacheTimeout;
	long long _notificationEnabledChannelsRefreshFrequency;
	long long _savedArticlesMaximumCountWiFi;
	long long _savedArticlesMaximumCountCellular;
	long long _savedArticlesCutoffTime;
	long long _savedArticlesOpenedCutoffTime;
	NSDictionary* _endpointConfigsByEnvironment;
	NTPBPersonalizationConfig* _personalizationConfig;
	NSDictionary* _personalizationTreatments;
	FCIAdConfiguration* _iAdConfig;
	FCPrefetchConfiguration* _prefetchConfig;
	FCTopStoriesConfiguration* _topStoriesConfig;
	NSString* _editorialChannelID;
	NSString* _briefingsTagID;
	FCNotificationsConfiguration* _notificationsConfig;
	id<FCContentContext> _context;
	NSHashTable* _observers;
	NSMutableArray* _observationBlocks;
	FCResource* _configurationResource;
	FCResource* _trendingSearchesResource;
	NSString* _defaultStoreFrontID;
	NSSet* _preferredLanguages;
	FCForYouGroupsConfiguration* _forYouGroupsConfiguration;
	double _articleDiversificationSimilarityExpectationStart;
	double _articleDiversificationSimilarityExpectationEnd;
	double _articleDiversificationUniquePublisherExpectationSlope;
	double _articleDiversificationUniquePublisherExpectationYIntercept;
	long long _maximumPaidSubscriptionGroupSize;
	long long _maximumTimesHeadlineInPaidSubscriptionGroup;
	long long _expiredPaidSubscriptionGroupCutoffTime;
	long long _maximumNumberOfExpiredPaidSubscriptionGroups;

}

@property (nonatomic,retain) FCAsyncSerialQueue * requestSerialQueue;                                                  //@synthesize requestSerialQueue=_requestSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL forceAppConfigUpdate;                                                                //@synthesize forceAppConfigUpdate=_forceAppConfigUpdate - In the implementation block
@property (assign,nonatomic) BOOL forceTrendingSearchesUpdate;                                                         //@synthesize forceTrendingSearchesUpdate=_forceTrendingSearchesUpdate - In the implementation block
@property (nonatomic,retain) NSArray * hiddenFeedIDs;                                                                  //@synthesize hiddenFeedIDs=_hiddenFeedIDs - In the implementation block
@property (nonatomic,retain) NSArray * presubscribedFeedIDs;                                                           //@synthesize presubscribedFeedIDs=_presubscribedFeedIDs - In the implementation block
@property (nonatomic,retain) NSArray * onboardingFeedIDs;                                                              //@synthesize onboardingFeedIDs=_onboardingFeedIDs - In the implementation block
@property (nonatomic,retain) FCRecommendedCategory * topLevelCategory;                                                 //@synthesize topLevelCategory=_topLevelCategory - In the implementation block
@property (assign,nonatomic) long long shortReminderTime;                                                              //@synthesize shortReminderTime=_shortReminderTime - In the implementation block
@property (assign,nonatomic) long long longReminderTime;                                                               //@synthesize longReminderTime=_longReminderTime - In the implementation block
@property (assign,nonatomic) long long minimumArticleUpdateInterval;                                                   //@synthesize minimumArticleUpdateInterval=_minimumArticleUpdateInterval - In the implementation block
@property (assign,nonatomic) long long initialArticlesFromNewFavorite;                                                 //@synthesize initialArticlesFromNewFavorite=_initialArticlesFromNewFavorite - In the implementation block
@property (assign,nonatomic) long long autoScrollToTopFeedTimeout;                                                     //@synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout - In the implementation block
@property (assign,nonatomic) long long appConfigRefreshRate;                                                           //@synthesize appConfigRefreshRate=_appConfigRefreshRate - In the implementation block
@property (assign,nonatomic) long long trendingTopicsRefreshRate;                                                      //@synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate - In the implementation block
@property (assign,nonatomic) long long timeBetweenWidgetInsertions;                                                    //@synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions - In the implementation block
@property (assign,nonatomic) long long timeBetweenSameWidgetReinsertion;                                               //@synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion - In the implementation block
@property (assign,nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit;                              //@synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit - In the implementation block
@property (assign,nonatomic) double batchedFeedTimeout;                                                                //@synthesize batchedFeedTimeout=_batchedFeedTimeout - In the implementation block
@property (assign,nonatomic) double interstitialAdLoadDelay;                                                           //@synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay - In the implementation block
@property (assign,nonatomic) double prerollLoadingTimeout;                                                             //@synthesize prerollLoadingTimeout=_prerollLoadingTimeout - In the implementation block
@property (assign,nonatomic) double tileProminenceScoreBalanceValue;                                                   //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (assign,nonatomic) long long minimumDistanceBetweenImageOnTopTiles;                                          //@synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles - In the implementation block
@property (assign,nonatomic) long long articleRapidUpdatesTimeout;                                                     //@synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout - In the implementation block
@property (assign,nonatomic) long long subscriptionsGlobalMeteredCount;                                                //@synthesize subscriptionsGlobalMeteredCount=_subscriptionsGlobalMeteredCount - In the implementation block
@property (assign,nonatomic) long long subscriptionsPlacardPublisherFrequencyInDays;                                   //@synthesize subscriptionsPlacardPublisherFrequencyInDays=_subscriptionsPlacardPublisherFrequencyInDays - In the implementation block
@property (assign,nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;                                        //@synthesize subscriptionsPlacardGlobalMaximumPerDay=_subscriptionsPlacardGlobalMaximumPerDay - In the implementation block
@property (assign,nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;                            //@synthesize subscriptionsGracePeriodForTokenVerificationSeconds=_subscriptionsGracePeriodForTokenVerificationSeconds - In the implementation block
@property (assign,nonatomic) long long newFavoriteNotificationAlertsFrequency;                                         //@synthesize newFavoriteNotificationAlertsFrequency=_newFavoriteNotificationAlertsFrequency - In the implementation block
@property (assign,nonatomic) double endOfArticleMinPaidHeadlineRatio;                                                  //@synthesize endOfArticleMinPaidHeadlineRatio=_endOfArticleMinPaidHeadlineRatio - In the implementation block
@property (assign,nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;                                    //@synthesize endOfArticleMaxInaccessiblePaidArticleCount=_endOfArticleMaxInaccessiblePaidArticleCount - In the implementation block
@property (assign,nonatomic) long long notificationArticleCacheTimeout;                                                //@synthesize notificationArticleCacheTimeout=_notificationArticleCacheTimeout - In the implementation block
@property (assign,nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;                                //@synthesize notificationArticleWithRapidUpdatesCacheTimeout=_notificationArticleWithRapidUpdatesCacheTimeout - In the implementation block
@property (assign,nonatomic) long long notificationEnabledChannelsRefreshFrequency;                                    //@synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency - In the implementation block
@property (assign,nonatomic) long long savedArticlesMaximumCountWiFi;                                                  //@synthesize savedArticlesMaximumCountWiFi=_savedArticlesMaximumCountWiFi - In the implementation block
@property (assign,nonatomic) long long savedArticlesMaximumCountCellular;                                              //@synthesize savedArticlesMaximumCountCellular=_savedArticlesMaximumCountCellular - In the implementation block
@property (assign,nonatomic) long long savedArticlesCutoffTime;                                                        //@synthesize savedArticlesCutoffTime=_savedArticlesCutoffTime - In the implementation block
@property (assign,nonatomic) long long savedArticlesOpenedCutoffTime;                                                  //@synthesize savedArticlesOpenedCutoffTime=_savedArticlesOpenedCutoffTime - In the implementation block
@property (assign,getter=isAlternativeWidgetConfigEnabled,nonatomic) BOOL alternativeWidgetConfigEnabled;              //@synthesize alternativeWidgetConfigEnabled=_alternativeWidgetConfigEnabled - In the implementation block
@property (nonatomic,retain) NSDictionary * endpointConfigsByEnvironment;                                              //@synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment - In the implementation block
@property (nonatomic,retain) NTPBPersonalizationConfig * personalizationConfig;                                        //@synthesize personalizationConfig=_personalizationConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * personalizationTreatments;                                                 //@synthesize personalizationTreatments=_personalizationTreatments - In the implementation block
@property (nonatomic,retain) FCIAdConfiguration * iAdConfig;                                                           //@synthesize iAdConfig=_iAdConfig - In the implementation block
@property (nonatomic,retain) FCPrefetchConfiguration * prefetchConfig;                                                 //@synthesize prefetchConfig=_prefetchConfig - In the implementation block
@property (nonatomic,retain) FCTopStoriesConfiguration * topStoriesConfig;                                             //@synthesize topStoriesConfig=_topStoriesConfig - In the implementation block
@property (nonatomic,retain) NSString * editorialChannelID;                                                            //@synthesize editorialChannelID=_editorialChannelID - In the implementation block
@property (nonatomic,retain) NSString * briefingsTagID;                                                                //@synthesize briefingsTagID=_briefingsTagID - In the implementation block
@property (nonatomic,retain) FCNotificationsConfiguration * notificationsConfig;                                       //@synthesize notificationsConfig=_notificationsConfig - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * observationBlocks;                                                       //@synthesize observationBlocks=_observationBlocks - In the implementation block
@property (nonatomic,retain) FCResource * configurationResource;                                                       //@synthesize configurationResource=_configurationResource - In the implementation block
@property (nonatomic,retain) FCResource * trendingSearchesResource;                                                    //@synthesize trendingSearchesResource=_trendingSearchesResource - In the implementation block
@property (nonatomic,retain) NSString * embedConfigurationAssetID;                                                     //@synthesize embedConfigurationAssetID=_embedConfigurationAssetID - In the implementation block
@property (nonatomic,retain) NSString * defaultStoreFrontID;                                                           //@synthesize defaultStoreFrontID=_defaultStoreFrontID - In the implementation block
@property (nonatomic,retain) NSSet * preferredLanguages;                                                               //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (assign,nonatomic) BOOL universalLinksEnabled;                                                               //@synthesize universalLinksEnabled=_universalLinksEnabled - In the implementation block
@property (nonatomic,retain) FCForYouGroupsConfiguration * forYouGroupsConfiguration;                                  //@synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration - In the implementation block
@property (assign,nonatomic) double articleDiversificationSimilarityExpectationStart;                                  //@synthesize articleDiversificationSimilarityExpectationStart=_articleDiversificationSimilarityExpectationStart - In the implementation block
@property (assign,nonatomic) double articleDiversificationSimilarityExpectationEnd;                                    //@synthesize articleDiversificationSimilarityExpectationEnd=_articleDiversificationSimilarityExpectationEnd - In the implementation block
@property (assign,nonatomic) double articleDiversificationUniquePublisherExpectationSlope;                             //@synthesize articleDiversificationUniquePublisherExpectationSlope=_articleDiversificationUniquePublisherExpectationSlope - In the implementation block
@property (assign,nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;                        //@synthesize articleDiversificationUniquePublisherExpectationYIntercept=_articleDiversificationUniquePublisherExpectationYIntercept - In the implementation block
@property (assign,nonatomic) long long maximumPaidSubscriptionGroupSize;                                               //@synthesize maximumPaidSubscriptionGroupSize=_maximumPaidSubscriptionGroupSize - In the implementation block
@property (assign,nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup;                                    //@synthesize maximumTimesHeadlineInPaidSubscriptionGroup=_maximumTimesHeadlineInPaidSubscriptionGroup - In the implementation block
@property (assign,nonatomic) long long expiredPaidSubscriptionGroupCutoffTime;                                         //@synthesize expiredPaidSubscriptionGroupCutoffTime=_expiredPaidSubscriptionGroupCutoffTime - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups;                                   //@synthesize maximumNumberOfExpiredPaidSubscriptionGroups=_maximumNumberOfExpiredPaidSubscriptionGroups - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelCuratedTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedTopicTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedChannelTagIDs; 
@property (nonatomic,readonly) NSArray * recommendedCategories; 
@property (nonatomic,readonly) NSArray * trendingTopics;                                                               //@synthesize trendingTopics=_trendingTopics - In the implementation block
@property (nonatomic,readonly) FCCoverArticlesConfiguration * coverArticlesConfig;                                     //@synthesize coverArticlesConfig=_coverArticlesConfig - In the implementation block
@property (nonatomic,readonly) NSString * forYouRecordConfigID;                                                        //@synthesize forYouRecordConfigID=_forYouRecordConfigID - In the implementation block
@property (nonatomic,copy,readonly) NTPBWidgetConfig * widgetConfiguration;                                            //@synthesize widgetConfiguration=_widgetConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NTPBWidgetConfig * alternativeWidgetConfiguration;                                 //@synthesize alternativeWidgetConfiguration=_alternativeWidgetConfiguration - In the implementation block
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
-(NSSet *)preferredLanguages;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_didChange;
-(NSArray *)presubscribedFeedIDs;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSString *)editorialChannelID;
-(FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
-(void)setForYouGroupsConfiguration:(FCForYouGroupsConfiguration *)arg1 ;
-(id)personalizationTreatmentForFeldsparID:(id)arg1 ;
-(NSString *)briefingsTagID;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(void)setNotificationEnabledChannelsRefreshFrequency:(long long)arg1 ;
-(NTPBWidgetConfig *)widgetConfiguration;
-(long long)personalizationTreatmentIDForFeldsparID:(id)arg1 ;
-(long long)subscriptionsGlobalMeteredCount;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(long long)savedArticlesCutoffTime;
-(long long)savedArticlesOpenedCutoffTime;
-(long long)savedArticlesMaximumCountCellular;
-(long long)savedArticlesMaximumCountWiFi;
-(NSString *)forYouRecordConfigID;
-(NSArray *)hiddenFeedIDs;
-(long long)articleRapidUpdatesTimeout;
-(double)endOfArticleMinPaidHeadlineRatio;
-(long long)endOfArticleMaxInaccessiblePaidArticleCount;
-(FCAsyncSerialQueue *)requestSerialQueue;
-(void)setRequestSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(NSDictionary *)endpointConfigsByEnvironment;
-(NTPBPersonalizationConfig *)personalizationConfig;
-(NSDictionary *)personalizationTreatments;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)forceAppConfigUpdate;
-(FCResource *)configurationResource;
-(long long)appConfigRefreshRate;
-(void)setForceAppConfigUpdate:(BOOL)arg1 ;
-(void)_fetchAppConfigurationForStoreFrontID:(id)arg1 cachePolicy:(unsigned long long)arg2 refreshRate:(double)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)forceTrendingSearchesUpdate;
-(void)setForceTrendingSearchesUpdate:(BOOL)arg1 ;
-(void)_fetchTrendingSearchesForStoreFrontID:(id)arg1 cachePolicy:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableArray *)observationBlocks;
-(NSString *)defaultStoreFrontID;
-(void)_processConfigurationData:(id)arg1 ;
-(void)setConfigurationResource:(FCResource *)arg1 ;
-(long long)trendingTopicsRefreshRate;
-(void)_processTrendingSearchesData:(id)arg1 ;
-(void)setTrendingSearchesResource:(FCResource *)arg1 ;
-(id)_languageConfigurationsInProtobufConfiguration:(id)arg1 ;
-(void)_extractCommonValuesFromProtobufConfiguration:(id)arg1 ;
-(void)_extractEndpointConfigurationFromProtobufConfiguration:(id)arg1 ;
-(void)_extractiAdConfigFromProtobufConfiguration:(id)arg1 ;
-(void)_extractPersonalizationConfigFromProtobufConfiguration:(id)arg1 ;
-(void)_extractPrefetchConfigFromProtobufConfiguration:(id)arg1 ;
-(void)_extractWidgetConfigFromProtobufConfiguration:(id)arg1 ;
-(void)_extractAlternativeWidgetConfigFromProtobufConfiguration:(id)arg1 ;
-(void)_extractFeedIDsFromLanguageConfigurations:(id)arg1 ;
-(void)_extractTopLevelCategoryFromLanguageConfiguration:(id)arg1 ;
-(void)_extractTopStoriesFromLanguageConfiguration:(id)arg1 ;
-(void)_extractEditorialChannelFromLanguageConfiguration:(id)arg1 ;
-(void)_extractNotificationsConfigFromLanguageConfiguration:(id)arg1 ;
-(void)_extractCoverArticlesFromLanguageConfiguration:(id)arg1 ;
-(void)_extractBriefingsTagIDFromLanguageConfiguration:(id)arg1 ;
-(void)_extractForYouRecordConfigIDFromLanguageConfiguration:(id)arg1 ;
-(id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1 ;
-(void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1 ;
-(long long)shortReminderTime;
-(void)setShortReminderTime:(long long)arg1 ;
-(long long)longReminderTime;
-(void)setLongReminderTime:(long long)arg1 ;
-(long long)minimumArticleUpdateInterval;
-(void)setMinimumArticleUpdateInterval:(long long)arg1 ;
-(long long)initialArticlesFromNewFavorite;
-(void)setInitialArticlesFromNewFavorite:(long long)arg1 ;
-(long long)autoScrollToTopFeedTimeout;
-(void)setAutoScrollToTopFeedTimeout:(long long)arg1 ;
-(void)setTrendingTopicsRefreshRate:(long long)arg1 ;
-(double)interstitialAdLoadDelay;
-(void)setInterstitialAdLoadDelay:(double)arg1 ;
-(double)batchedFeedTimeout;
-(void)setBatchedFeedTimeout:(double)arg1 ;
-(double)prerollLoadingTimeout;
-(void)setPrerollLoadingTimeout:(double)arg1 ;
-(void)setEmbedConfigurationAssetID:(NSString *)arg1 ;
-(BOOL)universalLinksEnabled;
-(void)setUniversalLinksEnabled:(BOOL)arg1 ;
-(double)tileProminenceScoreBalanceValue;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(void)setMinimumDistanceBetweenImageOnTopTiles:(long long)arg1 ;
-(long long)timeBetweenSameWidgetReinsertion;
-(void)setTimeBetweenSameWidgetReinsertion:(long long)arg1 ;
-(long long)timeBetweenWidgetInsertions;
-(void)setTimeBetweenWidgetInsertions:(long long)arg1 ;
-(long long)numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
-(void)setNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(long long)arg1 ;
-(void)setAppConfigRefreshRate:(long long)arg1 ;
-(void)setArticleRapidUpdatesTimeout:(long long)arg1 ;
-(void)setSubscriptionsGlobalMeteredCount:(long long)arg1 ;
-(void)setSubscriptionsPlacardPublisherFrequencyInDays:(long long)arg1 ;
-(void)setSubscriptionsPlacardGlobalMaximumPerDay:(long long)arg1 ;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(void)setSubscriptionsGracePeriodForTokenVerificationSeconds:(long long)arg1 ;
-(long long)newFavoriteNotificationAlertsFrequency;
-(void)setNewFavoriteNotificationAlertsFrequency:(long long)arg1 ;
-(void)setEndOfArticleMinPaidHeadlineRatio:(double)arg1 ;
-(void)setEndOfArticleMaxInaccessiblePaidArticleCount:(long long)arg1 ;
-(long long)notificationArticleCacheTimeout;
-(void)setNotificationArticleCacheTimeout:(long long)arg1 ;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(void)setNotificationArticleWithRapidUpdatesCacheTimeout:(long long)arg1 ;
-(void)setSavedArticlesMaximumCountWiFi:(long long)arg1 ;
-(void)setSavedArticlesMaximumCountCellular:(long long)arg1 ;
-(void)setSavedArticlesCutoffTime:(long long)arg1 ;
-(void)setSavedArticlesOpenedCutoffTime:(long long)arg1 ;
-(void)setAlternativeWidgetConfigEnabled:(BOOL)arg1 ;
-(void)setArticleDiversificationSimilarityExpectationStart:(double)arg1 ;
-(void)setArticleDiversificationSimilarityExpectationEnd:(double)arg1 ;
-(void)setArticleDiversificationUniquePublisherExpectationSlope:(double)arg1 ;
-(void)setArticleDiversificationUniquePublisherExpectationYIntercept:(double)arg1 ;
-(void)setMaximumTimesHeadlineInPaidSubscriptionGroup:(long long)arg1 ;
-(void)setMaximumPaidSubscriptionGroupSize:(long long)arg1 ;
-(void)setMaximumNumberOfExpiredPaidSubscriptionGroups:(long long)arg1 ;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(void)setExpiredPaidSubscriptionGroupCutoffTime:(long long)arg1 ;
-(id)_categoryFromProtobufCategory:(id)arg1 ;
-(FCPrefetchConfiguration *)prefetchConfig;
-(NSArray *)trendingTopics;
-(void)_didChangeTrendingTopics;
-(FCCoverArticlesConfiguration *)coverArticlesConfig;
-(NSArray *)topLevelCuratedTagIDs;
-(NSArray *)topLevelRecommendedTopicTagIDs;
-(NSArray *)topLevelRecommendedChannelTagIDs;
-(NSArray *)onboardingFeedIDs;
-(NSArray *)recommendedCategories;
-(long long)subscriptionsPlacardPublisherFrequencyInDays;
-(long long)subscriptionsPlacardGlobalMaximumPerDay;
-(id)ANFEmbedConfigurationAssetID;
-(double)articleDiversificationSimilarityExpectationStart;
-(double)articleDiversificationSimilarityExpectationEnd;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(long long)maximumPaidSubscriptionGroupSize;
-(long long)maximumTimesHeadlineInPaidSubscriptionGroup;
-(long long)maximumNumberOfExpiredPaidSubscriptionGroups;
-(FCIAdConfiguration *)iAdConfig;
-(FCNotificationsConfiguration *)notificationsConfig;
-(BOOL)isAlternativeWidgetConfigEnabled;
-(void)fetchTrendingSearchesIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)addChangeObservationBlock:(/*^block*/id)arg1 ;
-(void)forceUpdateOnNextLaunch;
-(NSString *)embedConfigurationAssetID;
-(NTPBWidgetConfig *)alternativeWidgetConfiguration;
-(void)setHiddenFeedIDs:(NSArray *)arg1 ;
-(void)setPresubscribedFeedIDs:(NSArray *)arg1 ;
-(void)setOnboardingFeedIDs:(NSArray *)arg1 ;
-(FCRecommendedCategory *)topLevelCategory;
-(void)setTopLevelCategory:(FCRecommendedCategory *)arg1 ;
-(void)setEndpointConfigsByEnvironment:(NSDictionary *)arg1 ;
-(void)setPersonalizationConfig:(NTPBPersonalizationConfig *)arg1 ;
-(void)setPersonalizationTreatments:(NSDictionary *)arg1 ;
-(void)setIAdConfig:(FCIAdConfiguration *)arg1 ;
-(void)setPrefetchConfig:(FCPrefetchConfiguration *)arg1 ;
-(void)setTopStoriesConfig:(FCTopStoriesConfiguration *)arg1 ;
-(void)setEditorialChannelID:(NSString *)arg1 ;
-(void)setBriefingsTagID:(NSString *)arg1 ;
-(void)setNotificationsConfig:(FCNotificationsConfiguration *)arg1 ;
-(void)setObservationBlocks:(NSMutableArray *)arg1 ;
-(FCResource *)trendingSearchesResource;
-(void)setDefaultStoreFrontID:(NSString *)arg1 ;
-(void)setPreferredLanguages:(NSSet *)arg1 ;
@end

