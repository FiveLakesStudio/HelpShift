/*
 *    Helpshift.h
 *    SDK version 1.2.2
 *
 *    Get the documentation at http://www.helpshift.com/docs
 *
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol HelpshiftDelegate;
@interface Helpshift : NSObject <UIAlertViewDelegate>
{
    id <HelpshiftDelegate> delegate;
}

@property (nonatomic,retain) id<HelpshiftDelegate> delegate;

+ (void) installForAppID:(NSString *)appID domainName:(NSString *)domainName apiKey:(NSString *)apiKey;
+ (Helpshift *) sharedInstance;
- (void) showSupport:(UIViewController *)viewController;
+ (void) setUserIdentifier:(NSString *)userIdentifier;
+ (void) setUsername:(NSString *)username;
+ (void) setUseremail:(NSString *)email;
+ (void) setReviewRequestURLString:(NSString *)urlString showAfterNumberOfDays:(int)days;
+ (void) setReviewRequestURLString:(NSString *)urlString showAfterNumberOfLaunches:(int)launches;
+ (void) leaveBreadCrumb:(NSString *)breadCrumbString;
- (void) notificationCount;
@end

@protocol HelpshiftDelegate
- (void) notificationCountReceived:(NSString *)count;
@end
