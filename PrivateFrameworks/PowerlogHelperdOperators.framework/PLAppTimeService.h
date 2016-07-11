/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAppTimeService : PLService {
    PLEntryNotificationOperatorComposition * _InCallServiceCallback;
    NSMutableSet * _PiPModeApps;
    NSString * _aggregatedEntryKeyForAppRunTime;
    PLEntryNotificationOperatorComposition * _applicationCallback;
    NSMutableSet * _appsOnScreen;
    PLEntryNotificationOperatorComposition * _audioCallback;
    bool  _audioPlayingNow;
    NSDictionary * _backgroundAppToBundleID;
    PLEntryNotificationOperatorComposition * _backgroundTransferCallback;
    PLEntryNotificationOperatorComposition * _batteryCallback;
    PLEntryNotificationOperatorComposition * _canSleepEntryNotifications;
    PLEntryNotificationOperatorComposition * _coalitionCallback;
    NSMutableSet * _coalitionsAppsOnScreen;
    bool  _deviceIsPluggedIn;
    PLEntryNotificationOperatorComposition * _displayCallback;
    bool  _displayOn;
    NSString * _entryKeyPLCoalitionAgentEventIntervalCoalition;
    NSString * _entryKeyPLScreenStateAgentScreenState;
    NSSet * _excludedBGAppsSet;
    NSSet * _excludedFGAppsSet;
    bool  _inCallNow;
    NSMutableDictionary * _inFlightBundleIDStartTime;
    bool  _isAPOn;
    NSDate * _lastAudioTime;
    NSString * _lastCallBundleID;
    NSDate * _lastCallTime;
    NSArray * _lastLayoutEntries;
    NSDate * _lastNowPlayingTime;
    NSDate * _lastScreenEventAccountingTime;
    NSDate * _lastScreenOnTime;
    NSDate * _lastStatusBarTime;
    bool  _musicPlayerForeground;
    NSString * _nowPlayingBundleID;
    PLEntryNotificationOperatorComposition * _nowPlayingCallback;
    bool  _pluggedInBetweenCoalitionSBC;
    PLEntryNotificationOperatorComposition * _pluginCallback;
    PLTimer * _runTimeAggregatorTimer;
    PLEntryNotificationOperatorComposition * _screenstateCallback;
    NSString * _statusBarBundleID;
    PLEntryNotificationOperatorComposition * _statusBarCallback;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
    NSMutableSet * _watchkitExtensions;
}

@property (retain) PLEntryNotificationOperatorComposition *InCallServiceCallback;
@property (retain) NSMutableSet *PiPModeApps;
@property (retain) NSString *aggregatedEntryKeyForAppRunTime;
@property (retain) PLEntryNotificationOperatorComposition *applicationCallback;
@property (retain) NSMutableSet *appsOnScreen;
@property (retain) PLEntryNotificationOperatorComposition *audioCallback;
@property bool audioPlayingNow;
@property (readonly) NSDictionary *backgroundAppToBundleID;
@property (retain) PLEntryNotificationOperatorComposition *backgroundTransferCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback;
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications;
@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback;
@property (retain) NSMutableSet *coalitionsAppsOnScreen;
@property bool deviceIsPluggedIn;
@property (retain) PLEntryNotificationOperatorComposition *displayCallback;
@property bool displayOn;
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition;
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState;
@property (readonly) NSSet *excludedBGAppsSet;
@property (readonly) NSSet *excludedFGAppsSet;
@property bool inCallNow;
@property (retain) NSMutableDictionary *inFlightBundleIDStartTime;
@property bool isAPOn;
@property (retain) NSDate *lastAudioTime;
@property (retain) NSString *lastCallBundleID;
@property (retain) NSDate *lastCallTime;
@property (retain) NSArray *lastLayoutEntries;
@property (retain) NSDate *lastNowPlayingTime;
@property (retain) NSDate *lastScreenEventAccountingTime;
@property (retain) NSDate *lastScreenOnTime;
@property (retain) NSDate *lastStatusBarTime;
@property bool musicPlayerForeground;
@property (retain) NSString *nowPlayingBundleID;
@property (retain) PLEntryNotificationOperatorComposition *nowPlayingCallback;
@property bool pluggedInBetweenCoalitionSBC;
@property (retain) PLEntryNotificationOperatorComposition *pluginCallback;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback;
@property (retain) NSString *statusBarBundleID;
@property (retain) PLEntryNotificationOperatorComposition *statusBarCallback;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSMutableSet *watchkitExtensions;

+ (id)defaults;
+ (id)entryAggregateDefinitionAppRunTime;
+ (id)entryAggregateDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)InCallServiceCallback;
- (id)PiPModeApps;
- (void)addAudioTimeAtDate:(id)arg1;
- (void)addForegroundTimeAtDate:(id)arg1 withNewLayoutElementsArray:(id)arg2;
- (void)addNowPlayingTimeAtDate:(id)arg1;
- (void)addStatusBarTimeAtDate:(id)arg1;
- (id)aggregatedEntryKeyForAppRunTime;
- (id)applicationCallback;
- (id)appsOnScreen;
- (id)audioCallback;
- (bool)audioPlayingNow;
- (id)backgroundAppToBundleID;
- (id)backgroundAppToBundleIDmapping;
- (id)backgroundTransferCallback;
- (id)batteryCallback;
- (id)buildCallBack:(id)arg1 withGroup:(bool)arg2 withHandler:(id /* block */)arg3;
- (id)canSleepEntryNotifications;
- (id)coalitionCallback;
- (id)coalitionsAppsOnScreen;
- (double)convertCPUTimeToBackgroundTime:(double)arg1 withDuration:(double)arg2;
- (void)debugAppTimeService;
- (bool)deviceIsPluggedIn;
- (id)displayCallback;
- (bool)displayOn;
- (id)entryKeyPLCoalitionAgentEventIntervalCoalition;
- (id)entryKeyPLScreenStateAgentScreenState;
- (id)excludedBGAppsSet;
- (id)excludedFGAppsSet;
- (double)getCPUTime:(id)arg1;
- (void)handleApplicationCallback:(id)arg1;
- (void)handleAudioCallback:(id)arg1;
- (void)handleBackgroundTransferCallback:(id)arg1;
- (void)handleBatteryCallback:(id)arg1;
- (void)handleCoalitionCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)handleInCallServiceCallback:(id)arg1;
- (void)handleNowPlayingCallback:(id)arg1;
- (void)handlePluginCallback:(id)arg1;
- (void)handleScreenStateCallback:(id)arg1;
- (void)handleSleepCallBack:(id)arg1;
- (void)handleStatusBarCallback:(id)arg1;
- (void)handleWakeCallBack:(id)arg1;
- (bool)inCallNow;
- (id)inFlightBundleIDStartTime;
- (id)init;
- (void)initOperatorDependancies;
- (bool)isAPOn;
- (id)lastAudioTime;
- (id)lastCallBundleID;
- (id)lastCallTime;
- (id)lastLayoutEntries;
- (id)lastNowPlayingTime;
- (id)lastScreenEventAccountingTime;
- (id)lastScreenOnTime;
- (id)lastStatusBarTime;
- (void)loadWatchKitExtensionsSet;
- (bool)musicPlayerForeground;
- (id)nowPlayingBundleID;
- (id)nowPlayingCallback;
- (void)periodicUpdateAppRunTimeWithDate:(id)arg1;
- (bool)pluggedInBetweenCoalitionSBC;
- (id)pluginCallback;
- (id)remapCloudDocsBundleID:(id)arg1;
- (void)resetLayoutElementsPLEntryArray:(id)arg1 withNowDate:(id)arg2;
- (id)runTimeAggregatorTimer;
- (id)screenstateCallback;
- (void)setAggregatedEntryKeyForAppRunTime:(id)arg1;
- (void)setApplicationCallback:(id)arg1;
- (void)setAppsOnScreen:(id)arg1;
- (void)setAudioCallback:(id)arg1;
- (void)setAudioPlayingNow:(bool)arg1;
- (void)setBackgroundTransferCallback:(id)arg1;
- (void)setBatteryCallback:(id)arg1;
- (void)setCoalitionCallback:(id)arg1;
- (void)setCoalitionsAppsOnScreen:(id)arg1;
- (void)setDeviceIsPluggedIn:(bool)arg1;
- (void)setDisplayCallback:(id)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setInCallNow:(bool)arg1;
- (void)setInCallServiceCallback:(id)arg1;
- (void)setInFlightBundleIDStartTime:(id)arg1;
- (void)setIsAPOn:(bool)arg1;
- (void)setLastAudioTime:(id)arg1;
- (void)setLastCallBundleID:(id)arg1;
- (void)setLastCallTime:(id)arg1;
- (void)setLastLayoutEntries:(id)arg1;
- (void)setLastNowPlayingTime:(id)arg1;
- (void)setLastScreenEventAccountingTime:(id)arg1;
- (void)setLastScreenOnTime:(id)arg1;
- (void)setLastStatusBarTime:(id)arg1;
- (void)setMusicPlayerForeground:(bool)arg1;
- (void)setNowPlayingBundleID:(id)arg1;
- (void)setNowPlayingCallback:(id)arg1;
- (void)setPiPModeApps:(id)arg1;
- (void)setPluggedInBetweenCoalitionSBC:(bool)arg1;
- (void)setPluginCallback:(id)arg1;
- (void)setRunTimeAggregatorTimer:(id)arg1;
- (void)setScreenstateCallback:(id)arg1;
- (void)setStatusBarBundleID:(id)arg1;
- (void)setStatusBarCallback:(id)arg1;
- (void)setWatchkitExtensions:(id)arg1;
- (id)statusBarBundleID;
- (id)statusBarCallback;
- (void)testService;
- (void)updateAppRunTimeForBundleId:(id)arg1 withAppStateUpdateType:(int)arg2 withNowDate:(id)arg3;
- (void)updateBackgroundTimeForAppStateEntry:(id)arg1;
- (void)updateBackgroundTimeForCoalitionEntries:(id)arg1 withNewCoaltionArray:(id)arg2;
- (void)updateBackgroundTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (void)updateCoalitionsAppsOnScreenSet:(id)arg1;
- (void)updateInCallServiceTimeAtDate:(id)arg1;
- (void)updateInCallServiceTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (void)updatePiPModeAppsSet:(id)arg1 withAppRole:(id)arg2;
- (void)updateScreenOnTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (id)wakeEntryNotifications;
- (id)watchkitExtensions;

@end