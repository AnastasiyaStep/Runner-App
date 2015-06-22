//
//  BadgeDetailsViewController.h
//  runnerapp
//
//  Created by Anastasiya on 5/26/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BadgeEarnStatus;

@interface BadgeDetailsViewController : UIViewController

@property (strong, nonatomic) BadgeEarnStatus *earnStatus;

@property (weak, nonatomic) UIColor *whiteColor;

@end
