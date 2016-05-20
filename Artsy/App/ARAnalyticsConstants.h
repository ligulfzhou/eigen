#import <Foundation/Foundation.h>

// If you are adding analytics, you may need to
// update the schema for our analytics team:
// https://docs.google.com/spreadsheets/u/1/d/1bLbeOgVFaWzLSjxLOBDNOKs757-zBGoLSM1lIz3OPiI/edit#gid=497747862
//

// Global

extern NSString *const ARAnalyticsBackTapped;

// User properties

extern NSString *const ARAnalyticsAppUsageCountProperty;
extern NSString *const ARAnalyticsPriceRangeProperty;
extern NSString *const ARAnalyticsCollectorLevelProperty;

// Notifications

extern NSString *const ARAnalyticsEnabledNotificationsProperty;
extern NSString *const ARAnalyticsNotificationReceived;
extern NSString *const ARAnalyticsNotificationTapped;

// Keep track of some raw numbers re:total installs

extern NSString *const ARAnalyticsFreshInstall;

// Onboarding

extern NSString *const ARAnalyticsSlideshowStarted;

extern NSString *const ARAnalyticsOnboardingGetStarted;
extern NSString *const ARAnalyticsOnboardingTappedSearch;
extern NSString *const ARAnalyticsOnboardingBudgetSelected;
extern NSString *const ARAnalyticsOnboardingLogin;
extern NSString *const ARAnalyticsOnboardingLoginStarted;
extern NSString *const ARAnalyticsOnboardingLoginSuccess;
extern NSString *const ARAnalyticsOnboardingLoginFailed;
extern NSString *const ARAnalyticsOnboardingSignupStarted;
extern NSString *const ARAnalyticsOnboardingSignupSuccess;
extern NSString *const ARAnalyticsOnboardingSignupFailed;

// Push notifications

extern NSString *const ARAnalyticsPushNotificationLocal;
extern NSString *const ARAnalyticsPushNotificationApple;

// These are used whenever there is a button to tap
// for sign in, or create account

extern NSString *const ARAnalyticsTappedSignUp;
extern NSString *const ARAnalyticsTappedLogIn;


// Note: Sign in / Sign up analyics live entirely in ARUserManager

extern NSString *const ARAnalyticsSignInEmail;
extern NSString *const ARAnalyticsSignInTwitter;
extern NSString *const ARAnalyticsSignInFacebook;
extern NSString *const ARAnalyticsSignInWebCredentials;
extern NSString *const ARAnalyticsSignInError;

// Sign up

extern NSString *const ARAnalyticsSignUpEmail;
extern NSString *const ARAnalyticsSignUpTwitter;
extern NSString *const ARAnalyticsSignUpFacebook;
extern NSString *const ARAnalyticsAccountCreated;
extern NSString *const ARAnalyticsSignUpError;
extern NSString *const ARAnalyticsTryWithoutAccount;

// Inquiring

extern NSString *const ARAnalyticsStartedGalleryInquiry;
extern NSString *const ARAnalyticsStartedSpecialistInquiry;
extern NSString *const ARAnalyticsSubmittedInquiry;
extern NSString *const ARAnalyticsInquiryError;

// Trial

extern NSString *const ARAnalyticsShowTrialSplash;
extern NSString *const ARAnalyticsTappedHeroUnit;
extern NSString *const ARAnalyticsTappedMainNavigationItem;

// Sharing

extern NSString *const ARAnalyticsShare;
extern NSString *const ARAnalyticsHearted;
extern NSString *const ARAnalyticsUnhearted;

// Artwork

extern NSString *const ARAnalyticsArtworkView;
extern NSString *const ARAnalyticsArtworkViewInRoom;
extern NSString *const ARAnalyticsArtworkSave;
extern NSString *const ARAnalyticsArtworkUnsave;
extern NSString *const ARAnalyticsArtworkZoom;
extern NSString *const ARAnalyticsTapPartnerName;
extern NSString *const ARAnalyticsPartnerShowView;

// Artist

extern NSString *const ARAnalyticsArtistView;
extern NSString *const ARAnalyticsArtistFollow;
extern NSString *const ARAnalyticsArtistUnfollow;
extern NSString *const ARAnalyticsArtistTappedForSale;

// Gene

extern NSString *const ARAnalyticsGeneView;
extern NSString *const ARAnalyticsGeneFollow;

// Profile

extern NSString *const ARAnalyticsPartnerFollow;
extern NSString *const ARAnalyticsProfileView;

// Fair

extern NSString *const ARAnalyticsFairGuideView;
extern NSString *const ARAnalyticsFairGuideArtistSelected;
extern NSString *const ARAnalyticsFairGuideArtworkSelected;
extern NSString *const ARAnalyticsFairGuidePartnerShowSelected;
extern NSString *const ARAnalyticsFairGuideAllExhibitorsSelected;
extern NSString *const ARAnalyticsFairFeaturedLinkSelected;
extern NSString *const ARAnalyticsFairPostSelected;
extern NSString *const ARAnalyticsFairLeaveFromArtist;
extern NSString *const ARAnalyticsFairOverviewSelection;

// Search

extern NSString *const ARAnalyticsSearchClosed;
extern NSString *const ARAnalyticsSearchCleared;
extern NSString *const ARAnalyticsSearchStartedQuery;
extern NSString *const ARAnalyticsSearchItemSelected;

extern NSString *const ARAnalyticsFairSearch;
extern NSString *const ARAnalyticsFairSearchItemSelected;

// App Session

extern NSString *const ARAnalyticsTimePerSession;

// Loading gravity pages in-app
extern NSString *const ARAnalyticsOpenedArtsyGravityURL;

// Feed
extern NSString *const ARAnalyticsInitialFeedLoadTime;

// Error

extern NSString *const ARAnalyticsErrorFailedToGetFacebookCredentials;

// Explore

extern NSString *const ARAnalyticsExploreTap;

// Maps

extern NSString *const ARAnalyticsFairMapButtonTapped;
extern NSString *const ARAnalyticsFairMapAnnotationTapped;
extern NSString *const ARAnalyticsFairMapPartnerShowTapped;

// Auctions

extern NSString *const ARAnalyticsAuctionBidTapped;
extern NSString *const ARAnalyticsAuctionHowBiddingWorks;

// Adjust's unique events

extern NSString *const ARAdjustCreatedAnAccount;
extern NSString *const ARAdjustSentArtworkInquiry;
extern NSString *const ARAdjustFirstUserInstall;
extern NSString *const ARAdjustTappedBidButton;

// Linking between analytics / app code

extern NSInteger const ARNavButtonNotificationsTag;

/// Auctions

extern NSString *const ARAnalyticsAuctionBidButtonTapped;
extern NSString *const ARAnalyticsArtworksRefineTapped;
extern NSString *const ARAnalyticsAuctionContactTapped;
extern NSString *const ARAnalyticsTappedApplyRefine;
