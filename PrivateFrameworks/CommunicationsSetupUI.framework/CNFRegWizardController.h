/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    _UIBackdropView * _backdropView;
    <CNFRegWizardControllerDelegate> * _firstRunDelegate;
    CNFRegController * _regController;
    id  _resignListener;
    id  _resumeListener;
    long long  _serviceType;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int skipReloadOnNextViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
        unsigned int allowSMS : 1; 
        unsigned int shouldTerminateInBackground : 1; 
    }  _wizardFlags;
}

@property (nonatomic) bool allowCancel;
@property (nonatomic) bool allowSMS;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic) bool canShowDisabledScreen;
@property (nonatomic) bool canShowSplashScreen;
@property (nonatomic) bool canStartNested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNFRegWizardControllerDelegate> *firstRunDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideLearnMoreButton;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic) bool shouldListenForSuspension;
@property (nonatomic) bool shouldTerminateInBackground;
@property (nonatomic) bool showSplashOnSignin;
@property (readonly) Class superclass;

+ (void)setGlobalAppearanceStyle:(long long)arg1;
+ (void)setSupportsAutoRotation:(bool)arg1;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_checkRestrictions;
- (void)_doCancel;
- (int)_firstRunState:(id)arg1;
- (void)_restrictionsChanged;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (bool)allowCancel;
- (bool)allowSMS;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)backdropView;
- (bool)canShowDisabledScreen;
- (bool)canShowSplashScreen;
- (bool)canStartNested;
- (id)controllerClassesToShow:(bool)arg1;
- (id)controllersToShow;
- (id)controllersToShow:(bool)arg1;
- (void)dealloc;
- (void)dismissFinished:(bool)arg1;
- (void)dismissWithState:(unsigned long long)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (id)firstRunDelegate;
- (bool)hideLearnMoreButton;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(long long)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (id)regController;
- (void)setAllowCancel:(bool)arg1;
- (void)setAllowSMS:(bool)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCanShowDisabledScreen:(bool)arg1;
- (void)setCanShowSplashScreen:(bool)arg1;
- (void)setCanStartNested:(bool)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setHideLearnMoreButton:(bool)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldListenForSuspension:(bool)arg1;
- (void)setShouldTerminateInBackground:(bool)arg1;
- (void)setShowSplashOnSignin:(bool)arg1;
- (void)setSkipReloadOnNextViewWillAppear:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setupController;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldListenForSuspension;
- (bool)shouldShowFirstRunController;
- (bool)shouldTerminateInBackground;
- (bool)showSplashOnSignin;
- (bool)skipReloadOnNextViewWillAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end