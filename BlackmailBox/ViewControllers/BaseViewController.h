//
//  BaseViewController.h
//  BlackmailBox
//
//  Created by Keith Norman on 3/2/13.
//  Copyright (c) 2013 BlackmailBox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface BaseViewController : UIViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

-(void)doFBLogin:(void (^)())completionHandler;

@end
