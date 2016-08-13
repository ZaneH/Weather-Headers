//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "CLLocationManagerDelegate.h"
#import "SynchronizedDefaultsDelegate.h"
#import "UIApplicationDelegate.h"
#import "WAContainerViewControllerDelegate.h"
#import "WeatherApplicationProgressDelegate.h"

@class NSString, UIWindow, WAContainerViewController;

@interface Application : UIApplication <WAContainerViewControllerDelegate, UIApplicationDelegate, CLLocationManagerDelegate, SynchronizedDefaultsDelegate, WeatherApplicationProgressDelegate>
{
    NSString *_testName;
    int _testIterationCount;
    UIWindow *_window;
    WAContainerViewController *_containerViewController;
}

@property(retain, nonatomic) WAContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)pptTest_liveIcons;
- (void)pptTest_openLiveMultiCityView;
- (void)pptTest_openMultiCityView;
- (void)pptTest_flipWidget;
- (_Bool)isTallDevice;
- (void)pptTest_toggleCity;
- (_Bool)showProgressIndicator;
- (void)containerViewController:(id)arg1 rebuildViewControllerHierarchyForTraitCollection:(id)arg2;
- (_Bool)_handleShortcutItem:(id)arg1;
- (void)_updateShortcutItems;
- (void)setupViewControllers;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)significantTimeChange;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)userTextSizeDidChange;
- (void)reduceMotionSettingChanged;
- (void)resetLocale;
- (void)defaultSelectedCityDidGetUpdated:(id)arg1;
- (void)weatherPrefsDidGetUpdated:(id)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (_Bool)_handleOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillSuspendForEventsOnly;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setLocationTrackingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
